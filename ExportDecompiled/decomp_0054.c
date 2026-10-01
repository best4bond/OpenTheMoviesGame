//// FUNCTION write_multi_char @ 00ae15c6 ////

/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char();
  } while (*in_EAX != -1);
  return;
}


//// FUNCTION write_string @ 00ae15ea ////

/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2003 Release */

void __cdecl write_string(int param_1)

{
  int *in_EAX;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    do {
      if (param_1 < 1) {
        return;
      }
      param_1 = param_1 + -1;
      write_char();
    } while (*in_EAX != -1);
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}


//// FUNCTION FUN_00ae1640 @ 00ae1640 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int __cdecl FUN_00ae1640(undefined4 param_1,byte *param_2,wchar_t *param_3)

{
  byte bVar1;
  short *psVar2;
  byte *pbVar3;
  wchar_t *pwVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  uint uVar8;
  byte bVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined4 local_258;
  undefined4 local_254;
  size_t local_24c;
  int local_248;
  undefined4 local_244;
  int local_240;
  int local_23c;
  wchar_t *local_238;
  int local_234;
  int local_230;
  int local_22c;
  undefined1 local_228;
  char local_227;
  int local_224;
  size_t local_220;
  wchar_t *local_21c;
  int local_218;
  uint local_214;
  wchar_t local_210 [255];
  undefined2 local_11;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  local_220 = 0;
  local_224 = 0;
  local_238 = (wchar_t *)0x0;
  bVar9 = *param_2;
  local_248 = 0;
  pbVar3 = param_2;
  pwVar11 = param_3;
  do {
    if ((bVar9 == 0) || (param_2 = pbVar3 + 1, local_224 < 0)) {
      return local_224;
    }
    if (((char)bVar9 < ' ') || ('x' < (char)bVar9)) {
      uVar5 = 0;
    }
    else {
      uVar5 = (int)(char)(&DAT_00d82e88)[(char)bVar9] & 0xf;
    }
    local_248 = (int)(char)(&DAT_00d82ea8)[uVar5 * 8 + local_248] >> 4;
    param_3 = pwVar11;
    switch(local_248) {
    case 0:
switchD_00ae16c5_caseD_0:
      local_234 = 0;
      if ((PTR_DAT_00e9a2f0[(uint)bVar9 * 2 + 1] & 0x80) != 0) {
        write_char();
        param_2 = pbVar3 + 2;
      }
      write_char();
      break;
    case 1:
      local_218 = -1;
      local_244 = 0;
      local_23c = 0;
      local_230 = 0;
      local_22c = 0;
      local_214 = 0;
      local_234 = 0;
      break;
    case 2:
      if (bVar9 == 0x20) {
        local_214 = local_214 | 2;
      }
      else if (bVar9 == 0x23) {
        local_214 = local_214 | 0x80;
      }
      else if (bVar9 == 0x2b) {
        local_214 = local_214 | 1;
      }
      else if (bVar9 == 0x2d) {
        local_214 = local_214 | 4;
      }
      else if (bVar9 == 0x30) {
        local_214 = local_214 | 8;
      }
      break;
    case 3:
      if (bVar9 == 0x2a) {
        local_230 = *(int *)pwVar11;
        param_3 = pwVar11 + 2;
        if (local_230 < 0) {
          local_214 = local_214 | 4;
          local_230 = -local_230;
        }
      }
      else {
        local_230 = (char)bVar9 + -0x30 + local_230 * 10;
      }
      break;
    case 4:
      local_218 = 0;
      break;
    case 5:
      if (bVar9 == 0x2a) {
        local_218 = *(int *)pwVar11;
        param_3 = pwVar11 + 2;
        if (local_218 < 0) {
          local_218 = -1;
        }
      }
      else {
        local_218 = (char)bVar9 + -0x30 + local_218 * 10;
      }
      break;
    case 6:
      if (bVar9 == 0x49) {
        bVar1 = *param_2;
        if ((bVar1 == 0x36) && (pbVar3[2] == 0x34)) {
          param_2 = pbVar3 + 3;
          local_214 = local_214 | 0x8000;
        }
        else if ((bVar1 == 0x33) && (pbVar3[2] == 0x32)) {
          param_2 = pbVar3 + 3;
          local_214 = local_214 & 0xffff7fff;
        }
        else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                 ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
          local_248 = 0;
          goto switchD_00ae16c5_caseD_0;
        }
      }
      else if (bVar9 == 0x68) {
        local_214 = local_214 | 0x20;
      }
      else if (bVar9 == 0x6c) {
        local_214 = local_214 | 0x10;
      }
      else if (bVar9 == 0x77) {
        local_214 = local_214 | 0x800;
      }
      break;
    case 7:
      if ((char)bVar9 < 'h') {
        if ((char)bVar9 < 'e') {
          if ((char)bVar9 < 'Y') {
            if (bVar9 != 0x58) {
              if (bVar9 == 0x43) {
                if ((local_214 & 0x830) == 0) {
                  local_214 = local_214 | 0x800;
                }
                goto LAB_00ae1965;
              }
              if ((bVar9 != 0x45) && (bVar9 != 0x47)) {
                if (bVar9 == 0x53) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
                  goto LAB_00ae18e8;
                }
                goto LAB_00ae1cdd;
              }
              local_244 = 1;
              bVar9 = bVar9 + 0x20;
              goto LAB_00ae1939;
            }
LAB_00ae1b83:
            local_240 = 7;
LAB_00ae1b86:
            local_220 = 0x10;
            if ((local_214 & 0x80) != 0) {
              local_227 = (char)local_240 + 'Q';
              local_228 = 0x30;
              local_22c = 2;
            }
            goto LAB_00ae19b6;
          }
          if (bVar9 == 0x5a) {
            param_3 = pwVar11 + 2;
            psVar2 = *(short **)pwVar11;
            pwVar11 = (wchar_t *)PTR_DAT_00e9a6c0;
            pwVar4 = (wchar_t *)PTR_DAT_00e9a6c0;
            if ((psVar2 == (short *)0x0) ||
               (local_21c = *(wchar_t **)(psVar2 + 2), pwVar4 = (wchar_t *)PTR_DAT_00e9a6c0,
               local_21c == (wchar_t *)0x0)) goto LAB_00ae1af7;
            local_220 = (size_t)*psVar2;
            if ((local_214 & 0x800) == 0) {
              local_234 = 0;
            }
            else {
              local_220 = (int)local_220 / 2;
              local_234 = 1;
            }
          }
          else if (bVar9 == 99) {
LAB_00ae1965:
            if ((local_214 & 0x810) == 0) {
              local_210[0]._0_1_ = (char)*pwVar11;
              local_220 = 1;
            }
            else {
              local_220 = _wctomb((char *)local_210,*pwVar11);
              if ((int)local_220 < 0) {
                local_23c = 1;
              }
            }
            param_3 = pwVar11 + 2;
            local_21c = local_210;
          }
          else if (bVar9 == 100) goto LAB_00ae19ab;
        }
        else {
LAB_00ae1939:
          local_214 = local_214 | 0x40;
          pwVar10 = local_210;
          pwVar4 = local_210;
          if (local_218 < 0) {
            local_218 = 6;
          }
          else if (local_218 == 0) {
            if (bVar9 == 0x67) {
              local_218 = 1;
            }
          }
          else {
            if (0x200 < local_218) {
              local_218 = 0x200;
            }
            if ((0xa3 < local_218) &&
               (local_21c = local_210, local_238 = _malloc(local_218 + 0x15d), pwVar10 = local_238,
               pwVar4 = local_238, local_238 == (wchar_t *)0x0)) {
              local_218 = 0xa3;
              pwVar10 = local_210;
              pwVar4 = local_21c;
            }
          }
          local_21c = pwVar4;
          local_258 = *(undefined4 *)pwVar11;
          param_3 = pwVar11 + 4;
          local_254 = *(undefined4 *)(pwVar11 + 2);
          (*(code *)PTR_FUN_00e9a604)(&local_258,pwVar10,(int)(char)bVar9,local_218,local_244);
          uVar5 = local_214 & 0x80;
          if ((uVar5 != 0) && (local_218 == 0)) {
            (*(code *)PTR_FUN_00e9a610)(pwVar10);
          }
          if ((bVar9 == 0x67) && (uVar5 == 0)) {
            (*(code *)PTR_FUN_00e9a608)(pwVar10);
          }
          pwVar11 = pwVar10;
          pwVar4 = local_21c;
          if ((char)*pwVar10 == '-') {
            local_214 = local_214 | 0x100;
            pwVar11 = (wchar_t *)((int)pwVar10 + 1);
            pwVar4 = (wchar_t *)((int)pwVar10 + 1);
          }
LAB_00ae1af7:
          local_21c = pwVar4;
          local_220 = _strlen((char *)pwVar11);
        }
LAB_00ae1cdd:
        uVar5 = local_214;
        if (local_23c == 0) {
          if ((local_214 & 0x40) != 0) {
            if ((local_214 & 0x100) == 0) {
              if ((local_214 & 1) == 0) {
                if ((local_214 & 2) == 0) goto LAB_00ae1d15;
                local_228 = 0x20;
              }
              else {
                local_228 = 0x2b;
              }
            }
            else {
              local_228 = 0x2d;
            }
            local_22c = 1;
          }
LAB_00ae1d15:
          iVar7 = (local_230 - local_22c) - local_220;
          if ((local_214 & 0xc) == 0) {
            write_multi_char(0x20,iVar7);
          }
          write_string(local_22c);
          if (((uVar5 & 8) != 0) && ((uVar5 & 4) == 0)) {
            write_multi_char(0x30,iVar7);
          }
          if ((local_234 == 0) || ((int)local_220 < 1)) {
            write_string(local_220);
          }
          else {
            local_24c = local_220;
            pwVar11 = local_21c;
            do {
              local_24c = local_24c - 1;
              iVar6 = _wctomb((char *)((int)&local_11 + 1),*pwVar11);
              pwVar11 = pwVar11 + 1;
              if (iVar6 < 1) break;
              write_string(iVar6);
            } while (local_24c != 0);
          }
          if ((local_214 & 4) != 0) {
            write_multi_char(0x20,iVar7);
          }
        }
      }
      else {
        if (bVar9 == 0x69) {
LAB_00ae19ab:
          local_214 = local_214 | 0x40;
LAB_00ae19af:
          local_220 = 10;
LAB_00ae19b6:
          if ((local_214 & 0x8000) == 0) {
            param_3 = pwVar11 + 2;
            if ((local_214 & 0x20) == 0) {
              uVar5 = *(uint *)pwVar11;
              if ((local_214 & 0x40) == 0) {
                uVar8 = 0;
                goto LAB_00ae1c27;
              }
            }
            else if ((local_214 & 0x40) == 0) {
              uVar5 = (uint)(ushort)*pwVar11;
            }
            else {
              uVar5 = (uint)*pwVar11;
            }
            uVar8 = (int)uVar5 >> 0x1f;
          }
          else {
            uVar5 = *(uint *)pwVar11;
            uVar8 = *(uint *)(pwVar11 + 2);
            param_3 = pwVar11 + 4;
          }
LAB_00ae1c27:
          if ((((local_214 & 0x40) != 0) && ((int)uVar8 < 1)) && ((int)uVar8 < 0)) {
            bVar12 = uVar5 != 0;
            uVar5 = -uVar5;
            uVar8 = -(uVar8 + bVar12);
            local_214 = local_214 | 0x100;
          }
          uVar13 = CONCAT44(uVar8,uVar5);
          if ((local_214 & 0x8000) == 0) {
            uVar8 = 0;
          }
          if (local_218 < 0) {
            local_218 = 1;
          }
          else {
            local_214 = local_214 & 0xfffffff7;
            if (0x200 < local_218) {
              local_218 = 0x200;
            }
          }
          if (uVar5 == 0 && uVar8 == 0) {
            local_22c = 0;
          }
          pwVar11 = &local_11;
          while( true ) {
            uVar5 = (uint)uVar13;
            iVar7 = local_218 + -1;
            if ((local_218 < 1) && (uVar5 == 0 && uVar8 == 0)) break;
            local_218 = iVar7;
            uVar13 = __aulldvrm(uVar5,uVar8,local_220,(int)local_220 >> 0x1f);
            uVar8 = (uint)((ulonglong)uVar13 >> 0x20);
            iVar7 = extraout_ECX + 0x30;
            if (0x39 < iVar7) {
              iVar7 = iVar7 + local_240;
            }
            *(char *)pwVar11 = (char)iVar7;
            pwVar11 = (wchar_t *)((int)pwVar11 + -1);
            local_24c = uVar5;
          }
          local_220 = (int)&local_11 + -(int)pwVar11;
          local_21c = (wchar_t *)((int)pwVar11 + 1);
          local_218 = iVar7;
          if (((local_214 & 0x200) != 0) && ((*(char *)local_21c != '0' || (local_220 == 0)))) {
            *(char *)pwVar11 = '0';
            local_220 = (int)&local_11 + -(int)pwVar11 + 1;
            local_21c = pwVar11;
          }
          goto LAB_00ae1cdd;
        }
        if (bVar9 != 0x6e) {
          if (bVar9 == 0x6f) {
            local_220 = 8;
            if ((local_214 & 0x80) != 0) {
              local_214 = local_214 | 0x200;
            }
            goto LAB_00ae19b6;
          }
          if (bVar9 == 0x70) {
            local_218 = 8;
            goto LAB_00ae1b83;
          }
          if (bVar9 == 0x73) {
LAB_00ae18e8:
            iVar7 = local_218;
            if (local_218 == -1) {
              iVar7 = 0x7fffffff;
            }
            param_3 = pwVar11 + 2;
            local_21c = *(wchar_t **)pwVar11;
            if ((local_214 & 0x810) == 0) {
              pwVar11 = local_21c;
              if (local_21c == (wchar_t *)0x0) {
                pwVar11 = (wchar_t *)PTR_DAT_00e9a6c0;
                local_21c = (wchar_t *)PTR_DAT_00e9a6c0;
              }
              for (; (iVar7 != 0 && (iVar7 = iVar7 + -1, (char)*pwVar11 != '\0'));
                  pwVar11 = (wchar_t *)((int)pwVar11 + 1)) {
              }
              local_220 = (int)pwVar11 - (int)local_21c;
            }
            else {
              if (local_21c == (wchar_t *)0x0) {
                local_21c = (wchar_t *)PTR_DAT_00e9a6c4;
              }
              local_234 = 1;
              for (pwVar11 = local_21c; (iVar7 != 0 && (iVar7 = iVar7 + -1, *pwVar11 != L'\0'));
                  pwVar11 = pwVar11 + 1) {
              }
              local_220 = (int)pwVar11 - (int)local_21c >> 1;
            }
            goto LAB_00ae1cdd;
          }
          if (bVar9 != 0x75) {
            if (bVar9 != 0x78) goto LAB_00ae1cdd;
            local_240 = 0x27;
            goto LAB_00ae1b86;
          }
          goto LAB_00ae19af;
        }
        param_3 = pwVar11 + 2;
        if ((local_214 & 0x20) == 0) {
          **(int **)pwVar11 = local_224;
        }
        else {
          *(undefined2 *)*(int **)pwVar11 = (undefined2)local_224;
        }
        local_23c = 1;
      }
      if (local_238 != (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_238);
      }
    }
    bVar9 = *param_2;
    pbVar3 = param_2;
    pwVar11 = param_3;
  } while( true );
}


//// FUNCTION ___libm_error_support @ 00ae1e3a ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___libm_error_support
   
   Library: Visual Studio 2003 Release */

void __cdecl
___libm_error_support(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  char *local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  if (0xa1 < param_4) {
    if (param_4 < 0x3eb) {
      if (param_4 != 0x3ea) {
        if (param_4 == 0xa2) {
          local_28 = 4;
          goto LAB_00ae1fec;
        }
        if (param_4 == 0xa6) {
          local_28 = 3;
          local_24 = "exp10";
        }
        else {
          if (param_4 != 0xaa) {
            if (param_4 == 0xab) {
              local_24 = "log2";
              goto LAB_00ae2085;
            }
            if (param_4 == 1000) {
              local_24 = "log";
            }
            else {
              if (param_4 != 0x3e9) {
                return;
              }
              local_24 = "log10";
            }
            goto LAB_00ae207b;
          }
          local_28 = 2;
          local_24 = "log2";
        }
        goto LAB_00ae1ff3;
      }
      local_24 = "exp";
    }
    else if (param_4 == 0x3eb) {
      local_24 = "atan";
    }
    else if (param_4 == 0x3ec) {
      local_24 = "ceil";
    }
    else if (param_4 == 0x3ed) {
      local_24 = "floor";
    }
    else {
      if (param_4 == 0x3ee) goto LAB_00ae2053;
      if (param_4 != 0x3ef) {
        return;
      }
      local_24 = "modf";
    }
LAB_00ae207b:
    *param_3 = *param_1;
    goto LAB_00ae2085;
  }
  if (param_4 == 0xa1) {
    local_28 = 3;
LAB_00ae1fec:
    local_24 = "exp2";
    goto LAB_00ae1ff3;
  }
  if (param_4 < 0x19) {
    if (param_4 == 0x18) {
      local_28 = 3;
      goto LAB_00ae1ee4;
    }
    if (param_4 == 2) {
      local_28 = 2;
      local_24 = "log";
    }
    else {
      if (param_4 == 3) {
        local_24 = "log";
LAB_00ae2085:
        local_20 = *param_1;
        local_28 = 1;
        local_18 = *param_2;
        local_10 = *param_3;
        iVar1 = (*(code *)PTR_FUN_00e9a6c8)(&local_28);
        if (iVar1 == 0) {
          piVar2 = FUN_00ad4b6c();
          *piVar2 = 0x21;
        }
        goto LAB_00ae20b8;
      }
      if (param_4 == 8) {
        local_28 = 2;
        local_24 = "log10";
      }
      else {
        if (param_4 == 9) {
          local_24 = "log10";
          goto LAB_00ae2085;
        }
        if (param_4 != 0xe) {
          if (param_4 != 0xf) {
            return;
          }
          local_24 = "exp";
          goto LAB_00ae1f31;
        }
        local_28 = 3;
        local_24 = "exp";
      }
    }
  }
  else {
    if (param_4 == 0x19) {
      local_24 = "pow";
LAB_00ae1f31:
      local_20 = *param_1;
      local_18 = *param_2;
      local_10 = *param_3;
      local_28 = 4;
      (*(code *)PTR_FUN_00e9a6c8)(&local_28);
      goto LAB_00ae20b8;
    }
    if (param_4 == 0x1a) {
      *param_3 = 0x3ff0000000000000;
      return;
    }
    if (param_4 != 0x1b) {
      if (param_4 != 0x1c) {
        if (param_4 != 0x1d) {
          return;
        }
        local_24 = "pow";
        goto LAB_00ae207b;
      }
LAB_00ae2053:
      local_24 = "pow";
      goto LAB_00ae2085;
    }
    local_28 = 2;
LAB_00ae1ee4:
    local_24 = "pow";
  }
LAB_00ae1ff3:
  local_20 = *param_1;
  local_18 = *param_2;
  local_10 = *param_3;
  iVar1 = (*(code *)PTR_FUN_00e9a6c8)(&local_28);
  if (iVar1 == 0) {
    piVar2 = FUN_00ad4b6c();
    *piVar2 = 0x22;
  }
LAB_00ae20b8:
  *param_3 = local_10;
  return;
}


//// FUNCTION ___isctype_mt @ 00ae219b ////

/* Library Function - Single Match
    ___isctype_mt
   
   Library: Visual Studio 2003 Release */

uint __thiscall ___isctype_mt(void *this,int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  BOOL BVar3;
  undefined4 local_8;
  
  if (param_2 + 1U < 0x101) {
    param_2._2_2_ = *(ushort *)(*(int *)(param_1 + 0x48) + param_2 * 2);
  }
  else {
    local_8._2_2_ = (undefined2)((uint)this >> 0x10);
    if ((*(byte *)(*(int *)(param_1 + 0x48) + 1 + (param_2 >> 8 & 0xffU) * 2) & 0x80) == 0) {
      local_8._0_2_ = (ushort)(byte)param_2;
      sVar2 = 1;
    }
    else {
      local_8 = CONCAT31(CONCAT21(local_8._2_2_,(byte)param_2),(char)((uint)param_2 >> 8));
      uVar1 = local_8;
      local_8._3_1_ = (undefined1)((uint)this >> 0x18);
      local_8._0_2_ = (ushort)uVar1;
      local_8._0_3_ = (uint3)(ushort)local_8;
      sVar2 = 2;
    }
    BVar3 = FUN_00aea025(1,(LPCSTR)&local_8,sVar2,(LPWORD)((int)&param_2 + 2),*(UINT *)(param_1 + 4)
                         ,*(LCID *)(param_1 + 0x14),1);
    if (BVar3 == 0) {
      return 0;
    }
  }
  return param_2._2_2_ & param_3;
}


//// FUNCTION __XcptFilter @ 00ae2265 ////

/* Library Function - Single Match
    __XcptFilter
   
   Library: Visual Studio 2003 Release */

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  ulong *puVar1;
  code *pcVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  _ptiddata p_Var6;
  int iVar7;
  int iVar8;
  ulong *puVar9;
  
  p_Var6 = __getptd();
  puVar1 = p_Var6->_initaddr;
  puVar9 = puVar1;
  do {
    if (*puVar9 == _ExceptionNum) break;
    puVar9 = puVar9 + 3;
  } while (puVar9 < puVar1 + DAT_00e9a754 * 3);
  if ((puVar1 + DAT_00e9a754 * 3 <= puVar9) || (*puVar9 != _ExceptionNum)) {
    puVar9 = (ulong *)0x0;
  }
  if ((puVar9 == (ulong *)0x0) || (pcVar2 = (code *)puVar9[2], pcVar2 == (code *)0x0)) {
    iVar7 = UnhandledExceptionFilter(_ExceptionPtr);
  }
  else if (pcVar2 == (code *)0x5) {
    puVar9[2] = 0;
    iVar7 = 1;
  }
  else {
    if (pcVar2 != (code *)0x1) {
      pvVar3 = p_Var6->_initarg;
      p_Var6->_initarg = _ExceptionPtr;
      if (puVar9[1] == 8) {
        if (DAT_00e9a748 < DAT_00e9a74c + DAT_00e9a748) {
          iVar8 = DAT_00e9a748 * 0xc;
          iVar7 = DAT_00e9a748;
          do {
            *(undefined4 *)(iVar8 + 8 + (int)p_Var6->_initaddr) = 0;
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + 0xc;
          } while (iVar7 < DAT_00e9a74c + DAT_00e9a748);
        }
        uVar4 = *puVar9;
        pvVar5 = p_Var6->_pxcptacttab;
        if (uVar4 == 0xc000008e) {
          p_Var6->_pxcptacttab = (void *)0x83;
        }
        else if (uVar4 == 0xc0000090) {
          p_Var6->_pxcptacttab = (void *)0x81;
        }
        else if (uVar4 == 0xc0000091) {
          p_Var6->_pxcptacttab = (void *)0x84;
        }
        else if (uVar4 == 0xc0000093) {
          p_Var6->_pxcptacttab = (void *)0x85;
        }
        else if (uVar4 == 0xc000008d) {
          p_Var6->_pxcptacttab = (void *)0x82;
        }
        else if (uVar4 == 0xc000008f) {
          p_Var6->_pxcptacttab = (void *)0x86;
        }
        else if (uVar4 == 0xc0000092) {
          p_Var6->_pxcptacttab = (void *)0x8a;
        }
        (*pcVar2)(8,p_Var6->_pxcptacttab);
        p_Var6->_pxcptacttab = pvVar5;
      }
      else {
        puVar9[2] = 0;
        (*pcVar2)(puVar9[1]);
      }
      p_Var6->_initarg = pvVar3;
    }
    iVar7 = -1;
  }
  return iVar7;
}


//// FUNCTION __Getdays @ 00ae23e4 ////

/* Library Function - Single Match
    __Getdays
   
   Library: Visual Studio 2003 Release */

char * __cdecl __Getdays(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint *puVar9;
  char *pcVar10;
  
  puVar1 = PTR_PTR_00e9a758;
  iVar7 = 0;
  uVar6 = 0;
  do {
    sVar2 = _strlen(*(char **)(puVar1 + uVar6 * 4 + 0x1c));
    sVar3 = _strlen(*(char **)(puVar1 + uVar6 * 4));
    uVar6 = uVar6 + 1;
    iVar7 = sVar3 + iVar7 + 2 + sVar2;
  } while (uVar6 < 7);
  pcVar4 = _malloc(iVar7 + 1);
  if (pcVar4 != (char *)0x0) {
    uVar6 = 0;
    pcVar10 = pcVar4;
    do {
      *pcVar10 = ':';
      puVar5 = FUN_00ada2e0((uint *)(pcVar10 + 1),*(uint **)(puVar1 + uVar6 * 4));
      sVar2 = _strlen((char *)puVar5);
      puVar8 = (undefined1 *)((int)(pcVar10 + 1) + sVar2);
      *puVar8 = 0x3a;
      puVar9 = (uint *)(puVar8 + 1);
      puVar5 = FUN_00ada2e0(puVar9,*(uint **)(puVar1 + uVar6 * 4 + 0x1c));
      sVar2 = _strlen((char *)puVar5);
      pcVar10 = (char *)((int)puVar9 + sVar2);
      uVar6 = uVar6 + 1;
    } while (uVar6 < 7);
    *pcVar10 = '\0';
  }
  return pcVar4;
}


//// FUNCTION __Getmonths @ 00ae2463 ////

/* Library Function - Single Match
    __Getmonths
   
   Library: Visual Studio 2003 Release */

char * __cdecl __Getmonths(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  uint *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int local_c;
  int local_8;
  
  puVar1 = PTR_PTR_00e9a758;
  local_8 = 0;
  puVar10 = (undefined4 *)(PTR_PTR_00e9a758 + 0x38);
  local_c = 0xc;
  do {
    sVar2 = _strlen((char *)puVar10[0xc]);
    sVar3 = _strlen((char *)*puVar10);
    local_8 = sVar3 + local_8 + 2 + sVar2;
    puVar10 = puVar10 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  pcVar4 = _malloc(local_8 + 1);
  if (pcVar4 != (char *)0x0) {
    puVar10 = (undefined4 *)(puVar1 + 0x68);
    iVar6 = 0xc;
    pcVar9 = pcVar4;
    do {
      *pcVar9 = ':';
      puVar5 = FUN_00ada2e0((uint *)(pcVar9 + 1),(uint *)puVar10[-0xc]);
      sVar2 = _strlen((char *)puVar5);
      puVar7 = (undefined1 *)((int)(pcVar9 + 1) + sVar2);
      *puVar7 = 0x3a;
      puVar8 = (uint *)(puVar7 + 1);
      puVar5 = FUN_00ada2e0(puVar8,(uint *)*puVar10);
      sVar2 = _strlen((char *)puVar5);
      pcVar9 = (char *)((int)puVar8 + sVar2);
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    *pcVar9 = '\0';
  }
  return pcVar4;
}


//// FUNCTION __Gettnames @ 00ae24f8 ////

/* Library Function - Single Match
    __Gettnames
   
   Library: Visual Studio 2003 Release */

void * __cdecl __Gettnames(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  size_t sVar6;
  void *_Dst;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint *puVar10;
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar1 = PTR_PTR_00e9a758;
  iVar9 = 0;
  local_8 = (undefined4 *)0x0;
  do {
    sVar2 = _strlen(*(char **)(puVar1 + (int)local_8 * 4 + 0x1c));
    sVar3 = _strlen(*(char **)(puVar1 + (int)local_8 * 4));
    local_8 = (undefined4 *)((int)local_8 + 1);
    iVar9 = sVar3 + iVar9 + 2 + sVar2;
  } while (local_8 < 7);
  local_10 = (undefined4 *)(puVar1 + 0x38);
  local_c = (undefined4 *)0xc;
  do {
    sVar2 = _strlen((char *)local_10[0xc]);
    sVar3 = _strlen((char *)*local_10);
    local_10 = local_10 + 1;
    local_c = (undefined4 *)((int)local_c + -1);
    iVar9 = sVar3 + iVar9 + 2 + sVar2;
  } while (local_c != (undefined4 *)0x0);
  sVar2 = _strlen(*(char **)(puVar1 + 0x98));
  sVar3 = _strlen(*(char **)(puVar1 + 0x9c));
  sVar4 = _strlen(*(char **)(puVar1 + 0xa0));
  sVar5 = _strlen(*(char **)(puVar1 + 0xa4));
  sVar6 = _strlen(*(char **)(puVar1 + 0xa8));
  _Dst = _malloc(sVar3 + iVar9 + sVar2 + sVar4 + sVar5 + sVar6 + 0xbd);
  if (_Dst != (void *)0x0) {
    puVar10 = (uint *)((int)_Dst + 0xb8);
    _memcpy(_Dst,PTR_PTR_00e9a758,0xb8);
    local_8 = (undefined4 *)0x0;
    local_c = (undefined4 *)(puVar1 + 0x1c);
    do {
      *(uint **)((int)_Dst + (int)local_8 * 4) = puVar10;
      puVar7 = FUN_00ada2e0(puVar10,(uint *)local_c[-7]);
      sVar2 = _strlen((char *)puVar7);
      puVar10 = (uint *)((int)puVar10 + sVar2 + 1);
      *(uint **)(((int)_Dst - (int)puVar1) + (int)local_c) = puVar10;
      puVar7 = FUN_00ada2e0(puVar10,(uint *)*local_c);
      sVar2 = _strlen((char *)puVar7);
      local_c = local_c + 1;
      local_8 = (undefined4 *)((int)local_8 + 1);
      puVar10 = (uint *)((int)puVar10 + sVar2 + 1);
    } while (local_8 < 7);
    local_8 = (undefined4 *)((int)_Dst + 0x68);
    puVar8 = (undefined4 *)(puVar1 + 0x38);
    local_14 = 0xc;
    do {
      *(uint **)((int)puVar8 + ((int)_Dst - (int)puVar1)) = puVar10;
      puVar7 = FUN_00ada2e0(puVar10,(uint *)*puVar8);
      sVar2 = _strlen((char *)puVar7);
      puVar10 = (uint *)((int)puVar10 + sVar2 + 1);
      *local_8 = puVar10;
      puVar7 = FUN_00ada2e0(puVar10,(uint *)puVar8[0xc]);
      sVar2 = _strlen((char *)puVar7);
      puVar8 = puVar8 + 1;
      local_8 = local_8 + 1;
      local_14 = local_14 + -1;
      puVar10 = (uint *)((int)puVar10 + sVar2 + 1);
    } while (local_14 != 0);
    *(uint **)((int)_Dst + 0x98) = puVar10;
    puVar7 = FUN_00ada2e0(puVar10,*(uint **)(puVar1 + 0x98));
    sVar2 = _strlen((char *)puVar7);
    puVar10 = (uint *)((int)puVar10 + sVar2 + 1);
    *(uint **)((int)_Dst + 0x9c) = puVar10;
    puVar7 = FUN_00ada2e0(puVar10,*(uint **)(puVar1 + 0x9c));
    sVar2 = _strlen((char *)puVar7);
    puVar10 = (uint *)((int)puVar10 + sVar2 + 1);
    *(uint **)((int)_Dst + 0xa0) = puVar10;
    puVar7 = FUN_00ada2e0(puVar10,*(uint **)(puVar1 + 0xa0));
    sVar2 = _strlen((char *)puVar7);
    puVar10 = (uint *)((int)puVar10 + sVar2 + 1);
    *(uint **)((int)_Dst + 0xa4) = puVar10;
    puVar7 = FUN_00ada2e0(puVar10,*(uint **)(puVar1 + 0xa4));
    sVar2 = _strlen((char *)puVar7);
    puVar10 = (uint *)((int)puVar10 + sVar2 + 1);
    *(uint **)((int)_Dst + 0xa8) = puVar10;
    FUN_00ada2e0(puVar10,*(uint **)(puVar1 + 0xa8));
  }
  return _Dst;
}


//// FUNCTION __store_str @ 00ae272b ////

/* Library Function - Single Match
    __store_str
   
   Library: Visual Studio 2003 Release */

void __fastcall __store_str(int *param_1,char *param_2)

{
  int iVar1;
  int *in_EAX;
  
  iVar1 = *in_EAX;
  for (; (iVar1 != 0 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *(char *)*param_1 = *param_2;
    *param_1 = *param_1 + 1;
    *in_EAX = *in_EAX + -1;
    iVar1 = *in_EAX;
  }
  return;
}


//// FUNCTION __store_num @ 00ae2781 ////

/* Library Function - Single Match
    __store_num
   
   Library: Visual Studio 2003 Release */

void __fastcall __store_num(uint *param_1,uint param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int *unaff_EDI;
  int local_8;
  
  local_8 = 0;
  if (param_3 == 0) {
    if (param_2 < *param_1) {
      iVar3 = param_2 - 1;
      if (param_2 != 0) {
        do {
          local_8 = local_8 + 1;
          *(char *)(iVar3 + *unaff_EDI) = (char)(in_EAX % 10) + '0';
          iVar3 = iVar3 + -1;
          in_EAX = in_EAX / 10;
        } while (iVar3 != -1);
      }
      *unaff_EDI = *unaff_EDI + local_8;
      *param_1 = *param_1 - local_8;
    }
    else {
      *param_1 = 0;
    }
  }
  else {
    uVar2 = *param_1;
    pcVar5 = (char *)*unaff_EDI;
    do {
      if (uVar2 < 2) break;
      iVar3 = in_EAX / 10;
      *pcVar5 = (char)(in_EAX % 10) + '0';
      pcVar5 = pcVar5 + 1;
      *param_1 = *param_1 - 1;
      uVar2 = *param_1;
      in_EAX = iVar3;
    } while (0 < iVar3);
    pcVar4 = (char *)*unaff_EDI;
    *unaff_EDI = (int)pcVar5;
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar5;
      *pcVar5 = *pcVar4;
      pcVar5 = pcVar5 + -1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < pcVar5);
  }
  return;
}


//// FUNCTION __expandtime @ 00ae27fa ////

/* Library Function - Single Match
    __expandtime
   
   Library: Visual Studio 2003 Release */

undefined4 __thiscall
__expandtime(void *this,int param_1,undefined2 *param_2,int param_3,int param_4)

{
  char in_AL;
  char *pcVar1;
  uint *unaff_EBX;
  int iVar2;
  uint uVar3;
  
  if (in_AL < '[') {
    if (in_AL == 'Z') {
LAB_00ae29eb:
      ___tzset();
      pcVar1 = (&lpMultiByteStr_00e9a2e0)[*(int *)(param_2 + 0x10) != 0];
      goto LAB_00ae2a50;
    }
    if (in_AL < 'N') {
      if (in_AL != 'M') {
        if (in_AL == '%') {
          **(undefined1 **)this = 0x25;
          *(int *)this = *(int *)this + 1;
          *unaff_EBX = *unaff_EBX - 1;
          return 1;
        }
        if (in_AL == 'A') {
          pcVar1 = *(char **)(param_3 + 0x1c + *(int *)(param_2 + 0xc) * 4);
        }
        else {
          if (in_AL != 'B') {
            if (in_AL != 'H') {
              if (in_AL != 'I') {
                return 1;
              }
              goto LAB_00ae29d1;
            }
            uVar3 = 2;
            goto LAB_00ae28c2;
          }
          pcVar1 = *(char **)(param_3 + 0x68 + *(int *)(param_2 + 8) * 4);
        }
        goto LAB_00ae2a50;
      }
      uVar3 = 2;
    }
    else if (in_AL == 'S') {
      uVar3 = 2;
    }
    else {
      if ((in_AL == 'U') || (in_AL == 'W')) goto LAB_00ae29d1;
      if (in_AL == 'X') {
LAB_00ae28cf:
        iVar2 = 2;
LAB_00ae28d7:
        iVar2 = FUN_00ae2a60(param_1,iVar2,param_2,this,unaff_EBX,param_3);
        if (iVar2 != 0) {
          return 1;
        }
        return 0;
      }
      if (in_AL != 'Y') {
        return 1;
      }
      uVar3 = 4;
    }
LAB_00ae28c2:
    __store_num(unaff_EBX,uVar3,param_4);
  }
  else {
    if (in_AL < 'n') {
      if (in_AL == 'm') {
LAB_00ae29d1:
        uVar3 = 2;
        goto LAB_00ae28c2;
      }
      if (in_AL == 'a') {
        pcVar1 = *(char **)(param_3 + *(int *)(param_2 + 0xc) * 4);
      }
      else {
        if (in_AL != 'b') {
          if (in_AL == 'c') {
            iVar2 = FUN_00ae2a60(param_1,(uint)(param_4 != 0),param_2,this,unaff_EBX,param_3);
            if (iVar2 == 0) {
              return 0;
            }
            if (*unaff_EBX == 0) {
              return 0;
            }
            **(undefined1 **)this = 0x20;
            *(int *)this = *(int *)this + 1;
            *unaff_EBX = *unaff_EBX - 1;
            goto LAB_00ae28cf;
          }
          if (in_AL == 'd') {
            uVar3 = 2;
          }
          else {
            if (in_AL != 'j') {
              return 1;
            }
            uVar3 = 3;
          }
          goto LAB_00ae28c2;
        }
        pcVar1 = *(char **)(param_3 + 0x38 + *(int *)(param_2 + 8) * 4);
      }
    }
    else {
      if (in_AL != 'p') {
        if (in_AL == 'w') {
          uVar3 = 1;
          goto LAB_00ae28c2;
        }
        if (in_AL == 'x') {
          if (param_4 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = 1;
          }
          goto LAB_00ae28d7;
        }
        if (in_AL != 'y') {
          if (in_AL != 'z') {
            return 1;
          }
          goto LAB_00ae29eb;
        }
        goto LAB_00ae29d1;
      }
      if (*(int *)(param_2 + 4) < 0xc) {
        pcVar1 = *(char **)(param_3 + 0x98);
      }
      else {
        pcVar1 = *(char **)(param_3 + 0x9c);
      }
    }
LAB_00ae2a50:
    __store_str(this,pcVar1);
  }
  return 1;
}


//// FUNCTION FUN_00ae2a60 @ 00ae2a60 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

undefined4 __cdecl
FUN_00ae2a60(int param_1,int param_2,undefined2 *param_3,int *param_4,uint *param_5,int param_6)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *_Memory;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  short local_4c;
  short local_4a;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined1 *local_3c;
  int local_38;
  code *local_34;
  size_t local_30;
  int local_2c;
  byte *local_28;
  byte *local_24;
  char local_1d;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00d83110;
  uStack_c = 0xae2a6c;
  if (param_2 == 0) {
    local_24 = *(byte **)(param_6 + 0xa0);
  }
  else if (param_2 == 1) {
    local_24 = *(byte **)(param_6 + 0xa4);
  }
  else {
    local_24 = *(byte **)(param_6 + 0xa8);
  }
  if (*(int *)(param_6 + 0xb0) != 1) {
    local_34 = GetDateFormatA_exref;
    if (param_2 == 2) {
      local_34 = GetTimeFormatA_exref;
    }
    local_4c = param_3[10] + 0x76c;
    local_4a = param_3[8] + 1;
    local_46 = param_3[6];
    local_44 = param_3[4];
    local_42 = param_3[2];
    local_40 = *param_3;
    local_3e = 0;
    local_30 = (*local_34)(*(undefined4 *)(param_6 + 0xac),0,&local_4c,local_24,0,0);
    if (local_30 != 0) {
      local_38 = 0;
      local_1c = &stack0xffffffa8;
      local_3c = &stack0xffffffa8;
      _Memory = &stack0xffffffa8;
      local_8 = (undefined *)0xffffffff;
      puVar2 = &stack0xffffffa8;
      puVar3 = &stack0xffffffa8;
      if (&stack0x00000000 == (undefined1 *)0x58) {
        _Memory = _malloc(local_30);
        if (_Memory == (undefined1 *)0x0) goto LAB_00ae2bc0;
        local_38 = 1;
        puVar2 = local_3c;
        puVar3 = local_1c;
      }
      local_1c = puVar3;
      local_3c = puVar2;
      local_28 = _Memory;
      iVar4 = (*local_34)(*(undefined4 *)(param_6 + 0xac),0,&local_4c,local_24,_Memory,local_30);
      while ((iVar4 = iVar4 + -1, 0 < iVar4 && (*param_5 != 0))) {
        *(byte *)*param_4 = *local_28;
        *param_4 = *param_4 + 1;
        local_28 = local_28 + 1;
        *param_5 = *param_5 - 1;
      }
      if (local_38 == 0) {
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
LAB_00ae2bc0:
  bVar1 = *local_24;
  pbVar5 = local_24;
  do {
    if ((bVar1 == 0) || (*param_5 == 0)) {
      return 1;
    }
    local_1d = '\0';
    local_2c = 0;
    local_28 = pbVar5;
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      local_28 = local_28 + 1;
      uVar7 = uVar6 + 1;
    } while (*local_28 == bVar1);
    local_24 = pbVar5;
    if ((char)bVar1 < 'e') {
      if (bVar1 == 100) {
        if (uVar6 == 0) {
          local_2c = 1;
        }
        else if (uVar6 != 1) {
          if (uVar6 == 2) {
            local_1d = 'a';
          }
          else if (uVar6 == 3) {
            local_1d = 'A';
          }
          goto LAB_00ae2e78;
        }
        local_1d = 'd';
LAB_00ae2e78:
        if (local_1d != '\0') {
          iVar4 = __expandtime(param_4,param_1,param_3,param_6,local_2c);
          if (iVar4 == 0) {
            return 0;
          }
          goto LAB_00ae2e2a;
        }
        bVar1 = *local_24;
        if (((*(byte *)(*(int *)(param_1 + 0x48) + 1 + (uint)bVar1 * 2) & 0x80) != 0) &&
           (1 < *param_5)) {
          local_24 = local_24 + 1;
          if (*local_24 == 0) {
            return 0;
          }
          *(byte *)*param_4 = bVar1;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
        }
        *(byte *)*param_4 = *local_24;
        *param_4 = *param_4 + 1;
        local_24 = local_24 + 1;
        *param_5 = *param_5 - 1;
      }
      else {
        if (bVar1 != 0x27) {
          if (bVar1 == 0x41) {
LAB_00ae2c21:
            iVar4 = ___ascii_stricmp((char *)pbVar5,"am/pm");
            if (iVar4 == 0) {
              local_28 = pbVar5 + 5;
            }
            else {
              iVar4 = ___ascii_stricmp((char *)pbVar5,"a/p");
              if (iVar4 == 0) {
                local_28 = pbVar5 + 3;
              }
            }
            local_1d = 'p';
          }
          else if (bVar1 == 0x48) {
            if (uVar6 == 0) {
              local_2c = 1;
            }
            else if (uVar7 != 2) goto LAB_00ae2e78;
            local_1d = 'H';
          }
          else if (bVar1 == 0x4d) {
            if (uVar6 == 0) {
              local_2c = 1;
            }
            else if (uVar6 != 1) {
              if (uVar6 == 2) {
                local_1d = 'b';
              }
              else if (uVar6 == 3) {
                local_1d = 'B';
              }
              goto LAB_00ae2e78;
            }
            local_1d = 'm';
          }
          else if (bVar1 == 0x61) goto LAB_00ae2c21;
          goto LAB_00ae2e78;
        }
        local_24 = pbVar5 + uVar7;
        if ((uVar7 & 1) != 0) {
          while( true ) {
            bVar1 = *local_24;
            if ((bVar1 == 0) || (*param_5 == 0)) goto LAB_00ae2ed8;
            if (bVar1 == 0x27) break;
            if (((*(byte *)(*(int *)(param_1 + 0x48) + 1 + (uint)bVar1 * 2) & 0x80) != 0) &&
               (1 < *param_5)) {
              local_24 = local_24 + 1;
              if (*local_24 == 0) {
                return 0;
              }
              *(byte *)*param_4 = bVar1;
              *param_4 = *param_4 + 1;
              *param_5 = *param_5 - 1;
            }
            *(byte *)*param_4 = *local_24;
            *param_4 = *param_4 + 1;
            local_24 = local_24 + 1;
            *param_5 = *param_5 - 1;
          }
          local_24 = local_24 + 1;
        }
      }
    }
    else {
      if (bVar1 == 0x68) {
        if (uVar6 == 0) {
          local_2c = 1;
        }
        else if (uVar7 != 2) goto LAB_00ae2e78;
        local_1d = 'I';
        goto LAB_00ae2e78;
      }
      if (bVar1 == 0x6d) {
        if (uVar6 == 0) {
          local_2c = 1;
        }
        else if (uVar7 != 2) goto LAB_00ae2e78;
        local_1d = 'M';
        goto LAB_00ae2e78;
      }
      if (bVar1 == 0x73) {
        if (uVar6 == 0) {
          local_2c = 1;
        }
        else if (uVar7 != 2) goto LAB_00ae2e78;
        local_1d = 'S';
        goto LAB_00ae2e78;
      }
      if (bVar1 != 0x74) {
        if (bVar1 == 0x79) {
          if (uVar6 == 1) {
            local_1d = 'y';
          }
          else if (uVar6 == 3) {
            local_1d = 'Y';
          }
        }
        goto LAB_00ae2e78;
      }
      if (*(int *)(param_3 + 4) < 0xc) {
        pbVar5 = *(byte **)(param_6 + 0x98);
      }
      else {
        pbVar5 = *(byte **)(param_6 + 0x9c);
      }
      if ((uVar7 == 1) && (*param_5 != 0)) {
        bVar1 = *pbVar5;
        if (((*(byte *)(*(int *)(param_1 + 0x48) + 1 + (uint)bVar1 * 2) & 0x80) != 0) &&
           (1 < *param_5)) {
          pbVar5 = pbVar5 + 1;
          if (*pbVar5 == 0) {
            return 0;
          }
          *(byte *)*param_4 = bVar1;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
        }
        *(byte *)*param_4 = *pbVar5;
        *param_4 = *param_4 + 1;
        *param_5 = *param_5 - 1;
      }
      else {
        while( true ) {
          bVar1 = *pbVar5;
          if ((bVar1 == 0) || (*param_5 == 0)) break;
          if (((*(byte *)(*(int *)(param_1 + 0x48) + 1 + (uint)bVar1 * 2) & 0x80) != 0) &&
             (1 < *param_5)) {
            pbVar5 = pbVar5 + 1;
            if (*pbVar5 == 0) {
              return 0;
            }
            *(byte *)*param_4 = bVar1;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          *(byte *)*param_4 = *pbVar5;
          *param_4 = *param_4 + 1;
          pbVar5 = pbVar5 + 1;
          *param_5 = *param_5 - 1;
        }
      }
LAB_00ae2e2a:
      local_24 = local_28;
    }
LAB_00ae2ed8:
    bVar1 = *local_24;
    pbVar5 = local_24;
  } while( true );
}


//// FUNCTION __Strftime_mt @ 00ae2eea ////

/* Library Function - Single Match
    __Strftime_mt
   
   Library: Visual Studio 2003 Release */

int __cdecl
__Strftime_mt(int param_1,byte *param_2,uint param_3,byte *param_4,undefined2 *param_5,uint param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  uVar2 = param_6;
  if (param_6 == 0) {
    uVar2 = *(uint *)(param_1 + 0x4c);
  }
  if (param_3 != 0) {
    param_6 = param_3;
    pbVar4 = param_4;
    if (param_3 == 0) {
LAB_00ae2f99:
      bVar6 = param_6 == 0;
    }
    else {
      do {
        bVar1 = *pbVar4;
        if (bVar1 == 0) break;
        if (bVar1 == 0x25) {
          pbVar5 = pbVar4 + 1;
          bVar1 = *pbVar5;
          if (bVar1 == 0x23) {
            pbVar5 = pbVar4 + 2;
          }
          iVar3 = __expandtime(&param_2,param_1,param_5,uVar2,(uint)(bVar1 == 0x23));
          if (iVar3 == 0) goto LAB_00ae2f99;
        }
        else {
          if (((*(byte *)(*(int *)(param_1 + 0x48) + 1 + (uint)bVar1 * 2) & 0x80) != 0) &&
             (1 < param_6)) {
            pbVar4 = pbVar4 + 1;
            if (*pbVar4 == 0) goto LAB_00ae2f99;
            *param_2 = bVar1;
            param_2 = param_2 + 1;
            param_6 = param_6 - 1;
          }
          *param_2 = *pbVar4;
          param_2 = param_2 + 1;
          param_6 = param_6 - 1;
          pbVar5 = pbVar4;
        }
        pbVar4 = pbVar5 + 1;
      } while (param_6 != 0);
      bVar6 = true;
      if (param_6 != 0) {
        *param_2 = 0;
        return param_3 - param_6;
      }
    }
    if (bVar6) {
      param_2 = param_2 + -1;
    }
    *param_2 = 0;
  }
  return 0;
}


//// FUNCTION __Strftime @ 00ae2faf ////

/* Library Function - Single Match
    __Strftime
   
   Library: Visual Studio 2003 Release */

size_t __cdecl __Strftime(char *param_1,size_t _Maxsize,char *param_3,tm *param_4,void *param_5)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  size_t sVar3;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
  }
  sVar3 = __Strftime_mt((int)ptVar2,(byte *)param_1,_Maxsize,(byte *)param_3,(undefined2 *)param_4,
                        (uint)param_5);
  return sVar3;
}


//// FUNCTION __resetstkoflw @ 00ae2ffc ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* Library Function - Single Match
    __resetstkoflw
   
   Library: Visual Studio 2003 Release */

int __cdecl __resetstkoflw(void)

{
  SIZE_T SVar1;
  WINBOOL WVar2;
  LPCVOID pvVar3;
  LPCVOID pvVar4;
  undefined4 uStack_60;
  _SYSTEM_INFO local_50;
  _MEMORY_BASIC_INFORMATION local_2c;
  DWORD local_10;
  SIZE_T local_c;
  LPCVOID local_8;
  
  uStack_60 = 0xae300d;
  SVar1 = VirtualQuery(&uStack_60,&local_2c,0x1c);
  if (SVar1 != 0) {
    GetSystemInfo(&local_50);
    pvVar4 = (LPCVOID)((~(local_50.dwPageSize - 1) & (uint)&uStack_60) - local_50.dwPageSize);
    pvVar3 = (LPCVOID)(((-(uint)(DAT_010cbbc8 != 1) & 0xfffffff1) + 0x11) * local_50.dwPageSize +
                      (int)local_2c.AllocationBase);
    local_c = local_50.dwPageSize;
    if (pvVar3 <= pvVar4) {
      local_8 = pvVar4;
      if (DAT_010cbbc8 != 1) {
        local_8 = local_2c.AllocationBase;
        do {
          SVar1 = VirtualQuery(local_8,&local_2c,0x1c);
          if (SVar1 == 0) {
            return 0;
          }
          local_8 = (LPCVOID)((int)local_8 + local_2c.RegionSize);
        } while ((local_2c.State & 0x1000) == 0);
        local_8 = local_2c.BaseAddress;
        if ((local_2c.Protect._1_1_ & 1) != 0) {
          return 1;
        }
        if (pvVar4 < local_2c.BaseAddress) {
          return 0;
        }
        if (local_2c.BaseAddress < pvVar3) {
          local_8 = pvVar3;
        }
        VirtualAlloc(local_8,local_c,0x1000,4);
      }
      WVar2 = VirtualProtect(local_8,local_c,(-(uint)(DAT_010cbbc8 != 1) & 0x103) + 1,&local_10);
      return WVar2;
    }
  }
  return 0;
}


//// FUNCTION FUN_00ae30df @ 00ae30df ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void FUN_00ae30df(void)

{
  char cVar1;
  char cVar2;
  UINT CodePage;
  uint *_Str1;
  int iVar3;
  size_t sVar4;
  long lVar5;
  DWORD DVar6;
  uint *_Str;
  int local_20 [3];
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00d83120;
  uStack_c = 0xae30eb;
  __lock(7);
  CodePage = CodePage_010cc05c;
  local_8 = (undefined *)0x0;
  DAT_010cbebc = 0;
  DAT_00e9a824 = 0xffffffff;
  DAT_00e9a818 = 0xffffffff;
  _Str1 = (uint *)__getenv_lk("TZ");
  if ((_Str1 == (uint *)0x0) || ((char)*_Str1 == '\0')) {
    if (DAT_010cbec0 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010cbec0);
    }
    DVar6 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&lpTimeZoneInformation_010cbe10);
    if (DVar6 != 0xffffffff) {
      DAT_010cbebc = 1;
      DAT_00e9a250 = (int)lpTimeZoneInformation_010cbe10 * 0x3c;
      if (DAT_010cbe56 != 0) {
        DAT_00e9a250 = DAT_00e9a250 + DAT_010cbe64 * 0x3c;
      }
      if ((DAT_010cbeaa == 0) || (DAT_010cbeb8 == 0)) {
        DAT_00e9a254 = 0;
        DAT_00e9a258 = 0;
      }
      else {
        DAT_00e9a254 = 1;
        DAT_00e9a258 = (DAT_010cbeb8 - DAT_010cbe64) * 0x3c;
      }
      iVar3 = WideCharToMultiByte(CodePage,0,(LPCWCH)&lpWideCharStr_010cbe14,-1,
                                  lpMultiByteStr_00e9a2e0,0x3f,(LPCCH)0x0,local_20);
      if ((iVar3 == 0) || (local_20[0] != 0)) {
        *lpMultiByteStr_00e9a2e0 = 0;
      }
      else {
        lpMultiByteStr_00e9a2e0[0x3f] = 0;
      }
      iVar3 = WideCharToMultiByte(CodePage,0,(LPCWCH)&lpWideCharStr_010cbe68,-1,
                                  lpMultiByteStr_00e9a2e4,0x3f,(LPCCH)0x0,local_20);
      if ((iVar3 == 0) || (local_20[0] != 0)) {
        *lpMultiByteStr_00e9a2e4 = 0;
      }
      else {
        lpMultiByteStr_00e9a2e4[0x3f] = 0;
      }
    }
  }
  else {
    if (DAT_010cbec0 != (uint *)0x0) {
      iVar3 = _strcmp((char *)_Str1,(char *)DAT_010cbec0);
      if (iVar3 == 0) goto LAB_00ae32e3;
      if (DAT_010cbec0 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_010cbec0);
      }
    }
    sVar4 = _strlen((char *)_Str1);
    DAT_010cbec0 = _malloc(sVar4 + 1);
    if (DAT_010cbec0 != (uint *)0x0) {
      FUN_00ada2e0(DAT_010cbec0,_Str1);
      local_8 = (undefined *)0xffffffff;
      FUN_00ae32fa();
      _strncpy(lpMultiByteStr_00e9a2e0,(char *)_Str1,3);
      lpMultiByteStr_00e9a2e0[3] = 0;
      _Str = (uint *)((int)_Str1 + 3);
      cVar1 = *(char *)_Str;
      if (cVar1 == '-') {
        _Str = _Str1 + 1;
      }
      lVar5 = _atol((char *)_Str);
      DAT_00e9a250 = lVar5 * 0xe10;
      for (; (cVar2 = (char)*_Str, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
          _Str = (uint *)((int)_Str + 1)) {
      }
      if ((char)*_Str == ':') {
        _Str = (uint *)((int)_Str + 1);
        lVar5 = _atol((char *)_Str);
        DAT_00e9a250 = DAT_00e9a250 + lVar5 * 0x3c;
        for (; ('/' < (char)*_Str && ((char)*_Str < ':')); _Str = (uint *)((int)_Str + 1)) {
        }
        if ((char)*_Str == ':') {
          _Str = (uint *)((int)_Str + 1);
          lVar5 = _atol((char *)_Str);
          DAT_00e9a250 = DAT_00e9a250 + lVar5;
          for (; ('/' < (char)*_Str && ((char)*_Str < ':')); _Str = (uint *)((int)_Str + 1)) {
          }
        }
      }
      if (cVar1 == '-') {
        DAT_00e9a250 = -DAT_00e9a250;
      }
      DAT_00e9a254 = (int)(char)*_Str;
      if (DAT_00e9a254 != 0) {
        _strncpy(lpMultiByteStr_00e9a2e4,(char *)_Str,3);
        lpMultiByteStr_00e9a2e4[3] = 0;
        return;
      }
      *lpMultiByteStr_00e9a2e4 = 0;
      return;
    }
  }
LAB_00ae32e3:
  __local_unwind2((int)local_14,-1);
  return;
}


//// FUNCTION FUN_00ae32fa @ 00ae32fa ////

void FUN_00ae32fa(void)

{
  FUN_00ad700c(7);
  return;
}


//// FUNCTION cvtdate @ 00ae3387 ////

/* Library Function - Single Match
    _cvtdate
   
   Library: Visual Studio 2003 Release */

int __cdecl
cvtdate(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
       int param_8,int param_9)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  iVar2 = param_3 % 4;
  if (param_2 == 1) {
    if (((iVar2 == 0) && (param_3 % 100 != 0)) || ((param_3 + 0x76c) % 400 == 0)) {
      puVar3 = (&PTR_DAT_00e9ac9c)[in_EAX];
    }
    else {
      puVar3 = *(undefined **)(&DAT_00e9acd0 + in_EAX * 4);
    }
    puVar4 = puVar3 + 1;
    iVar1 = (param_4 * 7 -
            (int)(puVar4 + param_3 * 0x16d + -0x63db +
                           ((param_3 + 299) / 400 - (param_3 + -1) / 100) + (param_3 + -1) / 4) % 7)
            + param_5;
    if ((int)(puVar4 + param_3 * 0x16d + -0x63db +
                       ((param_3 + 299) / 400 - (param_3 + -1) / 100) + (param_3 + -1) / 4) % 7 <=
        param_5) {
      puVar4 = puVar3 + -6;
    }
    puVar4 = puVar4 + iVar1;
    if (param_4 == 5) {
      if (((iVar2 == 0) && (param_3 % 100 != 0)) || ((param_3 + 0x76c) % 400 == 0)) {
        iVar1 = *(int *)(&DAT_00e9aca0 + in_EAX * 4);
      }
      else {
        iVar1 = (&DAT_00e9acd4)[in_EAX];
      }
      if (iVar1 < (int)puVar4) {
        puVar4 = puVar4 + -7;
      }
    }
  }
  else {
    if (((iVar2 == 0) && (iVar1 = param_3 / 100, param_3 % 100 != 0)) ||
       (iVar1 = (param_3 + 0x76c) / 400, (param_3 + 0x76c) % 400 == 0)) {
      puVar4 = (&PTR_DAT_00e9ac9c)[in_EAX];
    }
    else {
      puVar4 = *(undefined **)(&DAT_00e9acd0 + in_EAX * 4);
    }
    puVar4 = puVar4 + param_6;
  }
  iVar2 = (in_ECX * 0x3c + param_7) * 0x3c;
  if (param_1 == 1) {
    DAT_00e9a820 = (iVar2 + param_8) * 1000 + param_9;
    DAT_00e9a818 = param_3;
    DAT_00e9a81c = puVar4;
  }
  else {
    DAT_00e9a82c = (iVar2 + DAT_00e9a258 + param_8) * 1000 + param_9;
    if (DAT_00e9a82c < 0) {
      DAT_00e9a82c = DAT_00e9a82c + 86400000;
      DAT_00e9a828 = puVar4 + -1;
    }
    else {
      iVar1 = 86400000;
      DAT_00e9a828 = puVar4;
      if (86399999 < DAT_00e9a82c) {
        DAT_00e9a82c = DAT_00e9a82c + -86400000;
        DAT_00e9a828 = puVar4 + 1;
      }
    }
    DAT_00e9a824 = param_3;
  }
  return iVar1;
}


//// FUNCTION __isindst_lk @ 00ae353f ////

/* Library Function - Single Match
    __isindst_lk
   
   Library: Visual Studio 2003 Release */

bool __isindst_lk(void)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *unaff_EBX;
  uint uVar6;
  
  if (DAT_00e9a254 == 0) {
    return false;
  }
  iVar1 = unaff_EBX[5];
  if ((iVar1 != DAT_00e9a818) || (iVar1 != DAT_00e9a824)) {
    if (DAT_010cbebc == 0) {
      cvtdate(1,1,iVar1,1,0,0,0,0,0);
      cvtdate(0,1,iVar1,5,0,0,0,0,0);
    }
    else {
      if (DAT_010cbea8 != 0) {
        uVar6 = (uint)DAT_010cbeae;
        uVar3 = 0;
        uVar4 = 0;
      }
      else {
        uVar3 = (uint)DAT_010cbeac;
        uVar6 = 0;
        uVar4 = (uint)DAT_010cbeae;
      }
      cvtdate(1,(uint)(DAT_010cbea8 == 0),iVar1,uVar4,uVar3,uVar6,(uint)DAT_010cbeb2,
              (uint)DAT_010cbeb4,(uint)DAT_010cbeb6);
      if (DAT_010cbe54 != 0) {
        uVar6 = (uint)DAT_010cbe5a;
        uVar3 = 0;
        uVar4 = 0;
      }
      else {
        uVar3 = (uint)DAT_010cbe58;
        uVar6 = 0;
        uVar4 = (uint)DAT_010cbe5a;
      }
      cvtdate(0,(uint)(DAT_010cbe54 == 0),iVar1,uVar4,uVar3,uVar6,(uint)DAT_010cbe5e,
              (uint)DAT_010cbe60,(uint)DAT_010cbe62);
    }
  }
  iVar1 = unaff_EBX[7];
  if (DAT_00e9a81c < DAT_00e9a828) {
    if ((iVar1 < DAT_00e9a81c) || (DAT_00e9a828 < iVar1)) {
      return false;
    }
    if ((DAT_00e9a81c < iVar1) && (iVar1 < DAT_00e9a828)) {
      return true;
    }
  }
  else {
    if (iVar1 < DAT_00e9a828) {
      return true;
    }
    if (DAT_00e9a81c < iVar1) {
      return true;
    }
    if ((DAT_00e9a828 < iVar1) && (iVar1 < DAT_00e9a81c)) {
      return false;
    }
  }
  iVar5 = ((unaff_EBX[2] * 0x3c + unaff_EBX[1]) * 0x3c + *unaff_EBX) * 1000;
  if (iVar1 == DAT_00e9a81c) {
    bVar2 = DAT_00e9a820 <= iVar5;
  }
  else {
    bVar2 = iVar5 < DAT_00e9a82c;
  }
  return bVar2;
}


//// FUNCTION ___tzset @ 00ae36c6 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tzset
   
   Library: Visual Studio 2003 Release */

void __cdecl ___tzset(void)

{
  if (DAT_010cbec4 == 0) {
    __lock(6);
    if (DAT_010cbec4 == 0) {
      FUN_00ae30df();
      DAT_010cbec4 = DAT_010cbec4 + 1;
    }
    FUN_00ae3709();
  }
  return;
}


//// FUNCTION FUN_00ae3709 @ 00ae3709 ////

void FUN_00ae3709(void)

{
  FUN_00ad700c(6);
  return;
}


//// FUNCTION __isindst @ 00ae3747 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __isindst
   
   Library: Visual Studio 2003 Release */

int __cdecl __isindst(tm *_Time)

{
  bool bVar1;
  undefined3 extraout_var;
  
  __lock(6);
  bVar1 = __isindst_lk();
  FUN_00ae377c();
  return CONCAT31(extraout_var,bVar1);
}


//// FUNCTION FUN_00ae377c @ 00ae377c ////

void FUN_00ae377c(void)

{
  FUN_00ad700c(6);
  return;
}


//// FUNCTION __aulldiv @ 00ae3790 ////

/* Library Function - Single Match
    __aulldiv
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT14((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar9) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


//// FUNCTION _CPtoLCID @ 00ae383e ////

/* Library Function - Single Match
    _CPtoLCID
   
   Library: Visual Studio 2003 Release */

undefined4 _CPtoLCID(void)

{
  int in_EAX;
  
  if (in_EAX == 0x3a4) {
    return 0x411;
  }
  if (in_EAX == 0x3a8) {
    return 0x804;
  }
  if (in_EAX == 0x3b5) {
    return 0x412;
  }
  if (in_EAX != 0x3b6) {
    return 0;
  }
  return 0x404;
}


//// FUNCTION setSBCS @ 00ae386d ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 2003 Release */

void __cdecl setSBCS(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&DAT_010daba0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  CodePage_010daca4 = 0;
  DAT_010dab88 = 0;
  DAT_010dab80 = 0;
  _DAT_010dacb0 = 0;
  DAT_010dacb4 = 0;
  DAT_010dacb8 = 0;
  return;
}


//// FUNCTION setSBUpLow @ 00ae3896 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _setSBUpLow
   
   Library: Visual Studio 2003 Release */

void __cdecl setSBUpLow(void)

{
  WINBOOL WVar1;
  uint uVar2;
  CHAR CVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  BYTE *pBVar7;
  CHAR *pCVar8;
  WORD local_51c [256];
  CHAR local_31c [256];
  CHAR local_21c [256];
  CHAR local_11c [256];
  _cpinfo local_1c;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  WVar1 = GetCPInfo(CodePage_010daca4,&local_1c);
  if (WVar1 == 1) {
    uVar2 = 0;
    do {
      local_11c[uVar2] = (CHAR)uVar2;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
    local_11c[0] = ' ';
    if (local_1c.LeadByte[0] != 0) {
      pBVar7 = local_1c.LeadByte + 1;
      do {
        uVar2 = (uint)local_1c.LeadByte[0];
        if (uVar2 <= *pBVar7) {
          uVar5 = (*pBVar7 - uVar2) + 1;
          uVar6 = uVar5 >> 2;
          pCVar8 = local_11c + uVar2;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            builtin_memcpy(pCVar8,"    ",4);
            pCVar8 = pCVar8 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pCVar8 = ' ';
            pCVar8 = pCVar8 + 1;
          }
        }
        local_1c.LeadByte[0] = pBVar7[1];
        pBVar7 = pBVar7 + 2;
      } while (local_1c.LeadByte[0] != 0);
    }
    FUN_00aea025(1,local_11c,0x100,local_51c,CodePage_010daca4,DAT_010dab80,0);
    FUN_00ad696b(DAT_010dab80,0x100,local_11c,0x100,local_21c,0x100,CodePage_010daca4,0);
    FUN_00ad696b(DAT_010dab80,0x200,local_11c,0x100,local_31c,0x100,CodePage_010daca4,0);
    uVar2 = 0;
    do {
      if ((local_51c[uVar2] & 1) == 0) {
        if ((local_51c[uVar2] & 2) != 0) {
          (&DAT_010daba1)[uVar2] = (&DAT_010daba1)[uVar2] | 0x20;
          CVar3 = local_31c[uVar2];
          goto LAB_00ae39a8;
        }
        (&DAT_010dacc0)[uVar2] = 0;
      }
      else {
        (&DAT_010daba1)[uVar2] = (&DAT_010daba1)[uVar2] | 0x10;
        CVar3 = local_21c[uVar2];
LAB_00ae39a8:
        (&DAT_010dacc0)[uVar2] = CVar3;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
  }
  else {
    uVar2 = 0;
    do {
      if ((uVar2 < 0x41) || (0x5a < uVar2)) {
        if ((0x60 < uVar2) && (uVar2 < 0x7b)) {
          (&DAT_010daba1)[uVar2] = (&DAT_010daba1)[uVar2] | 0x20;
          cVar4 = (char)uVar2 + -0x20;
          goto LAB_00ae39eb;
        }
        (&DAT_010dacc0)[uVar2] = 0;
      }
      else {
        (&DAT_010daba1)[uVar2] = (&DAT_010daba1)[uVar2] | 0x10;
        cVar4 = (char)uVar2 + ' ';
LAB_00ae39eb:
        (&DAT_010dacc0)[uVar2] = cVar4;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
  }
  return;
}


//// FUNCTION FUN_00ae3a22 @ 00ae3a22 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int * FUN_00ae3a22(void)

{
  _ptiddata p_Var1;
  int *_Memory;
  
  __lock(0xd);
  p_Var1 = __getptd();
  _Memory = p_Var1->_tpxcptinfoptrs;
  if (_Memory != DAT_010dab84) {
    if ((_Memory != (int *)0x0) && (*_Memory = *_Memory + -1, *_Memory == 0)) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    p_Var1->_tpxcptinfoptrs = DAT_010dab84;
    _Memory = DAT_010dab84;
    *DAT_010dab84 = *DAT_010dab84 + 1;
  }
  FUN_00ae3a88();
  return _Memory;
}


//// FUNCTION FUN_00ae3a88 @ 00ae3a88 ////

void FUN_00ae3a88(void)

{
  FUN_00ad700c(0xd);
  return;
}


//// FUNCTION __setmbcp_lk @ 00ae3a91 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setmbcp_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __setmbcp_lk(UINT param_1)

{
  BYTE *pBVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  WINBOOL WVar5;
  BYTE *pBVar6;
  int iVar7;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  uint local_20;
  _cpinfo local_1c;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  if (param_1 != 0) {
    iVar8 = 0;
    uVar4 = 0;
    do {
      if (*(UINT *)((int)&DAT_00e9a838 + uVar4) == param_1) {
        puVar11 = (undefined4 *)&DAT_010daba0;
        for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        local_20 = 0;
        *(undefined1 *)puVar11 = 0;
        pbVar9 = (byte *)(iVar8 * 0x30 + 0xe9a848);
        do {
          bVar3 = *pbVar9;
          pbVar10 = pbVar9;
          while ((bVar3 != 0 && (bVar2 = pbVar10[1], bVar2 != 0))) {
            uVar4 = (uint)bVar3;
            if (uVar4 <= bVar2) {
              bVar3 = (&DAT_00e9a830)[local_20];
              do {
                (&DAT_010daba1)[uVar4] = (&DAT_010daba1)[uVar4] | bVar3;
                uVar4 = uVar4 + 1;
              } while (uVar4 <= bVar2);
            }
            pbVar10 = pbVar10 + 2;
            bVar3 = *pbVar10;
          }
          local_20 = local_20 + 1;
          pbVar9 = pbVar9 + 8;
        } while (local_20 < 4);
        CodePage_010daca4 = param_1;
        DAT_010dab88 = 1;
        DAT_010dab80 = _CPtoLCID();
        _DAT_010dacb0 = *(undefined4 *)(&DAT_00e9a83c + extraout_ECX);
        DAT_010dacb4 = *(undefined4 *)(&DAT_00e9a840 + extraout_ECX);
        DAT_010dacb8 = *(undefined4 *)(&DAT_00e9a844 + extraout_ECX);
        goto LAB_00ae3c08;
      }
      uVar4 = uVar4 + 0x30;
      iVar8 = iVar8 + 1;
    } while (uVar4 < 0xf0);
    WVar5 = GetCPInfo(param_1,&local_1c);
    if (WVar5 == 1) {
      puVar11 = (undefined4 *)&DAT_010daba0;
      for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      *(undefined1 *)puVar11 = 0;
      CodePage_010daca4 = param_1;
      DAT_010dab80 = 0;
      if (local_1c.MaxCharSize < 2) {
        DAT_010dab88 = 0;
      }
      else {
        if (local_1c.LeadByte[0] != '\0') {
          pBVar6 = local_1c.LeadByte + 1;
          do {
            bVar3 = *pBVar6;
            if (bVar3 == 0) break;
            for (uVar4 = (uint)pBVar6[-1]; uVar4 <= bVar3; uVar4 = uVar4 + 1) {
              (&DAT_010daba1)[uVar4] = (&DAT_010daba1)[uVar4] | 4;
            }
            pBVar1 = pBVar6 + 1;
            pBVar6 = pBVar6 + 2;
          } while (*pBVar1 != 0);
        }
        uVar4 = 1;
        do {
          (&DAT_010daba1)[uVar4] = (&DAT_010daba1)[uVar4] | 8;
          uVar4 = uVar4 + 1;
        } while (uVar4 < 0xff);
        DAT_010dab80 = _CPtoLCID();
        DAT_010dab88 = extraout_ECX_00;
      }
      _DAT_010dacb0 = 0;
      DAT_010dacb4 = 0;
      DAT_010dacb8 = 0;
      goto LAB_00ae3c08;
    }
    if (DAT_010cbec8 == 0) {
      return 0xffffffff;
    }
  }
  setSBCS();
LAB_00ae3c08:
  setSBUpLow();
  return 0;
}


//// FUNCTION FUN_00ae3c31 @ 00ae3c31 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl FUN_00ae3c31(UINT param_1)

{
  int *_Memory;
  int iVar1;
  int local_24;
  
  local_24 = -1;
  __lock(0xd);
  DAT_010cbec8 = 0;
  if (param_1 == 0xfffffffe) {
    DAT_010cbec8 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    DAT_010cbec8 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    DAT_010cbec8 = 1;
    param_1 = CodePage_010cc05c;
  }
  if (param_1 == CodePage_010daca4) {
    local_24 = 0;
  }
  else {
    if ((DAT_010dab84 == (int *)0x0) || (_Memory = DAT_010dab84, *DAT_010dab84 != 0)) {
      _Memory = _malloc(0x220);
    }
    if ((_Memory != (int *)0x0) && (local_24 = __setmbcp_lk(param_1), local_24 == 0)) {
      *_Memory = 0;
      _Memory[1] = CodePage_010daca4;
      _Memory[2] = DAT_010dab88;
      _Memory[3] = DAT_010dab80;
      for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
        *(undefined2 *)((int)_Memory + iVar1 * 2 + 0x10) = (&DAT_010dacb0)[iVar1];
      }
      for (iVar1 = 0; iVar1 < 0x101; iVar1 = iVar1 + 1) {
        *(undefined1 *)(iVar1 + 0x1c + (int)_Memory) = (&DAT_010daba0)[iVar1];
      }
      for (iVar1 = 0; DAT_010dab84 = _Memory, iVar1 < 0x100; iVar1 = iVar1 + 1) {
        *(undefined1 *)(iVar1 + 0x11d + (int)_Memory) = (&DAT_010dacc0)[iVar1];
      }
    }
    if ((local_24 == -1) && (_Memory != DAT_010dab84)) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  FUN_00ae3d78();
  return local_24;
}


//// FUNCTION FUN_00ae3d78 @ 00ae3d78 ////

void FUN_00ae3d78(void)

{
  FUN_00ad700c(0xd);
  return;
}


//// FUNCTION ___initmbctable @ 00ae3d81 ////

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2003 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_010dbe30 == 0) {
    FUN_00ae3c31(0xfffffffd);
    DAT_010dbe30 = 1;
  }
  return 0;
}


//// FUNCTION __mbsnbcpy @ 00ae3d9f ////

/* Library Function - Single Match
    __mbsnbcpy
   
   Library: Visual Studio 2003 Release */

uchar * __cdecl __mbsnbcpy(uchar *_Dest,uchar *_Source,size_t _Count)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  _ptiddata p_Var4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  
  p_Var4 = __getptd();
  piVar5 = p_Var4->_tpxcptinfoptrs;
  if (piVar5 != DAT_010dab84) {
    piVar5 = FUN_00ae3a22();
  }
  pbVar8 = _Dest;
  if (piVar5[2] == 0) {
    _Dest = (uchar *)_strncpy((char *)_Dest,(char *)_Source,_Count);
  }
  else {
    do {
      while( true ) {
        pbVar3 = pbVar8;
        if (_Count == 0) {
          return _Dest;
        }
        bVar1 = *_Source;
        uVar6 = _Count - 1;
        bVar2 = *(byte *)(bVar1 + 0x1d + (int)piVar5);
        *pbVar3 = bVar1;
        if ((bVar2 & 4) != 0) break;
        pbVar8 = pbVar3 + 1;
        _Source = _Source + 1;
        _Count = uVar6;
        if (bVar1 == 0) goto LAB_00ae3e04;
      }
      if (uVar6 == 0) {
        *pbVar3 = 0;
        return _Dest;
      }
      bVar1 = _Source[1];
      uVar6 = _Count - 2;
      pbVar3[1] = bVar1;
      pbVar8 = pbVar3 + 2;
      _Source = _Source + 2;
      _Count = uVar6;
    } while (bVar1 != 0);
    *pbVar3 = 0;
LAB_00ae3e04:
    if (uVar6 != 0) {
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        pbVar8[0] = 0;
        pbVar8[1] = 0;
        pbVar8[2] = 0;
        pbVar8[3] = 0;
        pbVar8 = pbVar8 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar8 = 0;
        pbVar8 = pbVar8 + 1;
      }
    }
  }
  return _Dest;
}


//// FUNCTION __fltin2 @ 00ae3e32 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __fltin2
   
   Library: Visual Studio 2003 Release */

FLT __cdecl __fltin2(FLT _Flt,char *_Str,_locale_t _Locale)

{
  uint uVar1;
  INTRNCVT_STATUS IVar2;
  uint uVar3;
  char *local_20;
  _CRT_DOUBLE local_1c;
  _LDBL12 local_14;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  uVar3 = 0;
  uVar1 = ___strgtold12(&local_14,&local_20,_Str,0,0,0,0);
  if ((uVar1 & 4) == 0) {
    IVar2 = __ld12tod(&local_14,&local_1c);
    if (((uVar1 & 2) != 0) || (IVar2 == INTRNCVT_OVERFLOW)) {
      uVar3 = 0x80;
    }
    if (((uVar1 & 1) != 0) || (IVar2 == INTRNCVT_UNDERFLOW)) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
    local_1c.x._0_4_ = 0;
    local_1c.x._4_4_ = 0;
  }
  _Flt->flags = uVar3;
  _Flt->nbytes = (int)local_20 - (int)_Str;
  *(undefined4 *)&_Flt->dval = local_1c.x._0_4_;
  *(undefined4 *)((int)&_Flt->dval + 4) = local_1c.x._4_4_;
  return _Flt;
}


//// FUNCTION __RTC_Initialize @ 00ae3ec7 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2003 Release */

void __RTC_Initialize(void)

{
  undefined4 *local_20;
  
  for (local_20 = &DAT_00ddcb50; local_20 < &DAT_00ddcb50; local_20 = local_20 + 1) {
    if ((code *)*local_20 != (code *)0x0) {
      (*(code *)*local_20)();
    }
  }
  return;
}


//// FUNCTION FUN_00ae3f0b @ 00ae3f0b ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void FUN_00ae3f0b(void)

{
  undefined4 *local_20;
  
  for (local_20 = &DAT_00ddcb58; local_20 < &DAT_00ddcb58; local_20 = local_20 + 1) {
    if ((code *)*local_20 != (code *)0x0) {
      (*(code *)*local_20)();
    }
  }
  return;
}


//// FUNCTION FUN_00ae3f6d @ 00ae3f6d ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: This function may have set the stack pointer */

size_t __cdecl
FUN_00ae3f6d(LCID param_1,uint param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,size_t param_6,
            UINT param_7)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  LPCWSTR pWVar5;
  size_t sVar6;
  UINT UVar7;
  undefined1 *puVar8;
  int iVar9;
  size_t sVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined4 uStackY_68;
  undefined1 *local_38;
  size_t local_28;
  undefined1 *local_20;
  
  if (DAT_010cbecc == 0) {
    iVar3 = LCMapStringW(0,0x100,(LPCWSTR)&lpSrcStr_00d7e360,1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_010cbecc = 2;
      }
    }
    else {
      DAT_010cbecc = 1;
    }
  }
  pWVar5 = param_3;
  iVar3 = param_4;
  if (0 < param_4) {
    do {
      iVar3 = iVar3 + -1;
      if (*pWVar5 == L'\0') goto LAB_00ae3fd5;
      pWVar5 = pWVar5 + 1;
    } while (iVar3 != 0);
    iVar3 = -1;
LAB_00ae3fd5:
    param_4 = param_4 + (-1 - iVar3);
  }
  if (DAT_010cbecc == 1) {
    sVar6 = LCMapStringW(param_1,param_2,param_3,param_4,param_5,param_6);
    return sVar6;
  }
  if ((DAT_010cbecc == 2) || (DAT_010cbecc == 0)) {
    local_28 = 0;
    bVar2 = false;
    bVar1 = false;
    if (param_1 == 0) {
      param_1 = DAT_010cc04c;
    }
    if (param_7 == 0) {
      param_7 = CodePage_010cc05c;
    }
    UVar7 = ___ansicp(param_1);
    if ((param_7 != UVar7) && (UVar7 != 0xffffffff)) {
      param_7 = UVar7;
    }
    uStackY_68 = 0xae4059;
    iVar3 = WideCharToMultiByte(param_7,0,param_3,param_4,(LPSTR)0x0,0,(LPCCH)0x0,(LPBOOL)0x0);
    if (iVar3 != 0) {
      puVar8 = (undefined1 *)(iVar3 + 3U & 0xfffffffc);
      iVar9 = -(int)puVar8;
      local_20 = &stack0xffffffbc + iVar9;
      if (&stack0xffffffbc == puVar8) {
        *(int *)(&stack0xffffffb8 + iVar9) = iVar3;
        *(undefined4 *)(&stack0xffffffb4 + iVar9) = 0xae40a8;
        local_20 = _malloc(*(size_t *)(&stack0xffffffb8 + iVar9));
        if (local_20 == (void *)0x0) {
          return 0;
        }
        bVar2 = true;
      }
      *(undefined4 *)(&stack0xffffffb8 + iVar9) = 0;
      *(undefined4 *)(&stack0xffffffb4 + iVar9) = 0;
      *(int *)(&stack0xffffffb0 + iVar9) = iVar3;
      *(undefined1 **)(&stack0xffffffac + iVar9) = local_20;
      *(int *)(&stack0xffffffa8 + iVar9) = param_4;
      *(LPCWSTR *)(&stack0xffffffa4 + iVar9) = param_3;
      *(undefined4 *)(&stack0xffffffa0 + iVar9) = 0;
      *(UINT *)(&stack0xffffff9c + iVar9) = param_7;
      puVar11 = (undefined1 *)((int)&uStackY_68 + iVar9);
      *(undefined4 *)((int)&uStackY_68 + iVar9) = 0xae40cb;
      iVar9 = WideCharToMultiByte(*(UINT *)(&stack0xffffff9c + iVar9),
                                  *(DWORD *)(&stack0xffffffa0 + iVar9),
                                  *(LPCWCH *)(&stack0xffffffa4 + iVar9),
                                  *(int *)(&stack0xffffffa8 + iVar9),
                                  *(LPSTR *)(&stack0xffffffac + iVar9),
                                  *(int *)(&stack0xffffffb0 + iVar9),
                                  *(LPCCH *)(&stack0xffffffb4 + iVar9),
                                  *(LPBOOL *)(&stack0xffffffb8 + iVar9));
      puVar8 = puVar11;
      if (iVar9 != 0) {
        *(undefined4 *)(puVar11 + -4) = 0;
        *(undefined4 *)(puVar11 + -8) = 0;
        *(int *)(puVar11 + -0xc) = iVar3;
        *(undefined1 **)(puVar11 + -0x10) = local_20;
        *(uint *)(puVar11 + -0x14) = param_2;
        *(LCID *)(puVar11 + -0x18) = param_1;
        puVar12 = puVar11 + -0x1c;
        *(undefined4 *)(puVar11 + -0x1c) = 0xae40e7;
        sVar10 = LCMapStringA(*(LCID *)(puVar11 + -0x18),*(DWORD *)(puVar11 + -0x14),
                              *(LPCSTR *)(puVar11 + -0x10),*(int *)(puVar11 + -0xc),
                              *(LPSTR *)(puVar11 + -8),*(int *)(puVar11 + -4));
        puVar8 = puVar12;
        if (sVar10 != 0) {
          puVar8 = (undefined1 *)(sVar10 + 3 & 0xfffffffc);
          *(undefined4 *)(puVar12 + -4) = 0xae4102;
          iVar9 = -(int)puVar8;
          local_38 = puVar12 + iVar9;
          if (puVar12 == puVar8) {
            uRamfffffff8 = 0xae4131;
            sRamfffffffc = sVar10;
            local_38 = _malloc(sVar10);
            puVar8 = puVar12 + iVar9;
            if (local_38 == (undefined1 *)0x0) goto LAB_00ae41a0;
            bVar1 = true;
          }
          *(size_t *)(puVar12 + iVar9 + -4) = sVar10;
          *(undefined1 **)(puVar12 + iVar9 + -8) = local_38;
          *(int *)(puVar12 + iVar9 + -0xc) = iVar3;
          *(undefined1 **)(puVar12 + iVar9 + -0x10) = local_20;
          *(uint *)(puVar12 + iVar9 + -0x14) = param_2;
          *(LCID *)(puVar12 + iVar9 + -0x18) = param_1;
          puVar13 = puVar12 + iVar9 + -0x1c;
          *(undefined4 *)(puVar12 + iVar9 + -0x1c) = 0xae4153;
          iVar3 = LCMapStringA(*(LCID *)(puVar12 + iVar9 + -0x18),
                               *(DWORD *)(puVar12 + iVar9 + -0x14),
                               *(LPCSTR *)(puVar12 + iVar9 + -0x10),*(int *)(puVar12 + iVar9 + -0xc)
                               ,*(LPSTR *)(puVar12 + iVar9 + -8),*(int *)(puVar12 + iVar9 + -4));
          puVar8 = puVar13;
          if (iVar3 != 0) {
            if ((param_2 & 0x400) == 0) {
              if (param_6 == 0) {
                *(undefined4 *)(puVar13 + -4) = 0;
                *(undefined4 *)(puVar13 + -8) = 0;
              }
              else {
                *(size_t *)(puVar13 + -4) = param_6;
                *(LPWSTR *)(puVar13 + -8) = param_5;
              }
              *(size_t *)(puVar13 + -0xc) = sVar10;
              *(undefined1 **)(puVar13 + -0x10) = local_38;
              *(undefined4 *)(puVar13 + -0x14) = 1;
              *(UINT *)(puVar13 + -0x18) = param_7;
              puVar14 = puVar13 + -0x1c;
              *(undefined4 *)(puVar13 + -0x1c) = 0xae4198;
              local_28 = MultiByteToWideChar(*(UINT *)(puVar13 + -0x18),*(DWORD *)(puVar13 + -0x14),
                                             *(LPCCH *)(puVar13 + -0x10),*(int *)(puVar13 + -0xc),
                                             *(LPWSTR *)(puVar13 + -8),*(int *)(puVar13 + -4));
              puVar8 = puVar14;
            }
            else {
              local_28 = sVar10;
              if (param_6 != 0) {
                if ((int)param_6 < (int)sVar10) {
                  sVar10 = param_6;
                }
                *(size_t *)(puVar13 + -4) = sVar10;
                *(undefined1 **)(puVar13 + -8) = local_38;
                *(LPWSTR *)(puVar13 + -0xc) = param_5;
                *(undefined4 *)(puVar13 + -0x10) = 0xae4177;
                _strncpy(*(char **)(puVar13 + -0xc),*(char **)(puVar13 + -8),
                         *(size_t *)(puVar13 + -4));
              }
            }
          }
        }
      }
LAB_00ae41a0:
      if (bVar1) {
        *(undefined1 **)(puVar8 + -4) = local_38;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar8 + -8) = &UNK_00ae41ab;
        _free(*(void **)(puVar8 + -4));
      }
      if (bVar2) {
        *(undefined1 **)(puVar8 + -4) = local_20;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar8 + -8) = &UNK_00ae41b9;
        _free(*(void **)(puVar8 + -4));
      }
      return local_28;
    }
  }
  return 0;
}


//// FUNCTION __stbuf @ 00ae41c6 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __stbuf
   
   Library: Visual Studio 2003 Release */

int __cdecl __stbuf(FILE *_File)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  void *pvVar4;
  
  iVar3 = __isatty(_File->_file);
  if (iVar3 == 0) {
    return 0;
  }
  if (_File == (FILE *)&DAT_00e99dd0) {
    iVar3 = 0;
  }
  else {
    if (_File != (FILE *)&DAT_00e99df0) {
      return 0;
    }
    iVar3 = 1;
  }
  _DAT_010cbc0c = _DAT_010cbc0c + 1;
  if ((_File->_flag & 0x10c) != 0) {
    return 0;
  }
  piVar1 = &DAT_010cbed0 + iVar3;
  if (*piVar1 == 0) {
    pvVar4 = _malloc(0x1000);
    *piVar1 = (int)pvVar4;
    if (pvVar4 == (void *)0x0) {
      _File->_base = (char *)&_File->_charbuf;
      _File->_ptr = (char *)&_File->_charbuf;
      _File->_bufsiz = 2;
      _File->_cnt = 2;
      goto LAB_00ae423d;
    }
  }
  pcVar2 = (char *)*piVar1;
  _File->_base = pcVar2;
  _File->_ptr = pcVar2;
  _File->_bufsiz = 0x1000;
  _File->_cnt = 0x1000;
LAB_00ae423d:
  *(ushort *)&_File->_flag = (ushort)_File->_flag | 0x1102;
  return 1;
}


//// FUNCTION __ftbuf @ 00ae424e ////

/* Library Function - Single Match
    __ftbuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __ftbuf(int _Flag,FILE *_File)

{
  byte *pbVar1;
  
  if ((_Flag != 0) && ((_File->_flag & 0x1000) != 0)) {
    __flush(_File);
    pbVar1 = (byte *)((int)&_File->_flag + 1);
    *pbVar1 = *pbVar1 & 0xee;
    _File->_bufsiz = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
  }
  return;
}


//// FUNCTION __ioinit @ 00ae4278 ////

/* Library Function - Single Match
    __ioinit
   
   Library: Visual Studio 2003 Release */

int __cdecl __ioinit(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  HANDLE hFile;
  int iVar7;
  uint uVar8;
  UINT *pUVar9;
  UINT UVar10;
  UINT UVar11;
  byte *local_48;
  _STARTUPINFOA local_44;
  
  puVar3 = _malloc(0x480);
  if (puVar3 == (undefined4 *)0x0) {
    iVar4 = -1;
  }
  else {
    uNumber_010daa74 = 0x20;
    DAT_010daa80 = puVar3;
    for (; puVar3 < DAT_010daa80 + 0x120; puVar3 = puVar3 + 9) {
      *puVar3 = 0xffffffff;
      puVar3[2] = 0;
      *(undefined1 *)(puVar3 + 1) = 0;
      *(undefined1 *)((int)puVar3 + 5) = 10;
    }
    GetStartupInfoA(&local_44);
    if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
      UVar10 = *(UINT *)local_44.lpReserved2;
      pUVar9 = (UINT *)((int)local_44.lpReserved2 + 4);
      local_48 = (byte *)(UVar10 + (int)pUVar9);
      if (0x7ff < (int)UVar10) {
        UVar10 = 0x800;
      }
      UVar11 = UVar10;
      if ((int)uNumber_010daa74 < (int)UVar10) {
        puVar3 = &DAT_010daa84;
        do {
          puVar5 = _malloc(0x480);
          UVar11 = uNumber_010daa74;
          if (puVar5 == (undefined4 *)0x0) break;
          uNumber_010daa74 = uNumber_010daa74 + 0x20;
          *puVar3 = puVar5;
          puVar2 = puVar5;
          for (; puVar5 < puVar2 + 0x120; puVar5 = puVar5 + 9) {
            *puVar5 = 0xffffffff;
            puVar5[2] = 0;
            *(undefined1 *)(puVar5 + 1) = 0;
            *(undefined1 *)((int)puVar5 + 5) = 10;
            puVar2 = (undefined4 *)*puVar3;
          }
          puVar3 = puVar3 + 1;
          UVar11 = UVar10;
        } while ((int)uNumber_010daa74 < (int)UVar10);
      }
      uVar8 = 0;
      if (0 < (int)UVar11) {
        do {
          if (((*(HANDLE *)local_48 != (HANDLE)0xffffffff) && ((*pUVar9 & 1) != 0)) &&
             (((*pUVar9 & 8) != 0 || (DVar6 = GetFileType(*(HANDLE *)local_48), DVar6 != 0)))) {
            puVar3 = (undefined4 *)((int)(&DAT_010daa80)[(int)uVar8 >> 5] + (uVar8 & 0x1f) * 0x24);
            *puVar3 = *(undefined4 *)local_48;
            *(byte *)(puVar3 + 1) = (byte)*pUVar9;
            iVar4 = ___crtInitCritSecAndSpinCount(puVar3 + 3,4000);
            if (iVar4 == 0) {
              return -1;
            }
            puVar3[2] = puVar3[2] + 1;
          }
          local_48 = local_48 + 4;
          uVar8 = uVar8 + 1;
          pUVar9 = (UINT *)((int)pUVar9 + 1);
        } while ((int)uVar8 < (int)UVar11);
      }
    }
    iVar4 = 0;
    do {
      piVar1 = DAT_010daa80 + iVar4 * 9;
      if (*piVar1 == -1) {
        *(undefined1 *)(piVar1 + 1) = 0x81;
        if (iVar4 == 0) {
          DVar6 = 0xfffffff6;
        }
        else {
          DVar6 = 0xfffffff5 - (iVar4 != 1);
        }
        hFile = GetStdHandle(DVar6);
        if ((hFile == (HANDLE)0xffffffff) || (DVar6 = GetFileType(hFile), DVar6 == 0)) {
          *(byte *)(piVar1 + 1) = *(byte *)(piVar1 + 1) | 0x40;
        }
        else {
          *piVar1 = (int)hFile;
          if ((DVar6 & 0xff) == 2) {
            *(byte *)(piVar1 + 1) = *(byte *)(piVar1 + 1) | 0x40;
          }
          else if ((DVar6 & 0xff) == 3) {
            *(byte *)(piVar1 + 1) = *(byte *)(piVar1 + 1) | 8;
          }
          iVar7 = ___crtInitCritSecAndSpinCount(piVar1 + 3,4000);
          if (iVar7 == 0) {
            return -1;
          }
          piVar1[2] = piVar1[2] + 1;
        }
      }
      else {
        *(byte *)(piVar1 + 1) = *(byte *)(piVar1 + 1) | 0x80;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    SetHandleCount(uNumber_010daa74);
    iVar4 = 0;
  }
  return iVar4;
}


//// FUNCTION __close_lk @ 00ae455d ////

/* Library Function - Single Match
    __close_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __close_lk(uint param_1)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  WINBOOL WVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = __get_osfhandle(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_00ae45ab;
    }
    hObject = (HANDLE)__get_osfhandle(param_1);
    WVar3 = CloseHandle(hObject);
    if (WVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_00ae45ad;
    }
  }
LAB_00ae45ab:
  DVar4 = 0;
LAB_00ae45ad:
  __free_osfhnd(param_1);
  *(undefined1 *)((&DAT_010daa80)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    __dosmaperr(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


//// FUNCTION __close @ 00ae45e0 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __close
   
   Library: Visual Studio 2003 Release */

int __cdecl __close(int _FileHandle)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  int local_20;
  
  if ((uint)_FileHandle < uNumber_010daa74) {
    iVar3 = (_FileHandle & 0x1fU) * 0x24;
    if ((*(byte *)((&DAT_010daa80)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      __lock_fhandle(_FileHandle);
      if ((*(byte *)((&DAT_010daa80)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        piVar1 = FUN_00ad4b6c();
        *piVar1 = 9;
        local_20 = -1;
      }
      else {
        local_20 = __close_lk(_FileHandle);
      }
      FUN_00ae4657();
      return local_20;
    }
  }
  piVar1 = FUN_00ad4b6c();
  *piVar1 = 9;
  puVar2 = FUN_00ad4b75();
  *puVar2 = 0;
  return -1;
}


//// FUNCTION FUN_00ae4657 @ 00ae4657 ////

void FUN_00ae4657(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}


//// FUNCTION FUN_00ae467b @ 00ae467b ////

void __cdecl FUN_00ae467b(int param_1)

{
  if (((*(uint *)(param_1 + 0xc) & 0x83) != 0) && ((*(uint *)(param_1 + 0xc) & 8) != 0)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  return;
}


//// FUNCTION __openfile @ 00ae46a6 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __openfile
   
   Library: Visual Studio 2003 Release */

FILE * __cdecl __openfile(char *_Filename,char *_Mode,int _ShFlag,FILE *_File)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint _OpenFlag;
  uint uVar6;
  
  cVar1 = *_Mode;
  bVar4 = false;
  bVar3 = false;
  if (cVar1 == 'a') {
    _OpenFlag = 0x109;
  }
  else {
    if (cVar1 == 'r') {
      _OpenFlag = 0;
      uVar6 = DAT_010cc0c4 | 1;
      goto LAB_00ae46e7;
    }
    if (cVar1 != 'w') {
      return (FILE *)0x0;
    }
    _OpenFlag = 0x301;
  }
  uVar6 = DAT_010cc0c4 | 2;
LAB_00ae46e7:
  bVar2 = true;
LAB_00ae47c6:
  _Mode = _Mode + 1;
  cVar1 = *_Mode;
  if ((cVar1 == '\0') || (!bVar2)) {
    iVar5 = __sopen(_Filename,_OpenFlag,_ShFlag,0x1a4);
    if (iVar5 < 0) {
      return (FILE *)0x0;
    }
    _DAT_010cbc0c = _DAT_010cbc0c + 1;
    _File->_flag = uVar6;
    _File->_cnt = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_tmpfname = (char *)0x0;
    _File->_file = iVar5;
    return _File;
  }
  if (cVar1 < 'U') {
    if (cVar1 == 'T') {
      if ((_OpenFlag & 0x1000) == 0) {
        _OpenFlag = _OpenFlag | 0x1000;
        goto LAB_00ae47c6;
      }
    }
    else if (cVar1 == '+') {
      if ((_OpenFlag & 2) == 0) {
        _OpenFlag = _OpenFlag & 0xfffffffe | 2;
        uVar6 = uVar6 & 0xfffffffc | 0x80;
        goto LAB_00ae47c6;
      }
    }
    else if (cVar1 == 'D') {
      if ((_OpenFlag & 0x40) == 0) {
        _OpenFlag = _OpenFlag | 0x40;
        goto LAB_00ae47c6;
      }
    }
    else if (cVar1 == 'R') {
      if (!bVar3) {
        bVar3 = true;
        _OpenFlag = _OpenFlag | 0x10;
        goto LAB_00ae47c6;
      }
    }
    else if ((cVar1 == 'S') && (!bVar3)) {
      bVar3 = true;
      _OpenFlag = _OpenFlag | 0x20;
      goto LAB_00ae47c6;
    }
  }
  else {
    if (cVar1 == 'b') {
      if ((_OpenFlag & 0xc000) != 0) goto LAB_00ae47a8;
      _OpenFlag = _OpenFlag | 0x8000;
      goto LAB_00ae47c6;
    }
    if (cVar1 == 'c') {
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 | 0x4000;
        goto LAB_00ae47c6;
      }
    }
    else {
      if (cVar1 != 'n') {
        if ((cVar1 != 't') || ((_OpenFlag & 0xc000) != 0)) goto LAB_00ae47a8;
        _OpenFlag = _OpenFlag | 0x4000;
        goto LAB_00ae47c6;
      }
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 & 0xffffbfff;
        goto LAB_00ae47c6;
      }
    }
  }
LAB_00ae47a8:
  bVar2 = false;
  goto LAB_00ae47c6;
}


//// FUNCTION FUN_00ae480e @ 00ae480e ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

undefined4 * FUN_00ae480e(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *_File;
  
  puVar4 = (undefined4 *)0x0;
  __lock(1);
  iVar3 = 0;
  do {
    _File = puVar4;
    if (DAT_010dbe20 <= iVar3) {
LAB_00ae48fd:
      if (_File != (undefined4 *)0x0) {
        _File[1] = 0;
        _File[3] = 0;
        _File[2] = 0;
        *_File = 0;
        _File[7] = 0;
        _File[4] = 0xffffffff;
      }
      FUN_00ae4927();
      return _File;
    }
    iVar1 = *(int *)(DAT_010dae04 + iVar3 * 4);
    if (iVar1 == 0) {
      iVar3 = iVar3 * 4;
      pvVar2 = _malloc(0x38);
      *(void **)(iVar3 + DAT_010dae04) = pvVar2;
      if (*(int *)(iVar3 + DAT_010dae04) != 0) {
        iVar1 = ___crtInitCritSecAndSpinCount(*(int *)(iVar3 + DAT_010dae04) + 0x20,4000);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(iVar3 + DAT_010dae04));
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_010dae04) + 0x20));
        _File = *(undefined4 **)(iVar3 + DAT_010dae04);
      }
      goto LAB_00ae48fd;
    }
    if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
      if (((2 < iVar3) && (iVar3 < 0x14)) && (iVar1 = FUN_00ad7039(iVar3 + 0x10), iVar1 == 0))
      goto LAB_00ae48fd;
      __lock_file2(iVar3,*(void **)(DAT_010dae04 + iVar3 * 4));
      _File = *(undefined4 **)(DAT_010dae04 + iVar3 * 4);
      if ((*(byte *)(_File + 3) & 0x83) == 0) goto LAB_00ae48fd;
      __unlock_file2(iVar3,_File);
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


//// FUNCTION FUN_00ae4927 @ 00ae4927 ////

void FUN_00ae4927(void)

{
  FUN_00ad700c(1);
  return;
}


//// FUNCTION __mbctoupper @ 00ae4930 ////

/* Library Function - Single Match
    __mbctoupper
   
   Library: Visual Studio 2003 Release */

uint __cdecl __mbctoupper(uint _Ch)

{
  _ptiddata p_Var1;
  int *piVar2;
  uint uVar3;
  undefined2 local_c;
  CHAR local_8;
  undefined1 local_7;
  undefined2 uStack_6;
  
  p_Var1 = __getptd();
  piVar2 = p_Var1->_tpxcptinfoptrs;
  if (piVar2 != DAT_010dab84) {
    piVar2 = FUN_00ae3a22();
  }
  if (_Ch < 0x100) {
    if ((*(byte *)((int)piVar2 + _Ch + 0x1d) & 0x20) != 0) {
      _Ch = (uint)*(char *)((int)piVar2 + _Ch + 0x11d);
    }
  }
  else {
    _local_8 = CONCAT11((char)_Ch,(char)(_Ch >> 8));
    if (((*(byte *)((_Ch >> 8 & 0xff) + 0x1d + (int)piVar2) & 4) != 0) &&
       (uVar3 = FUN_00ad696b(piVar2[3],0x200,&local_8,2,(LPSTR)&local_c,2,piVar2[1],1), uVar3 != 0))
    {
      _Ch = (uint)CONCAT11((CHAR)local_c,local_c._1_1_);
    }
  }
  return _Ch;
}


//// FUNCTION _ldexp @ 00ae4a88 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _ldexp
   
   Library: Visual Studio 2003 Release */

double __cdecl _ldexp(double _X,int _Y)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int local_8;
  
  iVar1 = __ctrlfp();
  uVar5 = (undefined2)iVar1;
  uVar6 = (undefined2)((uint)iVar1 >> 0x10);
  uVar4 = (uint)((ulonglong)_X >> 0x20);
  if ((_X._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = __sptype(SUB84(_X,0),uVar4);
    if (0 < iVar1) {
      if (iVar1 < 3) goto LAB_00ae4b33;
      if (iVar1 == 3) {
        fVar2 = __handle_qnan2(0x19,_X,(double)_Y);
        goto LAB_00ae4c6f;
      }
    }
    dVar3 = _X + 1.0;
    uVar4 = 8;
  }
  else {
    if (_X == 0.0) {
LAB_00ae4b33:
      __ctrlfp();
      fVar2 = (float10)_X;
      goto LAB_00ae4c6f;
    }
    fVar2 = __decomp(SUB84(_X,0),uVar4,&local_8);
    dVar3 = (double)fVar2;
    local_8 = _Y + local_8;
    if (local_8 < 0xa01) {
      if (local_8 < 0x401) {
        if (local_8 < -0x9fd) {
          dVar3 = dVar3 * 0.0;
        }
        else {
          if (-0x3fe < local_8) {
            fVar2 = __set_exp(dVar3,(short)local_8);
            __ctrlfp();
            fVar2 = (float10)(double)fVar2;
            goto LAB_00ae4c6f;
          }
          fVar2 = __set_exp(dVar3,(short)(local_8 + 0x600));
          dVar3 = (double)fVar2;
        }
        uVar4 = 0x12;
        goto LAB_00ae4c4a;
      }
      fVar2 = __set_exp(dVar3,(short)(local_8 + -0x600));
      dVar3 = (double)fVar2;
    }
    else {
      dVar3 = __copysign(_DAT_00e9a960,dVar3);
    }
    uVar4 = 0x11;
  }
LAB_00ae4c4a:
  fVar2 = __except2(uVar4,0x19,_X,(double)_Y,dVar3,CONCAT22(uVar6,uVar5));
LAB_00ae4c6f:
  return (double)fVar2;
}


//// FUNCTION __set_exp @ 00ae4c73 ////

/* Library Function - Single Match
    __set_exp
   
   Library: Visual Studio 2003 Release */

float10 __cdecl __set_exp(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}


//// FUNCTION __set_bexp @ 00ae4cdc ////

/* Library Function - Single Match
    __set_bexp
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

float10 __cdecl __set_bexp(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26(param_2 << 4 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}


//// FUNCTION __sptype @ 00ae4d01 ////

/* Library Function - Single Match
    __sptype
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __sptype(int param_1,uint param_2)

{
  undefined4 uStack_8;
  
  if (param_2 == 0x7ff00000) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    return 2;
  }
  if ((param_2._2_2_ & 0x7ff8) == 0x7ff8) {
    uStack_8 = 3;
  }
  else {
    if (((param_2._2_2_ & 0x7ff8) != 0x7ff0) || (((param_2 & 0x7ffff) == 0 && (param_1 == 0)))) {
      return 0;
    }
    uStack_8 = 4;
  }
  return uStack_8;
}


//// FUNCTION __decomp @ 00ae4d5c ////

/* Library Function - Single Match
    __decomp
   
   Library: Visual Studio 2003 Release */

float10 __cdecl __decomp(uint param_1,uint param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int extraout_EDX;
  float10 fVar3;
  
  if ((double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))) ==
      0.0) {
    fVar3 = (float10)0;
    iVar2 = 0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    if (0.0 <= (double)CONCAT17(param_2._3_1_,
                                CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    while ((param_2._2_1_ & 0x10) == 0) {
      iVar2 = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,(ushort)param_2)) << 1;
      param_2._0_2_ = (ushort)iVar2;
      param_2._2_1_ = (byte)((uint)iVar2 >> 0x10);
      param_2._3_1_ = (byte)((uint)iVar2 >> 0x18);
      if ((param_1 & 0x80000000) != 0) {
        param_2._0_2_ = (ushort)param_2 | 1;
      }
      param_1 = param_1 << 1;
    }
    if (bVar1) {
      param_2._3_1_ = param_2._3_1_ | 0x80;
    }
    fVar3 = __set_exp(CONCAT17(param_2._3_1_,
                               CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))) &
                      0xffefffffffffffff,0);
    iVar2 = extraout_EDX;
  }
  else {
    fVar3 = __set_exp(CONCAT17(param_2._3_1_,
                               CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    iVar2 = ((param_2 >> 0x10 & 0x7ff0) >> 4) - 0x3fe;
  }
  *param_3 = iVar2;
  return (float10)(double)fVar3;
}


//// FUNCTION __raise_exc @ 00ae4e18 ////

/* Library Function - Single Match
    __raise_exc
   
   Library: Visual Studio 2003 Release */

void __cdecl
__raise_exc(uint *param_1,uint *param_2,uint param_3,int param_4,undefined8 *param_5,
           undefined8 *param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  uVar3 = param_3;
  puVar1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    param_1[1] = param_1[1] | 1;
    param_3 = 0xc000008f;
  }
  if ((uVar3 & 2) != 0) {
    param_1[1] = param_1[1] | 2;
    param_3 = 0xc0000093;
  }
  if ((uVar3 & 1) != 0) {
    param_1[1] = param_1[1] | 4;
    param_3 = 0xc0000091;
  }
  if ((uVar3 & 4) != 0) {
    param_1[1] = param_1[1] | 8;
    param_3 = 0xc000008e;
  }
  if ((uVar3 & 8) != 0) {
    param_1[1] = param_1[1] | 0x10;
    param_3 = 0xc0000090;
  }
  param_1[2] = param_1[2] ^ (~(*param_2 << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~(*param_2 << 1) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 1) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 3) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 5) ^ param_1[2]) & 1;
  uVar3 = __statfp();
  puVar2 = param_6;
  if ((uVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((uVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((uVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((uVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar3 = *puVar1 & 0xc00;
  if (uVar3 == 0) {
    *param_1 = *param_1 & 0xfffffffc;
  }
  else {
    if (uVar3 == 0x400) {
      uVar3 = *param_1 & 0xfffffffd | 1;
    }
    else {
      if (uVar3 != 0x800) {
        if (uVar3 == 0xc00) {
          *param_1 = *param_1 | 3;
        }
        goto LAB_00ae4f75;
      }
      uVar3 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar3;
  }
LAB_00ae4f75:
  uVar3 = *puVar1 & 0x300;
  if (uVar3 == 0) {
    uVar3 = *param_1 & 0xffffffeb | 8;
LAB_00ae4fab:
    *param_1 = uVar3;
  }
  else {
    if (uVar3 == 0x200) {
      uVar3 = *param_1 & 0xffffffe7 | 4;
      goto LAB_00ae4fab;
    }
    if (uVar3 == 0x300) {
      *param_1 = *param_1 & 0xffffffe3;
    }
  }
  *param_1 = *param_1 ^ (param_4 << 5 ^ *param_1) & 0x1ffe0;
  param_1[8] = param_1[8] | 1;
  param_1[8] = param_1[8] & 0xffffffe3 | 2;
  *(undefined8 *)(param_1 + 4) = *param_5;
  param_1[0x18] = param_1[0x18] | 1;
  param_1[0x18] = param_1[0x18] & 0xffffffe3 | 2;
  *(undefined8 *)(param_1 + 0x14) = *param_6;
  __clrfp();
  RaiseException(param_3,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if ((param_1[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  uVar3 = *param_1 & 3;
  if (uVar3 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff;
  }
  else {
    if (uVar3 == 1) {
      uVar3 = *puVar1 & 0xfffff7ff | 0x400;
    }
    else {
      if (uVar3 != 2) {
        if (uVar3 == 3) {
          *(byte *)((int)puVar1 + 1) = *(byte *)((int)puVar1 + 1) | 0xc;
        }
        goto LAB_00ae5084;
      }
      uVar3 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar3;
  }
LAB_00ae5084:
  uVar3 = *param_1 >> 2 & 7;
  if (uVar3 == 0) {
    uVar3 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_00ae50b3;
    }
    uVar3 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar3;
LAB_00ae50b3:
  *puVar2 = *(undefined8 *)(param_1 + 0x14);
  return;
}


//// FUNCTION __handle_exc @ 00ae50bd ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __handle_exc
   
   Library: Visual Studio 2003 Release */

bool __cdecl __handle_exc(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  uVar3 = param_1 & 0x1f;
  bVar2 = true;
  local_8 = uVar3;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_00ae5662();
    uVar3 = param_1 & 0x17;
    goto LAB_00ae52bf;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_00ae5662();
    uVar3 = param_1 & 0x1b;
    goto LAB_00ae52bf;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar4 = (param_1 & 0x10) != 0;
      if (*param_2 != 0.0) {
        fVar5 = __decomp(SUB84(*param_2,0),(uint)((ulonglong)*param_2 >> 0x20),&local_c);
        dVar1 = (double)fVar5;
        local_c = local_c + -0x600;
        if (local_c < -0x432) {
          local_14 = dVar1 * 0.0;
          bVar4 = bVar2;
        }
        else {
          local_14 = (double)((ulonglong)dVar1 & 0xfffffffffffff | 0x10000000000000);
          if (local_c < -0x3fd) {
            local_c = -0x3fd - local_c;
            do {
              if ((((ulonglong)local_14 & 1) != 0) && (!bVar4)) {
                bVar4 = bVar2;
              }
              uVar3 = (uint)local_14 >> 1;
              if (((ulonglong)local_14 & 0x100000000) != 0) {
                local_14._3_1_ = (byte)((ulonglong)local_14 >> 0x18) >> 1;
                local_14._0_3_ = (undefined3)uVar3;
                local_14._0_4_ = CONCAT13(local_14._3_1_,(undefined3)local_14) | 0x80000000;
                uVar3 = (uint)local_14;
              }
              local_14._0_4_ = uVar3;
              local_14 = (double)CONCAT44(local_14._4_4_ >> 1,(uint)local_14);
              local_c = local_c + -1;
            } while (local_c != 0);
          }
          if (dVar1 < 0.0) {
            local_14 = -local_14;
          }
        }
        *param_2 = local_14;
        bVar2 = bVar4;
      }
      if (bVar2) {
        FUN_00ae5662();
      }
      uVar3 = local_8 & 0xfffffffd;
      local_8 = uVar3;
    }
    goto LAB_00ae52bf;
  }
  FUN_00ae5662();
  uVar3 = param_3 & 0xc00;
  dVar1 = _DAT_00e9a960;
  if (uVar3 == 0) {
    if (*param_2 <= 0.0) {
      dVar1 = -_DAT_00e9a960;
    }
LAB_00ae51db:
    *param_2 = dVar1;
  }
  else {
    if (uVar3 == 0x400) {
      dVar1 = _DAT_00e9a970;
      if (*param_2 <= 0.0) {
        dVar1 = -_DAT_00e9a960;
      }
      goto LAB_00ae51db;
    }
    if (uVar3 == 0x800) {
      if (*param_2 <= 0.0) {
        dVar1 = -_DAT_00e9a970;
      }
      goto LAB_00ae51db;
    }
    if (uVar3 == 0xc00) {
      dVar1 = _DAT_00e9a970;
      if (*param_2 <= 0.0) {
        dVar1 = -_DAT_00e9a970;
      }
      goto LAB_00ae51db;
    }
  }
  uVar3 = param_1 & 0x1e;
LAB_00ae52bf:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_00ae5662();
    uVar3 = uVar3 & 0xffffffef;
  }
  return uVar3 == 0;
}


//// FUNCTION __set_errno @ 00ae52e1 ////

/* Library Function - Single Match
    __set_errno
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl __set_errno(int _Value)

{
  int *piVar1;
  
  if (_Value == 1) {
    _Value = (int)FUN_00ad4b6c();
    *(int *)_Value = 0x21;
  }
  else if ((1 < _Value) && (_Value < 4)) {
    piVar1 = FUN_00ad4b6c();
    *piVar1 = 0x22;
    return (errno_t)piVar1;
  }
  return _Value;
}


//// FUNCTION __errcode @ 00ae5329 ////

/* Library Function - Single Match
    __errcode
   
   Library: Visual Studio 2003 Release */

int __cdecl __errcode(byte param_1)

{
  undefined4 uStack_4;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) != 0) {
      return 1;
    }
    if ((param_1 & 4) == 0) {
      if ((param_1 & 1) == 0) {
        return (param_1 & 2) << 1;
      }
      uStack_4 = 3;
    }
    else {
      uStack_4 = 2;
    }
  }
  else {
    uStack_4 = 5;
  }
  return uStack_4;
}


//// FUNCTION __umatherr @ 00ae5356 ////

/* Library Function - Single Match
    __umatherr
   
   Library: Visual Studio 2003 Release */

float10 __cdecl __umatherr(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar1 = 0;
  do {
    if ((&DAT_00e9a988)[iVar1 * 2] == param_2) {
      iVar1 = *(int *)(iVar1 * 8 + 0xe9a98c);
      goto LAB_00ae5372;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  iVar1 = 0;
LAB_00ae5372:
  if (iVar1 != 0) {
    __ctrlfp();
    iVar1 = FUN_00aec23a();
    if (iVar1 == 0) {
      __set_errno(param_1);
    }
    return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
  }
  __ctrlfp();
  __set_errno(param_1);
  return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
}


//// FUNCTION __handle_qnan1 @ 00ae53f4 ////

/* Library Function - Single Match
    __handle_qnan1
   
   Library: Visual Studio 2003 Release */

float10 __cdecl __handle_qnan1(int param_1,double param_2)

{
  int *piVar1;
  float10 fVar2;
  
  if (DAT_00e9ad40 == 0) {
    fVar2 = __umatherr(1,param_1);
    return fVar2;
  }
  piVar1 = FUN_00ad4b6c();
  *piVar1 = 0x21;
  __ctrlfp();
  return (float10)param_2;
}


//// FUNCTION __handle_qnan2 @ 00ae5447 ////

/* Library Function - Single Match
    __handle_qnan2
   
   Library: Visual Studio 2003 Release */

float10 __cdecl __handle_qnan2(int param_1,double param_2,double param_3)

{
  int *piVar1;
  float10 fVar2;
  
  if (DAT_00e9ad40 == 0) {
    fVar2 = __umatherr(1,param_1);
    return fVar2;
  }
  piVar1 = FUN_00ad4b6c();
  *piVar1 = 0x21;
  __ctrlfp();
  return (float10)(param_2 + param_3);
}


//// FUNCTION __except1 @ 00ae54a6 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __except1
   
   Library: Visual Studio 2003 Release */

float10 __cdecl __except1(uint param_1,int param_2,undefined8 param_3,double param_4,uint param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  int _Value;
  float10 fVar2;
  uint local_90 [16];
  uint local_50;
  undefined4 local_14;
  
  local_14 = DAT_00e9a098;
  bVar1 = __handle_exc(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_50 = local_50 & 0xfffffffe;
    __raise_exc(local_90,&param_5,param_1,param_2,&param_3,&param_4);
  }
  _Value = __errcode((byte)param_1);
  if ((DAT_00e9ad40 == 0) && (_Value != 0)) {
    fVar2 = __umatherr(_Value,param_2);
  }
  else {
    __set_errno(_Value);
    __ctrlfp();
    fVar2 = (float10)param_4;
  }
  return fVar2;
}


//// FUNCTION __except2 @ 00ae555e ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __except2
   
   Library: Visual Studio 2003 Release */

float10 __cdecl
__except2(uint param_1,int param_2,undefined8 param_3,undefined8 param_4,double param_5,uint param_6
         )

{
  bool bVar1;
  undefined3 extraout_var;
  int _Value;
  float10 fVar2;
  uint local_90 [12];
  undefined8 local_60;
  uint local_50;
  undefined4 local_14;
  
  local_14 = DAT_00e9a098;
  bVar1 = __handle_exc(param_1,&param_5,param_6);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_60 = param_4;
    local_50 = local_50 & 0xffffffe3 | 3;
    __raise_exc(local_90,&param_6,param_1,param_2,&param_3,&param_5);
  }
  _Value = __errcode((byte)param_1);
  if ((DAT_00e9ad40 == 0) && (_Value != 0)) {
    fVar2 = __umatherr(_Value,param_2);
  }
  else {
    __set_errno(_Value);
    __ctrlfp();
    fVar2 = (float10)param_5;
  }
  return fVar2;
}


//// FUNCTION __statfp @ 00ae5627 ////

/* Library Function - Single Match
    __statfp
   
   Library: Visual Studio 2003 Release */

int __statfp(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}


//// FUNCTION __clrfp @ 00ae5632 ////

/* Library Function - Single Match
    __clrfp
   
   Library: Visual Studio 2003 Release */

int __clrfp(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}


//// FUNCTION __ctrlfp @ 00ae563e ////

/* Library Function - Single Match
    __ctrlfp
   
   Library: Visual Studio 2003 Release */

int __ctrlfp(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}


//// FUNCTION FUN_00ae5662 @ 00ae5662 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ae5662(void)

{
  return;
}


//// FUNCTION __cintrindisp2 @ 00ae56c0 ////

/* Library Function - Single Match
    __cintrindisp2
   
   Library: Visual Studio */

void __fastcall __cintrindisp2(undefined4 param_1,int param_2)

{
  __trandisp2(param_1,param_2);
  FUN_00ae578a();
  return;
}


//// FUNCTION __cintrindisp1 @ 00ae56fe ////

/* Library Function - Single Match
    __cintrindisp1
   
   Library: Visual Studio */

void __fastcall __cintrindisp1(undefined4 param_1,int param_2)

{
  __trandisp1(param_1,param_2);
  FUN_00ae578a();
  return;
}


//// FUNCTION __ctrandisp2 @ 00ae573b ////

/* Library Function - Single Match
    __ctrandisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

void __cdecl __ctrandisp2(uint param_1,int param_2,uint param_3,int param_4)

{
  undefined4 extraout_ECX;
  int extraout_EDX;
  
  __fload(param_1,param_2);
  __fload(param_3,param_4);
  __trandisp2(extraout_ECX,extraout_EDX);
  FUN_00ae5783();
  return;
}


//// FUNCTION FUN_00ae5783 @ 00ae5783 ////

void FUN_00ae5783(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  *(byte *)(unaff_EBP + -0x2c8) = *(byte *)(unaff_EBP + -0x2c8) & 0xfe;
  if (DAT_010cbbb8 != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if (cVar1 == -1) {
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    }
    else {
      if (cVar1 != -2) {
        if (cVar1 == '\0') {
          return;
        }
        *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
        goto LAB_00ae586f;
      }
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
      if (uVar2 == 0) {
        *(undefined4 *)(unaff_EBP + -0x8e) = 4;
        in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
        if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
          in_ST0 = in_ST0 * (float10)0.0;
        }
        goto LAB_00ae586f;
      }
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.7976931348623157e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_00ae586f;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_00ae586f:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  __87except((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),(int *)(unaff_EBP + -0x8e),
             (ushort *)(unaff_EBP + -0xa4));
  return;
}


//// FUNCTION FUN_00ae578a @ 00ae578a ////

void FUN_00ae578a(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  if (DAT_010cbbb8 != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if (cVar1 == -1) {
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    }
    else {
      if (cVar1 != -2) {
        if (cVar1 == '\0') {
          return;
        }
        *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
        goto LAB_00ae586f;
      }
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
      if (uVar2 == 0) {
        *(undefined4 *)(unaff_EBP + -0x8e) = 4;
        in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
        if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
          in_ST0 = in_ST0 * (float10)0.0;
        }
        goto LAB_00ae586f;
      }
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.7976931348623157e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_00ae586f;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_00ae586f:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  __87except((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),(int *)(unaff_EBP + -0x8e),
             (ushort *)(unaff_EBP + -0xa4));
  return;
}


//// FUNCTION __ctrandisp1 @ 00ae58d1 ////

/* Library Function - Single Match
    __ctrandisp1
   
   Library: Visual Studio */

void __cdecl __ctrandisp1(uint param_1,int param_2)

{
  undefined4 extraout_ECX;
  int extraout_EDX;
  
  __fload(param_1,param_2);
  __trandisp1(extraout_ECX,extraout_EDX);
  FUN_00ae5783();
  return;
}


//// FUNCTION __fload @ 00ae5904 ////

/* Library Function - Single Match
    __fload
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

float10 __cdecl __fload(uint param_1,int param_2)

{
  float10 fVar1;
  
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    fVar1 = (float10)CONCAT28(param_2._2_2_ | 0x7fff,
                              CONCAT44(param_2 << 0xb | param_1 >> 0x15,param_1));
  }
  else {
    fVar1 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  return fVar1;
}


//// FUNCTION FUN_00ae6146 @ 00ae6146 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00ae6146(undefined4 param_1,uint param_2,ushort param_3)

{
  undefined4 in_EAX;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 in_stack_0000001c;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  ushort in_stack_00000024;
  
  if ((((((CONCAT22(param_3,param_2._2_2_) ^ 0x700) & 0x700) == 0) &&
       ((&DAT_00e9aaac)[(param_2._2_2_ & 0x7800) >> 0xb] != '\0')) && ((param_3 & 0x7fff) != 0x7fff)
      ) && ((((in_stack_00000024 & 0x7fff) != 0 && ((in_stack_00000024 & 0x7fff) != 0x7fff)) &&
            (((CONCAT22(in_stack_00000022,in_stack_00000020) & 0x7fffffff) == 0 &&
             ((param_2 & 0x7fffffff) == 0)))))) {
    if ((ushort)((param_3 & 0x7fff) + 0x3f) < (in_stack_00000024 & 0x7fff)) {
      iVar1 = ((in_stack_00000024 & 0x7fff) - (param_3 & 0x7fff) & 0x3f | 0x20) + 1;
      fVar3 = ABS((float10)CONCAT28(in_stack_00000024 & 0x7fff | param_3 & 0x8000,
                                    CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))));
      fVar2 = ABS((float10)CONCAT28(in_stack_00000024,
                                    CONCAT26(in_stack_00000022,
                                             CONCAT24(in_stack_00000020,in_stack_0000001c))));
      do {
        if (fVar3 <= fVar2) {
          fVar2 = fVar2 - fVar3;
        }
        fVar3 = fVar3 * (float10)_DAT_00e9aadc;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else {
      while (-1 < (int)((in_stack_00000024 & 0x7fff) - ((param_3 & 0x7fff) + 10))) {
        fVar2 = (float10)CONCAT28(in_stack_00000024,
                                  CONCAT26(in_stack_00000022,
                                           CONCAT24(in_stack_00000020,in_stack_0000001c)));
        fVar3 = (float10)CONCAT28((in_stack_00000024 & 0x7fff) -
                                  ((in_stack_00000024 & 0x7fff) - param_3 & 7 | 4) |
                                  param_3 & 0x8000,
                                  CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)));
        fVar2 = fVar2 - (float10)(unkint10)(fVar2 / fVar3) * fVar3;
        in_stack_0000001c = SUB104(fVar2,0);
        in_stack_00000020 = (undefined2)((unkuint10)fVar2 >> 0x20);
        in_stack_00000022 = (undefined2)((unkuint10)fVar2 >> 0x30);
        in_stack_00000024 = (ushort)((unkuint10)fVar2 >> 0x40);
      }
    }
  }
  return in_EAX;
}


//// FUNCTION FUN_00ae634c @ 00ae634c ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00ae634c(void)

{
  float10 in_ST0;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 in_ST1;
  uint uVar2;
  float10 fVar1;
  
  uVar2 = (uint)((unkuint10)in_ST1 >> 0x20);
  if (((uint)((unkuint10)in_ST1 >> 0x30) & 0x7fff0000) != 0) {
    FUN_00ae6146(SUB104(in_ST1,0),uVar2,(ushort)((unkuint10)in_ST1 >> 0x40));
    return extraout_ST0;
  }
  if (SUB104(in_ST1,0) != 0 || uVar2 != 0) {
    fVar1 = in_ST1 * (float10)_DAT_00e9aac4;
    FUN_00ae6146(SUB104(fVar1,0),(uint)((unkuint10)fVar1 >> 0x20),(ushort)((unkuint10)fVar1 >> 0x40)
                );
    return extraout_ST0_00;
  }
  return in_ST0 - (float10)(unkint10)(in_ST0 / in_ST1) * in_ST1;
}


//// FUNCTION __write_lk @ 00ae66cb ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __write_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __write_lk(uint param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  WINBOOL WVar4;
  int *piVar5;
  ulong *puVar6;
  uint uVar7;
  int iVar8;
  DWORD local_424;
  int local_420;
  DWORD local_41c;
  char *local_418;
  int local_414;
  ulong local_410;
  char local_40c [1028];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  local_41c = 0;
  local_420 = 0;
  if (param_3 == 0) {
    return 0;
  }
  piVar5 = &DAT_010daa80 + ((int)param_1 >> 5);
  iVar8 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)(*piVar5 + 4 + iVar8) & 0x20) != 0) {
    __lseeki64_lk(param_1,0,0,2);
  }
  if ((*(byte *)((undefined4 *)(*piVar5 + iVar8) + 1) & 0x80) == 0) {
    WVar4 = WriteFile(*(HANDLE *)(*piVar5 + iVar8),param_2,param_3,&local_424,(LPOVERLAPPED)0x0);
    if (WVar4 == 0) {
      local_410 = GetLastError();
    }
    else {
      local_410 = 0;
      local_41c = local_424;
    }
LAB_00ae67e7:
    if (local_41c != 0) {
      return local_41c - local_420;
    }
    if (local_410 != 0) {
      if (local_410 == 5) {
        piVar5 = FUN_00ad4b6c();
        *piVar5 = 9;
        puVar6 = FUN_00ad4b75();
        *puVar6 = 5;
        return -1;
      }
      __dosmaperr(local_410);
      return -1;
    }
  }
  else {
    local_418 = param_2;
    local_410 = 0;
    if (param_3 != 0) {
      do {
        uVar7 = (int)local_418 - (int)param_2;
        pcVar3 = local_40c;
        local_414 = 0;
        do {
          if (param_3 <= uVar7) break;
          pcVar1 = local_418 + 1;
          cVar2 = *local_418;
          uVar7 = uVar7 + 1;
          if (cVar2 == '\n') {
            local_420 = local_420 + 1;
            *pcVar3 = '\r';
            pcVar3 = pcVar3 + 1;
            local_414 = local_414 + 1;
          }
          *pcVar3 = cVar2;
          pcVar3 = pcVar3 + 1;
          local_414 = local_414 + 1;
          local_418 = pcVar1;
        } while (local_414 < 0x400);
        WVar4 = WriteFile(*(HANDLE *)(*piVar5 + iVar8),local_40c,(int)pcVar3 - (int)local_40c,
                          &local_424,(LPOVERLAPPED)0x0);
        if (WVar4 == 0) {
          local_410 = GetLastError();
          goto LAB_00ae67e7;
        }
        local_41c = local_41c + local_424;
        if (((int)local_424 < (int)pcVar3 - (int)local_40c) ||
           (param_3 <= (uint)((int)local_418 - (int)param_2))) goto LAB_00ae67e7;
      } while( true );
    }
  }
  if (((*(byte *)(*piVar5 + 4 + iVar8) & 0x40) != 0) && (*param_2 == '\x1a')) {
    return 0;
  }
  piVar5 = FUN_00ad4b6c();
  *piVar5 = 0x1c;
  puVar6 = FUN_00ad4b75();
  *puVar6 = 0;
  return -1;
}


//// FUNCTION __write @ 00ae6899 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2003 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  int local_20;
  
  if ((uint)_FileHandle < uNumber_010daa74) {
    iVar3 = (_FileHandle & 0x1fU) * 0x24;
    if ((*(byte *)((&DAT_010daa80)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      __lock_fhandle(_FileHandle);
      if ((*(byte *)((&DAT_010daa80)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        piVar1 = FUN_00ad4b6c();
        *piVar1 = 9;
        puVar2 = FUN_00ad4b75();
        *puVar2 = 0;
        local_20 = -1;
      }
      else {
        local_20 = __write_lk(_FileHandle,_Buf,_MaxCharCount);
      }
      FUN_00ae6920();
      return local_20;
    }
  }
  piVar1 = FUN_00ad4b6c();
  *piVar1 = 9;
  puVar2 = FUN_00ad4b75();
  *puVar2 = 0;
  return -1;
}


//// FUNCTION FUN_00ae6920 @ 00ae6920 ////

void FUN_00ae6920(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}


//// FUNCTION __lseek_lk @ 00ae6944 ////

/* Library Function - Single Match
    __lseek_lk
   
   Library: Visual Studio 2003 Release */

DWORD __cdecl __lseek_lk(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  DWORD DVar3;
  ulong uVar4;
  
  hFile = (HANDLE)__get_osfhandle(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = FUN_00ad4b6c();
    *piVar2 = 9;
    return 0xffffffff;
  }
  DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  if (DVar3 == 0xffffffff) {
    uVar4 = GetLastError();
  }
  else {
    uVar4 = 0;
  }
  if (uVar4 == 0) {
    pbVar1 = (byte *)((&DAT_010daa80)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  else {
    __dosmaperr(uVar4);
    DVar3 = 0xffffffff;
  }
  return DVar3;
}


//// FUNCTION __lseek @ 00ae69b8 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseek
   
   Library: Visual Studio 2003 Release */

long __cdecl __lseek(int _FileHandle,long _Offset,int _Origin)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  DWORD local_20;
  
  if ((uint)_FileHandle < uNumber_010daa74) {
    iVar3 = (_FileHandle & 0x1fU) * 0x24;
    if ((*(byte *)((&DAT_010daa80)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      __lock_fhandle(_FileHandle);
      if ((*(byte *)((&DAT_010daa80)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        piVar1 = FUN_00ad4b6c();
        *piVar1 = 9;
        puVar2 = FUN_00ad4b75();
        *puVar2 = 0;
        local_20 = 0xffffffff;
      }
      else {
        local_20 = __lseek_lk(_FileHandle,_Offset,_Origin);
      }
      FUN_00ae6a3f();
      return local_20;
    }
  }
  piVar1 = FUN_00ad4b6c();
  *piVar1 = 9;
  puVar2 = FUN_00ad4b75();
  *puVar2 = 0;
  return -1;
}


//// FUNCTION FUN_00ae6a3f @ 00ae6a3f ////

void FUN_00ae6a3f(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}


//// FUNCTION __filbuf @ 00ae6a63 ////

/* Library Function - Single Match
    __filbuf
   
   Library: Visual Studio 2003 Release */

int __cdecl __filbuf(FILE *_File)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar2 = _File->_flag;
  if (((uVar2 & 0x83) != 0) && ((uVar2 & 0x40) == 0)) {
    if ((uVar2 & 2) == 0) {
      _File->_flag = uVar2 | 1;
      if ((uVar2 & 0x10c) == 0) {
        __getbuf(_File);
      }
      else {
        _File->_ptr = _File->_base;
      }
      iVar3 = __read(_File->_file,_File->_base,_File->_bufsiz);
      _File->_cnt = iVar3;
      if ((iVar3 != 0) && (iVar3 != -1)) {
        if ((_File->_flag & 0x82U) == 0) {
          uVar2 = _File->_file;
          if (uVar2 == 0xffffffff) {
            puVar4 = &DAT_00e9a928;
          }
          else {
            puVar4 = (undefined *)((&DAT_010daa80)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
          }
          if ((puVar4[4] & 0x82) == 0x82) {
            _File->_flag = _File->_flag | 0x2000;
          }
        }
        if (((_File->_bufsiz == 0x200) && ((_File->_flag & 8U) != 0)) &&
           ((_File->_flag & 0x400U) == 0)) {
          _File->_bufsiz = 0x1000;
        }
        _File->_cnt = iVar3 + -1;
        bVar1 = *_File->_ptr;
        _File->_ptr = _File->_ptr + 1;
        return (uint)bVar1;
      }
      _File->_flag = _File->_flag | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
      _File->_cnt = 0;
    }
    else {
      _File->_flag = uVar2 | 0x20;
    }
  }
  return -1;
}


//// FUNCTION __read_lk @ 00ae6b44 ////

/* Library Function - Single Match
    __read_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __read_lk(uint param_1,char *param_2,char *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  WINBOOL WVar5;
  DWORD DVar6;
  int *piVar7;
  ulong *puVar8;
  char *pcVar9;
  int iVar10;
  DWORD local_10;
  char *local_c;
  char local_5;
  
  local_c = (char *)0x0;
  if (param_3 != (char *)0x0) {
    piVar7 = &DAT_010daa80 + ((int)param_1 >> 5);
    iVar10 = (param_1 & 0x1f) * 0x24;
    bVar3 = *(byte *)(*piVar7 + iVar10 + 4);
    if ((bVar3 & 2) == 0) {
      pcVar9 = param_2;
      if (((bVar3 & 0x48) != 0) && (*(char *)(*piVar7 + iVar10 + 5) != '\n')) {
        param_3 = param_3 + -1;
        *param_2 = *(char *)(*piVar7 + 5 + iVar10);
        pcVar9 = param_2 + 1;
        local_c = (char *)0x1;
        *(undefined1 *)(*piVar7 + 5 + iVar10) = 10;
      }
      WVar5 = ReadFile(*(HANDLE *)(*piVar7 + iVar10),pcVar9,(DWORD)param_3,&local_10,
                       (LPOVERLAPPED)0x0);
      if (WVar5 == 0) {
        DVar6 = GetLastError();
        if (DVar6 == 5) {
          piVar7 = FUN_00ad4b6c();
          *piVar7 = 9;
          puVar8 = FUN_00ad4b75();
          *puVar8 = 5;
        }
        else {
          if (DVar6 == 0x6d) {
            return 0;
          }
          __dosmaperr(DVar6);
        }
        return -1;
      }
      if ((*(byte *)(*piVar7 + 4 + iVar10) & 0x80) == 0) {
        return (int)local_c + local_10;
      }
      if ((local_10 == 0) || (*param_2 != '\n')) {
        pbVar1 = (byte *)(*piVar7 + 4 + iVar10);
        *pbVar1 = *pbVar1 & 0xfb;
      }
      else {
        pbVar1 = (byte *)(*piVar7 + 4 + iVar10);
        *pbVar1 = *pbVar1 | 4;
      }
      local_c = param_2 + (int)local_c + local_10;
      param_3 = param_2;
      pcVar9 = param_2;
      if (param_2 < local_c) {
        do {
          cVar4 = *param_3;
          if (cVar4 == '\x1a') {
            if ((*(byte *)(*piVar7 + 4 + iVar10) & 0x40) == 0) {
              pbVar1 = (byte *)(*piVar7 + 4 + iVar10);
              *pbVar1 = *pbVar1 | 2;
            }
            break;
          }
          if (cVar4 == '\r') {
            if (param_3 < local_c + -1) {
              if (param_3[1] == '\n') {
                pcVar2 = param_3 + 2;
                goto LAB_00ae6cd1;
              }
LAB_00ae6ceb:
              param_3 = param_3 + 1;
              *pcVar9 = '\r';
            }
            else {
              pcVar2 = param_3 + 1;
              WVar5 = ReadFile(*(HANDLE *)(*piVar7 + iVar10),&local_5,1,&local_10,(LPOVERLAPPED)0x0)
              ;
              if (((WVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0))
              goto LAB_00ae6ceb;
              if ((*(byte *)(*piVar7 + 4 + iVar10) & 0x48) == 0) {
                if ((pcVar9 == param_2) && (local_5 == '\n')) goto LAB_00ae6cd1;
                __lseek_lk(param_1,-1,1);
                if (local_5 == '\n') goto LAB_00ae6cef;
                goto LAB_00ae6ceb;
              }
              if (local_5 == '\n') {
LAB_00ae6cd1:
                param_3 = pcVar2;
                *pcVar9 = '\n';
              }
              else {
                *pcVar9 = '\r';
                *(char *)(*piVar7 + 5 + iVar10) = local_5;
                param_3 = pcVar2;
              }
            }
            pcVar9 = pcVar9 + 1;
            pcVar2 = param_3;
          }
          else {
            *pcVar9 = cVar4;
            pcVar9 = pcVar9 + 1;
            pcVar2 = param_3 + 1;
          }
LAB_00ae6cef:
          param_3 = pcVar2;
        } while (param_3 < local_c);
      }
      return (int)pcVar9 - (int)param_2;
    }
  }
  return 0;
}


//// FUNCTION __read @ 00ae6d1f ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __read
   
   Library: Visual Studio 2003 Release */

int __cdecl __read(int _FileHandle,void *_DstBuf,uint _MaxCharCount)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  int local_20;
  
  if ((uint)_FileHandle < uNumber_010daa74) {
    iVar3 = (_FileHandle & 0x1fU) * 0x24;
    if ((*(byte *)((&DAT_010daa80)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      __lock_fhandle(_FileHandle);
      if ((*(byte *)((&DAT_010daa80)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        piVar1 = FUN_00ad4b6c();
        *piVar1 = 9;
        puVar2 = FUN_00ad4b75();
        *puVar2 = 0;
        local_20 = -1;
      }
      else {
        local_20 = __read_lk(_FileHandle,_DstBuf,(char *)_MaxCharCount);
      }
      FUN_00ae6da6();
      return local_20;
    }
  }
  piVar1 = FUN_00ad4b6c();
  *piVar1 = 9;
  puVar2 = FUN_00ad4b75();
  *puVar2 = 0;
  return -1;
}


//// FUNCTION FUN_00ae6da6 @ 00ae6da6 ////

void FUN_00ae6da6(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}


//// FUNCTION __NMSG_WRITE @ 00ae6dcc ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __NMSG_WRITE
   
   Library: Visual Studio 2003 Release */

void __cdecl __NMSG_WRITE(int param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  size_t sVar4;
  size_t sVar5;
  HANDLE hFile;
  int iVar6;
  uint *_Str;
  undefined1 auStackY_14c [4];
  UINT aUStackY_148 [3];
  undefined4 auStackY_13c [2];
  undefined4 uStackY_134;
  LPCVOID lpBuffer;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  uint local_110 [65];
  undefined1 local_c;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  uVar2 = 0;
  do {
    if (param_1 == (&DAT_00e9abf8)[uVar2 * 2]) break;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x13);
  iVar6 = uVar2 * 8;
  if (param_1 == (&DAT_00e9abf8)[uVar2 * 2]) {
    if ((DAT_010cbc18 == 1) || ((DAT_010cbc18 == 0 && (DAT_00e9a094 == 1)))) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = (LPDWORD)&param_1;
      sVar4 = _strlen(*(char **)(iVar6 + 0xe9abfc));
      lpBuffer = *(LPCVOID *)(iVar6 + 0xe9abfc);
      uStackY_134 = 0xae6f20;
      hFile = GetStdHandle(0xfffffff4);
      uStackY_134 = 0xae6f27;
      WriteFile(hFile,lpBuffer,sVar4,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      local_c = 0;
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_110,0x104);
      if (DVar3 == 0) {
        FUN_00ada2e0(local_110,(uint *)"<program name unknown>");
      }
      _Str = local_110;
      sVar4 = _strlen((char *)_Str);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)_Str);
        _Str = (uint *)(auStackY_14c + sVar4 + 1);
        _strncpy((char *)_Str,"...",3);
      }
      sVar4 = _strlen((char *)_Str);
      sVar5 = _strlen(*(char **)(iVar6 + 0xe9abfc));
      iVar1 = -(sVar4 + sVar5 + 0x1f & 0xfffffffc);
      *(char **)((int)local_110 + iVar1 + -0x10) = "Runtime Error!\n\nProgram: ";
      *(int *)((int)local_110 + iVar1 + -0x14) = (int)local_110 + iVar1 + -0xc;
      *(undefined4 *)((int)local_110 + iVar1 + -0x18) = 0xae6ecc;
      FUN_00ada2e0(*(uint **)((int)local_110 + iVar1 + -0x14),
                   *(uint **)((int)local_110 + iVar1 + -0x10));
      *(uint **)((int)local_110 + iVar1 + -0x18) = _Str;
      *(int *)((int)local_110 + iVar1 + -0x1c) = (int)local_110 + iVar1 + -0xc;
      *(undefined4 *)((int)local_110 + iVar1 + -0x20) = 0xae6ed3;
      FUN_00ada2f0(*(uint **)((int)local_110 + iVar1 + -0x1c),
                   *(uint **)((int)local_110 + iVar1 + -0x18));
      *(undefined **)((int)local_110 + iVar1 + -0x20) = &DAT_00d70cc0;
      *(int *)((int)&uStackY_134 + iVar1) = (int)local_110 + iVar1 + -0xc;
      *(undefined4 *)((int)auStackY_13c + iVar1 + 4) = 0xae6ede;
      FUN_00ada2f0(*(uint **)((int)&uStackY_134 + iVar1),*(uint **)((int)local_110 + iVar1 + -0x20))
      ;
      *(undefined4 *)((int)auStackY_13c + iVar1 + 4) = *(undefined4 *)(iVar6 + 0xe9abfc);
      *(int *)((int)auStackY_13c + iVar1) = (int)local_110 + iVar1 + -0xc;
      *(undefined4 *)((int)aUStackY_148 + iVar1 + 8) = 0xae6eea;
      FUN_00ada2f0(*(uint **)((int)auStackY_13c + iVar1),*(uint **)((int)auStackY_13c + iVar1 + 4));
      *(undefined4 *)((int)aUStackY_148 + iVar1 + 8) = 0x12010;
      *(char **)((int)aUStackY_148 + iVar1 + 4) = "Microsoft Visual C++ Runtime Library";
      *(int *)((int)aUStackY_148 + iVar1) = (int)local_110 + iVar1 + -0xc;
      *(undefined4 *)(auStackY_14c + iVar1) = 0xae6efa;
      ___crtMessageBoxA(*(LPCSTR *)((int)aUStackY_148 + iVar1),
                        *(LPCSTR *)((int)aUStackY_148 + iVar1 + 4),
                        *(UINT *)((int)aUStackY_148 + iVar1 + 8));
    }
  }
  return;
}


//// FUNCTION __FF_MSGBANNER @ 00ae6f6d ////

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2003 Release */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_010cbc18 == 1) || ((DAT_010cbc18 == 0 && (DAT_00e9a094 == 1)))) {
    __NMSG_WRITE(0xfc);
    if (DAT_010cbed8 != (code *)0x0) {
      (*DAT_010cbed8)();
    }
    __NMSG_WRITE(0xff);
  }
  return;
}


//// FUNCTION __wincmdln @ 00ae6fa6 ////

/* Library Function - Single Match
    __wincmdln
   
   Library: Visual Studio 2003 Release */

byte * __wincmdln(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  
  bVar2 = false;
  if (DAT_010dbe30 == 0) {
    ___initmbctable();
  }
  pbVar4 = DAT_010dae00;
  if (DAT_010dae00 == (byte *)0x0) {
    pbVar4 = &lpClass_00d16914;
  }
  do {
    bVar1 = *pbVar4;
    if (bVar1 < 0x21) {
      if (bVar1 == 0) {
        return pbVar4;
      }
      if (!bVar2) {
        for (; (*pbVar4 != 0 && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
        }
        return pbVar4;
      }
    }
    if (bVar1 == 0x22) {
      bVar2 = !bVar2;
    }
    iVar3 = __ismbblead((uint)bVar1);
    if (iVar3 != 0) {
      pbVar4 = pbVar4 + 1;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}


//// FUNCTION FUN_00ae7003 @ 00ae7003 ////

undefined4 FUN_00ae7003(void)

{
  undefined4 *puVar1;
  size_t sVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  
  if (DAT_010dbe30 == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  puVar4 = DAT_010cbc10;
  if (DAT_010cbc10 != (uint *)0x0) {
    for (; (char)*puVar4 != '\0'; puVar4 = (uint *)((int)puVar4 + sVar2 + 1)) {
      if ((char)*puVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen((char *)puVar4);
    }
    puVar1 = _malloc(iVar5 * 4 + 4);
    puVar4 = DAT_010cbc10;
    DAT_010cbbe8 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if ((char)*puVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
          _free(DAT_010cbc10);
        }
        sVar2 = _strlen((char *)puVar4);
        if ((char)*puVar4 != '=') {
          puVar3 = _malloc(sVar2 + 1);
          *puVar1 = puVar3;
          if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(DAT_010cbbe8);
          }
          FUN_00ada2e0(puVar3,puVar4);
          puVar1 = puVar1 + 1;
        }
        puVar4 = (uint *)((int)puVar4 + sVar2 + 1);
      } while( true );
    }
  }
  return 0xffffffff;
}


//// FUNCTION parse_cmdline @ 00ae70ca ////

/* Library Function - Single Match
    _parse_cmdline
   
   Library: Visual Studio 2003 Release */

void __cdecl parse_cmdline(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  byte *in_EAX;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  byte *in_ECX;
  uint uVar6;
  int *unaff_ESI;
  
  bVar1 = false;
  *unaff_ESI = 0;
  *param_2 = 1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = in_ECX;
    param_1 = param_1 + 1;
  }
  do {
    if (*in_EAX == 0x22) {
      bVar1 = !bVar1;
      pbVar3 = in_EAX + 1;
      bVar5 = 0x22;
    }
    else {
      *unaff_ESI = *unaff_ESI + 1;
      if (in_ECX != (byte *)0x0) {
        *in_ECX = *in_EAX;
        in_ECX = in_ECX + 1;
      }
      bVar5 = *in_EAX;
      pbVar3 = in_EAX + 1;
      if (((&DAT_010daba1)[bVar5] & 4) != 0) {
        *unaff_ESI = *unaff_ESI + 1;
        if (in_ECX != (byte *)0x0) {
          *in_ECX = *pbVar3;
          in_ECX = in_ECX + 1;
        }
        pbVar3 = in_EAX + 2;
      }
      if (bVar5 == 0) {
        pbVar3 = pbVar3 + -1;
        goto LAB_00ae7143;
      }
    }
    in_EAX = pbVar3;
  } while ((bVar1) || ((bVar5 != 0x20 && (bVar5 != 9))));
  if (in_ECX != (byte *)0x0) {
    in_ECX[-1] = 0;
  }
LAB_00ae7143:
  bVar1 = false;
  while (*pbVar3 != 0) {
    for (; (*pbVar3 == 0x20 || (*pbVar3 == 9)); pbVar3 = pbVar3 + 1) {
    }
    if (*pbVar3 == 0) break;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = in_ECX;
      param_1 = param_1 + 1;
    }
    *param_2 = *param_2 + 1;
    while( true ) {
      bVar2 = true;
      uVar6 = 0;
      for (; *pbVar3 == 0x5c; pbVar3 = pbVar3 + 1) {
        uVar6 = uVar6 + 1;
      }
      if (*pbVar3 == 0x22) {
        pbVar4 = pbVar3;
        if ((uVar6 & 1) == 0) {
          if ((!bVar1) || (pbVar4 = pbVar3 + 1, *pbVar4 != 0x22)) {
            bVar2 = false;
            pbVar4 = pbVar3;
          }
          bVar1 = !bVar1;
        }
        uVar6 = uVar6 >> 1;
        pbVar3 = pbVar4;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (in_ECX != (byte *)0x0) {
          *in_ECX = 0x5c;
          in_ECX = in_ECX + 1;
        }
        *unaff_ESI = *unaff_ESI + 1;
      }
      bVar5 = *pbVar3;
      if ((bVar5 == 0) || ((!bVar1 && ((bVar5 == 0x20 || (bVar5 == 9)))))) break;
      if (bVar2) {
        if (in_ECX == (byte *)0x0) {
          if (((&DAT_010daba1)[bVar5] & 4) != 0) {
            pbVar3 = pbVar3 + 1;
            *unaff_ESI = *unaff_ESI + 1;
          }
        }
        else {
          if (((&DAT_010daba1)[bVar5] & 4) != 0) {
            *in_ECX = bVar5;
            in_ECX = in_ECX + 1;
            pbVar3 = pbVar3 + 1;
            *unaff_ESI = *unaff_ESI + 1;
          }
          *in_ECX = *pbVar3;
          in_ECX = in_ECX + 1;
        }
        *unaff_ESI = *unaff_ESI + 1;
      }
      pbVar3 = pbVar3 + 1;
    }
    if (in_ECX != (byte *)0x0) {
      *in_ECX = 0;
      in_ECX = in_ECX + 1;
    }
    *unaff_ESI = *unaff_ESI + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  *param_2 = *param_2 + 1;
  return;
}


//// FUNCTION __setargv @ 00ae7236 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2003 Release */

int __cdecl __setargv(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int local_8;
  
  local_8 = in_ECX;
  if (DAT_010dbe30 == 0) {
    ___initmbctable();
  }
  DAT_010cbfe4 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_010cbee0,0x104);
  _DAT_010cbbf8 = &DAT_010cbee0;
  parse_cmdline((undefined4 *)0x0,&local_8);
  puVar1 = _malloc(in_ECX + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = -1;
  }
  else {
    parse_cmdline(puVar1,&local_8);
    _DAT_010cbbdc = local_8 + -1;
    iVar2 = 0;
    _DAT_010cbbe0 = puVar1;
  }
  return iVar2;
}


//// FUNCTION FUN_00ae72d8 @ 00ae72d8 ////

LPSTR FUN_00ae72d8(void)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  WCHAR *pWVar4;
  int iVar6;
  size_t _Size;
  LPSTR lpMultiByteStr;
  LPCH penv;
  char *pcVar7;
  LPSTR _Dst;
  LPSTR pCVar9;
  LPWCH lpWideCharStr;
  WCHAR *pWVar5;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  if (DAT_010cbfe8 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_010cbfe8 = 1;
      goto LAB_00ae7326;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_010cbfe8 = 2;
    }
  }
  if (DAT_010cbfe8 != 1) {
    if ((DAT_010cbfe8 != 2) && (DAT_010cbfe8 != 0)) {
      return (LPSTR)0x0;
    }
    penv = GetEnvironmentStrings();
    if (penv == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    cVar1 = *penv;
    pcVar7 = penv;
    while (cVar1 != '\0') {
      do {
        pcVar8 = pcVar7;
        pcVar7 = pcVar8 + 1;
      } while (*pcVar7 != '\0');
      pcVar7 = pcVar8 + 2;
      cVar1 = *pcVar7;
    }
    _Dst = _malloc((size_t)(pcVar7 + (1 - (int)penv)));
    if (_Dst == (LPSTR)0x0) {
      _Dst = (LPSTR)0x0;
    }
    else {
      _memcpy(_Dst,penv,(size_t)(pcVar7 + (1 - (int)penv)));
    }
    FreeEnvironmentStringsA(penv);
    return _Dst;
  }
LAB_00ae7326:
  if ((lpWideCharStr == (LPWCH)0x0) &&
     (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
    return (LPSTR)0x0;
  }
  WVar2 = *lpWideCharStr;
  pWVar4 = lpWideCharStr;
  while (WVar2 != L'\0') {
    do {
      pWVar5 = pWVar4;
      pWVar4 = pWVar5 + 1;
    } while (*pWVar4 != L'\0');
    pWVar4 = pWVar5 + 2;
    WVar2 = *pWVar4;
  }
  iVar6 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
  _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,(LPSTR)0x0,0,(LPCCH)0x0,(LPBOOL)0x0);
  pCVar9 = (LPSTR)0x0;
  if (((_Size != 0) && (lpMultiByteStr = _malloc(_Size), lpMultiByteStr != (LPSTR)0x0)) &&
     (iVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,lpMultiByteStr,_Size,(LPCCH)0x0,
                                  (LPBOOL)0x0), pCVar9 = lpMultiByteStr, iVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    _free(lpMultiByteStr);
  }
  FreeEnvironmentStringsW(lpWideCharStr);
  return pCVar9;
}


//// FUNCTION ___security_init_cookie @ 00ae73fa ////

/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2003 Release */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  if ((DAT_00e9a098 == 0) || (DAT_00e9a098 == 0xbb40e64e)) {
    GetSystemTimeAsFileTime(&local_c);
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_00e9a098 = local_c.dwHighDateTime ^ local_c.dwLowDateTime ^ DVar1 ^ DVar2 ^ DVar3 ^
                   local_14.field0.HighPart ^ local_14.field0.LowPart;
    if (DAT_00e9a098 == 0) {
      DAT_00e9a098 = 0xbb40e64e;
    }
  }
  return;
}


//// FUNCTION ___security_error_handler @ 00ae7460 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___security_error_handler
   
   Library: Visual Studio 2003 Release */

void ___security_error_handler(int param_1)

{
  DWORD DVar1;
  size_t sVar2;
  uint *_Str;
  char *pcVar3;
  uint *local_12c;
  uint local_128 [65];
  undefined1 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00d83880;
  uStack_c = 0xae746f;
  local_20 = DAT_00e9a098;
  if (DAT_010cbfec == (code *)0x0) {
    if (param_1 == 1) {
      pcVar3 = "Buffer overrun detected!";
      local_12c = (uint *)0xd836e8;
    }
    else {
      pcVar3 = "Unknown security failure detected!";
      local_12c = (uint *)0xd837a8;
    }
    local_24 = 0;
    DVar1 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_128,0x104);
    if (DVar1 == 0) {
      FUN_00ada2e0(local_128,(uint *)"<program name unknown>");
    }
    _Str = local_128;
    sVar2 = _strlen((char *)_Str);
    if (0x3c < sVar2 + 0xb) {
      sVar2 = _strlen((char *)_Str);
      _Str = (uint *)(&stack0xfffffea7 + sVar2);
      _strncpy((char *)_Str,"...",3);
    }
    _strlen((char *)_Str);
    local_1c = &stack0xfffffec8;
    FUN_00ada2e0((uint *)&stack0xfffffec8,(uint *)pcVar3);
    FUN_00ada2f0((uint *)&stack0xfffffec8,(uint *)&DAT_00d70cc0);
    FUN_00ada2f0((uint *)&stack0xfffffec8,(uint *)"Program: ");
    FUN_00ada2f0((uint *)&stack0xfffffec8,_Str);
    FUN_00ada2f0((uint *)&stack0xfffffec8,(uint *)&DAT_00d70cc0);
    FUN_00ada2f0((uint *)&stack0xfffffec8,local_12c);
    ___crtMessageBoxA(&stack0xfffffec8,"Microsoft Visual C++ Runtime Library",0x12010);
  }
  else {
    local_8 = (undefined *)0x0;
    (*DAT_010cbfec)();
    local_8 = (undefined *)0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __exit(3);
}


//// FUNCTION __inc @ 00ae75ec ////

/* Library Function - Single Match
    __inc
   
   Library: Visual Studio 2003 Release */

uint __fastcall __inc(undefined4 param_1,FILE *param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = &param_2->_cnt;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *param_2->_ptr;
    param_2->_ptr = param_2->_ptr + 1;
    return (uint)bVar2;
  }
  uVar3 = __filbuf(param_2);
  return uVar3;
}


//// FUNCTION FUN_00ae762c @ 00ae762c ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00ae836a) */

int __cdecl FUN_00ae762c(FILE *param_1,byte *param_2,undefined4 *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint extraout_ECX;
  FILE *extraout_ECX_00;
  FILE *extraout_ECX_01;
  FILE *pFVar9;
  FILE *extraout_ECX_02;
  FILE *extraout_ECX_03;
  undefined4 extraout_ECX_04;
  uint extraout_ECX_05;
  byte bVar10;
  byte bVar11;
  wchar_t *pwVar12;
  byte *pbVar13;
  char *pcVar14;
  char *pcVar15;
  wchar_t *pwVar16;
  byte *pbVar17;
  bool bVar18;
  undefined4 *local_1e0;
  uint local_1d8;
  wchar_t local_1d0 [2];
  int local_1cc;
  byte local_1c8;
  undefined1 local_1c7;
  uint local_1c4;
  undefined1 *local_1c0;
  int local_1bc;
  FILE *local_1b8;
  wchar_t *local_1b4;
  undefined8 local_1b0;
  byte local_1a5;
  int local_1a4;
  int local_1a0;
  byte local_19c;
  char local_19b;
  char local_19a;
  char local_199;
  uint local_198;
  char local_192;
  char local_191;
  int local_190;
  char local_189;
  int local_188;
  char local_181;
  char local_180;
  char local_17f [351];
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00d83890;
  uStack_c = 0xae763b;
  local_20 = DAT_00e9a098;
  local_1c0 = (undefined1 *)0x0;
  local_1b4 = (wchar_t *)0x0;
  local_198 = 0;
  local_199 = '\0';
  local_188 = 0;
  local_1bc = 0;
LAB_00ae766f:
  while (*param_2 != 0) {
    uVar4 = (uint)*param_2;
    iVar5 = _isspace(uVar4);
    if (iVar5 == 0) {
      if (*param_2 != 0x25) {
        local_188 = local_188 + 1;
        uVar4 = __inc(uVar4,param_1);
        local_198 = uVar4;
        if (*param_2 != uVar4) goto LAB_00ae8328;
        pbVar17 = param_2 + 1;
        if ((PTR_DAT_00e9a2f0[(uVar4 & 0xff) * 2 + 1] & 0x80) != 0) {
          local_188 = local_188 + 1;
          uVar6 = __inc(PTR_DAT_00e9a2f0,param_1);
          if (param_2[1] != uVar6) {
            if (uVar6 != 0xffffffff) {
              __ungetc_lk(uVar6,param_1);
            }
            goto LAB_00ae8328;
          }
          local_188 = local_188 + -1;
          pbVar17 = param_2 + 2;
        }
        goto LAB_00ae8342;
      }
      iVar5 = 0;
      local_1a4 = 0;
      local_19c = 0;
      local_1a0 = 0;
      local_1b8 = (FILE *)0x0;
      local_190 = 0;
      local_1a5 = 0;
      local_19b = '\0';
      local_192 = '\0';
      local_181 = '\0';
      local_19a = '\0';
      local_189 = '\0';
      local_191 = '\x01';
      local_1cc = 0;
      pbVar17 = param_2;
      do {
        pbVar13 = pbVar17 + 1;
        uVar6 = (uint)*pbVar13;
        uVar4 = uVar6;
        iVar7 = _isdigit(uVar6);
        param_2 = pbVar13;
        if (iVar7 == 0) {
          if (uVar6 < 0x4f) {
            if (uVar6 != 0x4e) {
              if (uVar6 == 0x2a) {
                local_192 = local_192 + '\x01';
              }
              else if (uVar6 != 0x46) {
                if (uVar6 == 0x49) {
                  bVar11 = pbVar17[2];
                  uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar11);
                  if ((bVar11 == 0x36) && (pbVar17[3] == 0x34)) {
                    local_1cc = local_1cc + 1;
                    local_1b0 = 0;
                    param_2 = pbVar17 + 3;
                  }
                  else if (((bVar11 != 0x33) || (param_2 = pbVar17 + 3, *param_2 != 0x32)) &&
                          ((((param_2 = pbVar13, bVar11 != 100 && (bVar11 != 0x69)) &&
                            (bVar11 != 0x6f)) && ((bVar11 != 0x78 && (bVar11 != 0x58))))))
                  goto LAB_00ae77f6;
                }
                else if (uVar6 == 0x4c) {
                  local_191 = local_191 + '\x01';
                }
                else {
LAB_00ae77f6:
                  local_181 = local_181 + '\x01';
                  param_2 = pbVar13;
                }
              }
            }
          }
          else if (uVar6 == 0x68) {
            local_191 = local_191 + -1;
            local_189 = local_189 + -1;
          }
          else {
            if (uVar6 == 0x6c) {
              local_191 = local_191 + '\x01';
            }
            else if (uVar6 != 0x77) goto LAB_00ae77f6;
            local_189 = local_189 + '\x01';
          }
        }
        else {
          local_1b8 = (FILE *)((int)&local_1b8->_ptr + 1);
          iVar5 = (uVar6 - 0x30) + iVar5 * 10;
        }
        pbVar17 = param_2;
      } while (local_181 == '\0');
      if (local_192 == '\0') {
        local_1e0 = param_3;
        local_1b4 = (wchar_t *)*param_3;
        param_3 = param_3 + 1;
      }
      pwVar12 = local_1b4;
      local_181 = '\0';
      if ((local_189 == '\0') && ((*param_2 == 0x53 || (local_189 = -1, *param_2 == 0x43)))) {
        local_189 = '\x01';
      }
      uVar6 = *param_2 | 0x20;
      local_1c4 = uVar6;
      uVar8 = local_198;
      local_190 = iVar5;
      if (uVar6 != 0x6e) {
        if ((uVar6 == 99) || (uVar6 == 0x7b)) {
          local_188 = local_188 + 1;
          uVar8 = __inc(uVar4,param_1);
        }
        else {
          do {
            local_188 = local_188 + 1;
            uVar8 = __inc(uVar4,param_1);
            uVar4 = uVar8;
            iVar5 = _isspace(uVar8);
          } while (iVar5 != 0);
        }
      }
      local_198 = uVar8;
      pFVar9 = local_1b8;
      uVar4 = local_198;
      if ((local_1b8 == (FILE *)0x0) || (local_190 != 0)) {
        if (uVar6 < 0x70) {
          if (uVar6 == 0x6f) {
LAB_00ae7fc0:
            if (local_198 == 0x2d) {
              local_19b = '\x01';
            }
            else if (local_198 != 0x2b) goto LAB_00ae8003;
            local_190 = local_190 + -1;
            if ((local_190 == 0) && (local_1b8 != (FILE *)0x0)) {
              local_181 = '\x01';
            }
            else {
              local_188 = local_188 + 1;
              local_198 = __inc(local_1b8,param_1);
            }
            goto LAB_00ae8003;
          }
          if (uVar6 == 99) {
            if (local_1b8 == (FILE *)0x0) {
              local_1b8 = (FILE *)0x1;
              local_190 = local_190 + 1;
            }
LAB_00ae7b86:
            if ('\0' < local_189) {
              local_19a = '\x01';
            }
            goto LAB_00ae7d50;
          }
          if (uVar6 == 100) goto LAB_00ae7fc0;
          if (uVar6 < 0x65) {
LAB_00ae7bc5:
            if (*param_2 != local_198) goto LAB_00ae8328;
            local_199 = local_199 + -1;
            if (local_192 == '\0') {
              param_3 = local_1e0;
            }
            goto LAB_00ae82c0;
          }
          if (0x67 < uVar6) {
            if (uVar6 == 0x69) {
              uVar6 = 100;
              goto LAB_00ae794d;
            }
            if (uVar6 != 0x6e) goto LAB_00ae7bc5;
            iVar5 = local_188;
            if (local_192 != '\0') goto LAB_00ae82c0;
            goto LAB_00ae8294;
          }
          pcVar14 = &local_180;
          if (local_198 == 0x2d) {
            local_180 = '-';
            pcVar14 = local_17f;
LAB_00ae798c:
            local_190 = local_190 + -1;
            local_188 = local_188 + 1;
            local_198 = __inc(local_1b8,param_1);
          }
          else if (local_198 == 0x2b) goto LAB_00ae798c;
          if ((local_1b8 == (FILE *)0x0) || (0x15d < local_190)) {
            local_190 = 0x15d;
          }
          while( true ) {
            uVar4 = local_198;
            uVar6 = local_198;
            iVar5 = _isdigit(local_198);
            if ((iVar5 == 0) ||
               (iVar5 = local_190 + -1, bVar18 = local_190 == 0, local_190 = iVar5, bVar18)) break;
            local_1a0 = local_1a0 + 1;
            *pcVar14 = (char)uVar4;
            pcVar14 = pcVar14 + 1;
            local_188 = local_188 + 1;
            local_198 = __inc(uVar6,param_1);
          }
          if ((DAT_00e9a950 == (char)uVar4) &&
             (iVar5 = local_190 + -1, bVar18 = local_190 != 0, local_190 = iVar5, bVar18)) {
            local_188 = local_188 + 1;
            uVar4 = __inc(uVar6,param_1);
            *pcVar14 = DAT_00e9a950;
            while( true ) {
              pcVar14 = pcVar14 + 1;
              uVar6 = uVar4;
              local_198 = uVar4;
              iVar5 = _isdigit(uVar4);
              if ((iVar5 == 0) ||
                 (iVar5 = local_190 + -1, bVar18 = local_190 == 0, local_190 = iVar5, bVar18))
              break;
              local_1a0 = local_1a0 + 1;
              *pcVar14 = (char)uVar4;
              local_188 = local_188 + 1;
              uVar4 = __inc(uVar6,param_1);
            }
          }
          pcVar15 = pcVar14;
          if ((local_1a0 != 0) &&
             (((uVar4 == 0x65 || (uVar4 == 0x45)) &&
              (iVar5 = local_190 + -1, bVar18 = local_190 != 0, local_190 = iVar5, bVar18)))) {
            *pcVar14 = 'e';
            pcVar15 = pcVar14 + 1;
            local_188 = local_188 + 1;
            local_198 = __inc(uVar6,param_1);
            if (local_198 == 0x2d) {
              *pcVar15 = '-';
              pcVar15 = pcVar14 + 2;
LAB_00ae7ac6:
              bVar18 = local_190 != 0;
              uVar6 = extraout_ECX;
              local_190 = local_190 + -1;
              if (bVar18) goto LAB_00ae7af7;
              local_190 = 0;
            }
            else if (local_198 == 0x2b) goto LAB_00ae7ac6;
            while ((uVar4 = local_198, uVar6 = local_198, iVar5 = _isdigit(local_198), iVar5 != 0 &&
                   (iVar5 = local_190 + -1, bVar18 = local_190 != 0, local_190 = iVar5, bVar18))) {
              local_1a0 = local_1a0 + 1;
              *pcVar15 = (char)uVar4;
              pcVar15 = pcVar15 + 1;
LAB_00ae7af7:
              local_188 = local_188 + 1;
              local_198 = __inc(uVar6,param_1);
            }
          }
          local_188 = local_188 + -1;
          if (uVar4 != 0xffffffff) {
            __ungetc_lk(uVar4,param_1);
          }
          if (local_1a0 != 0) {
            if (local_192 == '\0') {
              local_1bc = local_1bc + 1;
              *pcVar15 = '\0';
              (*(code *)PTR_FUN_00e9a60c)(local_191 + -1,local_1b4,&local_180);
            }
            goto LAB_00ae82c0;
          }
        }
        else {
          if (uVar6 == 0x70) {
            local_191 = '\x01';
            goto LAB_00ae7fc0;
          }
          if (uVar6 == 0x73) goto LAB_00ae7b86;
          if (uVar6 == 0x75) goto LAB_00ae7fc0;
          if (uVar6 != 0x78) {
            if (uVar6 == 0x7b) {
              if ('\0' < local_189) {
                local_19a = '\x01';
              }
              pbVar13 = param_2 + 1;
              pbVar17 = pbVar13;
              if (*pbVar13 == 0x5e) {
                pbVar17 = param_2 + 2;
                local_1a5 = 0xff;
              }
              if (local_1c0 == (undefined1 *)0x0) {
                local_1c = &stack0xfffffe14;
                local_1c0 = &stack0xfffffe14;
                local_8 = (undefined *)0xffffffff;
              }
              puVar3 = local_1c0;
              _memset(local_1c0,0,0x20);
              pFVar9 = extraout_ECX_00;
              bVar11 = local_19c;
              if ((local_1c4 == 0x7b) && (*pbVar17 == 0x5d)) {
                puVar3[0xb] = 0x20;
                pbVar17 = pbVar17 + 1;
                bVar11 = 0x5d;
              }
LAB_00ae7d2a:
              do {
                bVar10 = *pbVar17;
                if (bVar10 == 0x5d) goto code_r0x00ae7d38;
                if ((bVar10 == 0x2d) && (bVar11 != 0)) {
                  bVar2 = pbVar17[1];
                  pFVar9 = (FILE *)CONCAT31((int3)((uint)pFVar9 >> 8),bVar2);
                  if (bVar2 != 0x5d) {
                    bVar10 = bVar2;
                    if (bVar11 < bVar2) {
                      bVar10 = bVar11;
                      bVar11 = bVar2;
                    }
                    if (bVar10 <= bVar11) {
                      uVar4 = (uint)bVar10;
                      local_1d8 = (uint)(byte)((bVar11 - bVar10) + 1);
                      do {
                        pFVar9 = (FILE *)(uVar4 & 7);
                        puVar3[uVar4 >> 3] = puVar3[uVar4 >> 3] | '\x01' << (sbyte)pFVar9;
                        uVar4 = uVar4 + 1;
                        local_1d8 = local_1d8 - 1;
                      } while (local_1d8 != 0);
                    }
                    pbVar17 = pbVar17 + 2;
                    bVar11 = 0;
                    goto LAB_00ae7d2a;
                  }
                }
                local_19c = bVar10;
                pFVar9 = (FILE *)(bVar10 & 7);
                puVar3[bVar10 >> 3] = puVar3[bVar10 >> 3] | '\x01' << (sbyte)pFVar9;
                pbVar17 = pbVar17 + 1;
                bVar11 = local_19c;
              } while( true );
            }
            goto LAB_00ae7bc5;
          }
LAB_00ae794d:
          if (local_198 == 0x2d) {
            local_19b = '\x01';
LAB_00ae7e73:
            local_190 = local_190 + -1;
            if ((local_190 == 0) && (local_1b8 != (FILE *)0x0)) {
              local_181 = '\x01';
            }
            else {
              local_188 = local_188 + 1;
              local_198 = __inc(local_1b8,param_1);
              pFVar9 = extraout_ECX_03;
            }
          }
          else if (local_198 == 0x2b) goto LAB_00ae7e73;
          if (local_198 == 0x30) {
            local_188 = local_188 + 1;
            local_198 = __inc(pFVar9,param_1);
            if (((char)local_198 == 'x') || ((char)local_198 == 'X')) {
              local_188 = local_188 + 1;
              local_198 = __inc(extraout_ECX_04,param_1);
              if ((local_1b8 != (FILE *)0x0) && (local_190 = local_190 + -2, local_190 < 1)) {
                local_181 = local_181 + '\x01';
              }
              uVar6 = 0x78;
            }
            else {
              local_1a0 = 1;
              if (uVar6 == 0x78) {
                local_188 = local_188 + -1;
                if (local_198 != 0xffffffff) {
                  __ungetc_lk(local_198,param_1);
                }
                local_198 = 0x30;
              }
              else {
                if ((local_1b8 != (FILE *)0x0) && (local_190 = local_190 + -1, local_190 == 0)) {
                  local_181 = local_181 + '\x01';
                }
                uVar6 = 0x6f;
              }
            }
          }
LAB_00ae8003:
          uVar4 = local_198;
          if (local_1cc == 0) {
            while (local_181 == '\0') {
              uVar8 = uVar4;
              if ((uVar6 == 0x78) || (uVar6 == 0x70)) {
                iVar5 = _isxdigit(uVar4);
                if (iVar5 != 0) {
                  local_1a4 = local_1a4 << 4;
                  uVar8 = uVar4;
                  iVar5 = _isdigit(uVar4);
                  if (iVar5 == 0) {
                    uVar4 = (uVar4 & 0xffffffdf) - 7;
                  }
                  goto LAB_00ae81e0;
                }
LAB_00ae81da:
                local_181 = local_181 + '\x01';
              }
              else {
                iVar5 = _isdigit(uVar4);
                if (iVar5 == 0) goto LAB_00ae81da;
                if (uVar6 == 0x6f) {
                  if (0x37 < (int)uVar4) goto LAB_00ae81da;
                  local_1a4 = local_1a4 << 3;
                }
                else {
                  local_1a4 = local_1a4 * 10;
                }
              }
LAB_00ae81e0:
              if (local_181 == '\0') {
                local_1a0 = local_1a0 + 1;
                local_1a4 = local_1a4 + -0x30 + uVar4;
                if ((local_1b8 == (FILE *)0x0) || (local_190 = local_190 + -1, local_190 != 0)) {
                  local_188 = local_188 + 1;
                  uVar4 = __inc(uVar8,param_1);
                }
                else {
                  local_181 = '\x01';
                }
              }
              else {
                local_188 = local_188 + -1;
                if (uVar4 != 0xffffffff) {
                  __ungetc_lk(uVar4,param_1);
                }
              }
            }
            local_198 = uVar4;
            if (local_19b != '\0') {
              local_1a4 = -local_1a4;
            }
          }
          else {
            while (local_181 == '\0') {
              uVar8 = uVar4;
              if ((uVar6 == 0x78) || (uVar6 == 0x70)) {
                iVar5 = _isxdigit(uVar4);
                if (iVar5 != 0) {
                  local_1b0 = CONCAT44(local_1b0._4_4_ << 4 | (uint)local_1b0 >> 0x1c,
                                       (uint)local_1b0 << 4);
                  uVar8 = uVar4;
                  iVar5 = _isdigit(uVar4);
                  if (iVar5 == 0) {
                    uVar4 = (uVar4 & 0xffffffdf) - 7;
                  }
                  goto LAB_00ae80cb;
                }
LAB_00ae80c5:
                local_181 = local_181 + '\x01';
              }
              else {
                iVar5 = _isdigit(uVar4);
                if (iVar5 == 0) goto LAB_00ae80c5;
                if (uVar6 == 0x6f) {
                  if (0x37 < (int)uVar4) goto LAB_00ae80c5;
                  uVar8 = local_1b0._4_4_ << 3 | (uint)local_1b0 >> 0x1d;
                  local_1b0 = CONCAT44(uVar8,(uint)local_1b0 << 3);
                }
                else {
                  local_1b0 = __allmul((uint)local_1b0,local_1b0._4_4_,10,0);
                  uVar8 = extraout_ECX_05;
                }
              }
LAB_00ae80cb:
              if (local_181 == '\0') {
                local_1a0 = local_1a0 + 1;
                uVar1 = uVar4 - 0x30;
                local_1b0 = CONCAT44(local_1b0._4_4_ + ((int)uVar1 >> 0x1f) +
                                     (uint)CARRY4((uint)local_1b0,uVar1),(uint)local_1b0 + uVar1);
                if ((local_1b8 == (FILE *)0x0) || (local_190 = local_190 + -1, local_190 != 0)) {
                  local_188 = local_188 + 1;
                  uVar4 = __inc(uVar8,param_1);
                }
                else {
                  local_181 = '\x01';
                }
              }
              else {
                local_188 = local_188 + -1;
                if (uVar4 != 0xffffffff) {
                  __ungetc_lk(uVar4,param_1);
                }
              }
            }
            local_198 = uVar4;
            if (local_19b != '\0') {
              local_1b0._4_4_ = (int)((ulonglong)local_1b0 >> 0x20);
              local_1b0 = CONCAT44(-(local_1b0._4_4_ + (uint)((uint)local_1b0 != 0)),
                                   -(uint)local_1b0);
            }
          }
          if (uVar6 == 0x46) {
            local_1a0 = 0;
          }
          if (local_1a0 != 0) {
            if (local_192 == '\0') {
              local_1bc = local_1bc + 1;
              iVar5 = local_1a4;
              pwVar12 = local_1b4;
LAB_00ae8294:
              if (local_1cc == 0) {
                if (local_191 == '\0') {
                  *pwVar12 = (wchar_t)iVar5;
                }
                else {
                  *(int *)pwVar12 = iVar5;
                }
              }
              else {
                *(uint *)pwVar12 = (uint)local_1b0;
                *(int *)(pwVar12 + 2) = local_1b0._4_4_;
              }
            }
            goto LAB_00ae82c0;
          }
        }
      }
      else {
LAB_00ae8328:
        if (uVar4 != 0xffffffff) {
          __ungetc_lk(local_198,param_1);
        }
      }
      break;
    }
    local_188 = local_188 + -1;
    do {
      local_188 = local_188 + 1;
      uVar6 = __inc(uVar4,param_1);
      uVar4 = uVar6;
      iVar5 = _isspace(uVar6);
    } while (iVar5 != 0);
    if (uVar6 != 0xffffffff) {
      __ungetc_lk(uVar6,param_1);
    }
    do {
      param_2 = param_2 + 1;
      iVar5 = _isspace((uint)*param_2);
    } while (iVar5 != 0);
  }
  goto LAB_00ae8361;
code_r0x00ae7d38:
  pwVar12 = local_1b4;
  uVar6 = local_1c4;
  param_2 = pbVar13;
  if (local_1c4 == 0x7b) {
    param_2 = pbVar17;
  }
LAB_00ae7d50:
  local_188 = local_188 + -1;
  pwVar16 = pwVar12;
  if (local_198 != 0xffffffff) {
    pFVar9 = param_1;
    __ungetc_lk(local_198,param_1);
  }
  while( true ) {
    if ((local_1b8 != (FILE *)0x0) &&
       (iVar5 = local_190 + -1, bVar18 = local_190 == 0, local_190 = iVar5, bVar18))
    goto LAB_00ae7f71;
    local_188 = local_188 + 1;
    local_198 = __inc(pFVar9,param_1);
    if ((local_198 == 0xffffffff) ||
       ((bVar11 = (byte)local_198, pFVar9 = extraout_ECX_01, uVar6 != 99 &&
        (((uVar6 != 0x73 ||
          (((8 < (int)local_198 && ((int)local_198 < 0xe)) || (local_198 == 0x20)))) &&
         ((uVar6 != 0x7b ||
          (pFVar9 = (FILE *)(int)(char)(local_1c0[(int)local_198 >> 3] ^ local_1a5),
          uVar6 = local_1c4, ((uint)pFVar9 & 1 << (bVar11 & 7)) == 0)))))))) break;
    if (local_192 == '\0') {
      if (local_19a == '\0') {
        *(byte *)pwVar12 = bVar11;
        pwVar12 = (wchar_t *)((int)pwVar12 + 1);
        local_1b4 = pwVar12;
      }
      else {
        local_1c8 = bVar11;
        if ((PTR_DAT_00e9a2f0[(local_198 & 0xff) * 2 + 1] & 0x80) != 0) {
          local_188 = local_188 + 1;
          uVar4 = __inc(PTR_DAT_00e9a2f0,param_1);
          local_1c7 = (undefined1)uVar4;
        }
        _mbtowc(local_1d0,(char *)&local_1c8,cbMultiByte_00e9a94c);
        *pwVar12 = local_1d0[0];
        pwVar12 = pwVar12 + 1;
        pFVar9 = extraout_ECX_02;
        local_1b4 = pwVar12;
      }
    }
    else {
      pwVar16 = (wchar_t *)((int)pwVar16 + 1);
    }
  }
  local_188 = local_188 + -1;
  if (local_198 != 0xffffffff) {
    __ungetc_lk(local_198,param_1);
  }
LAB_00ae7f71:
  if (pwVar16 == pwVar12) {
LAB_00ae8361:
    if ((local_198 == 0xffffffff) && ((local_1bc == 0 && (local_199 == '\0')))) {
      local_1bc = -1;
    }
    return local_1bc;
  }
  if ((local_192 == '\0') && (local_1bc = local_1bc + 1, local_1c4 != 99)) {
    if (local_19a == '\0') {
      *(byte *)local_1b4 = 0;
    }
    else {
      *local_1b4 = L'\0';
    }
  }
LAB_00ae82c0:
  local_199 = local_199 + '\x01';
  pbVar17 = param_2 + 1;
LAB_00ae8342:
  param_2 = pbVar17;
  if ((local_198 == 0xffffffff) && ((*param_2 != 0x25 || (param_2[1] != 0x6e)))) goto LAB_00ae8361;
  goto LAB_00ae766f;
}


//// FUNCTION __aulldvrm @ 00ae83b0 ////

/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio 2003 Release */

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT14((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar9) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


//// FUNCTION __ValidateEH3RN @ 00ae8445 ////

/* Library Function - Single Match
    __ValidateEH3RN
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __ValidateEH3RN(void *param_1)

{
  uint *puVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  uint *puVar5;
  SIZE_T SVar6;
  int *piVar7;
  LONG LVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  _MEMORY_BASIC_INFORMATION local_24;
  void *local_8;
  
  pvVar4 = param_1;
  puVar9 = *(uint **)((int)param_1 + 8);
  if ((((uint)puVar9 & 3) != 0) ||
     ((local_8 = StackLimit, StackLimit <= puVar9 && (puVar9 < StackBase)))) {
    return 0;
  }
  puVar1 = (uint *)((int)param_1 + 0xc);
  if (*puVar1 == 0xffffffff) {
    return 1;
  }
  uVar11 = 0;
  param_1 = (void *)0x0;
  puVar5 = puVar9;
  do {
    if ((*puVar5 != 0xffffffff) && (uVar11 <= *puVar5)) {
      return 0;
    }
    if (puVar5[1] != 0) {
      param_1 = (void *)((int)param_1 + 1);
    }
    uVar11 = uVar11 + 1;
    puVar5 = puVar5 + 3;
  } while (uVar11 <= *puVar1);
  if ((param_1 != (void *)0x0) &&
     ((pvVar2 = *(void **)((int)pvVar4 + -8), pvVar2 < StackLimit || (pvVar4 <= pvVar2)))) {
    return 0;
  }
  uVar11 = (uint)puVar9 & 0xfffff000;
  iVar14 = 0;
  if (0 < DAT_010cbff0) {
    do {
      if ((&DAT_010cbff8)[iVar14] == uVar11) {
        if (iVar14 < 1) {
          return 1;
        }
        LVar8 = InterlockedExchange((LONG *)&Target_010cc038,1);
        if (LVar8 != 0) {
          return 1;
        }
        if ((&DAT_010cbff8)[iVar14] == uVar11) goto LAB_00ae8640;
        iVar14 = DAT_010cbff0 + -1;
        if (iVar14 < 0) goto LAB_00ae862e;
        goto LAB_00ae861e;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < DAT_010cbff0);
  }
  SVar6 = VirtualQuery(puVar9,&local_24,0x1c);
  if (SVar6 == 0) {
    return 0xffffffff;
  }
  if (local_24.Type != 0x1000000) {
    return 0xffffffff;
  }
  if (((byte)local_24.Protect & 0xcc) != 0) {
    if (((*(short *)local_24.AllocationBase != 0x5a4d) ||
        (piVar7 = (int *)(*(int *)((int)local_24.AllocationBase + 0x3c) +
                         (int)local_24.AllocationBase), *piVar7 != 0x4550)) ||
       ((short)piVar7[6] != 0x10b)) {
      return 0xffffffff;
    }
    uVar10 = (uint)*(ushort *)(piVar7 + 5);
    if (*(short *)((int)piVar7 + 6) == 0) {
      return 0xffffffff;
    }
    uVar3 = *(uint *)((int)piVar7 + uVar10 + 0x24);
    if (((uVar3 <= (uint)((int)puVar9 - (int)local_24.AllocationBase)) &&
        ((uint)((int)puVar9 - (int)local_24.AllocationBase) <
         *(int *)((int)piVar7 + uVar10 + 0x20) + uVar3)) &&
       ((*(byte *)((int)piVar7 + uVar10 + 0x3f) & 0x80) != 0)) {
      return 0;
    }
  }
  LVar8 = InterlockedExchange((LONG *)&Target_010cc038,1);
  iVar14 = DAT_010cbff0;
  if (LVar8 != 0) {
    return 1;
  }
  iVar12 = DAT_010cbff0;
  if (0 < DAT_010cbff0) {
    puVar9 = (uint *)(&DAT_010cbff4 + DAT_010cbff0 * 4);
    do {
      if (*puVar9 == uVar11) break;
      iVar12 = iVar12 + -1;
      puVar9 = puVar9 + -1;
    } while (0 < iVar12);
  }
  if (iVar12 == 0) {
    iVar12 = 0xf;
    if (DAT_010cbff0 < 0x10) {
      iVar12 = DAT_010cbff0;
    }
    iVar13 = 0;
    if (-1 < iVar12) {
      do {
        puVar9 = &DAT_010cbff8 + iVar13;
        uVar10 = *puVar9;
        iVar13 = iVar13 + 1;
        *puVar9 = uVar11;
        uVar11 = uVar10;
      } while (iVar13 <= iVar12);
    }
    if (iVar14 < 0x10) {
      DAT_010cbff0 = iVar14 + 1;
    }
  }
  InterlockedExchange((LONG *)&Target_010cc038,0);
  return 1;
  while (iVar14 = iVar14 + -1, -1 < iVar14) {
LAB_00ae861e:
    if ((&DAT_010cbff8)[iVar14] == uVar11) break;
  }
  if (iVar14 < 0) {
LAB_00ae862e:
    if (DAT_010cbff0 < 0x10) {
      DAT_010cbff0 = DAT_010cbff0 + 1;
    }
    iVar14 = DAT_010cbff0 + -1;
  }
  else if (iVar14 == 0) goto LAB_00ae8658;
LAB_00ae8640:
  iVar12 = 0;
  if (-1 < iVar14) {
    do {
      puVar9 = &DAT_010cbff8 + iVar12;
      uVar10 = *puVar9;
      iVar12 = iVar12 + 1;
      *puVar9 = uVar11;
      uVar11 = uVar10;
    } while (iVar12 <= iVar14);
  }
LAB_00ae8658:
  InterlockedExchange((LONG *)&Target_010cc038,0);
  return 1;
}


//// FUNCTION ___ascii_stricmp @ 00ae8670 ////

/* Library Function - Single Match
    ___ascii_stricmp
   
   Library: Visual Studio 2003 Release */

int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  
  bVar3 = 0xff;
  do {
    do {
      cVar4 = '\0';
      if (bVar3 == 0) goto LAB_00ae86b6;
      bVar3 = *_Str2;
      _Str2 = _Str2 + 1;
      bVar2 = *_Str1;
      _Str1 = _Str1 + 1;
    } while (bVar2 == bVar3);
    bVar1 = bVar3 + 0xbf + (-((byte)(bVar3 + 0xbf) < 0x1a) & 0x20U) + 0x41;
    bVar2 = bVar2 + 0xbf;
    bVar3 = bVar2 + (-(bVar2 < 0x1a) & 0x20U) + 0x41;
  } while (bVar3 == bVar1);
  cVar4 = (bVar3 < bVar1) * -2 + '\x01';
LAB_00ae86b6:
  return (int)cVar4;
}


//// FUNCTION ___ascii_strnicmp @ 00ae86c0 ////

/* Library Function - Single Match
    ___ascii_strnicmp
   
   Library: Visual Studio 2003 Release */

int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (_MaxCount != 0) {
    do {
      bVar2 = *_Str1;
      cVar1 = *_Str2;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar6 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_00ae8711;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_00ae8711:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}


//// FUNCTION __wopenfile @ 00ae8721 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __wopenfile
   
   Library: Visual Studio 2003 Release */

FILE * __cdecl __wopenfile(wchar_t *_Filename,wchar_t *_Mode,int _ShFlag,FILE *_File)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint _OpenFlag;
  uint uVar6;
  
  wVar1 = *_Mode;
  bVar4 = false;
  bVar3 = false;
  if (wVar1 == L'a') {
    _OpenFlag = 0x109;
  }
  else {
    if (wVar1 == L'r') {
      _OpenFlag = 0;
      uVar6 = DAT_010cc0c4 | 1;
      goto LAB_00ae8765;
    }
    if (wVar1 != L'w') {
      return (FILE *)0x0;
    }
    _OpenFlag = 0x301;
  }
  uVar6 = DAT_010cc0c4 | 2;
LAB_00ae8765:
  bVar2 = true;
LAB_00ae8845:
  _Mode = _Mode + 1;
  wVar1 = *_Mode;
  if ((wVar1 == L'\0') || (!bVar2)) {
    iVar5 = __wsopen(_Filename,_OpenFlag,_ShFlag,0x1a4);
    if (iVar5 < 0) {
      return (FILE *)0x0;
    }
    _DAT_010cbc0c = _DAT_010cbc0c + 1;
    _File->_flag = uVar6;
    _File->_cnt = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_tmpfname = (char *)0x0;
    _File->_file = iVar5;
    return _File;
  }
  if ((ushort)wVar1 < 0x55) {
    if (wVar1 == L'T') {
      if ((_OpenFlag & 0x1000) == 0) {
        _OpenFlag = _OpenFlag | 0x1000;
        goto LAB_00ae8845;
      }
    }
    else if (wVar1 == L'+') {
      if ((_OpenFlag & 2) == 0) {
        _OpenFlag = _OpenFlag & 0xfffffffe | 2;
        uVar6 = uVar6 & 0xfffffffc | 0x80;
        goto LAB_00ae8845;
      }
    }
    else if (wVar1 == L'D') {
      if ((_OpenFlag & 0x40) == 0) {
        _OpenFlag = _OpenFlag | 0x40;
        goto LAB_00ae8845;
      }
    }
    else if (wVar1 == L'R') {
      if (!bVar3) {
        bVar3 = true;
        _OpenFlag = _OpenFlag | 0x10;
        goto LAB_00ae8845;
      }
    }
    else if ((wVar1 == L'S') && (!bVar3)) {
      bVar3 = true;
      _OpenFlag = _OpenFlag | 0x20;
      goto LAB_00ae8845;
    }
  }
  else {
    if (wVar1 == L'b') {
      if ((_OpenFlag & 0xc000) != 0) goto LAB_00ae8827;
      _OpenFlag = _OpenFlag | 0x8000;
      goto LAB_00ae8845;
    }
    if (wVar1 == L'c') {
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 | 0x4000;
        goto LAB_00ae8845;
      }
    }
    else {
      if (wVar1 != L'n') {
        if ((wVar1 != L't') || ((_OpenFlag & 0xc000) != 0)) goto LAB_00ae8827;
        _OpenFlag = _OpenFlag | 0x4000;
        goto LAB_00ae8845;
      }
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 & 0xffffbfff;
        goto LAB_00ae8845;
      }
    }
  }
LAB_00ae8827:
  bVar2 = false;
  goto LAB_00ae8845;
}


//// FUNCTION __fptostr @ 00ae8890 ////

/* Library Function - Single Match
    __fptostr
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)

{
  char *_Str;
  char *_Dst;
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  char cVar4;
  
  _Dst = _Buf;
  pcVar3 = *(char **)(_Digits + 0xc);
  _Str = _Buf + 1;
  *_Buf = '0';
  pcVar1 = _Str;
  if (0 < (int)_SizeInBytes) {
    _Buf = (char *)_SizeInBytes;
    _SizeInBytes = 0;
    do {
      cVar4 = *pcVar3;
      if (cVar4 == '\0') {
        cVar4 = '0';
      }
      else {
        pcVar3 = pcVar3 + 1;
      }
      *pcVar1 = cVar4;
      pcVar1 = pcVar1 + 1;
      _Buf = _Buf + -1;
    } while (_Buf != (char *)0x0);
  }
  *pcVar1 = '\0';
  if ((-1 < (int)_SizeInBytes) && ('4' < *pcVar3)) {
    while (pcVar1 = pcVar1 + -1, *pcVar1 == '9') {
      *pcVar1 = '0';
    }
    *pcVar1 = *pcVar1 + '\x01';
  }
  if (*_Dst == '1') {
    *(int *)(_Digits + 4) = *(int *)(_Digits + 4) + 1;
  }
  else {
    sVar2 = _strlen(_Str);
    pcVar1 = _memmove(_Dst,_Str,sVar2 + 1);
  }
  return (errno_t)pcVar1;
}


//// FUNCTION ___dtold @ 00ae8907 ////

/* Library Function - Single Match
    ___dtold
   
   Library: Visual Studio 2003 Release */

void __cdecl ___dtold(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint local_8;
  
  uVar1 = *(ushort *)((int)param_2 + 6);
  local_8 = 0x80000000;
  uVar3 = uVar1 >> 4;
  uVar4 = uVar3 & 0x7ff;
  uVar2 = *param_2;
  if ((uVar3 & 0x7ff) == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    uVar4 = uVar4 + 0x3c01;
    local_8 = 0;
  }
  else if (uVar4 == 0x7ff) {
    uVar4 = 0x7fff;
  }
  else {
    uVar4 = uVar4 + 0x3c00;
  }
  param_1[1] = uVar2 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  *param_1 = uVar2 << 0xb;
  while (local_8 == 0) {
    uVar2 = param_1[1];
    uVar4 = uVar4 - 1;
    param_1[1] = uVar2 << 1 | *param_1 >> 0x1f;
    *param_1 = *param_1 * 2;
    local_8 = uVar2 << 1 & 0x80000000;
  }
  *(ushort *)(param_1 + 2) = uVar1 & 0x8000 | uVar4;
  return;
}


//// FUNCTION __fltout2 @ 00ae89c1 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __fltout2
   
   Library: Visual Studio 2003 Release */

STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)

{
  int iVar1;
  undefined4 in_stack_ffffffb8;
  undefined2 uVar2;
  short local_30;
  char local_2e;
  uint local_2c [6];
  uint local_14;
  uint uStack_10;
  undefined2 uStack_c;
  undefined4 local_8;
  
  uVar2 = (undefined2)((uint)in_stack_ffffffb8 >> 0x10);
  local_8 = DAT_00e9a098;
  ___dtold(&local_14,(uint *)&_Dbl);
  iVar1 = _I10_OUTPUT(local_14,uStack_10,CONCAT22(uVar2,uStack_c),0x11,0,&local_30);
  _Flt->flag = iVar1;
  _Flt->sign = (int)local_2e;
  _Flt->decpt = (int)local_30;
  FUN_00ada2e0((uint *)_ResultStr,local_2c);
  _Flt->mantissa = _ResultStr;
  return _Flt;
}


//// FUNCTION __mbsicmp @ 00ae8a2d ////

/* Library Function - Single Match
    __mbsicmp
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsicmp(uchar *_Str1,uchar *_Str2)

{
  ushort uVar1;
  ushort uVar2;
  _ptiddata p_Var3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uchar *puVar7;
  undefined4 local_8;
  
  p_Var3 = __getptd();
  piVar4 = p_Var3->_tpxcptinfoptrs;
  if (piVar4 != DAT_010dab84) {
    piVar4 = FUN_00ae3a22();
  }
  if (piVar4[2] == 0) {
    iVar5 = __stricmp((char *)_Str1,(char *)_Str2);
  }
  else {
    do {
      uVar1 = (ushort)*_Str1;
      puVar7 = _Str1 + 1;
      if ((*(byte *)(uVar1 + 0x1d + (int)piVar4) & 4) == 0) {
        _Str1 = puVar7;
        if ((*(byte *)((int)piVar4 + uVar1 + 0x1d) & 0x10) != 0) {
          uVar1 = (ushort)*(char *)((int)piVar4 + uVar1 + 0x11d);
        }
      }
      else if (*puVar7 == '\0') {
        uVar1 = 0;
        _Str1 = puVar7;
      }
      else {
        uVar6 = FUN_00ad696b(piVar4[3],0x200,(LPCSTR)_Str1,2,(LPSTR)&local_8,2,piVar4[1],1);
        if (uVar6 == 1) {
          uVar1 = (ushort)local_8 & 0xff;
        }
        else {
          if (uVar6 != 2) {
            return 0x7fffffff;
          }
          uVar1 = (ushort)local_8 * 0x100 + ((ushort)((uint)local_8 >> 8) & 0xff);
        }
        _Str1 = _Str1 + 2;
      }
      uVar2 = (ushort)*_Str2;
      puVar7 = _Str2 + 1;
      if ((*(byte *)(uVar2 + 0x1d + (int)piVar4) & 4) == 0) {
        _Str2 = puVar7;
        if ((*(byte *)((int)piVar4 + uVar2 + 0x1d) & 0x10) != 0) {
          uVar2 = (ushort)*(char *)((int)piVar4 + uVar2 + 0x11d);
        }
      }
      else if (*puVar7 == '\0') {
        uVar2 = 0;
        _Str2 = puVar7;
      }
      else {
        uVar6 = FUN_00ad696b(piVar4[3],0x200,(LPCSTR)_Str2,2,(LPSTR)&local_8,2,piVar4[1],1);
        if (uVar6 == 1) {
          uVar2 = (ushort)local_8 & 0xff;
        }
        else {
          if (uVar6 != 2) {
            return 0x7fffffff;
          }
          uVar2 = (ushort)local_8 * 0x100 + ((ushort)((uint)local_8 >> 8) & 0xff);
        }
        _Str2 = _Str2 + 2;
      }
      if (uVar2 != uVar1) {
        return (-(uint)(uVar2 < uVar1) & 2) - 1;
      }
    } while (uVar1 != 0);
    iVar5 = 0;
  }
  return iVar5;
}


//// FUNCTION __mbsrchr @ 00ae8b78 ////

/* Library Function - Single Match
    __mbsrchr
   
   Library: Visual Studio 2003 Release */

uchar * __cdecl __mbsrchr(uchar *_Str,uint _Ch)

{
  byte bVar1;
  ushort uVar2;
  _ptiddata p_Var3;
  int *piVar4;
  uchar *puVar5;
  byte *pbVar6;
  byte bVar7;
  byte *pbVar8;
  bool bVar9;
  
  pbVar8 = (byte *)0x0;
  p_Var3 = __getptd();
  piVar4 = p_Var3->_tpxcptinfoptrs;
  if (piVar4 != DAT_010dab84) {
    piVar4 = FUN_00ae3a22();
  }
  if (piVar4[2] == 0) {
    puVar5 = (uchar *)_strrchr((char *)_Str,_Ch);
    return puVar5;
  }
  do {
    bVar7 = *_Str;
    if ((*(byte *)(bVar7 + 0x1d + (int)piVar4) & 4) == 0) {
      bVar9 = _Ch == bVar7;
LAB_00ae8bd3:
      pbVar6 = _Str;
      if (bVar9) {
        pbVar8 = _Str;
      }
    }
    else {
      pbVar6 = _Str + 1;
      bVar1 = *pbVar6;
      if (bVar1 == 0) {
        bVar9 = pbVar8 == (byte *)0x0;
        _Str = pbVar6;
        bVar7 = bVar1;
        goto LAB_00ae8bd3;
      }
      uVar2 = CONCAT11(bVar7,bVar1);
      bVar7 = bVar1;
      if (_Ch == uVar2) {
        pbVar8 = _Str;
      }
    }
    _Str = pbVar6 + 1;
    if (bVar7 == 0) {
      return pbVar8;
    }
  } while( true );
}


//// FUNCTION FUN_00ae8be3 @ 00ae8be3 ////

char * __cdecl FUN_00ae8be3(char *param_1,LPCSTR param_2,DWORD param_3)

{
  LPCSTR lpFileName;
  char *pcVar1;
  int *piVar2;
  DWORD DVar3;
  
  lpFileName = param_2;
  if ((param_2 == (LPCSTR)0x0) || (*param_2 == '\0')) {
    pcVar1 = __getcwd(param_1,param_3);
    return pcVar1;
  }
  pcVar1 = param_1;
  if (param_1 == (char *)0x0) {
    pcVar1 = _malloc(0x104);
    if (pcVar1 == (LPSTR)0x0) {
      piVar2 = FUN_00ad4b6c();
      *piVar2 = 0xc;
      return (char *)0x0;
    }
    param_3 = 0x104;
  }
  DVar3 = GetFullPathNameA(lpFileName,param_3,pcVar1,&param_2);
  if (param_3 <= DVar3) {
    if (param_1 != (char *)0x0) {
      piVar2 = FUN_00ad4b6c();
      *piVar2 = 0x22;
      return (char *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    _free(pcVar1);
  }
  if (DVar3 != 0) {
    return pcVar1;
  }
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar1);
  }
  DVar3 = GetLastError();
  __dosmaperr(DVar3);
  return (char *)0x0;
}


//// FUNCTION FUN_00ae8c8d @ 00ae8c8d ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x00ae8d55) */

int FUN_00ae8c8d(void)

{
  undefined1 *puVar1;
  DWORD DVar2;
  int iVar3;
  byte *pbVar4;
  byte local_128 [264];
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00d838a0;
  uStack_c = 0xae8c9c;
  local_20 = DAT_00e9a098;
  DVar2 = GetCurrentDirectoryA(0x105,(LPSTR)local_128);
  pbVar4 = local_128;
  puVar1 = local_1c;
  if (0x104 < (int)DVar2) {
    local_1c = &stack0xfffffec0;
    local_8 = (undefined *)0xffffffff;
    pbVar4 = &stack0xfffffec0;
    puVar1 = &stack0xfffffec0;
    if (DVar2 != 0) {
      DVar2 = GetCurrentDirectoryA(DVar2 + 1,&stack0xfffffec0);
      pbVar4 = &stack0xfffffec0;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  iVar3 = 0;
  if ((DVar2 != 0) && (pbVar4[1] == 0x3a)) {
    iVar3 = _toupper((uint)*pbVar4);
    iVar3 = iVar3 + -0x40;
  }
  return iVar3;
}


//// FUNCTION __mbctolower @ 00ae8e00 ////

/* Library Function - Single Match
    __mbctolower
   
   Library: Visual Studio 2003 Release */

uint __cdecl __mbctolower(uint _Ch)

{
  _ptiddata p_Var1;
  int *piVar2;
  uint uVar3;
  undefined2 local_c;
  CHAR local_8;
  undefined1 local_7;
  undefined2 uStack_6;
  
  p_Var1 = __getptd();
  piVar2 = p_Var1->_tpxcptinfoptrs;
  if (piVar2 != DAT_010dab84) {
    piVar2 = FUN_00ae3a22();
  }
  if (_Ch < 0x100) {
    if ((*(byte *)((int)piVar2 + _Ch + 0x1d) & 0x10) != 0) {
      _Ch = (uint)*(char *)((int)piVar2 + _Ch + 0x11d);
    }
  }
  else {
    _local_8 = CONCAT11((char)_Ch,(char)(_Ch >> 8));
    if (((*(byte *)((_Ch >> 8 & 0xff) + 0x1d + (int)piVar2) & 4) != 0) &&
       (uVar3 = FUN_00ad696b(piVar2[3],0x100,&local_8,2,(LPSTR)&local_c,2,piVar2[1],1), uVar3 != 0))
    {
      _Ch = (uint)CONCAT11((CHAR)local_c,local_c._1_1_);
    }
  }
  return _Ch;
}


//// FUNCTION ___mbspbrk_mt @ 00ae8e85 ////

/* Library Function - Single Match
    ___mbspbrk_mt
   
   Library: Visual Studio 2003 Release */

char * __cdecl ___mbspbrk_mt(int param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (*(int *)(param_1 + 8) == 0) {
    pcVar2 = _strpbrk((char *)param_2,(char *)param_3);
  }
  else {
    pbVar4 = param_3;
    if (*param_2 != 0) {
LAB_00ae8ed8:
      do {
        if (*pbVar4 != 0) {
          bVar1 = *pbVar4;
          if ((*(byte *)(bVar1 + 0x1d + param_1) & 4) == 0) {
            pbVar3 = pbVar4;
            if (bVar1 != *param_2) goto LAB_00ae8ed7;
          }
          else if (((bVar1 != *param_2) || (pbVar4[1] != param_2[1])) &&
                  (pbVar3 = pbVar4 + 1, *pbVar3 != 0)) {
LAB_00ae8ed7:
            pbVar4 = pbVar3 + 1;
            goto LAB_00ae8ed8;
          }
        }
        if (((*pbVar4 != 0) ||
            (((*(byte *)(*param_2 + 0x1d + param_1) & 4) != 0 &&
             (param_2 = param_2 + 1, *param_2 == 0)))) ||
           (param_2 = param_2 + 1, pbVar4 = param_3, *param_2 == 0)) break;
      } while( true );
    }
    pcVar2 = (char *)(-(uint)(*param_2 != 0) & (uint)param_2);
  }
  return pcVar2;
}


//// FUNCTION __mbspbrk @ 00ae8f01 ////

/* Library Function - Single Match
    __mbspbrk
   
   Library: Visual Studio 2003 Release */

uchar * __cdecl __mbspbrk(uchar *_Str,uchar *_Control)

{
  _ptiddata p_Var1;
  int *piVar2;
  uchar *puVar3;
  
  p_Var1 = __getptd();
  piVar2 = p_Var1->_tpxcptinfoptrs;
  if (piVar2 != DAT_010dab84) {
    piVar2 = FUN_00ae3a22();
  }
  puVar3 = (uchar *)___mbspbrk_mt((int)piVar2,_Str,_Control);
  return puVar3;
}


//// FUNCTION FUN_00ae8f28 @ 00ae8f28 ////

wchar_t * __cdecl FUN_00ae8f28(wchar_t *param_1,LPCWSTR param_2,DWORD param_3)

{
  LPCWSTR lpFileName;
  LPWSTR lpBuffer;
  int *piVar1;
  DWORD DVar2;
  wchar_t *pwVar3;
  
  lpFileName = param_2;
  if ((param_2 == (LPCWSTR)0x0) || (*param_2 == L'\0')) {
    pwVar3 = __wgetcwd(param_1,param_3);
    return pwVar3;
  }
  lpBuffer = param_1;
  if (param_1 == (wchar_t *)0x0) {
    lpBuffer = _malloc(0x208);
    if (lpBuffer == (LPWSTR)0x0) {
      piVar1 = FUN_00ad4b6c();
      *piVar1 = 0xc;
      return (wchar_t *)0x0;
    }
    param_3 = 0x104;
  }
  DVar2 = GetFullPathNameW(lpFileName,param_3,lpBuffer,&param_2);
  if (param_3 <= DVar2) {
    if (param_1 != (wchar_t *)0x0) {
      piVar1 = FUN_00ad4b6c();
      *piVar1 = 0x22;
      return (wchar_t *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    _free(lpBuffer);
  }
  if (DVar2 != 0) {
    return lpBuffer;
  }
  if (param_1 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(lpBuffer);
  }
  DVar2 = GetLastError();
  __dosmaperr(DVar2);
  return (wchar_t *)0x0;
}


//// FUNCTION _wcspbrk @ 00ae8fd6 ////

/* Library Function - Single Match
    _wcspbrk
   
   Library: Visual Studio 2003 Release */

wchar_t * __cdecl _wcspbrk(wchar_t *_Str,wchar_t *_Control)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t wVar3;
  
  wVar3 = *_Str;
  if (wVar3 != L'\0') {
    wVar1 = *_Control;
    pwVar2 = _Control;
    do {
      while (wVar1 != L'\0') {
        if (wVar1 == wVar3) {
          return _Str;
        }
        wVar1 = pwVar2[1];
        pwVar2 = pwVar2 + 1;
      }
      _Str = _Str + 1;
      wVar3 = *_Str;
      wVar1 = *_Control;
      pwVar2 = _Control;
    } while (wVar3 != L'\0');
  }
  return (wchar_t *)0x0;
}


//// FUNCTION __commit @ 00ae9016 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2003 Release */

int __cdecl __commit(int _FileHandle)

{
  HANDLE hFile;
  WINBOOL WVar1;
  ulong *puVar2;
  int *piVar3;
  int iVar4;
  DWORD local_20;
  
  if (uNumber_010daa74 <= (uint)_FileHandle) {
LAB_00ae90be:
    piVar3 = FUN_00ad4b6c();
    *piVar3 = 9;
    return -1;
  }
  iVar4 = (_FileHandle & 0x1fU) * 0x24;
  if ((*(byte *)((&DAT_010daa80)[_FileHandle >> 5] + 4 + iVar4) & 1) == 0) goto LAB_00ae90be;
  __lock_fhandle(_FileHandle);
  if ((*(byte *)((&DAT_010daa80)[_FileHandle >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    WVar1 = FlushFileBuffers(hFile);
    if (WVar1 == 0) {
      local_20 = GetLastError();
    }
    else {
      local_20 = 0;
    }
    if (local_20 == 0) goto LAB_00ae90a5;
    puVar2 = FUN_00ad4b75();
    *puVar2 = local_20;
  }
  piVar3 = FUN_00ad4b6c();
  *piVar3 = 9;
  local_20 = 0xffffffff;
LAB_00ae90a5:
  FUN_00ae90b6();
  return local_20;
}


//// FUNCTION FUN_00ae90b6 @ 00ae90b6 ////

void FUN_00ae90b6(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}


//// FUNCTION __mbsnbicoll @ 00ae90d2 ////

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  _ptiddata p_Var1;
  int *piVar2;
  int iVar3;
  
  p_Var1 = __getptd();
  piVar2 = p_Var1->_tpxcptinfoptrs;
  if (piVar2 != DAT_010dab84) {
    piVar2 = FUN_00ae3a22();
  }
  if (_MaxCount == 0) {
    return 0;
  }
  iVar3 = FUN_00aeccb1(piVar2[3],1,_Str1,(char *)_MaxCount,_Str2,(char *)_MaxCount,piVar2[1]);
  if (iVar3 == 0) {
    return 0x7fffffff;
  }
  return iVar3 + -2;
}


//// FUNCTION FUN_00ae9120 @ 00ae9120 ////

undefined4 FUN_00ae9120(void)

{
  LPCWCH lpWideCharStr;
  size_t _Size;
  int iVar1;
  undefined4 *puVar2;
  LPSTR local_8;
  
  local_8 = (LPSTR)0x0;
  lpWideCharStr = (LPCWCH)*DAT_010cbbf0;
  puVar2 = DAT_010cbbf0;
  while( true ) {
    if (lpWideCharStr == (LPCWCH)0x0) {
      return 0;
    }
    _Size = WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCCH)0x0,(LPBOOL)0x0);
    if ((_Size == 0) || (local_8 = _malloc(_Size), local_8 == (LPSTR)0x0)) {
      return 0xffffffff;
    }
    iVar1 = WideCharToMultiByte(0,0,(LPCWCH)*puVar2,-1,local_8,_Size,(LPCCH)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      _free(local_8);
    }
    iVar1 = FUN_00aed0e3(&local_8,0);
    if ((iVar1 < 0) && (local_8 != (LPSTR)0x0)) break;
    puVar2 = puVar2 + 1;
    lpWideCharStr = (LPCWCH)*puVar2;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_8);
}


//// FUNCTION FUN_00ae91b0 @ 00ae91b0 ////

int __cdecl FUN_00ae91b0(int param_1,wchar_t *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uchar uVar1;
  int iVar2;
  int *piVar3;
  uchar *puVar4;
  char *_Src;
  wchar_t *_Str;
  size_t sVar5;
  uchar *puVar6;
  size_t sVar7;
  wchar_t *pwVar8;
  bool bVar9;
  
  iVar2 = FUN_00ae936c(param_1,param_2,param_3,param_4);
  if ((((iVar2 != -1) || (piVar3 = FUN_00ad4b6c(), *piVar3 != 2)) ||
      (puVar4 = __mbschr((uchar *)param_2,0x2f), puVar4 != (uchar *)0x0)) ||
     ((_Src = _getenv("PATH"), _Src == (char *)0x0 ||
      (_Str = _malloc(0x104), _Str == (wchar_t *)0x0)))) {
    return iVar2;
  }
  do {
    do {
      _Src = __getpath(_Src,(char *)_Str,0x103);
      if ((_Src == (char *)0x0) || ((char)*_Str == '\0')) goto LAB_00ae930a;
      sVar5 = _strlen((char *)_Str);
      puVar4 = (uchar *)((sVar5 - 1) + (int)_Str);
      uVar1 = *puVar4;
      if (uVar1 == '\\') {
        puVar6 = __mbsrchr((uchar *)_Str,0x5c);
        bVar9 = puVar4 == puVar6;
      }
      else {
        bVar9 = uVar1 == '/';
      }
      if (!bVar9) {
        FUN_00ada2f0((uint *)_Str,(uint *)&DAT_00d1835c);
      }
      sVar5 = _strlen((char *)_Str);
      sVar7 = _strlen((char *)param_2);
      if (0x103 < sVar5 + sVar7) goto LAB_00ae930a;
      FUN_00ada2f0((uint *)_Str,(uint *)param_2);
      iVar2 = FUN_00ae936c(param_1,_Str,param_3,param_4);
      if (iVar2 != -1) goto LAB_00ae930a;
      piVar3 = FUN_00ad4b6c();
    } while (*piVar3 == 2);
    pwVar8 = (wchar_t *)__mbschr((uchar *)_Str,0x5c);
    if ((_Str != pwVar8) && (pwVar8 = (wchar_t *)__mbschr((uchar *)_Str,0x2f), _Str != pwVar8))
    break;
    puVar4 = (uchar *)((int)_Str + 1);
    puVar6 = __mbschr(puVar4,0x5c);
  } while ((puVar4 == puVar6) || (puVar6 = __mbschr(puVar4,0x2f), puVar4 == puVar6));
LAB_00ae930a:
                    /* WARNING: Subroutine does not return */
  _free(_Str);
}


//// FUNCTION FUN_00ae9319 @ 00ae9319 ////

undefined4 __cdecl FUN_00ae9319(int param_1,LPCSTR param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  LPVOID local_c;
  char *local_8;
  
  iVar1 = FUN_00aed57c(param_3,param_4,&local_8,&local_c);
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  FUN_00aed3a2(param_1,param_2,local_8,local_c);
                    /* WARNING: Subroutine does not return */
  _free(local_8);
}


//// FUNCTION FUN_00ae936c @ 00ae936c ////

undefined4 __cdecl
FUN_00ae936c(int param_1,wchar_t *param_2,undefined4 *param_3,undefined4 *param_4)

{
  wchar_t *_Str;
  wchar_t *pwVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  uchar *puVar4;
  int iVar5;
  uint *_Filename;
  undefined **ppuVar6;
  undefined4 local_c;
  
  _Str = (wchar_t *)__mbsrchr((uchar *)param_2,0x5c);
  pwVar1 = (wchar_t *)__mbsrchr((uchar *)param_2,0x2f);
  pwVar3 = param_2;
  if (pwVar1 == (wchar_t *)0x0) {
    if ((_Str == (wchar_t *)0x0) &&
       (_Str = (wchar_t *)__mbschr((uchar *)param_2,0x3a), _Str == (wchar_t *)0x0)) {
      sVar2 = _strlen((char *)param_2);
      pwVar3 = _malloc(sVar2 + 3);
      if (pwVar3 == (wchar_t *)0x0) {
        return 0xffffffff;
      }
      FUN_00ada2e0((uint *)pwVar3,(uint *)&DAT_00d838d4);
      FUN_00ada2f0((uint *)pwVar3,(uint *)param_2);
      _Str = pwVar3 + 1;
    }
  }
  else if ((_Str == (wchar_t *)0x0) || (_Str < pwVar1)) {
    _Str = pwVar1;
  }
  local_c = 0xffffffff;
  puVar4 = __mbsrchr((uchar *)_Str,0x2e);
  if (puVar4 != (uchar *)0x0) {
    iVar5 = FID_conflict___access((char *)pwVar3,0);
    if (iVar5 != -1) {
      local_c = FUN_00ae9319(param_1,(LPCSTR)pwVar3,param_3,param_4);
    }
    if (pwVar3 != param_2) {
                    /* WARNING: Subroutine does not return */
      _free(pwVar3);
    }
    return local_c;
  }
  sVar2 = _strlen((char *)pwVar3);
  _Filename = _malloc(sVar2 + 5);
  if (_Filename == (uint *)0x0) {
    return 0xffffffff;
  }
  FUN_00ada2e0(_Filename,(uint *)pwVar3);
  sVar2 = _strlen((char *)pwVar3);
  ppuVar6 = &PTR_DAT_00e9ac9c;
  do {
    FUN_00ada2e0((uint *)(sVar2 + (int)_Filename),(uint *)*ppuVar6);
    iVar5 = FID_conflict___access((char *)_Filename,0);
    if (iVar5 != -1) {
      FUN_00ae9319(param_1,(LPCSTR)_Filename,param_3,param_4);
      break;
    }
    ppuVar6 = ppuVar6 + -1;
  } while (0xe9ac8f < (int)ppuVar6);
                    /* WARNING: Subroutine does not return */
  _free(_Filename);
}


//// FUNCTION __getbuf @ 00ae94b5 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_010cbc0c = _DAT_010cbc0c + 1;
  pcVar1 = _malloc(0x1000);
  _File->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_base = (char *)&_File->_charbuf;
    _File->_bufsiz = 2;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return;
}


//// FUNCTION __ftelli64_lk @ 00ae94f9 ////

/* Library Function - Single Match
    __ftelli64_lk
   
   Library: Visual Studio 2003 Release */

ulonglong __cdecl __ftelli64_lk(uint *param_1)

{
  uint _FileHandle;
  byte bVar1;
  ulonglong uVar2;
  int *piVar3;
  uint *puVar4;
  char *pcVar5;
  uint *puVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  int unaff_EDI;
  longlong lVar11;
  undefined8 local_14;
  uint local_8;
  
  puVar6 = param_1;
  _FileHandle = param_1[4];
  if ((int)param_1[1] < 0) {
    param_1[1] = 0;
  }
  local_14 = __lseeki64(_FileHandle,0x100000000,unaff_EDI);
  uVar9 = (uint)((ulonglong)local_14 >> 0x20);
  if ((uVar9 != 0 && -1 < local_14) || (-1 < local_14)) {
    if ((param_1[3] & 0x108) == 0) {
      return local_14 - (int)param_1[1];
    }
    pcVar5 = (char *)*param_1;
    pcVar8 = (char *)param_1[2];
    local_8 = (int)pcVar5 - (int)pcVar8;
    if ((param_1[3] & 3) == 0) {
      if (-1 < (char)param_1[3]) {
        piVar3 = FUN_00ad4b6c();
        *piVar3 = 0x16;
        goto LAB_00ae95b6;
      }
    }
    else if (((*(byte *)((&DAT_010daa80)[(int)_FileHandle >> 5] + 4 + (_FileHandle & 0x1f) * 0x24) &
              0x80) != 0) && (pcVar7 = pcVar8, pcVar8 < pcVar5)) {
      do {
        if (*pcVar7 == '\n') {
          local_8 = local_8 + 1;
        }
        pcVar7 = pcVar7 + 1;
      } while (pcVar7 < (char *)*param_1);
    }
    if (local_14 == 0) {
      uVar2 = (ulonglong)local_8;
    }
    else {
      if ((param_1[3] & 1) != 0) {
        if (param_1[1] == 0) {
          local_8 = 0;
        }
        else {
          puVar4 = (uint *)(pcVar5 + (param_1[1] - (int)pcVar8));
          iVar10 = (_FileHandle & 0x1f) * 0x24;
          if ((*(byte *)(iVar10 + 4 + (&DAT_010daa80)[(int)_FileHandle >> 5]) & 0x80) != 0) {
            lVar11 = __lseeki64(_FileHandle,0x200000000,unaff_EDI);
            if (lVar11 == local_14) {
              pcVar5 = (char *)param_1[2];
              pcVar8 = (char *)((int)puVar4 + (int)pcVar5);
              param_1 = puVar4;
              for (; pcVar5 < pcVar8; pcVar5 = pcVar5 + 1) {
                if (*pcVar5 == '\n') {
                  param_1 = (uint *)((int)param_1 + 1);
                }
              }
              bVar1 = *(byte *)((int)puVar6 + 0xd) & 0x20;
            }
            else {
              __lseeki64(_FileHandle,(ulonglong)uVar9,unaff_EDI);
              puVar6 = (uint *)0x200;
              if ((((uint *)0x200 < puVar4) || ((param_1[3] & 8) == 0)) ||
                 ((param_1[3] & 0x400) != 0)) {
                puVar6 = (uint *)param_1[6];
              }
              bVar1 = *(byte *)(iVar10 + 4 + (&DAT_010daa80)[(int)_FileHandle >> 5]) & 4;
              param_1 = puVar6;
            }
            puVar4 = param_1;
            if (bVar1 != 0) {
              puVar4 = (uint *)((int)param_1 + 1);
            }
          }
          param_1 = puVar4;
          local_14 = CONCAT44(uVar9 - ((uint *)local_14 < param_1),
                              (int)(uint *)local_14 - (int)param_1);
        }
      }
      uVar2 = CONCAT44(local_14._4_4_ + (uint)CARRY4(local_8,(uint)local_14),
                       local_8 + (uint)local_14);
    }
  }
  else {
LAB_00ae95b6:
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}


//// FUNCTION __ftelli64 @ 00ae968e ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __ftelli64
   
   Library: Visual Studio 2003 Release */

longlong __cdecl __ftelli64(FILE *_File)

{
  ulonglong uVar1;
  
  __lock_file(_File);
  uVar1 = __ftelli64_lk((uint *)_File);
  FUN_00ae96cb();
  return uVar1;
}


//// FUNCTION FUN_00ae96cb @ 00ae96cb ////

void FUN_00ae96cb(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}


//// FUNCTION __fseeki64_lk @ 00ae96d5 ////

/* Library Function - Single Match
    __fseeki64_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __fseeki64_lk(FILE *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int unaff_EDI;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = CONCAT44(param_3,param_2);
  if (((param_1->_flag & 0x83U) == 0) || (((param_4 != 0 && (param_4 != 1)) && (param_4 != 2)))) {
    piVar2 = FUN_00ad4b6c();
    *piVar2 = 0x16;
  }
  else {
    param_1->_flag = param_1->_flag & 0xffffffef;
    if (param_4 == 1) {
      uVar3 = __ftelli64_lk((uint *)param_1);
      lVar4 = uVar3 + lVar4;
      param_4 = 0;
    }
    param_3 = (undefined4)((ulonglong)lVar4 >> 0x20);
    __flush(param_1);
    uVar1 = param_1->_flag;
    if ((char)uVar1 < '\0') {
      param_1->_flag = uVar1 & 0xfffffffc;
    }
    else if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
      param_1->_bufsiz = 0x200;
    }
    lVar4 = __lseeki64(param_1->_file,CONCAT44(param_4,param_3),unaff_EDI);
    if (lVar4 != -1) {
      return 0;
    }
  }
  return 0xffffffff;
}


//// FUNCTION __fseeki64 @ 00ae9768 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __fseeki64
   
   Library: Visual Studio 2003 Release */

int __cdecl __fseeki64(FILE *_File,longlong _Offset,int _Origin)

{
  int iVar1;
  undefined4 in_stack_00000008;
  
  __lock_file(_File);
  iVar1 = __fseeki64_lk(_File,in_stack_00000008,(undefined4)_Offset,_Offset._4_4_);
  FUN_00ae97aa();
  return iVar1;
}


//// FUNCTION FUN_00ae97aa @ 00ae97aa ////

void FUN_00ae97aa(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}


//// FUNCTION ___crtInitCritSecNoSpinCount@8 @ 00ae97b4 ////

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2003 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)param_1);
  return 1;
}


//// FUNCTION ___crtInitCritSecAndSpinCount @ 00ae97c4 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___crtInitCritSecAndSpinCount
   
   Library: Visual Studio 2003 Release */

void __cdecl ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2)

{
  HMODULE hModule;
  
  if (DAT_010cc03c == (code *)0x0) {
    if (DAT_010cbbc8 != 1) {
      hModule = GetModuleHandleA("kernel32.dll");
      if (hModule != (HMODULE)0x0) {
        DAT_010cc03c = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
        if (DAT_010cc03c != (FARPROC)0x0) goto LAB_00ae9810;
      }
    }
    DAT_010cc03c = ___crtInitCritSecNoSpinCount_8;
  }
LAB_00ae9810:
  (*DAT_010cc03c)(param_1,param_2);
  return;
}


//// FUNCTION _memset @ 00ae9850 ////

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release, Visual Studio 2019 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}


//// FUNCTION __tsopen_lk @ 00ae98b0 ////

/* Library Function - Single Match
    __tsopen_lk
   
   Library: Visual Studio 2003 Release */

uint __thiscall
__tsopen_lk(void *this,undefined4 *param_1,uint *param_2,LPCSTR param_3,uint param_4,byte param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  ulong *puVar5;
  HANDLE hFile;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  int iVar9;
  bool bVar10;
  _SECURITY_ATTRIBUTES local_20;
  DWORD local_14;
  DWORD local_10;
  uint local_c;
  char local_6;
  byte local_5;
  
  bVar10 = -1 < (char)param_4;
  local_20.nLength = 0xc;
  local_20.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar10) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_20.bInheritHandle = (WINBOOL)bVar10;
  if (((param_4 & 0x8000) == 0) && (((param_4 & 0x4000) != 0 || (DAT_010cc040 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar3 = param_4 & 3;
  if (uVar3 == 0) {
    local_14 = 0x80000000;
  }
  else if (uVar3 == 1) {
    local_14 = 0x40000000;
  }
  else {
    if (uVar3 != 2) goto LAB_00ae9937;
    local_14 = 0xc0000000;
  }
  if (this == &DAT_00000010) {
    local_c = 0;
  }
  else if (this == (void *)0x20) {
    local_c = 1;
  }
  else if (this == (void *)0x30) {
    local_c = 2;
  }
  else {
    if (this != (void *)0x40) {
LAB_00ae9937:
      piVar4 = FUN_00ad4b6c();
      *piVar4 = 0x16;
      puVar5 = FUN_00ad4b75();
      *puVar5 = 0;
      return 0xffffffff;
    }
    local_c = 3;
  }
  uVar3 = param_4 & 0x700;
  if (uVar3 < 0x401) {
    if ((uVar3 == 0x400) || (uVar3 == 0)) {
      local_10 = 3;
    }
    else if (uVar3 == 0x100) {
      local_10 = 4;
    }
    else {
      if (uVar3 == 0x200) goto LAB_00ae99de;
      if (uVar3 != 0x300) goto LAB_00ae99c4;
      local_10 = 2;
    }
  }
  else {
    if (uVar3 != 0x500) {
      if (uVar3 == 0x600) {
LAB_00ae99de:
        local_10 = 5;
        goto LAB_00ae99ee;
      }
      if (uVar3 != 0x700) {
LAB_00ae99c4:
        piVar4 = FUN_00ad4b6c();
        *piVar4 = 0x16;
        puVar5 = FUN_00ad4b75();
        *puVar5 = 0;
        return 0xffffffff;
      }
    }
    local_10 = 1;
  }
LAB_00ae99ee:
  DVar8 = 0x80;
  if (((param_4 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_010cbbc4 & param_5))) {
    DVar8 = 1;
  }
  if ((param_4 & 0x40) != 0) {
    local_14 = CONCAT13(local_14._3_1_,0x10000);
    DVar8 = DVar8 | 0x4000000;
    if (DAT_010cbbc8 == 2) {
      local_c = local_c | 4;
    }
  }
  if ((param_4 & 0x1000) != 0) {
    DVar8 = DVar8 | 0x100;
  }
  if ((param_4 & 0x20) == 0) {
    if ((param_4 & 0x10) != 0) {
      DVar8 = DVar8 | 0x10000000;
    }
  }
  else {
    DVar8 = DVar8 | 0x8000000;
  }
  uVar3 = __alloc_osfhnd();
  if (uVar3 == 0xffffffff) {
    piVar4 = FUN_00ad4b6c();
    *piVar4 = 0x18;
    puVar5 = FUN_00ad4b75();
    *puVar5 = 0;
  }
  else {
    *param_1 = 1;
    *param_2 = uVar3;
    hFile = CreateFileA(param_3,local_14,local_c,&local_20,local_10,DVar8,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      DVar8 = GetFileType(hFile);
      if (DVar8 != 0) {
        if (DVar8 == 2) {
          local_5 = local_5 | 0x40;
        }
        else if (DVar8 == 3) {
          local_5 = local_5 | 8;
        }
        __set_osfhnd(uVar3,(intptr_t)hFile);
        bVar2 = local_5 | 1;
        iVar9 = (uVar3 & 0x1f) * 0x24;
        local_5 = local_5 & 0x48;
        *(byte *)(iVar9 + 4 + (&DAT_010daa80)[(int)uVar3 >> 5]) = bVar2;
        if (((local_5 == 0) && ((char)bVar2 < '\0')) && ((param_4 & 2) != 0)) {
          local_14 = __lseek_lk(uVar3,-1,2);
          if (local_14 == 0xffffffff) {
            puVar5 = FUN_00ad4b75();
            if (*puVar5 == 0x83) goto LAB_00ae9b30;
          }
          else {
            local_6 = '\0';
            iVar6 = __read_lk(uVar3,&local_6,(char *)0x1);
            if ((((iVar6 != 0) || (local_6 != '\x1a')) ||
                (iVar6 = __chsize_lk(uVar3,local_14), iVar6 != -1)) &&
               (DVar7 = __lseek_lk(uVar3,0,0), DVar7 != 0xffffffff)) goto LAB_00ae9b30;
          }
          __close_lk(uVar3);
          return 0xffffffff;
        }
LAB_00ae9b30:
        if (local_5 != 0) {
          return uVar3;
        }
        if ((param_4 & 8) == 0) {
          return uVar3;
        }
        pbVar1 = (byte *)(iVar9 + 4 + (&DAT_010daa80)[(int)uVar3 >> 5]);
        *pbVar1 = *pbVar1 | 0x20;
        return uVar3;
      }
      CloseHandle(hFile);
    }
    DVar8 = GetLastError();
    __dosmaperr(DVar8);
  }
  return 0xffffffff;
}


//// FUNCTION __open @ 00ae9b97 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __open
   
   Library: Visual Studio 2003 Release */

int __cdecl __open(char *_Filename,int _OpenFlag,...)

{
  uint uVar1;
  byte in_stack_0000000c;
  uint local_24 [6];
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0xae9ba3;
  local_24[1] = 0;
  local_8 = 0;
  uVar1 = __tsopen_lk((void *)0x40,local_24 + 1,local_24,_Filename,_OpenFlag,in_stack_0000000c);
  local_8 = 0xffffffff;
  FUN_00ae9bdc();
  return uVar1;
}


//// FUNCTION FUN_00ae9bdc @ 00ae9bdc ////

void FUN_00ae9bdc(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    __unlock_fhandle(*(int *)(unaff_EBP + -0x20));
  }
  return;
}


//// FUNCTION __sopen @ 00ae9bec ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __sopen
   
   Library: Visual Studio 2003 Release */

int __cdecl __sopen(char *_Filename,int _OpenFlag,int _ShareFlag,...)

{
  uint uVar1;
  byte in_stack_00000010;
  uint local_24 [6];
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0xae9bf8;
  local_24[1] = 0;
  local_8 = 0;
  uVar1 = __tsopen_lk((void *)_ShareFlag,local_24 + 1,local_24,_Filename,_OpenFlag,in_stack_00000010
                     );
  local_8 = 0xffffffff;
  FUN_00ae9c31();
  return uVar1;
}


//// FUNCTION FUN_00ae9c31 @ 00ae9c31 ////

void FUN_00ae9c31(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    __unlock_fhandle(*(int *)(unaff_EBP + -0x20));
  }
  return;
}


//// FUNCTION __chsize_lk @ 00ae9c41 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __chsize_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __chsize_lk(uint param_1,int param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  int *piVar7;
  HANDLE hFile;
  WINBOOL WVar8;
  DWORD DVar9;
  int iVar10;
  uint uVar11;
  char local_1008 [4096];
  undefined4 local_8;
  
  iVar10 = 0;
  local_8 = DAT_00e9a098;
  DVar1 = __lseek_lk(param_1,0,1);
  if ((DVar1 == 0xffffffff) || (DVar2 = __lseek_lk(param_1,0,2), DVar2 == 0xffffffff)) {
    iVar10 = -1;
  }
  else {
    uVar11 = param_2 - DVar2;
    if ((int)uVar11 < 1) {
      if ((int)uVar11 < 0) {
        __lseek_lk(param_1,param_2,0);
        hFile = (HANDLE)__get_osfhandle(param_1);
        WVar8 = SetEndOfFile(hFile);
        iVar10 = (WVar8 != 0) - 1;
        if (iVar10 == -1) {
          piVar7 = FUN_00ad4b6c();
          *piVar7 = 0xd;
          puVar6 = FUN_00ad4b75();
          DVar9 = GetLastError();
          *puVar6 = DVar9;
        }
      }
    }
    else {
      _memset(local_1008,0,0x1000);
      iVar3 = __setmode_lk(param_1,0x8000);
      do {
        uVar4 = 0x1000;
        if ((int)uVar11 < 0x1000) {
          uVar4 = uVar11;
        }
        iVar5 = __write_lk(param_1,local_1008,uVar4);
        if (iVar5 == -1) {
          puVar6 = FUN_00ad4b75();
          if (*puVar6 == 5) {
            piVar7 = FUN_00ad4b6c();
            *piVar7 = 0xd;
          }
          iVar10 = -1;
          break;
        }
        uVar11 = uVar11 - iVar5;
      } while (0 < (int)uVar11);
      __setmode_lk(param_1,iVar3);
    }
    __lseek_lk(param_1,DVar1,0);
  }
  return iVar10;
}


//// FUNCTION ___ansicp @ 00ae9e19 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2003 Release */

long __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  long lVar2;
  CHAR local_10 [6];
  undefined1 local_a;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 == 0) {
    lVar2 = -1;
  }
  else {
    lVar2 = _atol(local_10);
  }
  return lVar2;
}


//// FUNCTION FUN_00ae9e5c @ 00ae9e5c ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

LPSTR __cdecl
FUN_00ae9e5c(UINT param_1,UINT param_2,char *param_3,size_t *param_4,LPSTR param_5,int param_6)

{
  size_t cbMultiByte;
  bool bVar1;
  bool bVar2;
  WINBOOL WVar3;
  size_t sVar4;
  int iVar5;
  size_t sVar6;
  LPCWCH local_4c;
  size_t local_3c;
  LPSTR local_38;
  _cpinfo local_34;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00d83960;
  uStack_c = 0xae9e68;
  local_20 = DAT_00e9a098;
  local_38 = (LPSTR)0x0;
  bVar2 = false;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 != param_2) {
    WVar3 = GetCPInfo(param_1,&local_34);
    if ((((WVar3 != 0) && (local_34.MaxCharSize == 1)) &&
        (WVar3 = GetCPInfo(param_2,&local_34), WVar3 != 0)) && (local_34.MaxCharSize == 1)) {
      bVar1 = true;
    }
    if ((bVar1) && (local_3c = cbMultiByte, cbMultiByte == 0xffffffff)) {
      sVar4 = _strlen(param_3);
      local_3c = sVar4 + 1;
    }
    if ((!bVar1) &&
       (local_3c = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0), local_3c == 0))
    {
      return (LPSTR)0x0;
    }
    local_8 = (undefined *)0x0;
    local_1c = &stack0xffffffa8;
    local_4c = (LPCWCH)&stack0xffffffa8;
    _memset(&stack0xffffffa8,0,local_3c * 2);
    local_8 = (undefined *)0xffffffff;
    if (&stack0x00000000 == (undefined1 *)0x58) {
      local_4c = _calloc(2,local_3c);
      if (local_4c == (LPCWCH)0x0) {
        return (LPSTR)0x0;
      }
      bVar2 = true;
    }
    iVar5 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,local_4c,local_3c);
    if (iVar5 != 0) {
      if (param_5 == (LPSTR)0x0) {
        if (((bVar1) ||
            (local_3c = WideCharToMultiByte(param_2,0,local_4c,local_3c,(LPSTR)0x0,0,(LPCCH)0x0,
                                            (LPBOOL)0x0), local_3c != 0)) &&
           (local_38 = _calloc(1,local_3c), local_38 != (LPSTR)0x0)) {
          sVar6 = WideCharToMultiByte(param_2,0,local_4c,local_3c,local_38,local_3c,(LPCCH)0x0,
                                      (LPBOOL)0x0);
          if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            _free(local_38);
          }
          if (cbMultiByte != 0xffffffff) {
            *param_4 = sVar6;
          }
        }
      }
      else {
        iVar5 = WideCharToMultiByte(param_2,0,local_4c,local_3c,param_5,param_6,(LPCCH)0x0,
                                    (LPBOOL)0x0);
        if (iVar5 != 0) {
          local_38 = param_5;
        }
      }
    }
  }
  if (bVar2) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  return local_38;
}


//// FUNCTION FUN_00aea025 @ 00aea025 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

BOOL __cdecl
FUN_00aea025(DWORD param_1,LPCSTR param_2,size_t param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  int iVar1;
  bool bVar2;
  WINBOOL WVar3;
  DWORD DVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  UINT UVar8;
  LCID Locale;
  undefined1 *puVar9;
  LPSTR _Memory;
  UINT UVar10;
  undefined4 uStackY_58;
  WINBOOL local_28;
  WORD local_20 [2];
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00d83970;
  uStack_c = 0xaea031;
  _Memory = (LPSTR)0x0;
  if (DAT_010cc064 == 0) {
    WVar3 = GetStringTypeW(1,(LPCWCH)&lpSrcStr_00d7e360,1,local_20);
    if (WVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_010cc064 = 2;
      }
    }
    else {
      DAT_010cc064 = 1;
    }
  }
  if ((DAT_010cc064 == 2) || (DAT_010cc064 == 0)) {
    Locale = param_6;
    if (param_6 == 0) {
      Locale = DAT_010cc04c;
    }
    UVar10 = param_5;
    if (param_5 == 0) {
      UVar10 = CodePage_010cc05c;
    }
    UVar8 = ___ansicp(Locale);
    if (UVar8 != 0xffffffff) {
      if (UVar8 != UVar10) {
        uStackY_58 = 0xaea1a8;
        _Memory = FUN_00ae9e5c(UVar10,UVar8,param_2,&param_3,(LPSTR)0x0,0);
        param_2 = _Memory;
        if (_Memory == (LPSTR)0x0) {
          return 0;
        }
      }
      WVar3 = GetStringTypeA(Locale,param_1,param_2,param_3,param_4);
      if (_Memory != (LPSTR)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      return WVar3;
    }
  }
  else if (DAT_010cc064 == 1) {
    local_28 = 0;
    bVar2 = false;
    if (param_5 == 0) {
      param_5 = CodePage_010cc05c;
    }
    uStackY_58 = 0xaea0c3;
    iVar5 = MultiByteToWideChar(param_5,(uint)(param_7 != 0) * 8 + 1,param_2,param_3,(LPWSTR)0x0,0);
    if (iVar5 != 0) {
      local_8 = (undefined *)0x0;
      puVar6 = (undefined1 *)(iVar5 * 2 + 3U & 0xfffffffc);
      iVar1 = -(int)puVar6;
      puVar7 = &stack0xffffffc4 + iVar1;
      local_1c = &stack0xffffffc4 + iVar1;
      *(int *)((int)local_20 + iVar1 + -0x20) = iVar5 * 2;
      *(undefined4 *)(&stack0xffffffbc + iVar1) = 0;
      *(undefined1 **)(&stack0xffffffb8 + iVar1) = &stack0xffffffc4 + iVar1;
      *(undefined4 *)(&stack0xffffffb4 + iVar1) = 0xaea0f5;
      _memset(*(void **)(&stack0xffffffb8 + iVar1),*(int *)(&stack0xffffffbc + iVar1),
              *(size_t *)((int)local_20 + iVar1 + -0x20));
      local_8 = (undefined *)0xffffffff;
      if (&stack0xffffffc4 == puVar6) {
        *(int *)((int)local_20 + iVar1 + -0x20) = iVar5;
        *(undefined4 *)(&stack0xffffffbc + iVar1) = 2;
        *(undefined4 *)(&stack0xffffffb8 + iVar1) = 0xaea11f;
        puVar7 = _calloc(*(size_t *)(&stack0xffffffbc + iVar1),
                         *(size_t *)((int)local_20 + iVar1 + -0x20));
        if (puVar7 == (void *)0x0) {
          return 0;
        }
        bVar2 = true;
      }
      *(int *)((int)local_20 + iVar1 + -0x20) = iVar5;
      *(undefined1 **)(&stack0xffffffbc + iVar1) = puVar7;
      *(size_t *)(&stack0xffffffb8 + iVar1) = param_3;
      *(LPCSTR *)(&stack0xffffffb4 + iVar1) = param_2;
      *(undefined4 *)(&stack0xffffffb0 + iVar1) = 1;
      *(UINT *)(&stack0xffffffac + iVar1) = param_5;
      puVar9 = (undefined1 *)((int)&uStackY_58 + iVar1);
      *(undefined4 *)((int)&uStackY_58 + iVar1) = 0xaea141;
      iVar5 = MultiByteToWideChar(*(UINT *)(&stack0xffffffac + iVar1),
                                  *(DWORD *)(&stack0xffffffb0 + iVar1),
                                  *(LPCCH *)(&stack0xffffffb4 + iVar1),
                                  *(int *)(&stack0xffffffb8 + iVar1),
                                  *(LPWSTR *)(&stack0xffffffbc + iVar1),
                                  *(int *)((int)local_20 + iVar1 + -0x20));
      puVar6 = puVar9;
      if (iVar5 != 0) {
        *(LPWORD *)(puVar9 + -4) = param_4;
        *(int *)(puVar9 + -8) = iVar5;
        *(undefined1 **)(puVar9 + -0xc) = puVar7;
        *(DWORD *)(puVar9 + -0x10) = param_1;
        puVar6 = puVar9 + -0x14;
        *(undefined4 *)(puVar9 + -0x14) = 0xaea153;
        local_28 = GetStringTypeW(*(DWORD *)(puVar9 + -0x10),*(LPCWCH *)(puVar9 + -0xc),
                                  *(int *)(puVar9 + -8),*(LPWORD *)(puVar9 + -4));
      }
      if (bVar2) {
        *(undefined1 **)(puVar6 + -4) = puVar7;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar6 + -8) = &UNK_00aea162;
        _free(*(void **)(puVar6 + -4));
      }
      return local_28;
    }
  }
  return 0;
}


//// FUNCTION FUN_00aea1df @ 00aea1df ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __cdecl FUN_00aea1df(int param_1,LCID param_2,LCTYPE param_3,char *param_4)

{
  byte bVar1;
  bool bVar2;
  size_t sVar3;
  DWORD DVar4;
  LPSTR _Source;
  char *_Dest;
  int iVar5;
  byte *pbVar6;
  CHAR local_88 [128];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  if (param_1 == 1) {
    _Source = local_88;
    bVar2 = false;
    sVar3 = FUN_00aed9aa(param_2,param_3,_Source,0x80,0);
    if (sVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 != 0x7a) {
        return 0xffffffff;
      }
      sVar3 = FUN_00aed9aa(param_2,param_3,(LPSTR)0x0,0,0);
      if (sVar3 == 0) {
        return 0xffffffff;
      }
      _Source = _malloc(sVar3);
      if (_Source == (LPSTR)0x0) {
        return 0xffffffff;
      }
      bVar2 = true;
      sVar3 = FUN_00aed9aa(param_2,param_3,_Source,sVar3,0);
      if (sVar3 == 0) goto LAB_00aea287;
    }
    _Dest = _malloc(sVar3);
    *(char **)param_4 = _Dest;
    if (_Dest != (char *)0x0) {
      _strncpy(_Dest,_Source,sVar3);
      if (!bVar2) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      _free(_Source);
    }
    if (bVar2) {
LAB_00aea287:
                    /* WARNING: Subroutine does not return */
      _free(_Source);
    }
  }
  else if (param_1 == 0) {
    pbVar6 = &DAT_010cc068;
    iVar5 = FUN_00aed87a(param_2,param_3,(LPWSTR)&DAT_010cc068,4,0);
    if (iVar5 == 0) {
      return 0xffffffff;
    }
    *param_4 = '\0';
    do {
      bVar1 = *pbVar6;
      iVar5 = _isdigit((uint)bVar1);
      if (iVar5 == 0) {
        return 0;
      }
      pbVar6 = pbVar6 + 2;
      *param_4 = *param_4 * '\n' + bVar1 + -0x30;
    } while ((int)pbVar6 < 0x10cc070);
    return 0;
  }
  return 0xffffffff;
}


//// FUNCTION __get_lc_time @ 00aea306 ////

/* Library Function - Single Match
    __get_lc_time
   
   Library: Visual Studio 2003 Release */

uint __get_lc_time(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  char *unaff_ESI;
  
  uVar1 = (uint)DAT_010cc08e;
  uVar45 = (uint)DAT_010cc090;
  if (unaff_ESI == (char *)0x0) {
    return 0xffffffff;
  }
  uVar2 = FUN_00aea1df(1,uVar1,0x31,unaff_ESI + 4);
  uVar3 = FUN_00aea1df(1,uVar1,0x32,unaff_ESI + 8);
  uVar4 = FUN_00aea1df(1,uVar1,0x33,unaff_ESI + 0xc);
  uVar5 = FUN_00aea1df(1,uVar1,0x34,unaff_ESI + 0x10);
  uVar6 = FUN_00aea1df(1,uVar1,0x35,unaff_ESI + 0x14);
  uVar7 = FUN_00aea1df(1,uVar1,0x36,unaff_ESI + 0x18);
  uVar8 = FUN_00aea1df(1,uVar1,0x37,unaff_ESI);
  uVar9 = FUN_00aea1df(1,uVar1,0x2a,unaff_ESI + 0x20);
  uVar10 = FUN_00aea1df(1,uVar1,0x2b,unaff_ESI + 0x24);
  uVar11 = FUN_00aea1df(1,uVar1,0x2c,unaff_ESI + 0x28);
  uVar12 = FUN_00aea1df(1,uVar1,0x2d,unaff_ESI + 0x2c);
  uVar13 = FUN_00aea1df(1,uVar1,0x2e,unaff_ESI + 0x30);
  uVar14 = FUN_00aea1df(1,uVar1,0x2f,unaff_ESI + 0x34);
  uVar15 = FUN_00aea1df(1,uVar1,0x30,unaff_ESI + 0x1c);
  uVar16 = FUN_00aea1df(1,uVar1,0x44,unaff_ESI + 0x38);
  uVar17 = FUN_00aea1df(1,uVar1,0x45,unaff_ESI + 0x3c);
  uVar18 = FUN_00aea1df(1,uVar1,0x46,unaff_ESI + 0x40);
  uVar19 = FUN_00aea1df(1,uVar1,0x47,unaff_ESI + 0x44);
  uVar20 = FUN_00aea1df(1,uVar1,0x48,unaff_ESI + 0x48);
  uVar21 = FUN_00aea1df(1,uVar1,0x49,unaff_ESI + 0x4c);
  uVar22 = FUN_00aea1df(1,uVar1,0x4a,unaff_ESI + 0x50);
  uVar23 = FUN_00aea1df(1,uVar1,0x4b,unaff_ESI + 0x54);
  uVar24 = FUN_00aea1df(1,uVar1,0x4c,unaff_ESI + 0x58);
  uVar25 = FUN_00aea1df(1,uVar1,0x4d,unaff_ESI + 0x5c);
  uVar26 = FUN_00aea1df(1,uVar1,0x4e,unaff_ESI + 0x60);
  uVar27 = FUN_00aea1df(1,uVar1,0x4f,unaff_ESI + 100);
  uVar28 = FUN_00aea1df(1,uVar1,0x38,unaff_ESI + 0x68);
  uVar29 = FUN_00aea1df(1,uVar1,0x39,unaff_ESI + 0x6c);
  uVar30 = FUN_00aea1df(1,uVar1,0x3a,unaff_ESI + 0x70);
  uVar31 = FUN_00aea1df(1,uVar1,0x3b,unaff_ESI + 0x74);
  uVar32 = FUN_00aea1df(1,uVar1,0x3c,unaff_ESI + 0x78);
  uVar33 = FUN_00aea1df(1,uVar1,0x3d,unaff_ESI + 0x7c);
  uVar34 = FUN_00aea1df(1,uVar1,0x3e,unaff_ESI + 0x80);
  uVar35 = FUN_00aea1df(1,uVar1,0x3f,unaff_ESI + 0x84);
  uVar36 = FUN_00aea1df(1,uVar1,0x40,unaff_ESI + 0x88);
  uVar37 = FUN_00aea1df(1,uVar1,0x41,unaff_ESI + 0x8c);
  uVar38 = FUN_00aea1df(1,uVar1,0x42,unaff_ESI + 0x90);
  uVar39 = FUN_00aea1df(1,uVar1,0x43,unaff_ESI + 0x94);
  uVar40 = FUN_00aea1df(1,uVar1,0x28,unaff_ESI + 0x98);
  uVar1 = FUN_00aea1df(1,uVar1,0x29,unaff_ESI + 0x9c);
  uVar41 = FUN_00aea1df(1,uVar45,0x1f,unaff_ESI + 0xa0);
  uVar42 = FUN_00aea1df(1,uVar45,0x20,unaff_ESI + 0xa4);
  uVar43 = FUN_00aea1df(1,uVar45,0x1003,unaff_ESI + 0xa8);
  uVar44 = FUN_00aea1df(0,uVar45,0x1009,unaff_ESI + 0xb0);
  *(uint *)(unaff_ESI + 0xac) = uVar45;
  return uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 |
         uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 | uVar22 |
         uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31 | uVar32 |
         uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 | uVar1 | uVar41 |
         uVar42 | uVar43 | uVar44;
}


//// FUNCTION FUN_00aea66d @ 00aea66d ////

void __cdecl FUN_00aea66d(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  return;
}


//// FUNCTION FUN_00aea88f @ 00aea88f ////

void __cdecl FUN_00aea88f(undefined4 *param_1)

{
  undefined *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined *)*param_1;
    if ((puVar1 != *(undefined **)PTR_PTR_00e9a24c) && (puVar1 != PTR_DAT_00e9a21c)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
    puVar1 = (undefined *)param_1[1];
    if ((puVar1 != *(undefined **)(PTR_PTR_00e9a24c + 4)) && (puVar1 != PTR_DAT_00e9a220)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
    puVar1 = (undefined *)param_1[2];
    if ((puVar1 != *(undefined **)(PTR_PTR_00e9a24c + 8)) && (puVar1 != PTR_DAT_00e9a224)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
  }
  return;
}


//// FUNCTION FUN_00aea8ee @ 00aea8ee ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00aea8ee(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined **_Memory;
  uint uVar8;
  char *pcVar9;
  undefined **ppuVar10;
  
  if ((DAT_010cc054 == 0) && (DAT_010cc050 == 0)) {
    if (((DAT_010daa6c != (int *)0x0) && (*DAT_010daa6c == 0)) &&
       (DAT_010daa6c != *(int **)(PTR_DAT_00e9a474 + 0x2c))) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010daa6c);
    }
    DAT_010daa70 = (undefined4 *)0x0;
    DAT_010daa6c = (undefined4 *)0x0;
    _Memory = &PTR_DAT_00e9a21c;
    DAT_010cc098 = (undefined **)0x0;
    ppuVar10 = DAT_010cc098;
    puVar3 = DAT_010daa6c;
  }
  else {
    _Memory = _calloc(1,0x30);
    if (_Memory == (undefined **)0x0) {
      return 1;
    }
    puVar3 = (undefined4 *)PTR_PTR_00e9a24c;
    ppuVar10 = _Memory;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppuVar10 = (undefined *)*puVar3;
      puVar3 = puVar3 + 1;
      ppuVar10 = ppuVar10 + 1;
    }
    puVar3 = _malloc(4);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *puVar3 = 0;
    if (DAT_010cc054 == 0) {
      DAT_010daa70 = (undefined4 *)0x0;
      *_Memory = PTR_DAT_00e9a21c;
      _Memory[1] = PTR_DAT_00e9a220;
      _Memory[2] = PTR_DAT_00e9a224;
    }
    else {
      DAT_010daa70 = _malloc(4);
      if (DAT_010daa70 == (undefined4 *)0x0) {
LAB_00aea9f9:
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *DAT_010daa70 = 0;
      uVar8 = (uint)DAT_010cc08a;
      iVar7 = FUN_00aea1df(1,uVar8,0xe,(char *)_Memory);
      iVar4 = FUN_00aea1df(1,uVar8,0xf,(char *)(_Memory + 1));
      iVar5 = FUN_00aea1df(1,uVar8,0x10,(char *)(_Memory + 2));
      if (iVar5 != 0 || (iVar7 != 0 || iVar4 != 0)) {
        FUN_00aea88f(_Memory);
        goto LAB_00aea9f9;
      }
      pcVar6 = _Memory[2];
      while (*pcVar6 != '\0') {
        cVar2 = *pcVar6;
        if ((cVar2 < '0') || ('9' < cVar2)) {
          pcVar9 = pcVar6;
          if (cVar2 != ';') goto LAB_00aeaa25;
          do {
            pcVar1 = pcVar9 + 1;
            *pcVar9 = *pcVar1;
            pcVar9 = pcVar1;
          } while (*pcVar1 != '\0');
        }
        else {
          *pcVar6 = cVar2 + -0x30;
LAB_00aeaa25:
          pcVar6 = pcVar6 + 1;
        }
      }
    }
    ppuVar10 = _Memory;
    if (((DAT_010daa6c != (int *)0x0) && (*DAT_010daa6c == 0)) &&
       (DAT_010daa6c != *(int **)(PTR_DAT_00e9a474 + 0x2c))) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010daa6c);
    }
  }
  DAT_010daa6c = puVar3;
  DAT_010cc098 = ppuVar10;
  _DAT_00e9a954 = 1;
  DAT_00e9a950 = **_Memory;
  PTR_PTR_00e9a24c = (undefined *)_Memory;
  return 0;
}


//// FUNCTION FUN_00aeaaee @ 00aeaaee ////

void __cdecl FUN_00aeaaee(int param_1)

{
  undefined *puVar1;
  
  if (param_1 != 0) {
    puVar1 = *(undefined **)(param_1 + 0xc);
    if ((puVar1 != *(undefined **)(PTR_PTR_00e9a24c + 0xc)) && (puVar1 != PTR_DAT_00e9a228)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x10);
    if ((puVar1 != *(undefined **)(PTR_PTR_00e9a24c + 0x10)) && (puVar1 != PTR_DAT_00e9a22c)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x14);
    if ((puVar1 != *(undefined **)(PTR_PTR_00e9a24c + 0x14)) && (puVar1 != PTR_DAT_00e9a230)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x18);
    if ((puVar1 != *(undefined **)(PTR_PTR_00e9a24c + 0x18)) && (puVar1 != PTR_DAT_00e9a234)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x1c);
    if ((puVar1 != *(undefined **)(PTR_PTR_00e9a24c + 0x1c)) && (puVar1 != PTR_DAT_00e9a238)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x20);
    if ((puVar1 != *(undefined **)(PTR_PTR_00e9a24c + 0x20)) && (puVar1 != PTR_DAT_00e9a23c)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x24);
    if ((puVar1 != *(undefined **)(PTR_PTR_00e9a24c + 0x24)) && (puVar1 != PTR_DAT_00e9a240)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
  }
  return;
}


//// FUNCTION FUN_00aeabc7 @ 00aeabc7 ////

undefined4 FUN_00aeabc7(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 *_Memory;
  undefined4 *puVar3;
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
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  char *pcVar19;
  uint uVar20;
  char *pcVar21;
  undefined **ppuVar22;
  undefined4 *puVar23;
  
  if ((DAT_010cc050 == 0) && (DAT_010cc054 == 0)) {
    DAT_010daa68 = (undefined4 *)0x0;
    DAT_010daa6c = (undefined4 *)0x0;
    PTR_PTR_00e9a24c = (undefined *)&PTR_DAT_00e9a21c;
    DAT_010cc098 = (undefined4 *)0x0;
  }
  else {
    _Memory = _calloc(1,0x30);
    if (_Memory == (undefined4 *)0x0) {
      return 1;
    }
    puVar3 = _malloc(4);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *puVar3 = 0;
    if (DAT_010cc050 == 0) {
      ppuVar22 = &PTR_DAT_00e9a21c;
      puVar23 = _Memory;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar23 = *ppuVar22;
        ppuVar22 = ppuVar22 + 1;
        puVar23 = puVar23 + 1;
      }
      DAT_010daa68 = (undefined4 *)0x0;
    }
    else {
      DAT_010daa68 = _malloc(4);
      if (DAT_010daa68 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *DAT_010daa68 = 0;
      uVar20 = (uint)DAT_010cc084;
      iVar4 = FUN_00aea1df(1,uVar20,0x15,(char *)(_Memory + 3));
      iVar5 = FUN_00aea1df(1,uVar20,0x14,(char *)(_Memory + 4));
      iVar6 = FUN_00aea1df(1,uVar20,0x16,(char *)(_Memory + 5));
      iVar7 = FUN_00aea1df(1,uVar20,0x17,(char *)(_Memory + 6));
      iVar8 = FUN_00aea1df(1,uVar20,0x18,(char *)(_Memory + 7));
      iVar9 = FUN_00aea1df(1,uVar20,0x50,(char *)(_Memory + 8));
      iVar10 = FUN_00aea1df(1,uVar20,0x51,(char *)(_Memory + 9));
      iVar11 = FUN_00aea1df(0,uVar20,0x1a,(char *)(_Memory + 10));
      iVar12 = FUN_00aea1df(0,uVar20,0x19,(char *)((int)_Memory + 0x29));
      iVar13 = FUN_00aea1df(0,uVar20,0x54,(char *)((int)_Memory + 0x2a));
      iVar14 = FUN_00aea1df(0,uVar20,0x55,(char *)((int)_Memory + 0x2b));
      iVar15 = FUN_00aea1df(0,uVar20,0x56,(char *)(_Memory + 0xb));
      iVar16 = FUN_00aea1df(0,uVar20,0x57,(char *)((int)_Memory + 0x2d));
      iVar17 = FUN_00aea1df(0,uVar20,0x52,(char *)((int)_Memory + 0x2e));
      iVar18 = FUN_00aea1df(0,uVar20,0x53,(char *)((int)_Memory + 0x2f));
      if (iVar18 != 0 ||
          (((((((((((((iVar4 != 0 || iVar5 != 0) || iVar6 != 0) || iVar7 != 0) || iVar8 != 0) ||
                  iVar9 != 0) || iVar10 != 0) || iVar11 != 0) || iVar12 != 0) || iVar13 != 0) ||
             iVar14 != 0) || iVar15 != 0) || iVar16 != 0) || iVar17 != 0)) {
        FUN_00aeaaee((int)_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      pcVar19 = (char *)_Memory[7];
      while (*pcVar19 != '\0') {
        cVar2 = *pcVar19;
        if ((cVar2 < '0') || ('9' < cVar2)) {
          pcVar21 = pcVar19;
          if (cVar2 != ';') goto LAB_00aead9a;
          do {
            pcVar1 = pcVar21 + 1;
            *pcVar21 = *pcVar1;
            pcVar21 = pcVar1;
          } while (*pcVar1 != '\0');
        }
        else {
          *pcVar19 = cVar2 + -0x30;
LAB_00aead9a:
          pcVar19 = pcVar19 + 1;
        }
      }
    }
    *_Memory = *(undefined4 *)PTR_PTR_00e9a24c;
    _Memory[1] = *(undefined4 *)(PTR_PTR_00e9a24c + 4);
    _Memory[2] = *(undefined4 *)(PTR_PTR_00e9a24c + 8);
    PTR_PTR_00e9a24c = (undefined *)_Memory;
    DAT_010cc098 = _Memory;
    DAT_010daa6c = puVar3;
  }
  return 0;
}


//// FUNCTION _strcspn @ 00aeae10 ////

/* Library Function - Single Match
    _strcspn
   
   Library: Visual Studio 2003 Release */

size_t __cdecl _strcspn(char *_Str,char *_Control)

{
  byte bVar1;
  size_t sVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  sVar2 = 0xffffffff;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar2;
    }
    _Str = _Str + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return sVar2;
}


//// FUNCTION _TranslateName @ 00aeae56 ////

/* Library Function - Single Match
    _TranslateName
   
   Library: Visual Studio 2003 Release */

bool __cdecl _TranslateName(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = 0;
  iVar2 = 1;
  if (-1 < param_2) {
    do {
      bVar5 = iVar2 == 0;
      iVar2 = 0;
      if (bVar5) break;
      iVar4 = (param_2 + iVar3) / 2;
      puVar1 = (undefined4 *)(param_1 + iVar4 * 8);
      iVar2 = __stricmp((char *)*param_3,(char *)*puVar1);
      if (iVar2 == 0) {
        *param_3 = puVar1 + 1;
      }
      else if (iVar2 < 0) {
        param_2 = iVar4 + -1;
      }
      else {
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= param_2);
  }
  return iVar2 == 0;
}


//// FUNCTION _GetLcidFromDefault @ 00aeaeb6 ////

/* Library Function - Single Match
    _GetLcidFromDefault
   
   Library: Visual Studio 2003 Release */

void _GetLcidFromDefault(void)

{
  DAT_010cc09c._0_2_ = (ushort)DAT_010cc09c | 0x104;
  Locale_010cc0a4 = GetUserDefaultLCID();
  Locale_010cc0a0 = Locale_010cc0a4;
  return;
}


//// FUNCTION _ProcessCodePage @ 00aeaed0 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _ProcessCodePage
   
   Library: Visual Studio 2003 Release */

void __fastcall _ProcessCodePage(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_10 [8];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (iVar1 = _strcmp(param_1,"ACP"), iVar1 == 0)) {
    uVar2 = 0x1004;
  }
  else {
    iVar1 = _strcmp(param_1,"OCP");
    if (iVar1 != 0) goto LAB_00aeaf34;
    uVar2 = 0xb;
  }
  iVar1 = (*DAT_010cc0bc)(Locale_010cc0a4,uVar2,local_10,8);
  if (iVar1 == 0) {
    return;
  }
  param_1 = local_10;
LAB_00aeaf34:
  _atol(param_1);
  return;
}


//// FUNCTION _TestDefaultCountry @ 00aeaf46 ////

/* Library Function - Single Match
    _TestDefaultCountry
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl _TestDefaultCountry(short param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == *(short *)((int)&DAT_00d83f9c + uVar1)) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}


//// FUNCTION crtGetLocaleInfoA @ 00aeaf64 ////

/* Library Function - Single Match
    _crtGetLocaleInfoA@16
   
   Library: Visual Studio 2003 Release */

int crtGetLocaleInfoA(uint param_1,LCTYPE param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *_Source;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0x1a;
  do {
    iVar1 = (iVar2 + iVar3) / 2;
    if (param_1 == *(uint *)(&UNK_00d83980 + iVar1 * 0x2c)) {
      if (param_2 == 1) {
        _Source = &DAT_00d83984 + iVar1 * 0x2c;
      }
      else if (param_2 == 3) {
        _Source = &DAT_00d83990 + iVar1 * 0x2c;
      }
      else if (param_2 == 7) {
        _Source = &DAT_00d83998 + iVar1 * 0x2c;
      }
      else if (param_2 == 0xb) {
        _Source = &DAT_00d8399c + iVar1 * 0x2c;
      }
      else if (param_2 == 0x1001) {
        _Source = *(char **)(&UNK_00d8398c + iVar1 * 0x2c);
      }
      else if (param_2 == 0x1002) {
        _Source = *(char **)(&UNK_00d83994 + iVar1 * 0x2c);
      }
      else {
        if (param_2 != 0x1004) break;
        _Source = &DAT_00d839a4 + iVar1 * 0x2c;
      }
      if ((_Source != (char *)0x0) && (0 < param_4)) {
        _strncpy(param_3,_Source,param_4 - 1);
        param_3[param_4 + -1] = '\0';
        return 1;
      }
      break;
    }
    if (param_1 < *(uint *)(&UNK_00d83980 + iVar1 * 0x2c)) {
      iVar2 = iVar1 + -1;
    }
    else {
      iVar3 = iVar1 + 1;
    }
  } while (iVar3 <= iVar2);
  iVar2 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
  return iVar2;
}


//// FUNCTION _LcidFromHexString @ 00aeb047 ////

/* Library Function - Single Match
    _LcidFromHexString
   
   Library: Visual Studio 2003 Release */

int __fastcall _LcidFromHexString(undefined4 param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = 0;
  while (cVar2 = *param_2, cVar2 != '\0') {
    param_2 = param_2 + 1;
    if ((cVar2 < 'a') || ('f' < cVar2)) {
      if (('@' < cVar2) && (cVar2 < 'G')) {
        cVar2 = cVar2 + -7;
      }
    }
    else {
      cVar2 = cVar2 + -0x27;
    }
    iVar1 = (iVar1 + 0xffffffd) * 0x10 + (int)cVar2;
  }
  return iVar1;
}


//// FUNCTION _GetPrimaryLen @ 00aeb07c ////

/* Library Function - Single Match
    _GetPrimaryLen
   
   Library: Visual Studio 2003 Release */

int __fastcall _GetPrimaryLen(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    if (((cVar1 < 'A') || ('Z' < cVar1)) && ((cVar1 < 'a' || ('z' < cVar1)))) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


//// FUNCTION _CountryEnumProc@4 @ 00aeb099 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _CountryEnumProc@4
   
   Library: Visual Studio 2003 Release
   lpLocaleEnumProc parameter of EnumSystemLocalesA
    */

uint __thiscall _CountryEnumProc_4(void *this,char *param_1)

{
  LCID LVar1;
  int iVar2;
  uint uVar3;
  char local_80 [120];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  LVar1 = _LcidFromHexString(this,param_1);
  iVar2 = (*DAT_010cc0bc)(LVar1,(-(uint)(DAT_010cc0ac != 0) & 0xfffff005) + 0x1002,local_80,0x78);
  if (iVar2 == 0) {
    DAT_010cc09c = 0;
    uVar3 = 1;
  }
  else {
    iVar2 = __stricmp(DAT_010cc0b0,local_80);
    if (iVar2 == 0) {
      iVar2 = _TestDefaultCountry((short)LVar1);
      if (iVar2 != 0) {
        DAT_010cc09c = DAT_010cc09c | 4;
        Locale_010cc0a0 = LVar1;
        Locale_010cc0a4 = LVar1;
      }
    }
    uVar3 = ~(DAT_010cc09c >> 2) & 1;
  }
  return uVar3;
}


//// FUNCTION _TestDefaultLanguage @ 00aeb12d ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _TestDefaultLanguage
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl _TestDefaultLanguage(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  size_t sVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  char *pcVar6;
  char local_80 [120];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  iVar1 = (*DAT_010cc0bc)(param_1 & 0x3ff | 0x400,1,local_80,0x78);
  if (iVar1 == 0) {
LAB_00aeb18d:
    uVar5 = 0;
  }
  else {
    uVar2 = _LcidFromHexString(extraout_ECX,local_80);
    if ((param_1 != uVar2) && (param_2 != 0)) {
      pcVar6 = DAT_010cc0b8;
      sVar3 = _strlen(DAT_010cc0b8);
      sVar4 = _GetPrimaryLen(pcVar6,DAT_010cc0b8);
      if (sVar4 == sVar3) goto LAB_00aeb18d;
    }
    uVar5 = 1;
  }
  return uVar5;
}


//// FUNCTION _LangCountryEnumProc@4 @ 00aeb19e ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _LangCountryEnumProc@4
   
   Library: Visual Studio 2003 Release
   lpLocaleEnumProc parameter of EnumSystemLocalesA
    */

uint __thiscall _LangCountryEnumProc_4(void *this,char *param_1)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  char local_80 [120];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  uVar1 = _LcidFromHexString(this,param_1);
  iVar2 = (*DAT_010cc0bc)(uVar1,(-(uint)(DAT_010cc0ac != 0) & 0xfffff005) + 0x1002,local_80,0x78);
  if (iVar2 == 0) {
    DAT_010cc09c = 0;
    return 1;
  }
  iVar2 = __stricmp(DAT_010cc0b0,local_80);
  if (iVar2 == 0) {
    iVar2 = (*DAT_010cc0bc)(uVar1,(-(uint)(DAT_010cc0a8 != 0) & 0xfffff002) + 0x1001,local_80,0x78);
    if (iVar2 == 0) {
      DAT_010cc09c = 0;
      return 1;
    }
    iVar2 = __stricmp(DAT_010cc0b8,local_80);
    if (iVar2 == 0) {
      DAT_010cc09c = DAT_010cc09c | 0x304;
      Locale_010cc0a0 = uVar1;
      Locale_010cc0a4 = uVar1;
    }
    else if ((DAT_010cc09c & 2) == 0) {
      if ((DAT_010cc0b4 == 0) ||
         (iVar2 = __strnicmp(DAT_010cc0b8,local_80,DAT_010cc0b4), iVar2 != 0)) {
        if (((DAT_010cc09c & 1) == 0) && (iVar2 = _TestDefaultCountry((short)uVar1), iVar2 != 0)) {
          DAT_010cc09c = DAT_010cc09c | 1;
          Locale_010cc0a4 = uVar1;
        }
      }
      else {
        DAT_010cc09c = DAT_010cc09c | 2;
        Locale_010cc0a4 = uVar1;
        sVar3 = _strlen(DAT_010cc0b8);
        if (sVar3 == DAT_010cc0b4) {
          Locale_010cc0a0 = uVar1;
        }
      }
    }
  }
  if ((DAT_010cc09c & 0x300) == 0x300) goto LAB_00aeb39c;
  iVar2 = (*DAT_010cc0bc)(uVar1,(-(uint)(DAT_010cc0a8 != 0) & 0xfffff002) + 0x1001,local_80,0x78);
  if (iVar2 == 0) {
    DAT_010cc09c = 0;
    return 1;
  }
  iVar2 = __stricmp(DAT_010cc0b8,local_80);
  if (iVar2 == 0) {
    DAT_010cc09c = DAT_010cc09c | 0x200;
    if (((DAT_010cc0a8 == 0) && (DAT_010cc0b4 != 0)) &&
       (sVar3 = _strlen(DAT_010cc0b8), sVar3 == DAT_010cc0b4)) {
      iVar2 = 1;
      goto LAB_00aeb37b;
    }
  }
  else {
    if (((DAT_010cc0a8 != 0) || (DAT_010cc0b4 == 0)) ||
       (iVar2 = __strnicmp(DAT_010cc0b8,local_80,DAT_010cc0b4), iVar2 != 0)) goto LAB_00aeb39c;
    iVar2 = 0;
LAB_00aeb37b:
    iVar2 = _TestDefaultLanguage(uVar1,iVar2);
    if (iVar2 == 0) goto LAB_00aeb39c;
  }
  DAT_010cc09c = DAT_010cc09c | 0x100;
  if (Locale_010cc0a0 == 0) {
    Locale_010cc0a0 = uVar1;
  }
LAB_00aeb39c:
  return ~(DAT_010cc09c >> 2) & 1;
}


//// FUNCTION _LanguageEnumProc@4 @ 00aeb3b8 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _LanguageEnumProc@4
   
   Library: Visual Studio 2003 Release
   lpLocaleEnumProc parameter of EnumSystemLocalesA
    */

uint __thiscall _LanguageEnumProc_4(void *this,char *param_1)

{
  uint uVar1;
  int iVar2;
  char local_80 [120];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  uVar1 = _LcidFromHexString(this,param_1);
  iVar2 = (*DAT_010cc0bc)(uVar1,(-(uint)(DAT_010cc0a8 != 0) & 0xfffff002) + 0x1001,local_80,0x78);
  if (iVar2 == 0) {
    DAT_010cc09c = 0;
    return 1;
  }
  iVar2 = __stricmp(DAT_010cc0b8,local_80);
  if (iVar2 == 0) {
    if (DAT_010cc0a8 == 0) {
      iVar2 = 1;
      goto LAB_00aeb44a;
    }
  }
  else {
    if (((DAT_010cc0a8 != 0) || (DAT_010cc0b4 == 0)) ||
       (iVar2 = __strnicmp(DAT_010cc0b8,local_80,DAT_010cc0b4), iVar2 != 0)) goto LAB_00aeb469;
    iVar2 = 0;
LAB_00aeb44a:
    iVar2 = _TestDefaultLanguage(uVar1,iVar2);
    if (iVar2 == 0) goto LAB_00aeb469;
  }
  DAT_010cc09c = DAT_010cc09c | 4;
  Locale_010cc0a0 = uVar1;
  Locale_010cc0a4 = uVar1;
LAB_00aeb469:
  return ~(DAT_010cc09c >> 2) & 1;
}


//// FUNCTION _GetLcidFromCountry @ 00aeb483 ////

/* Library Function - Single Match
    _GetLcidFromCountry
   
   Library: Visual Studio 2003 Release */

void _GetLcidFromCountry(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_010cc0b0);
  DAT_010cc0ac = (uint)(sVar1 == 3);
  EnumSystemLocalesA(_CountryEnumProc_4,1);
  if ((DAT_010cc09c & 4) == 0) {
    DAT_010cc09c = 0;
  }
  return;
}


//// FUNCTION _GetLcidFromLangCountry @ 00aeb4ba ////

/* Library Function - Single Match
    _GetLcidFromLangCountry
   
   Library: Visual Studio 2003 Release */

void _GetLcidFromLangCountry(void)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = DAT_010cc0b8;
  sVar1 = _strlen(DAT_010cc0b8);
  DAT_010cc0a8 = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_010cc0b0);
  DAT_010cc0ac = (uint)(sVar1 == 3);
  Locale_010cc0a0 = 0;
  if (DAT_010cc0a8 == 0) {
    DAT_010cc0b4 = _GetPrimaryLen(pcVar2,DAT_010cc0b8);
  }
  else {
    DAT_010cc0b4 = 2;
  }
  EnumSystemLocalesA(_LangCountryEnumProc_4,1);
  if ((((DAT_010cc09c & 0x100) == 0) || ((DAT_010cc09c & 0x200) == 0)) || ((DAT_010cc09c & 7) == 0))
  {
    DAT_010cc09c = 0;
  }
  return;
}


//// FUNCTION _GetLcidFromLanguage @ 00aeb540 ////

/* Library Function - Single Match
    _GetLcidFromLanguage
   
   Library: Visual Studio 2003 Release */

void _GetLcidFromLanguage(void)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = DAT_010cc0b8;
  sVar1 = _strlen(DAT_010cc0b8);
  DAT_010cc0a8 = (uint)(sVar1 == 3);
  if (sVar1 == 3) {
    DAT_010cc0b4 = 2;
  }
  else {
    DAT_010cc0b4 = _GetPrimaryLen(pcVar2,DAT_010cc0b8);
  }
  EnumSystemLocalesA(_LanguageEnumProc_4,1);
  if ((DAT_010cc09c & 4) == 0) {
    DAT_010cc09c = 0;
  }
  return;
}


//// FUNCTION ___get_qualified_locale @ 00aeb595 ////

/* Library Function - Single Match
    ___get_qualified_locale
   
   Library: Visual Studio 2003 Release */

BOOL __cdecl ___get_qualified_locale(LPLC_STRINGS _LpInStr,UINT *_LpCodePage,LPLC_STRINGS _LpOutStr)

{
  LCID LVar1;
  undefined2 uVar2;
  bool bVar3;
  undefined3 extraout_var;
  uint _Value;
  WINBOOL WVar4;
  int iVar5;
  BOOL BVar6;
  
  if (DAT_010cc0bc == (code *)0x0) {
    if (DAT_010cbbc8 == 2) {
      DAT_010cc0bc = GetLocaleInfoA_exref;
    }
    else {
      DAT_010cc0bc = crtGetLocaleInfoA;
    }
  }
  if (_LpInStr == (LPLC_STRINGS)0x0) {
LAB_00aeb66f:
    _GetLcidFromDefault();
LAB_00aeb674:
    if (DAT_010cc09c == 0) {
      return 0;
    }
  }
  else {
    DAT_010cc0b0 = _LpInStr->szLanguage + 0x20;
    DAT_010cc0b8 = _LpInStr;
    if ((DAT_010cc0b0 != (wchar_t *)0x0) && ((char)*DAT_010cc0b0 != '\0')) {
      _TranslateName(0xd83fb0,0x16,&DAT_010cc0b0);
    }
    DAT_010cc09c = 0;
    if ((DAT_010cc0b8 == (LPLC_STRINGS)0x0) || ((char)DAT_010cc0b8->szLanguage[0] == '\0')) {
      if ((DAT_010cc0b0 == (wchar_t *)0x0) || ((char)*DAT_010cc0b0 == '\0')) goto LAB_00aeb66f;
      _GetLcidFromCountry();
      goto LAB_00aeb674;
    }
    if ((DAT_010cc0b0 == (wchar_t *)0x0) || ((char)*DAT_010cc0b0 == '\0')) {
      _GetLcidFromLanguage();
    }
    else {
      _GetLcidFromLangCountry();
    }
    if (DAT_010cc09c == 0) {
      bVar3 = _TranslateName(0xd84160,0x40,&DAT_010cc0b8);
      if (CONCAT31(extraout_var,bVar3) != 0) {
        if ((DAT_010cc0b0 == (wchar_t *)0x0) || ((char)*DAT_010cc0b0 == '\0')) {
          _GetLcidFromLanguage();
        }
        else {
          _GetLcidFromLangCountry();
        }
      }
      goto LAB_00aeb674;
    }
  }
  _Value = _ProcessCodePage((char *)_LpInStr->szCountry);
  if (((_Value == 0) || (WVar4 = IsValidCodePage(_Value & 0xffff), WVar4 == 0)) ||
     (WVar4 = IsValidLocale(Locale_010cc0a0,1), LVar1 = Locale_010cc0a0, WVar4 == 0)) {
LAB_00aeb744:
    BVar6 = 0;
  }
  else {
    if (_LpCodePage != (UINT *)0x0) {
      uVar2 = (undefined2)Locale_010cc0a4;
      *(short *)_LpCodePage = (short)Locale_010cc0a0;
      *(undefined2 *)((int)_LpCodePage + 2) = uVar2;
      *(short *)(_LpCodePage + 1) = (short)_Value;
    }
    if (_LpOutStr != (LPLC_STRINGS)0x0) {
      if ((short)*_LpCodePage == 0x814) {
        FUN_00ada2e0((uint *)_LpOutStr,(uint *)"Norwegian-Nynorsk");
      }
      else {
        iVar5 = (*DAT_010cc0bc)(LVar1,0x1001,_LpOutStr,0x40);
        if (iVar5 == 0) goto LAB_00aeb744;
      }
      iVar5 = (*DAT_010cc0bc)(Locale_010cc0a4,0x1002,_LpOutStr->szLanguage + 0x20,0x40);
      if (iVar5 == 0) goto LAB_00aeb744;
      __itoa(_Value,(char *)_LpOutStr->szCountry,10);
    }
    BVar6 = 1;
  }
  return BVar6;
}


//// FUNCTION _strpbrk @ 00aeb750 ////

/* Library Function - Single Match
    _strpbrk
   
   Library: Visual Studio 2003 Release */

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)0x0;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}


//// FUNCTION _ValidateRead @ 00aeb790 ////

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2003 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  WINBOOL WVar1;
  
  WVar1 = IsBadReadPtr(param_1,param_2);
  return (uint)(WVar1 == 0);
}


//// FUNCTION _ValidateWrite @ 00aeb7ac ////

/* Library Function - Multiple Matches With Different Base Names
    int __cdecl _ValidateRead(void const *,unsigned int)
    int __cdecl _ValidateWrite(void *,unsigned int)
   
   Library: Visual Studio 2003 Release */

int __cdecl _ValidateWrite(void *param_1,uint param_2)

{
  WINBOOL WVar1;
  
  WVar1 = IsBadWritePtr(param_1,param_2);
  return (uint)(WVar1 == 0);
}


//// FUNCTION _ValidateExecute @ 00aeb7c8 ////

/* Library Function - Single Match
    int __cdecl _ValidateExecute(int (__stdcall*)(void))
   
   Library: Visual Studio 2003 Release */

int __cdecl _ValidateExecute(_func_int *param_1)

{
  WINBOOL WVar1;
  
  WVar1 = IsBadCodePtr((FARPROC)param_1);
  return (uint)(WVar1 == 0);
}


//// FUNCTION __ZeroTail @ 00aeb7e0 ////

/* Library Function - Single Match
    __ZeroTail
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __ZeroTail(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2 / 0x20;
  uVar1 = *(uint *)(param_1 + iVar2 * 4) & ~(-1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f));
  while( true ) {
    if (uVar1 != 0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    if (2 < iVar2) break;
    uVar1 = *(uint *)(param_1 + iVar2 * 4);
  }
  return 1;
}


//// FUNCTION __IncMan @ 00aeb812 ////

/* Library Function - Single Match
    __IncMan
   
   Library: Visual Studio 2003 Release */

void __cdecl __IncMan(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = ___addl(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = ___addl(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}


//// FUNCTION __RoundMan @ 00aeb85f ////

/* Library Function - Single Match
    __RoundMan
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __RoundMan(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  
  local_8 = 0;
  iVar2 = param_2 / 0x20;
  bVar4 = 0x1f - (char)(param_2 % 0x20);
  if (((*(uint *)(param_1 + iVar2 * 4) & 1 << (bVar4 & 0x1f)) != 0) &&
     (iVar3 = __ZeroTail(param_1,param_2), iVar3 == 0)) {
    local_8 = __IncMan(param_1,param_2 + -1);
  }
  puVar1 = (uint *)(param_1 + iVar2 * 4);
  *puVar1 = *puVar1 & -1 << (bVar4 & 0x1f);
  iVar2 = iVar2 + 1;
  if (iVar2 < 3) {
    puVar5 = (undefined4 *)(param_1 + iVar2 * 4);
    for (iVar3 = 3 - iVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return local_8;
}


//// FUNCTION __CopyMan @ 00aeb8d1 ////

/* Library Function - Single Match
    __CopyMan
   
   Library: Visual Studio 2003 Release */

void __cdecl __CopyMan(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 3;
  iVar1 = param_1 - (int)param_2;
  do {
    *(undefined4 *)(iVar1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


//// FUNCTION FUN_00aeb8ec @ 00aeb8ec ////

void __cdecl FUN_00aeb8ec(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION __IsZeroMan @ 00aeb8f8 ////

/* Library Function - Single Match
    __IsZeroMan
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __IsZeroMan(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 1;
}


//// FUNCTION __ShrMan @ 00aeb911 ////

/* Library Function - Single Match
    __ShrMan
   
   Library: Visual Studio 2003 Release */

void __cdecl __ShrMan(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint local_8;
  
  bVar3 = (byte)(param_2 % 0x20);
  iVar2 = 0;
  local_8 = 0;
  do {
    uVar1 = *(uint *)(param_1 + iVar2 * 4);
    *(uint *)(param_1 + iVar2 * 4) = uVar1 >> (bVar3 & 0x1f) | local_8;
    local_8 = (uVar1 & ~(-1 << (bVar3 & 0x1f))) << (0x20 - bVar3 & 0x1f);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  iVar2 = 2;
  puVar4 = (undefined4 *)(param_1 + (2 - param_2 / 0x20) * 4);
  do {
    if (iVar2 < param_2 / 0x20) {
      *(undefined4 *)(param_1 + iVar2 * 4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + iVar2 * 4) = *puVar4;
    }
    iVar2 = iVar2 + -1;
    puVar4 = puVar4 + -1;
  } while (-1 < iVar2);
  return;
}


//// FUNCTION __ld12cvt @ 00aeb98c ////

/* Library Function - Single Match
    __ld12cvt
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __ld12cvt(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_1c [3];
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar1 = param_1[5];
  local_10 = *(uint *)(param_1 + 3);
  local_c = *(uint *)(param_1 + 1);
  local_8 = (uint)*param_1 << 0x10;
  uVar4 = uVar1 & 0x7fff;
  iVar5 = uVar4 - 0x3fff;
  if (iVar5 == -0x3fff) {
    iVar5 = 0;
    iVar2 = __IsZeroMan((int)&local_10);
    if (iVar2 != 0) {
LAB_00aebaa4:
      uVar3 = 0;
      goto LAB_00aebaa6;
    }
    local_10 = 0;
    local_c = 0;
  }
  else {
    __CopyMan((int)local_1c,&local_10);
    iVar2 = __RoundMan((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar5 = uVar4 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar5 < iVar2 - param_3[2]) {
      local_10 = 0;
      local_c = 0;
    }
    else {
      if (iVar2 < iVar5) {
        if (*param_3 <= iVar5) {
          local_c = 0;
          local_8 = 0;
          local_10 = 0x80000000;
          __ShrMan((int)&local_10,param_3[3]);
          iVar5 = param_3[5] + *param_3;
          uVar3 = 1;
          goto LAB_00aebaa6;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar5 = param_3[5] + iVar5;
        __ShrMan((int)&local_10,param_3[3]);
        goto LAB_00aebaa4;
      }
      __CopyMan((int)&local_10,local_1c);
      __ShrMan((int)&local_10,iVar2 - iVar5);
      __RoundMan((int)&local_10,param_3[2]);
      __ShrMan((int)&local_10,param_3[3] + 1);
    }
  }
  iVar5 = 0;
  uVar3 = 2;
LAB_00aebaa6:
  local_10 = iVar5 << (0x1fU - (char)param_3[3] & 0x1f) |
             -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_10;
  if (param_3[4] == 0x40) {
    param_2[1] = local_10;
    *param_2 = local_c;
  }
  else if (param_3[4] == 0x20) {
    *param_2 = local_10;
  }
  return uVar3;
}


//// FUNCTION __ld12tod @ 00aebae4 ////

/* Library Function - Single Match
    __ld12tod
   
   Library: Visual Studio 2003 Release */

INTRNCVT_STATUS __cdecl __ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  INTRNCVT_STATUS IVar1;
  
  IVar1 = __ld12cvt((ushort *)_Ifp,(uint *)_D,(int *)&DAT_00e9ad10);
  return IVar1;
}


//// FUNCTION __ld12tof @ 00aebafa ////

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2003 Release */

INTRNCVT_STATUS __cdecl __ld12tof(_LDBL12 *_Ifp,_CRT_FLOAT *_F)

{
  INTRNCVT_STATUS IVar1;
  
  IVar1 = __ld12cvt((ushort *)_Ifp,(uint *)_F,(int *)&DAT_00e9ad28);
  return IVar1;
}


//// FUNCTION __ld12told @ 00aebb10 ////

/* Library Function - Single Match
    __ld12told
   
   Library: Visual Studio 2003 Release */

INTRNCVT_STATUS __cdecl __ld12told(_LDBL12 *_Ifp,_LDOUBLE *_Ld)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  INTRNCVT_STATUS local_8;
  
  local_8 = INTRNCVT_OK;
  uVar1 = *(ushort *)(_Ifp->ld12 + 10);
  local_14 = *(undefined4 *)(_Ifp->ld12 + 6);
  local_10 = *(undefined4 *)(_Ifp->ld12 + 2);
  local_c = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  uVar3 = uVar1 & 0x7fff;
  iVar2 = __RoundMan((int)&local_14,0x40);
  if (iVar2 != 0) {
    local_14 = 0x80000000;
    uVar3 = uVar3 + 1;
  }
  if (uVar3 == 0x7fff) {
    local_8 = INTRNCVT_OVERFLOW;
  }
  *(undefined4 *)(_Ld->ld + 4) = local_14;
  *(ushort *)(_Ld->ld + 8) = uVar1 & 0x8000 | uVar3;
  *(undefined4 *)_Ld->ld = local_10;
  return local_8;
}


//// FUNCTION FID_conflict:__atodbl @ 00aebb8c ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Different Base Names
    __atodbl
    __atoflt
   
   Library: Visual Studio 2003 Release */

int __cdecl FID_conflict___atodbl(_CRT_DOUBLE *_Result,char *_Str)

{
  INTRNCVT_STATUS IVar1;
  char *local_18;
  _LDBL12 local_14;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  ___strgtold12(&local_14,&local_18,_Str,0,0,0,0);
  IVar1 = __ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  return IVar1;
}


//// FUNCTION __atoldbl @ 00aebbc9 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __atoldbl
   
   Library: Visual Studio 2003 Release */

int __cdecl __atoldbl(_LDOUBLE *_Result,char *_Str)

{
  INTRNCVT_STATUS IVar1;
  char *local_18;
  _LDBL12 local_14;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  ___strgtold12(&local_14,&local_18,_Str,1,0,0,0);
  IVar1 = __ld12told(&local_14,(_LDOUBLE *)_Result);
  return IVar1;
}


//// FUNCTION FID_conflict:__atodbl @ 00aebc07 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Different Base Names
    __atodbl
    __atoflt
   
   Library: Visual Studio 2003 Release */

int __cdecl FID_conflict___atodbl(_CRT_DOUBLE *_Result,char *_Str)

{
  INTRNCVT_STATUS IVar1;
  char *local_18;
  _LDBL12 local_14;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  ___strgtold12(&local_14,&local_18,_Str,0,0,0,0);
  IVar1 = __ld12tof(&local_14,(_CRT_FLOAT *)_Result);
  return IVar1;
}


//// FUNCTION FUN_00aebc44 @ 00aebc44 ////

void FUN_00aebc44(void)

{
  __amsg_exit(2);
  return;
}


//// FUNCTION __87except @ 00aebc4d ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __87except
   
   Library: Visual Studio 2003 Release */

void __cdecl __87except(int param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  uint local_94;
  uint local_90 [12];
  undefined8 local_60;
  uint local_50;
  undefined4 local_14;
  
  local_14 = DAT_00e9a098;
  local_94 = (uint)*param_3;
  iVar2 = *param_2;
  if (iVar2 == 1) {
LAB_00aebca5:
    uVar3 = 8;
  }
  else if (iVar2 == 2) {
    uVar3 = 4;
  }
  else if (iVar2 == 3) {
    uVar3 = 0x11;
  }
  else if (iVar2 == 4) {
    uVar3 = 0x12;
  }
  else {
    if (iVar2 == 5) goto LAB_00aebca5;
    if (iVar2 == 7) {
      *param_2 = 1;
      goto LAB_00aebd01;
    }
    if (iVar2 != 8) goto LAB_00aebd01;
    uVar3 = 0x10;
  }
  bVar1 = __handle_exc(uVar3,(double *)(param_2 + 6),local_94);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_60 = *(undefined8 *)(param_2 + 4);
      local_50 = local_50 & 0xffffffe3 | 3;
    }
    else {
      local_50 = local_50 & 0xfffffffe;
    }
    __raise_exc(local_90,&local_94,uVar3,param_1,(undefined8 *)(param_2 + 2),
                (undefined8 *)(param_2 + 6));
  }
LAB_00aebd01:
  __ctrlfp();
  if (((*param_2 != 8) && (DAT_00e9ad40 == 0)) && (iVar2 = FUN_00aec23a(), iVar2 != 0)) {
    return;
  }
  __set_errno(*param_2);
  return;
}


//// FUNCTION __frnd @ 00aebd45 ////

/* Library Function - Single Match
    __frnd
   
   Library: Visual Studio 2003 Release */

float10 __cdecl __frnd(double param_1)

{
  return (float10)ROUND(param_1);
}


//// FUNCTION __isatty @ 00aebd56 ////

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2003 Release */

int __cdecl __isatty(int _FileHandle)

{
  if (uNumber_010daa74 <= (uint)_FileHandle) {
    return 0;
  }
  return (int)*(char *)((&DAT_010daa80)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 0x40
  ;
}


//// FUNCTION __putwc_lk @ 00aebd80 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __putwc_lk
   
   Library: Visual Studio 2003 Release */

uint __cdecl __putwc_lk(uint param_1,FILE *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  char local_10 [8];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  if ((param_2->_flag & 0x40) == 0) {
    uVar1 = param_2->_file;
    if (uVar1 == 0xffffffff) {
      puVar2 = &DAT_00e9a928;
    }
    else {
      puVar2 = (undefined *)((&DAT_010daa80)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 0x24);
    }
    if ((puVar2[4] & 0x80) != 0) {
      piVar3 = (int *)_wctomb(local_10,(wchar_t)param_1);
      if (piVar3 == (int *)0xffffffff) {
        piVar4 = FUN_00ad4b6c();
        *piVar4 = 0x2a;
LAB_00aebde8:
        return CONCAT22((short)((uint)piVar4 >> 0x10),0xffff);
      }
      iVar5 = 0;
      piVar4 = piVar3;
      if (0 < (int)piVar3) {
        do {
          piVar4 = &param_2->_cnt;
          *piVar4 = *piVar4 + -1;
          if (*piVar4 < 0) {
            piVar4 = (int *)__flsbuf((int)local_10[iVar5],param_2);
          }
          else {
            *param_2->_ptr = local_10[iVar5];
            piVar4 = (int *)(uint)(byte)*param_2->_ptr;
            param_2->_ptr = param_2->_ptr + 1;
          }
          if (piVar4 == (int *)0xffffffff) goto LAB_00aebde8;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)piVar3);
      }
      return CONCAT22((short)((uint)piVar4 >> 0x10),(wchar_t)param_1);
    }
  }
  piVar3 = &param_2->_cnt;
  *piVar3 = *piVar3 + -2;
  if (*piVar3 < 0) {
    param_1 = __flswbuf(param_1 & 0xffff,param_2);
  }
  else {
    *(wchar_t *)param_2->_ptr = (wchar_t)param_1;
    param_2->_ptr = param_2->_ptr + 2;
  }
  return param_1;
}


//// FUNCTION ___mbtowc_mt @ 00aebea3 ////

/* Library Function - Single Match
    ___mbtowc_mt
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl ___mbtowc_mt(int param_1,LPWSTR param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_3 != (byte *)0x0) && (param_4 != 0)) {
    bVar1 = *param_3;
    if (bVar1 != 0) {
      if (*(int *)(param_1 + 0x14) == 0) {
        if (param_2 != (LPWSTR)0x0) {
          *param_2 = (ushort)bVar1;
        }
        return 1;
      }
      if ((*(byte *)(*(int *)(param_1 + 0x48) + 1 + (uint)bVar1 * 2) & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(*(UINT *)(param_1 + 4),9,(LPCCH)param_3,1,param_2,
                                    (uint)(param_2 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x28);
        if ((((1 < iVar2) && (iVar2 <= (int)param_4)) &&
            (iVar2 = MultiByteToWideChar(*(UINT *)(param_1 + 4),9,(LPCCH)param_3,iVar2,param_2,
                                         (uint)(param_2 != (LPWSTR)0x0)), iVar2 != 0)) ||
           ((*(uint *)(param_1 + 0x28) <= param_4 && (param_3[1] != 0)))) {
          return *(undefined4 *)(param_1 + 0x28);
        }
      }
      piVar3 = FUN_00ad4b6c();
      *piVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_2 != (LPWSTR)0x0) {
      *param_2 = L'\0';
    }
  }
  return 0;
}


//// FUNCTION _mbtowc @ 00aebf63 ////

/* Library Function - Single Match
    _mbtowc
   
   Library: Visual Studio 2003 Release */

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  int iVar3;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
  }
  iVar3 = ___mbtowc_mt((int)ptVar2,_DstCh,(byte *)_SrcCh,_SrcSizeInBytes);
  return iVar3;
}


//// FUNCTION FUN_00aebf8e @ 00aebf8e ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

BOOL __cdecl
FUN_00aebf8e(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  short *psVar1;
  bool bVar2;
  bool bVar3;
  WINBOOL WVar4;
  DWORD DVar5;
  UINT UVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 uStackY_68;
  WINBOOL local_38;
  undefined1 *local_28;
  undefined1 *local_24;
  WORD local_20 [2];
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00d847a8;
  uStack_c = 0xaebf9a;
  if (DAT_010cc0c0 == 0) {
    WVar4 = GetStringTypeW(1,(LPCWCH)&lpSrcStr_00d7e360,1,local_20);
    if (WVar4 == 0) {
      DVar5 = GetLastError();
      if (DVar5 == 0x78) {
        DAT_010cc0c0 = 2;
      }
    }
    else {
      DAT_010cc0c0 = 1;
    }
  }
  if (DAT_010cc0c0 == 1) {
    WVar4 = GetStringTypeW(param_1,param_2,param_3,param_4);
    return WVar4;
  }
  if ((DAT_010cc0c0 == 2) || (DAT_010cc0c0 == 0)) {
    bVar3 = false;
    bVar2 = false;
    if (param_6 == 0) {
      param_6 = DAT_010cc04c;
    }
    if (param_5 == 0) {
      param_5 = CodePage_010cc05c;
    }
    UVar6 = ___ansicp(param_6);
    if ((param_5 != UVar6) && (UVar6 != 0xffffffff)) {
      param_5 = UVar6;
    }
    uStackY_68 = 0xaec04c;
    iVar7 = WideCharToMultiByte(param_5,0,param_2,param_3,(LPSTR)0x0,0,(LPCCH)0x0,(LPBOOL)0x0);
    if (iVar7 != 0) {
      local_8 = (undefined *)0x0;
      puVar8 = (undefined1 *)(iVar7 + 3U & 0xfffffffc);
      iVar9 = -(int)puVar8;
      local_28 = &stack0xffffffbc + iVar9;
      local_1c = &stack0xffffffbc + iVar9;
      *(int *)(&stack0xffffffb8 + iVar9) = iVar7;
      *(undefined4 *)(&stack0xffffffb4 + iVar9) = 0;
      *(undefined1 **)(&stack0xffffffb0 + iVar9) = &stack0xffffffbc + iVar9;
      *(undefined4 *)(&stack0xffffffac + iVar9) = 0xaec07c;
      _memset(*(void **)(&stack0xffffffb0 + iVar9),*(int *)(&stack0xffffffb4 + iVar9),
              *(size_t *)(&stack0xffffffb8 + iVar9));
      local_8 = (undefined *)0xffffffff;
      if (&stack0xffffffbc == puVar8) {
        *(int *)(&stack0xffffffb8 + iVar9) = iVar7;
        *(undefined4 *)(&stack0xffffffb4 + iVar9) = 1;
        *(undefined4 *)(&stack0xffffffb0 + iVar9) = 0xaec0ad;
        local_28 = _calloc(*(size_t *)(&stack0xffffffb4 + iVar9),
                           *(size_t *)(&stack0xffffffb8 + iVar9));
        if (local_28 == (void *)0x0) {
          return 0;
        }
        bVar3 = true;
      }
      *(undefined4 *)(&stack0xffffffb8 + iVar9) = 0;
      *(undefined4 *)(&stack0xffffffb4 + iVar9) = 0;
      *(int *)(&stack0xffffffb0 + iVar9) = iVar7;
      *(undefined1 **)(&stack0xffffffac + iVar9) = local_28;
      *(int *)(&stack0xffffffa8 + iVar9) = param_3;
      *(LPCWSTR *)(&stack0xffffffa4 + iVar9) = param_2;
      *(undefined4 *)(&stack0xffffffa0 + iVar9) = 0;
      *(UINT *)(&stack0xffffff9c + iVar9) = param_5;
      puVar11 = (undefined1 *)((int)&uStackY_68 + iVar9);
      *(undefined4 *)((int)&uStackY_68 + iVar9) = 0xaec0cf;
      iVar9 = WideCharToMultiByte(*(UINT *)(&stack0xffffff9c + iVar9),
                                  *(DWORD *)(&stack0xffffffa0 + iVar9),
                                  *(LPCWCH *)(&stack0xffffffa4 + iVar9),
                                  *(int *)(&stack0xffffffa8 + iVar9),
                                  *(LPSTR *)(&stack0xffffffac + iVar9),
                                  *(int *)(&stack0xffffffb0 + iVar9),
                                  *(LPCCH *)(&stack0xffffffb4 + iVar9),
                                  *(LPBOOL *)(&stack0xffffffb8 + iVar9));
      puVar8 = puVar11;
      if (iVar9 != 0) {
        puVar10 = (undefined1 *)(iVar7 * 2 + 5U & 0xfffffffc);
        *(undefined4 *)(puVar11 + -4) = 0xaec0e9;
        iVar9 = -(int)puVar10;
        local_24 = puVar11 + iVar9;
        puVar8 = puVar11 + iVar9;
        local_1c = puVar11 + iVar9;
        local_8 = (undefined *)0xffffffff;
        if (puVar11 == puVar10) {
          *(int *)(puVar11 + iVar9 + -4) = iVar7 * 2 + 2;
          *(undefined4 *)(puVar11 + iVar9 + -8) = 0xaec122;
          local_24 = _malloc(*(size_t *)(puVar11 + iVar9 + -4));
          if (local_24 == (undefined1 *)0x0) goto LAB_00aec199;
          bVar2 = true;
        }
        if (param_6 == 0) {
          param_6 = DAT_010cc04c;
        }
        psVar1 = (short *)(local_24 + param_3 * 2);
        *psVar1 = -1;
        psVar1[-1] = -1;
        *(undefined1 **)(puVar11 + iVar9 + -4) = local_24;
        *(int *)(puVar11 + iVar9 + -8) = iVar7;
        *(undefined1 **)(puVar11 + iVar9 + -0xc) = local_28;
        *(DWORD *)(puVar11 + iVar9 + -0x10) = param_1;
        *(LCID *)(puVar11 + iVar9 + -0x14) = param_6;
        puVar8 = puVar11 + iVar9 + -0x18;
        *(undefined4 *)(puVar11 + iVar9 + -0x18) = 0xaec161;
        local_38 = GetStringTypeA(*(LCID *)(puVar11 + iVar9 + -0x14),
                                  *(DWORD *)(puVar11 + iVar9 + -0x10),
                                  *(LPCSTR *)(puVar11 + iVar9 + -0xc),*(int *)(puVar11 + iVar9 + -8)
                                  ,*(LPWORD *)(puVar11 + iVar9 + -4));
        if ((psVar1[-1] == -1) || (*psVar1 != -1)) {
          local_38 = 0;
        }
        else {
          *(int *)(puVar8 + -4) = param_3 * 2;
          *(undefined1 **)(puVar8 + -8) = local_24;
          *(LPWORD *)(puVar8 + -0xc) = param_4;
          *(undefined4 *)(puVar8 + -0x10) = 0xaec17f;
          _memmove(*(void **)(puVar8 + -0xc),*(void **)(puVar8 + -8),*(size_t *)(puVar8 + -4));
        }
        if (bVar2) {
          *(undefined1 **)(puVar8 + -4) = local_24;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar8 + -8) = &UNK_00aec196;
          _free(*(void **)(puVar8 + -4));
        }
      }
LAB_00aec199:
      if (bVar3) {
        *(undefined1 **)(puVar8 + -4) = local_28;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar8 + -8) = &UNK_00aec1a6;
        _free(*(void **)(puVar8 + -4));
      }
      return local_38;
    }
  }
  return 0;
}


//// FUNCTION ___wctomb_mt @ 00aec1b3 ////

/* Library Function - Single Match
    ___wctomb_mt
   
   Library: Visual Studio 2003 Release */

int __cdecl ___wctomb_mt(int param_1,LPSTR param_2,WCHAR param_3)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  int *piVar2;
  
  lpMultiByteStr = param_2;
  if (param_2 == (LPSTR)0x0) {
    iVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x14) == 0) {
      if ((ushort)param_3 < 0x100) {
        *param_2 = (CHAR)param_3;
        return 1;
      }
    }
    else {
      param_2 = (LPSTR)0x0;
      iVar1 = WideCharToMultiByte(*(UINT *)(param_1 + 4),0,&param_3,1,lpMultiByteStr,
                                  *(int *)(param_1 + 0x28),(LPCCH)0x0,(LPBOOL)&param_2);
      if ((iVar1 != 0) && (param_2 == (LPSTR)0x0)) {
        return iVar1;
      }
    }
    piVar2 = FUN_00ad4b6c();
    *piVar2 = 0x2a;
    iVar1 = -1;
  }
  return iVar1;
}


//// FUNCTION _wctomb @ 00aec213 ////

/* Library Function - Single Match
    _wctomb
   
   Library: Visual Studio 2003 Release */

int __cdecl _wctomb(char *_MbCh,wchar_t _WCh)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  int iVar3;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
  }
  iVar3 = ___wctomb_mt((int)ptVar2,_MbCh,_WCh);
  return iVar3;
}


//// FUNCTION FUN_00aec23a @ 00aec23a ////

undefined4 FUN_00aec23a(void)

{
  return 0;
}


//// FUNCTION ___strgtold12 @ 00aec23d ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___strgtold12
   
   Library: Visual Studio 2003 Release */

uint __cdecl
___strgtold12(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,
             int implicit_E)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  undefined4 uVar8;
  char *pcVar9;
  byte *pbVar10;
  int local_58;
  int local_50;
  uint local_4c;
  byte *local_44;
  int local_40;
  uint local_3c;
  char local_34 [23];
  char local_1d;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined4 local_12;
  ushort local_e;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  iVar5 = 0;
  pcVar9 = local_34;
  uVar4 = 0;
  local_50 = 1;
  local_3c = 0;
  bVar1 = false;
  bVar3 = false;
  bVar2 = false;
  local_58 = 0;
  local_40 = 0;
  local_4c = 0;
  local_44 = (byte *)str;
  for (; (((bVar7 = *str, bVar7 == 0x20 || (bVar7 == 9)) || (bVar7 == 10)) || (bVar7 == 0xd));
      str = str + 1) {
  }
LAB_00aec294:
  bVar7 = *str;
  pbVar10 = (byte *)(str + 1);
  switch(iVar5) {
  case 0:
    if (('0' < (char)bVar7) && ((char)bVar7 < ':')) {
LAB_00aec2b1:
      iVar5 = 3;
      goto LAB_00aec4d2;
    }
    if (bVar7 == DAT_00e9a950) {
LAB_00aec2c0:
      iVar5 = 5;
      str = (char *)pbVar10;
      goto LAB_00aec294;
    }
    if (bVar7 == 0x2b) {
      uVar4 = 0;
      iVar5 = 2;
      str = (char *)pbVar10;
      goto LAB_00aec294;
    }
    if (bVar7 == 0x2d) {
      iVar5 = 2;
      uVar4 = 0x8000;
      str = (char *)pbVar10;
      goto LAB_00aec294;
    }
    break;
  case 1:
    iVar5 = 1;
    bVar1 = true;
    if (('0' < (char)bVar7) && ((char)bVar7 < ':')) goto LAB_00aec2b1;
    if (bVar7 == DAT_00e9a950) goto LAB_00aec312;
    if ((bVar7 == 0x2b) || (bVar7 == 0x2d)) goto LAB_00aec353;
    str = (char *)pbVar10;
    if (bVar7 != 0x30) goto LAB_00aec32c;
    goto LAB_00aec294;
  case 2:
    if (('0' < (char)bVar7) && ((char)bVar7 < ':')) goto LAB_00aec2b1;
    str = (char *)local_44;
    if (bVar7 == DAT_00e9a950) goto LAB_00aec2c0;
    break;
  case 3:
    while (iVar5 = _isdigit((uint)bVar7), iVar5 != 0) {
      if (local_3c < 0x19) {
        local_3c = local_3c + 1;
        *pcVar9 = bVar7 - 0x30;
        pcVar9 = pcVar9 + 1;
      }
      else {
        local_40 = local_40 + 1;
      }
      bVar7 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    }
    if (bVar7 != DAT_00e9a950) goto LAB_00aec402;
LAB_00aec312:
    bVar1 = true;
    iVar5 = 4;
    str = (char *)pbVar10;
    goto LAB_00aec294;
  case 4:
    bVar3 = true;
    if (local_3c == 0) {
      while (bVar7 == 0x30) {
        local_40 = local_40 + -1;
        bVar7 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      }
    }
    while (iVar5 = _isdigit((uint)bVar7), iVar5 != 0) {
      if (local_3c < 0x19) {
        local_3c = local_3c + 1;
        *pcVar9 = bVar7 - 0x30;
        pcVar9 = pcVar9 + 1;
        local_40 = local_40 + -1;
      }
      bVar7 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    }
LAB_00aec402:
    if ((bVar7 == 0x2b) || (bVar7 == 0x2d)) {
LAB_00aec353:
      bVar1 = true;
      iVar5 = 0xb;
      str = (char *)(pbVar10 + -1);
    }
    else {
LAB_00aec32c:
      bVar1 = true;
      if (((char)bVar7 < 'D') ||
         (('E' < (char)bVar7 && (((char)bVar7 < 'd' || ('e' < (char)bVar7)))))) {
LAB_00aec48c:
        str = (char *)(pbVar10 + -1);
        goto LAB_00aec490;
      }
      iVar5 = 6;
      str = (char *)pbVar10;
    }
    goto LAB_00aec294;
  case 5:
    bVar3 = true;
    iVar5 = _isdigit((uint)bVar7);
    str = (char *)local_44;
    if (iVar5 != 0) {
      iVar5 = 4;
      goto LAB_00aec4d2;
    }
    goto LAB_00aec490;
  case 6:
    local_44 = (byte *)(str + -1);
    if (((char)bVar7 < '1') || ('9' < (char)bVar7)) {
      if (bVar7 == 0x2b) goto LAB_00aec507;
      if (bVar7 == 0x2d) goto LAB_00aec4fb;
      str = (char *)local_44;
      if (bVar7 == 0x30) goto LAB_00aec46a;
      goto LAB_00aec490;
    }
LAB_00aec4d0:
    iVar5 = 9;
LAB_00aec4d2:
    str = (char *)(pbVar10 + -1);
    goto LAB_00aec294;
  case 7:
    if (('0' < (char)bVar7) && ((char)bVar7 < ':')) goto LAB_00aec4d0;
    str = (char *)local_44;
    if (bVar7 != 0x30) goto LAB_00aec490;
LAB_00aec46a:
    iVar5 = 8;
    str = (char *)pbVar10;
    goto LAB_00aec294;
  case 8:
    bVar2 = true;
    while (bVar7 == 0x30) {
      bVar7 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    }
    if (('0' < (char)bVar7) && ((char)bVar7 < ':')) goto LAB_00aec4d0;
    goto LAB_00aec48c;
  case 9:
    bVar2 = true;
    local_58 = 0;
    goto LAB_00aec54e;
  default:
    goto switchD_00aec2a0_caseD_a;
  case 0xb:
    if (implicit_E != 0) {
      local_44 = (byte *)str;
      if (bVar7 == 0x2b) {
LAB_00aec507:
        iVar5 = 7;
        str = (char *)pbVar10;
      }
      else {
        if (bVar7 != 0x2d) goto LAB_00aec490;
LAB_00aec4fb:
        local_50 = -1;
        iVar5 = 7;
        str = (char *)pbVar10;
      }
      goto LAB_00aec294;
    }
    iVar5 = 10;
    pbVar10 = (byte *)str;
switchD_00aec2a0_caseD_a:
    str = (char *)pbVar10;
    if (iVar5 != 10) goto LAB_00aec294;
    goto LAB_00aec490;
  }
  if (bVar7 != 0x30) goto LAB_00aec490;
  iVar5 = 1;
  str = (char *)pbVar10;
  goto LAB_00aec294;
LAB_00aec54e:
  iVar5 = _isdigit((uint)bVar7);
  if (iVar5 == 0) goto LAB_00aec571;
  local_58 = (char)bVar7 + -0x30 + local_58 * 10;
  if (0x1450 < local_58) {
    local_58 = 0x1451;
    goto LAB_00aec571;
  }
  bVar7 = *pbVar10;
  pbVar10 = pbVar10 + 1;
  goto LAB_00aec54e;
LAB_00aec571:
  while( true ) {
    iVar5 = _isdigit((uint)bVar7);
    if (iVar5 == 0) break;
    bVar7 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  }
  str = (char *)(pbVar10 + -1);
LAB_00aec490:
  *p_end_ptr = str;
  if (bVar1) {
    if (0x18 < local_3c) {
      if ('\x04' < local_1d) {
        local_1d = local_1d + '\x01';
      }
      pcVar9 = pcVar9 + -1;
      local_40 = local_40 + 1;
      local_3c = 0x18;
    }
    if (local_3c != 0) {
      while (pcVar9 = pcVar9 + -1, *pcVar9 == '\0') {
        local_3c = local_3c - 1;
        local_40 = local_40 + 1;
      }
      ___mtold12(local_34,local_3c,(uint *)&local_18);
      if (local_50 < 0) {
        local_58 = -local_58;
      }
      uVar6 = local_58 + local_40;
      if (!bVar2) {
        uVar6 = uVar6 + scale;
      }
      if (!bVar3) {
        uVar6 = uVar6 - decpt;
      }
      if (0x1450 < (int)uVar6) {
        uVar8 = 0;
        local_e = 0x7fff;
        local_12 = 0x80000000;
        local_18 = 0;
        local_4c = 2;
        goto LAB_00aec61e;
      }
      if (-0x1451 < (int)uVar6) {
        ___multtenpow12((int *)&local_18,uVar6,mult12);
        uVar8 = CONCAT22(uStack_14,uStack_16);
        goto LAB_00aec61e;
      }
      local_4c = 1;
    }
  }
  else {
    local_4c = 4;
  }
  local_18 = 0;
  local_e = 0;
  local_12 = 0;
  uVar8 = 0;
LAB_00aec61e:
  *(undefined4 *)(pld12->ld12 + 6) = local_12;
  *(undefined4 *)(pld12->ld12 + 2) = uVar8;
  *(ushort *)(pld12->ld12 + 10) = local_e | uVar4;
  *(undefined2 *)pld12->ld12 = local_18;
  return local_4c;
}


//// FUNCTION ___STRINGTOLD @ 00aec671 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___STRINGTOLD
   
   Library: Visual Studio 2003 Release */

uint __cdecl ___STRINGTOLD(_LDOUBLE *pld,char **p_end_ptr,char *str,int mult12)

{
  uint uVar1;
  INTRNCVT_STATUS IVar2;
  _LDBL12 local_14;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  uVar1 = ___strgtold12(&local_14,p_end_ptr,str,mult12,0,0,0);
  IVar2 = __ld12told(&local_14,pld);
  if (IVar2 == INTRNCVT_OVERFLOW) {
    uVar1 = uVar1 | 2;
  }
  return uVar1;
}


//// FUNCTION __lseeki64_lk @ 00aec6bd ////

/* Library Function - Single Match
    __lseeki64_lk
   
   Library: Visual Studio 2003 Release */

undefined8 __cdecl __lseeki64_lk(uint param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG local_8;
  
  local_8 = param_3;
  hFile = (HANDLE)__get_osfhandle(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = FUN_00ad4b6c();
    *piVar2 = 9;
LAB_00aec717:
    DVar4 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar4 = SetFilePointer(hFile,param_2,&local_8,param_4);
    if (DVar4 == 0xffffffff) {
      DVar3 = GetLastError();
      if (DVar3 != 0) {
        __dosmaperr(DVar3);
        goto LAB_00aec717;
      }
    }
    pbVar1 = (byte *)((&DAT_010daa80)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar4);
}


//// FUNCTION __lseeki64 @ 00aec740 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseeki64
   
   Library: Visual Studio 2003 Release */

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  LONG in_stack_00000008;
  undefined8 local_24;
  
  if ((uint)_FileHandle < uNumber_010daa74) {
    iVar3 = (_FileHandle & 0x1fU) * 0x24;
    if ((*(byte *)((&DAT_010daa80)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      __lock_fhandle(_FileHandle);
      if ((*(byte *)((&DAT_010daa80)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        piVar1 = FUN_00ad4b6c();
        *piVar1 = 9;
        puVar2 = FUN_00ad4b75();
        *puVar2 = 0;
        local_24 = 0xffffffffffffffff;
      }
      else {
        local_24 = __lseeki64_lk(_FileHandle,in_stack_00000008,(LONG)_Offset,_Offset._4_4_);
      }
      FUN_00aec7d8();
      goto LAB_00aec7f8;
    }
  }
  piVar1 = FUN_00ad4b6c();
  *piVar1 = 9;
  puVar2 = FUN_00ad4b75();
  *puVar2 = 0;
  local_24._4_4_ = 0xffffffff;
  local_24._0_4_ = 0xffffffff;
LAB_00aec7f8:
  return CONCAT44(local_24._4_4_,(undefined4)local_24);
}


//// FUNCTION FUN_00aec7d8 @ 00aec7d8 ////

void FUN_00aec7d8(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}


//// FUNCTION ___crtMessageBoxA @ 00aec7fe ////

/* Library Function - Single Match
    ___crtMessageBoxA
   
   Library: Visual Studio 2003 Release */

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  HMODULE hModule;
  int iVar1;
  int iVar2;
  undefined1 local_14 [8];
  byte local_c;
  undefined1 local_8 [4];
  
  iVar2 = 0;
  if (DAT_010cc0c8 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if ((hModule == (HMODULE)0x0) ||
       (DAT_010cc0c8 = GetProcAddress(hModule,"MessageBoxA"), DAT_010cc0c8 == (FARPROC)0x0)) {
      return 0;
    }
    DAT_010cc0cc = GetProcAddress(hModule,"GetActiveWindow");
    DAT_010cc0d0 = GetProcAddress(hModule,"GetLastActivePopup");
    if ((DAT_010cbbc8 == 2) &&
       (DAT_010cc0d8 = GetProcAddress(hModule,"GetUserObjectInformationA"),
       DAT_010cc0d8 != (FARPROC)0x0)) {
      DAT_010cc0d4 = GetProcAddress(hModule,"GetProcessWindowStation");
    }
  }
  if ((DAT_010cc0d4 == (FARPROC)0x0) ||
     (((iVar1 = (*DAT_010cc0d4)(), iVar1 != 0 &&
       (iVar1 = (*DAT_010cc0d8)(iVar1,1,local_14,0xc,local_8), iVar1 != 0)) && ((local_c & 1) != 0))
     )) {
    if (((DAT_010cc0cc != (FARPROC)0x0) && (iVar2 = (*DAT_010cc0cc)(), iVar2 != 0)) &&
       (DAT_010cc0d0 != (FARPROC)0x0)) {
      iVar2 = (*DAT_010cc0d0)(iVar2);
    }
  }
  else if (DAT_010cbbd4 < 4) {
    _UType = _UType | 0x40000;
  }
  else {
    _UType = _UType | 0x200000;
  }
  iVar2 = (*DAT_010cc0c8)(iVar2,_LpText,_LpCaption,_UType);
  return iVar2;
}


//// FUNCTION x_ismbbtype @ 00aec8f7 ////

/* Library Function - Single Match
    _x_ismbbtype
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl x_ismbbtype(byte param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
  if (((&DAT_010daba1)[param_1] & param_3) == 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(ushort *)(PTR_DAT_00e9a2f0 + (uint)param_1 * 2) & param_2;
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


//// FUNCTION __ismbblead @ 00aec9be ////

/* Library Function - Single Match
    __ismbblead
   
   Library: Visual Studio 2003 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype((byte)_C,0,4);
  return iVar1;
}


//// FUNCTION $I10_OUTPUT @ 00aeca07 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _$I10_OUTPUT
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl
_I10_OUTPUT(int param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  char cVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  short sVar6;
  int iVar7;
  char *pcVar8;
  short *local_34;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined1 local_a;
  char cStack_9;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  uVar3 = param_3 & 0x7fff;
  local_20 = 0xcc;
  local_1f = 0xcc;
  local_1e = 0xcc;
  local_1d = 0xcc;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xfb;
  local_15 = 0x3f;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar3 == 0) && (param_2 == 0)) && (param_1 == 0)) {
LAB_00aecb7d:
    *(undefined1 *)(param_6 + 2) = 0x30;
LAB_00aecc80:
    *param_6 = 0;
    *(undefined1 *)(param_6 + 1) = 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)((int)param_6 + 5) = 0;
  }
  else {
    if ((short)uVar3 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if (((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_00aecaf3;
          pcVar8 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_00aecaf3:
            pcVar8 = "1#QNAN";
            goto LAB_00aecaf8;
          }
          pcVar8 = "1#IND";
        }
        FUN_00ada2e0((uint *)(param_6 + 2),(uint *)pcVar8);
        *(undefined1 *)((int)param_6 + 3) = 5;
      }
      else {
        pcVar8 = "1#SNAN";
LAB_00aecaf8:
        FUN_00ada2e0((uint *)(param_6 + 2),(uint *)pcVar8);
        *(undefined1 *)((int)param_6 + 3) = 6;
      }
      return 0;
    }
    local_14 = 0;
    sVar6 = (short)(((uVar3 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar3 * 0x4d10 >>
                   0x10);
    local_a = (undefined1)uVar3;
    cStack_9 = (char)(uVar3 >> 8);
    local_12 = param_1;
    local_e = param_2;
    ___multtenpow12((int *)&local_14,-(int)sVar6,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar6 = sVar6 + 1;
      ___ld12mul((int *)&local_14,(int *)&local_20);
    }
    *param_6 = sVar6;
    if (((param_5 & 1) != 0) && (param_4 = param_4 + sVar6, param_4 < 1)) goto LAB_00aecb7d;
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar7 = CONCAT11(cStack_9,local_a) - 0x3ffe;
    local_a = 0;
    cStack_9 = '\0';
    param_3 = 8;
    do {
      ___shl_12((uint *)&local_14);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    if (iVar7 < 0) {
      for (uVar3 = -iVar7 & 0xff; uVar3 != 0; uVar3 = uVar3 - 1) {
        ___shr_12((uint *)&local_14);
      }
    }
    param_3 = param_4 + 1;
    psVar4 = param_6 + 2;
    local_34 = psVar4;
    iVar7 = local_12;
    uVar3 = local_e;
    if (0 < (int)param_3) {
      do {
        local_e._2_2_ = (undefined2)(uVar3 >> 0x10);
        local_e._0_2_ = (undefined2)uVar3;
        local_12._2_2_ = (undefined2)((uint)iVar7 >> 0x10);
        local_12._0_2_ = (undefined2)iVar7;
        local_2c = CONCAT22((undefined2)local_12,local_14);
        uStack_28 = CONCAT22((undefined2)local_e,local_12._2_2_);
        uStack_24 = CONCAT13(cStack_9,CONCAT12(local_a,local_e._2_2_));
        local_12 = iVar7;
        local_e = uVar3;
        ___shl_12((uint *)&local_14);
        ___shl_12((uint *)&local_14);
        ___add_12((uint *)&local_14,&local_2c);
        ___shl_12((uint *)&local_14);
        psVar4 = (short *)((int)local_34 + 1);
        param_3 = param_3 - 1;
        *(char *)local_34 = cStack_9 + '0';
        cStack_9 = '\0';
        local_34 = psVar4;
        iVar7 = local_12;
        uVar3 = local_e;
      } while (param_3 != 0);
    }
    psVar5 = psVar4 + -1;
    psVar1 = param_6 + 2;
    if (*(char *)((int)psVar4 + -1) < '5') {
      for (; (psVar1 <= psVar5 && ((char)*psVar5 == '0')); psVar5 = (short *)((int)psVar5 + -1)) {
      }
      if (psVar5 < psVar1) {
        *(char *)psVar1 = '0';
        goto LAB_00aecc80;
      }
    }
    else {
      for (; (psVar1 <= psVar5 && ((char)*psVar5 == '9')); psVar5 = (short *)((int)psVar5 + -1)) {
        *(char *)psVar5 = '0';
      }
      if (psVar5 < psVar1) {
        psVar5 = (short *)((int)psVar5 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar5 = (char)*psVar5 + '\x01';
    }
    cVar2 = ((char)psVar5 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar2;
    *(undefined1 *)(cVar2 + 4 + (int)param_6) = 0;
  }
  return 1;
}


//// FUNCTION _strncnt @ 00aecc95 ////

/* Library Function - Single Match
    _strncnt
   
   Library: Visual Studio 2003 Release */

size_t __cdecl _strncnt(char *_String,size_t _Cnt)

{
  char *pcVar1;
  char *in_EAX;
  
  pcVar1 = _String;
  for (; (pcVar1 != (char *)0x0 && (*in_EAX != '\0')); in_EAX = in_EAX + 1) {
    pcVar1 = pcVar1 + -1;
  }
  return (size_t)(_String + (-1 - (int)(pcVar1 + -1)));
}


//// FUNCTION FUN_00aeccb1 @ 00aeccb1 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Type propagation algorithm not settling */

int __cdecl
FUN_00aeccb1(LCID param_1,DWORD param_2,byte *param_3,char *param_4,byte *param_5,char *param_6,
            UINT param_7)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  WINBOOL WVar5;
  BYTE *pBVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  UINT UVar13;
  byte *pbVar14;
  UINT UVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  size_t unaff_EDI;
  byte *_Memory;
  undefined4 uStackY_7c;
  int local_44;
  _cpinfo local_34;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00d84860;
  uStack_c = 0xaeccbd;
  local_20 = DAT_00e9a098;
  _Memory = (byte *)0x0;
  if (DAT_010cc0dc == 0) {
    uStackY_7c = 0xaecce3;
    iVar3 = CompareStringW(0,0,(PCNZWCH)&lpSrcStr_00d7e360,1,(PCNZWCH)&lpSrcStr_00d7e360,1);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_010cc0dc = 2;
      }
    }
    else {
      DAT_010cc0dc = 1;
    }
  }
  if (0 < (int)param_4) {
    param_4 = (char *)_strncnt(param_4,unaff_EDI);
  }
  if (0 < (int)param_6) {
    param_6 = (char *)_strncnt(param_6,unaff_EDI);
  }
  if ((DAT_010cc0dc == 2) || (DAT_010cc0dc == 0)) {
    if (param_1 == 0) {
      param_1 = DAT_010cc04c;
    }
    UVar15 = param_7;
    if (param_7 == 0) {
      UVar15 = CodePage_010cc05c;
    }
    UVar13 = ___ansicp(param_1);
    if (UVar13 != 0xffffffff) {
      pbVar14 = param_5;
      if (UVar13 != UVar15) {
        uStackY_7c = 0xaecfbd;
        _Memory = (byte *)FUN_00ae9e5c(UVar15,UVar13,(char *)param_3,(size_t *)&param_4,(LPSTR)0x0,0
                                      );
        if (_Memory == (byte *)0x0) {
          return 0;
        }
        uStackY_7c = 0xaecfd8;
        pbVar14 = (byte *)FUN_00ae9e5c(UVar15,UVar13,(char *)param_5,(size_t *)&param_6,(LPSTR)0x0,0
                                      );
        param_3 = _Memory;
        if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
      }
      param_5 = pbVar14;
      uStackY_7c = 0xaed00c;
      iVar3 = CompareStringA(param_1,param_2,(PCNZCH)param_3,(int)param_4,(PCNZCH)param_5,
                             (int)param_6);
      if (_Memory != (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      return iVar3;
    }
  }
  else if (DAT_010cc0dc == 1) {
    bVar2 = false;
    bVar1 = false;
    local_44 = 0;
    if (param_7 == 0) {
      param_7 = CodePage_010cc05c;
    }
    if ((param_4 == (char *)0x0) || (param_6 == (char *)0x0)) {
      if (param_4 == param_6) {
        return 2;
      }
      if (1 < (int)param_6) {
        return 1;
      }
      if (1 < (int)param_4) {
        return 3;
      }
      WVar5 = GetCPInfo(param_7,&local_34);
      if (WVar5 == 0) {
        return 0;
      }
      if (0 < (int)param_4) {
        if (local_34.MaxCharSize < 2) {
          return 3;
        }
        pBVar6 = local_34.LeadByte;
        while( true ) {
          if (local_34.LeadByte[0] == 0) {
            return 3;
          }
          if (pBVar6[1] == 0) break;
          if ((*pBVar6 <= *param_3) && (*param_3 <= pBVar6[1])) {
            return 2;
          }
          pBVar6 = pBVar6 + 2;
          local_34.LeadByte[0] = *pBVar6;
        }
        return 3;
      }
      if (0 < (int)param_6) {
        if (local_34.MaxCharSize < 2) {
          return 1;
        }
        pBVar6 = local_34.LeadByte;
        if (local_34.LeadByte[0] != 0) {
          while( true ) {
            if (pBVar6[1] == 0) {
              return 1;
            }
            if ((*pBVar6 <= *param_5) && (*param_5 <= pBVar6[1])) break;
            pBVar6 = pBVar6 + 2;
            if (*pBVar6 == 0) {
              return 1;
            }
          }
          return 2;
        }
        return 1;
      }
    }
    uStackY_7c = 0xaece2d;
    iVar3 = MultiByteToWideChar(param_7,9,(LPCCH)param_3,(int)param_4,(LPWSTR)0x0,0);
    if (iVar3 != 0) {
      puVar7 = (undefined1 *)(iVar3 * 2 + 3U & 0xfffffffc);
      iVar9 = -(int)puVar7;
      puVar8 = &stack0xffffffa0 + iVar9;
      local_1c = &stack0xffffffa0 + iVar9;
      local_8 = (undefined *)0xffffffff;
      if (&stack0xffffffa0 == puVar7) {
        *(int *)(&stack0xffffff9c + iVar9) = iVar3 * 2;
        *(undefined4 *)(&stack0xffffff98 + iVar9) = 0xaece85;
        puVar8 = _malloc(*(size_t *)(&stack0xffffff9c + iVar9));
        if (puVar8 == (undefined1 *)0x0) {
          return 0;
        }
        bVar2 = true;
      }
      *(int *)(&stack0xffffff9c + iVar9) = iVar3;
      *(undefined1 **)(&stack0xffffff98 + iVar9) = puVar8;
      *(char **)(&stack0xffffff94 + iVar9) = param_4;
      *(byte **)(&stack0xffffff90 + iVar9) = param_3;
      *(undefined4 *)(&stack0xffffff8c + iVar9) = 1;
      *(UINT *)(&stack0xffffff88 + iVar9) = param_7;
      puVar16 = (undefined1 *)((int)&uStackY_7c + iVar9);
      *(undefined4 *)((int)&uStackY_7c + iVar9) = 0xaecea6;
      iVar9 = MultiByteToWideChar(*(UINT *)(&stack0xffffff88 + iVar9),
                                  *(DWORD *)(&stack0xffffff8c + iVar9),
                                  *(LPCCH *)(&stack0xffffff90 + iVar9),
                                  *(int *)(&stack0xffffff94 + iVar9),
                                  *(LPWSTR *)(&stack0xffffff98 + iVar9),
                                  *(int *)(&stack0xffffff9c + iVar9));
      puVar7 = puVar16;
      if (iVar9 != 0) {
        *(undefined4 *)(puVar16 + -4) = 0;
        *(undefined4 *)(puVar16 + -8) = 0;
        *(char **)(puVar16 + -0xc) = param_6;
        *(byte **)(puVar16 + -0x10) = param_5;
        *(undefined4 *)(puVar16 + -0x14) = 9;
        *(UINT *)(puVar16 + -0x18) = param_7;
        puVar17 = puVar16 + -0x1c;
        *(undefined4 *)(puVar16 + -0x1c) = 0xaecec3;
        iVar9 = MultiByteToWideChar(*(UINT *)(puVar16 + -0x18),*(DWORD *)(puVar16 + -0x14),
                                    *(LPCCH *)(puVar16 + -0x10),*(int *)(puVar16 + -0xc),
                                    *(LPWSTR *)(puVar16 + -8),*(int *)(puVar16 + -4));
        puVar7 = puVar17;
        if (iVar9 != 0) {
          puVar10 = (undefined1 *)(iVar9 * 2 + 3U & 0xfffffffc);
          *(undefined4 *)(puVar17 + -4) = 0xaecee5;
          iVar12 = -(int)puVar10;
          puVar11 = puVar17 + iVar12;
          puVar7 = puVar17 + iVar12;
          local_1c = puVar17 + iVar12;
          local_8 = (undefined *)0xffffffff;
          if (puVar17 == puVar10) {
            sRamfffffffc = iVar9 * 2;
            uRamfffffff8 = 0xaecf18;
            puVar11 = _malloc(sRamfffffffc);
            if (puVar11 == (undefined1 *)0x0) goto LAB_00aecf5f;
            bVar1 = true;
          }
          *(int *)(puVar17 + iVar12 + -4) = iVar9;
          *(undefined1 **)(puVar17 + iVar12 + -8) = puVar11;
          *(char **)(puVar17 + iVar12 + -0xc) = param_6;
          *(byte **)(puVar17 + iVar12 + -0x10) = param_5;
          *(undefined4 *)(puVar17 + iVar12 + -0x14) = 1;
          *(UINT *)(puVar17 + iVar12 + -0x18) = param_7;
          puVar18 = puVar17 + iVar12 + -0x1c;
          *(undefined4 *)(puVar17 + iVar12 + -0x1c) = 0xaecf39;
          iVar12 = MultiByteToWideChar(*(UINT *)(puVar17 + iVar12 + -0x18),
                                       *(DWORD *)(puVar17 + iVar12 + -0x14),
                                       *(LPCCH *)(puVar17 + iVar12 + -0x10),
                                       *(int *)(puVar17 + iVar12 + -0xc),
                                       *(LPWSTR *)(puVar17 + iVar12 + -8),
                                       *(int *)(puVar17 + iVar12 + -4));
          puVar7 = puVar18;
          if (iVar12 != 0) {
            *(int *)(puVar18 + -4) = iVar9;
            *(undefined1 **)(puVar18 + -8) = puVar11;
            *(int *)(puVar18 + -0xc) = iVar3;
            *(undefined1 **)(puVar18 + -0x10) = puVar8;
            *(DWORD *)(puVar18 + -0x14) = param_2;
            *(LCID *)(puVar18 + -0x18) = param_1;
            puVar7 = puVar18 + -0x1c;
            *(undefined4 *)(puVar18 + -0x1c) = 0xaecf4f;
            local_44 = CompareStringW(*(LCID *)(puVar18 + -0x18),*(DWORD *)(puVar18 + -0x14),
                                      *(PCNZWCH *)(puVar18 + -0x10),*(int *)(puVar18 + -0xc),
                                      *(PCNZWCH *)(puVar18 + -8),*(int *)(puVar18 + -4));
          }
          if (bVar1) {
            *(undefined1 **)(puVar7 + -4) = puVar11;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar7 + -8) = &UNK_00aecf5e;
            _free(*(void **)(puVar7 + -4));
          }
        }
      }
LAB_00aecf5f:
      if (bVar2) {
        *(undefined1 **)(puVar7 + -4) = puVar8;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar7 + -8) = &UNK_00aecf6d;
        _free(*(void **)(puVar7 + -4));
      }
      return local_44;
    }
  }
  return 0;
}


//// FUNCTION findenv @ 00aed035 ////

/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2003 Release */

int __cdecl findenv(uchar *param_1)

{
  int iVar1;
  int *piVar2;
  size_t unaff_EDI;
  
  piVar2 = DAT_010cbbe8;
  while( true ) {
    if ((uchar *)*piVar2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_010cbbe8 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*piVar2,unaff_EDI);
    if ((iVar1 == 0) &&
       ((*(char *)(unaff_EDI + *piVar2) == '=' || (*(char *)(unaff_EDI + *piVar2) == '\0')))) break;
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_010cbbe8 >> 2;
}


//// FUNCTION copy_environ @ 00aed082 ////

/* Library Function - Single Match
    _copy_environ
   
   Library: Visual Studio 2003 Release */

undefined4 * __cdecl copy_environ(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int *unaff_EDI;
  
  iVar5 = 0;
  if (unaff_EDI != (int *)0x0) {
    iVar1 = *unaff_EDI;
    piVar2 = unaff_EDI;
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      iVar5 = iVar5 + 1;
      iVar1 = *piVar2;
    }
    puVar3 = _malloc(iVar5 * 4 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    pcVar4 = (char *)*unaff_EDI;
    puVar6 = puVar3;
    while (pcVar4 != (char *)0x0) {
      pcVar4 = __strdup(pcVar4);
      *puVar6 = pcVar4;
      puVar6 = puVar6 + 1;
      unaff_EDI = unaff_EDI + 1;
      pcVar4 = (char *)*unaff_EDI;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00aed0e3 @ 00aed0e3 ////

/* WARNING: Removing unreachable block (ram,0x00aed294) */

undefined4 __cdecl FUN_00aed0e3(undefined4 *param_1,int param_2)

{
  uint *_Str;
  uint *puVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  uint *lpName;
  undefined1 *puVar5;
  bool bVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  _Str = (uint *)*param_1;
  if (_Str == (uint *)0x0) {
    return 0xffffffff;
  }
  puVar1 = (uint *)__mbschr((uchar *)_Str,0x3d);
  if (puVar1 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (_Str == puVar1) {
    return 0xffffffff;
  }
  bVar6 = *(char *)((int)puVar1 + 1) == '\0';
  if (DAT_010cbbe8 == DAT_010cbbec) {
    DAT_010cbbe8 = copy_environ();
  }
  if (DAT_010cbbe8 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_010cbbf0 == (undefined4 *)0x0)) {
      if (bVar6) {
        return 0;
      }
      DAT_010cbbe8 = _malloc(4);
      if (DAT_010cbbe8 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_010cbbe8 = 0;
      if (DAT_010cbbf0 == (undefined4 *)0x0) {
        DAT_010cbbf0 = _malloc(4);
        if (DAT_010cbbf0 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_010cbbf0 = 0;
      }
    }
    else {
      iVar2 = FUN_00ae9120();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_010cbbe8;
  iVar2 = findenv((uchar *)_Str);
  if ((-1 < iVar2) && (*piVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
    _free((void *)piVar3[iVar2]);
  }
  if (bVar6) {
                    /* WARNING: Subroutine does not return */
    _free(_Str);
  }
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  piVar3 = FUN_00ad58c5(DAT_010cbbe8,(uint *)(iVar2 * 4 + 8));
  if (piVar3 == (int *)0x0) {
    return 0xffffffff;
  }
  piVar3[iVar2] = (int)_Str;
  (piVar3 + iVar2)[1] = 0;
  *param_1 = 0;
  if (param_2 == 0) {
    DAT_010cbbe8 = piVar3;
    return 0;
  }
  DAT_010cbbe8 = piVar3;
  sVar4 = _strlen((char *)_Str);
  lpName = _malloc(sVar4 + 2);
  if (lpName != (uint *)0x0) {
    FUN_00ada2e0(lpName,_Str);
    puVar5 = (undefined1 *)(((int)lpName - (int)_Str) + (int)puVar1);
    *puVar5 = 0;
    SetEnvironmentVariableA((LPCSTR)lpName,puVar5 + 1);
                    /* WARNING: Subroutine does not return */
    _free(lpName);
  }
  return 0;
}


//// FUNCTION __getpath @ 00aed2b8 ////

/* Library Function - Single Match
    __getpath
   
   Library: Visual Studio 2003 Release */

char * __cdecl __getpath(char *_Src,char *_Dst,size_t _SizeInChars)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  
  for (; pcVar2 = _Src, *_Src == ';'; _Src = _Src + 1) {
  }
  while (_SizeInChars = _SizeInChars - 1, pcVar1 = pcVar2, _SizeInChars != 0) {
    while( true ) {
      cVar3 = *pcVar2;
      if (cVar3 == '\0') goto LAB_00aed314;
      if (cVar3 == ';') goto LAB_00aed313;
      if (cVar3 != '\"') break;
      pcVar1 = pcVar2 + 1;
      cVar3 = *pcVar1;
      pcVar2 = pcVar1;
      if (cVar3 == '\0') goto LAB_00aed314;
      do {
        if (cVar3 == '\"') break;
        *_Dst = cVar3;
        _Dst = _Dst + 1;
        pcVar1 = pcVar1 + 1;
        _SizeInChars = _SizeInChars - 1;
        pcVar2 = pcVar1;
        if (_SizeInChars == 0) goto LAB_00aed319;
        cVar3 = *pcVar1;
      } while (cVar3 != '\0');
      pcVar2 = pcVar1;
      if (*pcVar1 == '\0') goto LAB_00aed314;
      pcVar2 = pcVar1 + 1;
    }
    *_Dst = cVar3;
    _Dst = _Dst + 1;
    pcVar2 = pcVar2 + 1;
  }
LAB_00aed319:
  *_Dst = '\0';
  return (char *)(-(uint)(pcVar1 != pcVar2) & (uint)pcVar2);
LAB_00aed314:
  for (; pcVar1 = _Src, *pcVar2 == ';'; pcVar2 = pcVar2 + 1) {
LAB_00aed313:
  }
  goto LAB_00aed319;
}


//// FUNCTION __mbschr @ 00aed327 ////

/* Library Function - Single Match
    __mbschr
   
   Library: Visual Studio 2003 Release */

uchar * __cdecl __mbschr(uchar *_Str,uint _Ch)

{
  byte bVar1;
  byte bVar2;
  _ptiddata p_Var3;
  int *piVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  
  p_Var3 = __getptd();
  piVar4 = p_Var3->_tpxcptinfoptrs;
  if (piVar4 != DAT_010dab84) {
    piVar4 = FUN_00ae3a22();
  }
  if (piVar4[2] == 0) {
    puVar5 = FUN_00acecd0((uint *)_Str,(char)_Ch);
    return (uchar *)puVar5;
  }
  while( true ) {
    bVar2 = *_Str;
    uVar7 = (uint)bVar2;
    if (bVar2 == 0) break;
    if ((*(byte *)(uVar7 + 0x1d + (int)piVar4) & 4) == 0) {
      pbVar6 = _Str;
      if (_Ch == uVar7) break;
    }
    else {
      bVar1 = _Str[1];
      if (bVar1 == 0) {
        return (uchar *)0x0;
      }
      pbVar6 = _Str + 1;
      if (_Ch == CONCAT11(bVar2,bVar1)) {
        return _Str;
      }
    }
    _Str = pbVar6 + 1;
  }
  return (uchar *)(~-(uint)(_Ch != uVar7) & (uint)_Str);
}


//// FUNCTION FUN_00aed3a2 @ 00aed3a2 ////

undefined4 __cdecl FUN_00aed3a2(int param_1,LPCSTR param_2,char *param_3,LPVOID param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  ulong *puVar7;
  UINT UVar8;
  UINT *pUVar9;
  int iVar10;
  UINT UVar11;
  _STARTUPINFOA local_6c;
  _PROCESS_INFORMATION local_28;
  char *local_14;
  DWORD local_10;
  uint local_c;
  char local_5;
  
  local_10 = 0;
  local_5 = '\0';
  if ((param_1 != 0) && (param_1 != 1)) {
    if (param_1 < 2) {
LAB_00aed3d5:
      piVar6 = FUN_00ad4b6c();
      *piVar6 = 0x16;
      puVar7 = FUN_00ad4b75();
      *puVar7 = 0;
      return 0xffffffff;
    }
    if (3 < param_1) {
      if (param_1 != 4) goto LAB_00aed3d5;
      local_5 = '\x01';
    }
  }
  local_14 = param_3;
  while (*param_3 != '\0') {
    do {
      pcVar4 = param_3;
      param_3 = pcVar4 + 1;
    } while (*param_3 != '\0');
    pcVar4 = pcVar4 + 2;
    if (*pcVar4 != '\0') {
      *param_3 = ' ';
      param_3 = pcVar4;
    }
  }
  _memset(&local_6c,0,0x44);
  local_6c.cb = 0x44;
  UVar11 = uNumber_010daa74;
  UVar8 = uNumber_010daa74;
  while ((UVar11 != 0 &&
         (UVar8 = UVar8 - 1,
         *(char *)((&DAT_010daa80)[(int)UVar8 >> 5] + 4 + (UVar8 & 0x1f) * 0x24) == '\0'))) {
    UVar11 = UVar11 - 1;
  }
  uVar2 = UVar11 * 5 + 4;
  local_6c.cbReserved2 = (WORD)uVar2;
  local_6c.lpReserved2 = _calloc(uVar2 & 0xffff,1);
  *(UINT *)local_6c.lpReserved2 = UVar11;
  local_c = 0;
  pUVar9 = (UINT *)((int)local_6c.lpReserved2 + 4);
  puVar5 = (undefined4 *)((int)local_6c.lpReserved2 + UVar11 + 4);
  if (0 < (int)UVar11) {
    do {
      puVar1 = (undefined4 *)((&DAT_010daa80)[(int)local_c >> 5] + (local_c & 0x1f) * 0x24);
      bVar3 = *(byte *)(puVar1 + 1);
      if ((bVar3 & 0x10) == 0) {
        *(byte *)pUVar9 = bVar3;
        *puVar5 = *puVar1;
      }
      else {
        *(byte *)pUVar9 = 0;
        *puVar5 = 0xffffffff;
      }
      local_c = local_c + 1;
      pUVar9 = (UINT *)((int)pUVar9 + 1);
      puVar5 = puVar5 + 1;
    } while ((int)local_c < (int)UVar11);
  }
  if (local_5 != '\0') {
    pUVar9 = (UINT *)((int)local_6c.lpReserved2 + 4);
    iVar10 = 0;
    puVar5 = (undefined4 *)((int)local_6c.lpReserved2 + UVar11 + 4);
    while( true ) {
      UVar8 = UVar11;
      if (2 < (int)UVar11) {
        UVar8 = 3;
      }
      if ((int)UVar8 <= iVar10) break;
      *(undefined1 *)pUVar9 = 0;
      *puVar5 = 0xffffffff;
      iVar10 = iVar10 + 1;
      pUVar9 = (UINT *)((int)pUVar9 + 1);
      puVar5 = puVar5 + 1;
    }
    local_10 = 8;
  }
  piVar6 = FUN_00ad4b6c();
  *piVar6 = 0;
  puVar7 = FUN_00ad4b75();
  *puVar7 = 0;
  CreateProcessA(param_2,local_14,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,1,local_10,
                 param_4,(LPCSTR)0x0,&local_6c,&local_28);
  GetLastError();
                    /* WARNING: Subroutine does not return */
  _free(local_6c.lpReserved2);
}


//// FUNCTION FUN_00aed57c @ 00aed57c ////

undefined4 __cdecl
FUN_00aed57c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  size_t sVar1;
  void *pvVar2;
  size_t sVar3;
  char *pcVar4;
  int *piVar5;
  ulong *puVar6;
  char cVar7;
  undefined4 *puVar8;
  size_t sVar9;
  uint *puVar10;
  undefined4 *puVar11;
  
  sVar9 = 2;
  sVar3 = sVar9;
  for (puVar8 = param_1; (char *)*puVar8 != (char *)0x0; puVar8 = puVar8 + 1) {
    sVar1 = _strlen((char *)*puVar8);
    sVar3 = sVar3 + 1 + sVar1;
  }
  pvVar2 = _malloc(sVar3);
  *param_3 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    *param_4 = 0;
    piVar5 = FUN_00ad4b6c();
    *piVar5 = 0xc;
    puVar6 = FUN_00ad4b75();
    *puVar6 = 8;
    return 0xffffffff;
  }
  puVar8 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    *param_4 = 0;
    puVar8 = param_1;
    puVar11 = param_1;
  }
  else {
    for (; (char *)*puVar8 != (char *)0x0; puVar8 = puVar8 + 1) {
      sVar3 = _strlen((char *)*puVar8);
      sVar9 = sVar9 + 1 + sVar3;
    }
    if ((DAT_010cbc10 == (char *)0x0) && (DAT_010cbc10 = FUN_00ae72d8(), DAT_010cbc10 == (LPSTR)0x0)
       ) {
      return 0xffffffff;
    }
    puVar8 = (undefined4 *)0x0;
    if (*DAT_010cbc10 != '\0') {
      cVar7 = *DAT_010cbc10;
      pcVar4 = DAT_010cbc10;
      do {
        if (cVar7 == '=') break;
        sVar3 = _strlen(pcVar4);
        puVar8 = (undefined4 *)((int)puVar8 + sVar3 + 1);
        pcVar4 = DAT_010cbc10 + (int)puVar8;
        cVar7 = *pcVar4;
      } while (cVar7 != '\0');
    }
    pcVar4 = DAT_010cbc10 + (int)puVar8;
    puVar11 = puVar8;
    while ((((*pcVar4 == '=' && (pcVar4[1] != '\0')) && (pcVar4[2] == ':')) && (pcVar4[3] == '=')))
    {
      sVar3 = _strlen(pcVar4 + 4);
      puVar11 = (undefined4 *)((int)puVar11 + sVar3 + 5);
      pcVar4 = DAT_010cbc10 + (int)puVar11;
    }
    pvVar2 = _malloc((int)puVar11 + (sVar9 - (int)puVar8));
    *param_4 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*param_3);
    }
  }
  puVar10 = (uint *)*param_3;
  param_3 = param_1;
  if ((uint *)*param_1 == (uint *)0x0) goto LAB_00aed6f4;
  FUN_00ada2e0(puVar10,(uint *)*param_1);
  sVar3 = _strlen((char *)*param_1);
  puVar10 = (uint *)((int)puVar10 + sVar3 + 1);
  param_3 = param_1 + 1;
  while ((uint *)*param_3 != (uint *)0x0) {
    FUN_00ada2e0(puVar10,(uint *)*param_3);
    sVar3 = _strlen((char *)*param_3);
    puVar10 = (uint *)((int)puVar10 + sVar3);
    param_3 = param_3 + 1;
    *(undefined1 *)puVar10 = 0x20;
LAB_00aed6f4:
    puVar10 = (uint *)((int)puVar10 + 1);
  }
  *(undefined1 *)((int)puVar10 + -1) = 0;
  *(undefined1 *)puVar10 = 0;
  puVar10 = (uint *)*param_4;
  if (param_2 != (undefined4 *)0x0) {
    _memcpy(puVar10,DAT_010cbc10 + (int)puVar8,(int)puVar11 - (int)puVar8);
    puVar10 = (uint *)((int)puVar10 + ((int)puVar11 - (int)puVar8));
    for (; (uint *)*param_2 != (uint *)0x0; param_2 = param_2 + 1) {
      FUN_00ada2e0(puVar10,(uint *)*param_2);
      sVar3 = _strlen((char *)*param_2);
      puVar10 = (uint *)((int)puVar10 + sVar3 + 1);
    }
  }
  if (puVar10 != (uint *)0x0) {
    if (puVar10 == (uint *)*param_4) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (uint *)((int)puVar10 + 1);
    }
    *(undefined1 *)puVar10 = 0;
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_010cbc10);
}


//// FUNCTION __setmode_lk @ 00aed777 ////

/* Library Function - Single Match
    __setmode_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __setmode_lk(uint param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = &DAT_010daa80 + ((int)param_1 >> 5);
  iVar4 = (param_1 & 0x1f) * 0x24;
  bVar2 = *(byte *)(*piVar3 + 4 + iVar4);
  if (param_2 == 0x8000) {
    pbVar1 = (byte *)(*piVar3 + 4 + iVar4);
    *pbVar1 = *pbVar1 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      piVar3 = FUN_00ad4b6c();
      *piVar3 = 0x16;
      return -1;
    }
    pbVar1 = (byte *)(*piVar3 + 4 + iVar4);
    *pbVar1 = *pbVar1 | 0x80;
  }
  return (-(uint)((bVar2 & 0x80) != 0) & 0xffffc000) + 0x8000;
}


//// FUNCTION __setmode @ 00aed7e3 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __setmode
   
   Library: Visual Studio 2003 Release */

int __cdecl __setmode(int _FileHandle,int _Mode)

{
  int *piVar1;
  int iVar2;
  int local_20;
  
  if ((uint)_FileHandle < uNumber_010daa74) {
    iVar2 = (_FileHandle & 0x1fU) * 0x24;
    if ((*(byte *)((&DAT_010daa80)[_FileHandle >> 5] + 4 + iVar2) & 1) != 0) {
      __lock_fhandle(_FileHandle);
      if ((*(byte *)((&DAT_010daa80)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
        piVar1 = FUN_00ad4b6c();
        *piVar1 = 9;
        local_20 = -1;
      }
      else {
        local_20 = __setmode_lk(_FileHandle,_Mode);
      }
      FUN_00aed85e();
      return local_20;
    }
  }
  piVar1 = FUN_00ad4b6c();
  *piVar1 = 9;
  return -1;
}


//// FUNCTION FUN_00aed85e @ 00aed85e ////

void FUN_00aed85e(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}


//// FUNCTION FUN_00aed87a @ 00aed87a ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int __cdecl FUN_00aed87a(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uStackY_4c;
  int local_20;
  
  if (DAT_010cc0e0 == 0) {
    uStackY_4c = 0xaed89d;
    iVar3 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_010cc0e0 = 2;
      }
    }
    else {
      DAT_010cc0e0 = 1;
    }
  }
  if (DAT_010cc0e0 == 1) {
    uStackY_4c = 0xaed8d9;
    iVar3 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
    return iVar3;
  }
  if ((DAT_010cc0e0 == 2) || (DAT_010cc0e0 == 0)) {
    local_20 = 0;
    bVar2 = false;
    if (param_5 == 0) {
      param_5 = CodePage_010cc05c;
    }
    uStackY_4c = 0xaed908;
    iVar3 = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
    if (iVar3 != 0) {
      puVar5 = (undefined1 *)(iVar3 + 3U & 0xfffffffc);
      iVar1 = -(int)puVar5;
      puVar6 = &stack0xffffffc8 + iVar1;
      if (&stack0xffffffc8 == puVar5) {
        *(int *)(&stack0xffffffc4 + iVar1) = iVar3;
        *(undefined4 *)(&stack0xffffffc0 + iVar1) = 0xaed955;
        puVar6 = _malloc(*(size_t *)(&stack0xffffffc4 + iVar1));
        if (puVar6 == (void *)0x0) {
          return 0;
        }
        bVar2 = true;
      }
      *(int *)(&stack0xffffffc4 + iVar1) = iVar3;
      *(undefined1 **)(&stack0xffffffc0 + iVar1) = puVar6;
      *(LCTYPE *)(&stack0xffffffbc + iVar1) = param_2;
      *(LCID *)(&stack0xffffffb8 + iVar1) = param_1;
      puVar7 = (undefined1 *)((int)&uStackY_4c + iVar1);
      *(undefined4 *)((int)&uStackY_4c + iVar1) = 0xaed96f;
      iVar3 = GetLocaleInfoA(*(LCID *)(&stack0xffffffb8 + iVar1),
                             *(LCTYPE *)(&stack0xffffffbc + iVar1),
                             *(LPSTR *)(&stack0xffffffc0 + iVar1),*(int *)(&stack0xffffffc4 + iVar1)
                            );
      puVar5 = puVar7;
      if (iVar3 != 0) {
        if (param_4 == 0) {
          *(undefined4 *)(puVar7 + -4) = 0;
          *(undefined4 *)(puVar7 + -8) = 0;
        }
        else {
          *(int *)(puVar7 + -4) = param_4;
          *(LPWSTR *)(puVar7 + -8) = param_3;
        }
        *(undefined4 *)(puVar7 + -0xc) = 0xffffffff;
        *(undefined1 **)(puVar7 + -0x10) = puVar6;
        *(undefined4 *)(puVar7 + -0x14) = 1;
        *(int *)(puVar7 + -0x18) = param_5;
        puVar5 = puVar7 + -0x1c;
        *(undefined4 *)(puVar7 + -0x1c) = 0xaed98f;
        local_20 = MultiByteToWideChar(*(UINT *)(puVar7 + -0x18),*(DWORD *)(puVar7 + -0x14),
                                       *(LPCCH *)(puVar7 + -0x10),*(int *)(puVar7 + -0xc),
                                       *(LPWSTR *)(puVar7 + -8),*(int *)(puVar7 + -4));
      }
      if (bVar2) {
        *(undefined1 **)(puVar5 + -4) = puVar6;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar5 + -8) = &UNK_00aed99d;
        _free(*(void **)(puVar5 + -4));
      }
      return local_20;
    }
  }
  return 0;
}


//// FUNCTION FUN_00aed9aa @ 00aed9aa ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int __cdecl FUN_00aed9aa(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uStackY_4c;
  int local_20;
  
  if (DAT_010cc0e4 == 0) {
    uStackY_4c = 0xaed9cd;
    iVar3 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_010cc0e4 = 2;
      }
    }
    else {
      DAT_010cc0e4 = 1;
    }
  }
  if ((DAT_010cc0e4 == 2) || (DAT_010cc0e4 == 0)) {
    uStackY_4c = 0xaedae1;
    iVar3 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
    return iVar3;
  }
  if (DAT_010cc0e4 == 1) {
    local_20 = 0;
    bVar2 = false;
    if (param_5 == 0) {
      param_5 = CodePage_010cc05c;
    }
    uStackY_4c = 0xaeda2a;
    iVar3 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
    if (iVar3 != 0) {
      puVar5 = (undefined1 *)(iVar3 * 2 + 3U & 0xfffffffc);
      iVar1 = -(int)puVar5;
      puVar6 = &stack0xffffffc8 + iVar1;
      if (&stack0xffffffc8 == puVar5) {
        *(int *)(&stack0xffffffc4 + iVar1) = iVar3 * 2;
        *(undefined4 *)(&stack0xffffffc0 + iVar1) = 0xaeda7d;
        puVar6 = _malloc(*(size_t *)(&stack0xffffffc4 + iVar1));
        if (puVar6 == (void *)0x0) {
          return 0;
        }
        bVar2 = true;
      }
      *(int *)(&stack0xffffffc4 + iVar1) = iVar3;
      *(undefined1 **)(&stack0xffffffc0 + iVar1) = puVar6;
      *(LCTYPE *)(&stack0xffffffbc + iVar1) = param_2;
      *(LCID *)(&stack0xffffffb8 + iVar1) = param_1;
      puVar7 = (undefined1 *)((int)&uStackY_4c + iVar1);
      *(undefined4 *)((int)&uStackY_4c + iVar1) = 0xaeda99;
      iVar3 = GetLocaleInfoW(*(LCID *)(&stack0xffffffb8 + iVar1),
                             *(LCTYPE *)(&stack0xffffffbc + iVar1),
                             *(LPWSTR *)(&stack0xffffffc0 + iVar1),
                             *(int *)(&stack0xffffffc4 + iVar1));
      puVar5 = puVar7;
      if (iVar3 != 0) {
        *(undefined4 *)(puVar7 + -4) = 0;
        *(undefined4 *)(puVar7 + -8) = 0;
        if (param_4 == 0) {
          *(undefined4 *)(puVar7 + -0xc) = 0;
          *(undefined4 *)(puVar7 + -0x10) = 0;
        }
        else {
          *(int *)(puVar7 + -0xc) = param_4;
          *(LPSTR *)(puVar7 + -0x10) = param_3;
        }
        *(undefined4 *)(puVar7 + -0x14) = 0xffffffff;
        *(undefined1 **)(puVar7 + -0x18) = puVar6;
        *(undefined4 *)(puVar7 + -0x1c) = 0;
        *(int *)(puVar7 + -0x20) = param_5;
        puVar5 = puVar7 + -0x24;
        *(undefined4 *)(puVar7 + -0x24) = 0xaedabb;
        local_20 = WideCharToMultiByte(*(UINT *)(puVar7 + -0x20),*(DWORD *)(puVar7 + -0x1c),
                                       *(LPCWCH *)(puVar7 + -0x18),*(int *)(puVar7 + -0x14),
                                       *(LPSTR *)(puVar7 + -0x10),*(int *)(puVar7 + -0xc),
                                       *(LPCCH *)(puVar7 + -8),*(LPBOOL *)(puVar7 + -4));
      }
      if (bVar2) {
        *(undefined1 **)(puVar5 + -4) = puVar6;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar5 + -8) = &UNK_00aedac9;
        _free(*(void **)(puVar5 + -4));
      }
      return local_20;
    }
  }
  return 0;
}


//// FUNCTION ___addl @ 00aedaea ////

/* Library Function - Single Match
    ___addl
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl ___addl(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1 + param_2;
  uVar2 = 0;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}


//// FUNCTION ___add_12 @ 00aedb0b ////

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = ___addl(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = ___addl(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = ___addl(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  ___addl(param_1[2],param_2[2],param_1 + 2);
  return;
}


//// FUNCTION ___shl_12 @ 00aedb69 ////

/* Library Function - Single Match
    ___shl_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___shl_12(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}


//// FUNCTION ___shr_12 @ 00aedb97 ////

/* Library Function - Single Match
    ___shr_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___shr_12(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}


//// FUNCTION ___mtold12 @ 00aedbc4 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___mtold12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___mtold12(char *param_1,int param_2,uint *param_3)

{
  short sVar1;
  uint *puVar2;
  uint uVar3;
  uint local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  puVar2 = param_3;
  local_8 = DAT_00e9a098;
  sVar1 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)param_2;
    do {
      local_14 = *puVar2;
      local_10 = puVar2[1];
      local_c = puVar2[2];
      ___shl_12(puVar2);
      ___shl_12(puVar2);
      ___add_12(puVar2,&local_14);
      ___shl_12(puVar2);
      local_14 = (uint)*param_1;
      local_10 = 0;
      local_c = 0;
      ___add_12(puVar2,&local_14);
      param_1 = param_1 + 1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  if (puVar2[2] == 0) {
    do {
      sVar1 = sVar1 + -0x10;
      uVar3 = puVar2[1] >> 0x10;
      puVar2[1] = *puVar2 >> 0x10 | puVar2[1] << 0x10;
      *puVar2 = *puVar2 << 0x10;
    } while (uVar3 == 0);
    puVar2[2] = uVar3;
  }
  while ((puVar2[2] & 0x8000) == 0) {
    ___shl_12(puVar2);
    sVar1 = sVar1 + -1;
  }
  *(short *)((int)puVar2 + 10) = sVar1;
  return;
}


//// FUNCTION __flswbuf @ 00aedca2 ////

/* Library Function - Single Match
    __flswbuf
   
   Library: Visual Studio 2003 Release */

int __cdecl __flswbuf(int _Ch,FILE *_File)

{
  uint uVar1;
  uint _FileHandle;
  char *_Buf;
  char *pcVar2;
  FILE *_File_00;
  int iVar3;
  undefined *puVar4;
  FILE *_MaxCharCount;
  
  _File_00 = _File;
  uVar1 = _File->_flag;
  _FileHandle = _File->_file;
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_00aeddbb:
    _File->_flag = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      _File->_cnt = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_00aeddbb;
      _File->_ptr = _File->_base;
      _File->_flag = uVar1 & 0xfffffffe;
    }
    uVar1 = _File->_flag;
    _File->_flag = uVar1 & 0xffffffef | 2;
    _File->_cnt = 0;
    _File = (FILE *)0x0;
    if (((uVar1 & 0x10c) == 0) &&
       (((_File_00 != (FILE *)&DAT_00e99dd0 && (_File_00 != (FILE *)&DAT_00e99df0)) ||
        (iVar3 = __isatty(_FileHandle), iVar3 == 0)))) {
      __getbuf(_File_00);
    }
    if ((_File_00->_flag & 0x108) == 0) {
      _MaxCharCount = (FILE *)0x2;
      _File = (FILE *)CONCAT22(_File._2_2_,(short)_Ch);
      _File = (FILE *)__write(_FileHandle,&_File,2);
    }
    else {
      _Buf = _File_00->_base;
      pcVar2 = _File_00->_ptr;
      _File_00->_ptr = _Buf + 2;
      _MaxCharCount = (FILE *)(pcVar2 + -(int)_Buf);
      _File_00->_cnt = _File_00->_bufsiz + -2;
      if ((int)_MaxCharCount < 1) {
        if (_FileHandle == 0xffffffff) {
          puVar4 = &DAT_00e9a928;
        }
        else {
          puVar4 = (undefined *)
                   ((&DAT_010daa80)[(int)_FileHandle >> 5] + (_FileHandle & 0x1f) * 0x24);
        }
        if ((puVar4[4] & 0x20) != 0) {
          __lseek(_FileHandle,0,2);
        }
      }
      else {
        _File = (FILE *)__write(_FileHandle,_Buf,(uint)_MaxCharCount);
      }
      *(short *)_File_00->_base = (short)_Ch;
    }
    if (_File == _MaxCharCount) {
      return _Ch & 0xffff;
    }
    _File_00->_flag = _File_00->_flag | 0x20;
  }
  return 0xffff;
}


//// FUNCTION ___ld12mul @ 00aeddca ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___ld12mul
   
   Library: Visual Studio 2003 Release */

void __cdecl ___ld12mul(int *param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  int *local_2c;
  ushort *local_28;
  ushort *local_24;
  int local_20;
  int local_1c;
  short *local_18;
  byte local_14;
  undefined1 uStack_13;
  undefined2 uStack_12;
  short local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  undefined1 uStack_a;
  byte bStack_9;
  undefined4 local_8;
  
  piVar5 = param_2;
  piVar4 = param_1;
  local_8 = DAT_00e9a098;
  local_20 = 0;
  local_14 = 0;
  uStack_13 = 0;
  uStack_12 = 0;
  local_10 = 0;
  uStack_e = 0;
  local_c = 0;
  uStack_a = 0;
  bStack_9 = 0;
  uVar10 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar7 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar11 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar6 = (ushort)uVar7;
  piVar1 = (int *)(uVar10 + uVar7);
  if (((uVar6 < 0x7fff) && (uVar9 = (ushort)uVar10, uVar9 < 0x7fff)) && ((ushort)piVar1 < 0xbffe)) {
    if ((ushort)piVar1 < 0x3fc0) goto LAB_00aede77;
    if (uVar6 == 0) {
      piVar1 = (int *)((int)piVar1 + 1);
      uVar6 = 0;
      if ((((param_1[2] & 0x7fffffffU) != 0) || (param_1[1] != 0)) || (*param_1 != 0))
      goto LAB_00aede61;
    }
    else {
LAB_00aede61:
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) {
LAB_00aede77:
        piVar4[2] = 0;
        piVar4[1] = 0;
        *piVar4 = 0;
        return;
      }
      local_1c = 0;
      local_18 = &local_10;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_28 = (ushort *)(local_1c * 2 + (int)piVar4);
          local_24 = (ushort *)(piVar5 + 2);
          local_2c = param_2;
          do {
            iVar8 = ___addl(*(uint *)(local_18 + -2),(uint)*local_24 * (uint)*local_28,
                            (uint *)(local_18 + -2));
            if (iVar8 != 0) {
              *local_18 = *local_18 + 1;
            }
            local_28 = local_28 + 1;
            local_24 = local_24 + -1;
            local_2c = (int *)((int)local_2c + -1);
          } while (local_2c != (int *)0x0);
        }
        local_18 = local_18 + 1;
        local_1c = local_1c + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (0 < (int)param_2);
      param_1 = (int *)((int)param_1 + 0xc002);
      if ((short)(ushort)param_1 < 1) {
LAB_00aedf2b:
        iVar8 = (int)param_1 + 0xffff;
        param_1._0_2_ = (ushort)iVar8;
        if ((short)(ushort)param_1 < 0) {
          uVar7 = -iVar8;
          uVar10 = uVar7 & 0xffff;
          param_1._0_2_ = (ushort)param_1 + (short)uVar7;
          do {
            if ((local_14 & 1) != 0) {
              local_20 = local_20 + 1;
            }
            ___shr_12((uint *)&local_14);
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          if (local_20 != 0) {
            local_14 = local_14 | 1;
          }
        }
      }
      else {
        do {
          if ((bStack_9 & 0x80) != 0) break;
          ___shl_12((uint *)&local_14);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_00aedf2b;
      }
      if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
         (sVar2 = CONCAT11(bStack_9,uStack_a), iVar3 = CONCAT22(local_c,uStack_e),
         iVar8 = CONCAT22(local_10,uStack_12),
         (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_10,uStack_12) == -1) {
          iVar8 = 0;
          if (CONCAT22(local_c,uStack_e) == -1) {
            if (CONCAT11(bStack_9,uStack_a) == -1) {
              param_1._0_2_ = (ushort)param_1 + 1;
              sVar2 = -0x8000;
              iVar3 = 0;
              iVar8 = 0;
            }
            else {
              sVar2 = CONCAT11(bStack_9,uStack_a) + 1;
              iVar3 = 0;
              iVar8 = 0;
            }
          }
          else {
            sVar2 = CONCAT11(bStack_9,uStack_a);
            iVar3 = CONCAT22(local_c,uStack_e) + 1;
          }
        }
        else {
          iVar8 = CONCAT22(local_10,uStack_12) + 1;
          sVar2 = CONCAT11(bStack_9,uStack_a);
          iVar3 = CONCAT22(local_c,uStack_e);
        }
      }
      local_10 = (short)((uint)iVar8 >> 0x10);
      uStack_12 = (undefined2)iVar8;
      local_c = (undefined2)((uint)iVar3 >> 0x10);
      uStack_e = (undefined2)iVar3;
      bStack_9 = (byte)((ushort)sVar2 >> 8);
      uStack_a = (undefined1)sVar2;
      if (0x7ffe < (ushort)param_1) goto LAB_00aedfd4;
      *(undefined2 *)piVar4 = uStack_12;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_e,local_10);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_9,CONCAT12(uStack_a,local_c));
      uVar6 = (ushort)param_1 | uVar11;
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_00aedfd4:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}


//// FUNCTION ___multtenpow12 @ 00aedffc ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___multtenpow12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___multtenpow12(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  ushort local_14;
  undefined4 local_12;
  undefined2 uStack_e;
  undefined4 uStack_c;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  iVar3 = 0xe9ace8;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      iVar3 = 0xe9ae48;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      uVar1 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      iVar3 = iVar3 + 0x54;
      param_2 = uVar1;
      if (uVar2 != 0) {
        puVar4 = (ushort *)(iVar3 + uVar2 * 0xc);
        if (0x7fff < *puVar4) {
          local_14 = (ushort)*(undefined4 *)puVar4;
          local_12._0_2_ = (undefined2)((uint)*(undefined4 *)puVar4 >> 0x10);
          local_12._2_2_ = (undefined2)*(undefined4 *)(puVar4 + 2);
          uStack_e = (undefined2)((uint)*(undefined4 *)(puVar4 + 2) >> 0x10);
          uStack_c = *(undefined4 *)(puVar4 + 4);
          local_12 = CONCAT22(local_12._2_2_,(undefined2)local_12) + -1;
          puVar4 = &local_14;
        }
        ___ld12mul(param_1,(int *)puVar4);
      }
    }
  }
  return;
}


//// FUNCTION __strdup @ 00aee082 ////

/* Library Function - Single Match
    __strdup
   
   Library: Visual Studio 2003 Release */

char * __cdecl __strdup(char *_Src)

{
  size_t sVar1;
  uint *puVar2;
  
  if (_Src != (char *)0x0) {
    sVar1 = _strlen(_Src);
    puVar2 = _malloc(sVar1 + 1);
    if (puVar2 != (uint *)0x0) {
      puVar2 = FUN_00ada2e0(puVar2,(uint *)_Src);
      return (char *)puVar2;
    }
  }
  return (char *)0x0;
}


//// FUNCTION DelayLoad_DirectInput8Create @ 00aef120 ////

void DelayLoad_DirectInput8Create(void)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       ___delayLoadHelper2_8(&ImgDelayDescr_00e4a87c.grAttrs,(int *)&DirectInput8Create_exref);
                    /* WARNING: Could not recover jumptable at 0x00aef139. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


//// FUNCTION FUN_00aef150 @ 00aef150 ////

void __cdecl FUN_00aef150(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  param_1[1] = 0;
  if (param_2 != 0x3e) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    *(undefined4 *)(*param_1 + 0x18) = 0x3e;
    *(int *)(*param_1 + 0x1c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_3 != 0x1b0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(undefined4 *)(*param_1 + 0x18) = 0x1b0;
    *(int *)(*param_1 + 0x1c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  iVar1 = *param_1;
  iVar2 = param_1[3];
  piVar4 = param_1;
  for (iVar3 = 0x6c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  *param_1 = iVar1;
  param_1[3] = iVar2;
  *(undefined1 *)(param_1 + 4) = 1;
  FUN_00af2a40(param_1);
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2f] = 0;
  param_1[0x43] = 0;
  FUN_00af1770((int)param_1);
  FUN_00af1ec0((int)param_1);
  param_1[5] = 200;
  return;
}


//// FUNCTION FUN_00aef260 @ 00aef260 ////

void FUN_00aef260(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *unaff_ESI;
  
  iVar1 = unaff_ESI[9];
  if (iVar1 == 1) {
    unaff_ESI[10] = 1;
    unaff_ESI[0xb] = 1;
    goto LAB_00aef3a3;
  }
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      if (((char)unaff_ESI[0x42] == '\0') || (*(char *)((int)unaff_ESI + 0x109) == '\0')) {
        unaff_ESI[10] = 4;
        unaff_ESI[0xb] = 4;
      }
      else {
        if (*(char *)((int)unaff_ESI + 0x109) != '\x02') {
          *(undefined4 *)(*unaff_ESI + 0x14) = 0x72;
          *(uint *)(*unaff_ESI + 0x18) = (uint)*(byte *)((int)unaff_ESI + 0x109);
          (**(code **)(*unaff_ESI + 4))();
        }
        unaff_ESI[10] = 5;
        unaff_ESI[0xb] = 4;
      }
    }
    else {
      unaff_ESI[10] = 0;
      unaff_ESI[0xb] = 0;
    }
    goto LAB_00aef3a3;
  }
  if ((char)unaff_ESI[0x40] == '\0') {
    if ((char)unaff_ESI[0x42] == '\0') {
      piVar2 = (int *)unaff_ESI[0x31];
      iVar1 = *piVar2;
      iVar3 = piVar2[0x15];
      iVar4 = piVar2[0x2a];
      if (iVar1 == 1) {
        if ((iVar3 == 2) && (iVar4 == 3)) {
          unaff_ESI[10] = 3;
          unaff_ESI[0xb] = 2;
          goto LAB_00aef3a3;
        }
      }
      else if (((iVar1 == 0x52) && (iVar3 == 0x47)) && (iVar4 == 0x42)) goto LAB_00aef320;
      iVar5 = *unaff_ESI;
      *(int *)(iVar5 + 0x18) = iVar1;
      *(int *)(iVar5 + 0x1c) = iVar3;
      *(int *)(iVar5 + 0x20) = iVar4;
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x6f;
      (**(code **)(*unaff_ESI + 4))();
    }
    else {
      if (*(char *)((int)unaff_ESI + 0x109) == '\0') {
LAB_00aef320:
        unaff_ESI[10] = 2;
        unaff_ESI[0xb] = 2;
        goto LAB_00aef3a3;
      }
      if (*(char *)((int)unaff_ESI + 0x109) != '\x01') {
        *(undefined4 *)(*unaff_ESI + 0x14) = 0x72;
        *(uint *)(*unaff_ESI + 0x18) = (uint)*(byte *)((int)unaff_ESI + 0x109);
        (**(code **)(*unaff_ESI + 4))();
      }
    }
  }
  unaff_ESI[10] = 3;
  unaff_ESI[0xb] = 2;
LAB_00aef3a3:
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = 0x3ff00000;
  *(undefined1 *)(unaff_ESI + 0x10) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x41) = 0;
  unaff_ESI[0x11] = 0;
  *(undefined1 *)((int)unaff_ESI + 0x4a) = 0;
  unaff_ESI[0x1d] = 0;
  *(undefined1 *)(unaff_ESI + 0x16) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x59) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x5a) = 0;
  unaff_ESI[0xc] = 1;
  unaff_ESI[0xd] = 1;
  *(undefined1 *)(unaff_ESI + 0x12) = 1;
  *(undefined1 *)((int)unaff_ESI + 0x49) = 1;
  unaff_ESI[0x13] = 2;
  *(undefined1 *)(unaff_ESI + 0x14) = 1;
  unaff_ESI[0x15] = 0x100;
  return;
}


//// FUNCTION FUN_00aef3f0 @ 00aef3f0 ////

int __cdecl FUN_00aef3f0(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  switch(param_1[5]) {
  case 200:
    (**(code **)(param_1[100] + 4))(param_1);
    (**(code **)(param_1[6] + 8))(param_1);
    param_1[5] = 0xc9;
  case 0xc9:
    iVar1 = (**(code **)param_1[100])(param_1);
    if (iVar1 == 1) {
      FUN_00aef260();
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
    iVar1 = (**(code **)param_1[100])(param_1);
    return iVar1;
  default:
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  return iVar1;
}


//// FUNCTION FUN_00aef610 @ 00aef610 ////

int __cdecl FUN_00aef610(int *param_1,char param_2)

{
  int iVar1;
  
  if ((param_1[5] != 200) && (param_1[5] != 0xc9)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  iVar1 = FUN_00aef3f0(param_1);
  if (iVar1 == 1) {
    iVar1 = 1;
  }
  else if (iVar1 == 2) {
    if (param_2 != '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x33;
      (**(code **)*param_1)(param_1);
    }
    FUN_00af2b70((int)param_1);
    return 2;
  }
  return iVar1;
}


//// FUNCTION FUN_00aef680 @ 00aef680 ////

uint FUN_00aef680(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined3 uVar6;
  uint uVar4;
  undefined4 uVar5;
  int unaff_ESI;
  
  iVar3 = *(int *)(unaff_ESI + 0x14);
  if (iVar3 != 0xcc) {
    iVar3 = (*(code *)**(undefined4 **)(unaff_ESI + 0x180))();
    *(undefined4 *)(unaff_ESI + 0x78) = 0;
    *(undefined4 *)(unaff_ESI + 0x14) = 0xcc;
  }
  uVar6 = (undefined3)((uint)iVar3 >> 8);
  if (*(char *)(*(int *)(unaff_ESI + 0x180) + 8) != '\0') {
    puVar1 = (uint *)(unaff_ESI + 0x78);
    do {
      uVar4 = *puVar1;
      if (uVar4 < *(uint *)(unaff_ESI + 0x60)) {
        do {
          if (*(int *)(unaff_ESI + 8) != 0) {
            *(uint *)(*(int *)(unaff_ESI + 8) + 4) = uVar4;
            *(undefined4 *)(*(int *)(unaff_ESI + 8) + 8) = *(undefined4 *)(unaff_ESI + 0x60);
            (*(code *)**(undefined4 **)(unaff_ESI + 8))();
          }
          uVar2 = *puVar1;
          (**(code **)(*(int *)(unaff_ESI + 0x184) + 4))();
          uVar4 = *puVar1;
          if (uVar4 == uVar2) {
            return uVar4 & 0xffffff00;
          }
        } while (uVar4 < *(uint *)(unaff_ESI + 0x60));
      }
      (**(code **)(*(int *)(unaff_ESI + 0x180) + 4))();
      uVar5 = (*(code *)**(undefined4 **)(unaff_ESI + 0x180))();
      *puVar1 = 0;
      uVar6 = (undefined3)((uint)uVar5 >> 8);
    } while (*(char *)(*(int *)(unaff_ESI + 0x180) + 8) != '\0');
  }
  *(uint *)(unaff_ESI + 0x14) = (*(char *)(unaff_ESI + 0x41) != '\0') + 0xcd;
  return CONCAT31(uVar6,1);
}


//// FUNCTION FUN_00aef750 @ 00aef750 ////

int __cdecl FUN_00aef750(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (param_1[5] != 0xcd) {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  if ((uint)piVar1[0x18] <= (uint)piVar1[0x1e]) {
    *(undefined4 *)(*piVar1 + 0x14) = 0x7b;
    (**(code **)(*piVar1 + 4))(piVar1,0xffffffff);
    return 0;
  }
  if (piVar1[2] != 0) {
    *(int *)(piVar1[2] + 4) = piVar1[0x1e];
    *(int *)(piVar1[2] + 8) = piVar1[0x18];
    (**(code **)piVar1[2])(piVar1);
  }
  param_1 = (int *)0x0;
  (**(code **)(piVar1[0x61] + 4))(piVar1,param_2,&param_1,param_3);
  piVar1[0x1e] = piVar1[0x1e] + (int)param_1;
  return (int)param_1;
}


//// FUNCTION FUN_00aef9a0 @ 00aef9a0 ////

uint __cdecl FUN_00aef9a0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[5] == 0xca) {
    uVar2 = FUN_00af3300((int)param_1);
    if ((char)param_1[0x10] != '\0') {
      param_1[5] = 0xcf;
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    param_1[5] = 0xcb;
  }
  if (param_1[5] == 0xcb) {
    if (*(char *)(param_1[100] + 0x10) != '\0') {
      while( true ) {
        if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
          (**(code **)param_1[2])(param_1);
        }
        iVar3 = (**(code **)param_1[100])(param_1);
        if (iVar3 == 0) {
          return 0;
        }
        if (iVar3 == 2) break;
        if ((param_1[2] != 0) && ((iVar3 == 3 || (iVar3 == 1)))) {
          piVar1 = (int *)(param_1[2] + 4);
          *piVar1 = *piVar1 + 1;
          iVar3 = param_1[2];
          if (*(int *)(iVar3 + 8) <= *(int *)(iVar3 + 4)) {
            *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + param_1[0x47];
          }
        }
      }
    }
    param_1[0x21] = param_1[0x1f];
    uVar4 = FUN_00aef680();
    return uVar4;
  }
  if (param_1[5] != 0xcc) {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  uVar4 = FUN_00aef680();
  return uVar4;
}


//// FUNCTION FUN_00aefa70 @ 00aefa70 ////

void __cdecl FUN_00aefa70(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  OutputDebugStringA("ARGH! jpeg fuckup!!!\n");
  FUN_00af2bb0((int)param_1);
  return;
}


//// FUNCTION FUN_00aefbe0 @ 00aefbe0 ////

void __cdecl FUN_00aefbe0(undefined4 *param_1)

{
  *param_1 = FUN_00aefa70;
  param_1[1] = &LAB_00aefad0;
  param_1[2] = &LAB_00aefaa0;
  param_1[3] = &LAB_00aefb10;
  param_1[4] = &LAB_00aefbc0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[5] = 0;
  param_1[0x1c] = &PTR_s_Bogus_message_code__d_00d86f30;
  param_1[0x1d] = 0x7b;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return;
}


//// FUNCTION FUN_00aefc30 @ 00aefc30 ////

undefined4 FUN_00aefc30(void)

{
  undefined1 *puVar1;
  int iVar2;
  int *unaff_ESI;
  
  *(undefined4 *)(*unaff_ESI + 0x14) = 0x66;
  (**(code **)(*unaff_ESI + 4))();
  if (*(char *)(unaff_ESI[0x65] + 0xc) != '\0') {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x3d;
    (**(code **)*unaff_ESI)();
  }
  puVar1 = (undefined1 *)((int)unaff_ESI + 0xda);
  iVar2 = 0x10;
  do {
    puVar1[-0x10] = 0;
    *puVar1 = 1;
    puVar1[0x10] = 5;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  unaff_ESI[0x3f] = 0;
  unaff_ESI[10] = 0;
  *(undefined1 *)((int)unaff_ESI + 0x10a) = 0;
  *(undefined1 *)(unaff_ESI + 0x40) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x103) = 0;
  *(undefined1 *)(unaff_ESI + 0x42) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x109) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x101) = 1;
  *(undefined1 *)((int)unaff_ESI + 0x102) = 1;
  *(undefined2 *)(unaff_ESI + 0x41) = 1;
  *(undefined2 *)((int)unaff_ESI + 0x106) = 1;
  *(undefined1 *)(unaff_ESI[0x65] + 0xc) = 1;
  return CONCAT31((int3)((uint)puVar1 >> 8),1);
}


//// FUNCTION FUN_00aefce0 @ 00aefce0 ////

uint __fastcall FUN_00aefce0(undefined1 param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined1 in_AL;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int *unaff_ESI;
  byte *pbVar8;
  byte *pbVar9;
  uint local_8;
  
  puVar3 = (undefined4 *)unaff_ESI[6];
  iVar6 = puVar3[1];
  pbVar8 = (byte *)*puVar3;
  *(undefined1 *)(unaff_ESI + 0x32) = in_AL;
  *(undefined1 *)((int)unaff_ESI + 0xc9) = param_1;
  if (iVar6 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') goto LAB_00aeffe0;
    pbVar8 = (byte *)*puVar3;
    iVar6 = puVar3[1];
  }
  bVar1 = *pbVar8;
  iVar6 = iVar6 + -1;
  pbVar8 = pbVar8 + 1;
  if (iVar6 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') goto LAB_00aeffe0;
    pbVar8 = (byte *)*puVar3;
    iVar6 = puVar3[1];
  }
  bVar2 = *pbVar8;
  iVar6 = iVar6 + -1;
  pbVar8 = pbVar8 + 1;
  if (iVar6 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') goto LAB_00aeffe0;
    pbVar8 = (byte *)*puVar3;
    iVar6 = puVar3[1];
  }
  iVar6 = iVar6 + -1;
  pbVar9 = pbVar8 + 1;
  unaff_ESI[0x30] = (uint)*pbVar8;
  if (iVar6 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') goto LAB_00aeffe0;
    pbVar9 = (byte *)*puVar3;
    iVar6 = puVar3[1];
  }
  iVar6 = iVar6 + -1;
  pbVar8 = pbVar9 + 1;
  unaff_ESI[8] = (uint)*pbVar9 << 8;
  if (iVar6 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') goto LAB_00aeffe0;
    pbVar8 = (byte *)*puVar3;
    iVar6 = puVar3[1];
  }
  iVar6 = iVar6 + -1;
  pbVar9 = pbVar8 + 1;
  unaff_ESI[8] = unaff_ESI[8] + (uint)*pbVar8;
  if (iVar6 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') goto LAB_00aeffe0;
    pbVar9 = (byte *)*puVar3;
    iVar6 = puVar3[1];
  }
  iVar6 = iVar6 + -1;
  pbVar8 = pbVar9 + 1;
  unaff_ESI[7] = (uint)*pbVar9 << 8;
  if (iVar6 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') goto LAB_00aeffe0;
    pbVar8 = (byte *)*puVar3;
    iVar6 = puVar3[1];
  }
  iVar6 = iVar6 + -1;
  pbVar9 = pbVar8 + 1;
  unaff_ESI[7] = unaff_ESI[7] + (uint)*pbVar8;
  if (iVar6 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') {
LAB_00aeffe0:
      return uVar4 & 0xffffff00;
    }
    pbVar9 = (byte *)*puVar3;
    iVar6 = puVar3[1];
  }
  unaff_ESI[9] = (uint)*pbVar9;
  iVar5 = *unaff_ESI;
  *(int *)(iVar5 + 0x18) = unaff_ESI[0x5f];
  *(int *)(iVar5 + 0x1c) = unaff_ESI[7];
  *(int *)(iVar5 + 0x20) = unaff_ESI[8];
  *(int *)(iVar5 + 0x24) = unaff_ESI[9];
  *(undefined4 *)(*unaff_ESI + 0x14) = 100;
  iVar6 = iVar6 + -1;
  pbVar9 = pbVar9 + 1;
  (**(code **)(*unaff_ESI + 4))();
  if (*(char *)(unaff_ESI[0x65] + 0xd) != '\0') {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x3a;
    (**(code **)*unaff_ESI)();
  }
  if (((unaff_ESI[8] == 0) || (unaff_ESI[7] == 0)) || (unaff_ESI[9] < 1)) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x20;
    (**(code **)*unaff_ESI)();
  }
  if ((uint)bVar1 * 0x100 + (uint)bVar2 + -8 != unaff_ESI[9] * 3) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0xb;
    (**(code **)*unaff_ESI)();
  }
  if (unaff_ESI[0x31] == 0) {
    iVar5 = (**(code **)unaff_ESI[1])();
    unaff_ESI[0x31] = iVar5;
  }
  puVar7 = (uint *)unaff_ESI[0x31];
  local_8 = 0;
  if (0 < unaff_ESI[9]) {
    do {
      puVar7[1] = local_8;
      if (iVar6 == 0) {
        uVar4 = (*(code *)puVar3[3])();
        if ((char)uVar4 == '\0') goto LAB_00aeffe0;
        pbVar9 = (byte *)*puVar3;
        iVar6 = puVar3[1];
      }
      iVar6 = iVar6 + -1;
      pbVar8 = pbVar9 + 1;
      *puVar7 = (uint)*pbVar9;
      if (iVar6 == 0) {
        uVar4 = (*(code *)puVar3[3])();
        if ((char)uVar4 == '\0') goto LAB_00aeffe0;
        pbVar8 = (byte *)*puVar3;
        iVar6 = puVar3[1];
      }
      bVar1 = *pbVar8;
      iVar6 = iVar6 + -1;
      pbVar8 = pbVar8 + 1;
      puVar7[2] = (int)(uint)bVar1 >> 4;
      puVar7[3] = bVar1 & 0xf;
      if (iVar6 == 0) {
        uVar4 = (*(code *)puVar3[3])();
        if ((char)uVar4 == '\0') goto LAB_00aeffe0;
        pbVar8 = (byte *)*puVar3;
        iVar6 = puVar3[1];
      }
      puVar7[4] = (uint)*pbVar8;
      iVar5 = *unaff_ESI;
      *(uint *)(iVar5 + 0x18) = *puVar7;
      *(uint *)(iVar5 + 0x1c) = puVar7[2];
      *(uint *)(iVar5 + 0x20) = puVar7[3];
      *(uint *)(iVar5 + 0x24) = puVar7[4];
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x65;
      iVar6 = iVar6 + -1;
      pbVar9 = pbVar8 + 1;
      (**(code **)(*unaff_ESI + 4))();
      local_8 = local_8 + 1;
      puVar7 = puVar7 + 0x15;
    } while ((int)local_8 < unaff_ESI[9]);
  }
  *(undefined1 *)(unaff_ESI[0x65] + 0xd) = 1;
  *puVar3 = pbVar9;
  puVar3[1] = iVar6;
  return CONCAT31((int3)((uint)puVar3 >> 8),1);
}


//// FUNCTION FUN_00aefff0 @ 00aefff0 ////

uint FUN_00aefff0(void)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  int *unaff_ESI;
  uint *puVar11;
  int *piStack_10;
  int iStack_8;
  
  puVar3 = (undefined4 *)unaff_ESI[6];
  pbVar8 = (byte *)*puVar3;
  iVar10 = puVar3[1];
  if (*(char *)(unaff_ESI[0x65] + 0xd) == '\0') {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x3e;
    (**(code **)*unaff_ESI)();
  }
  if (iVar10 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') goto LAB_00af0251;
    iVar10 = puVar3[1];
    pbVar8 = (byte *)*puVar3;
  }
  bVar1 = *pbVar8;
  iVar10 = iVar10 + -1;
  pbVar8 = pbVar8 + 1;
  if (iVar10 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') goto LAB_00af0251;
    iVar10 = puVar3[1];
    pbVar8 = (byte *)*puVar3;
  }
  bVar2 = *pbVar8;
  iVar10 = iVar10 + -1;
  pbVar8 = pbVar8 + 1;
  if (iVar10 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') goto LAB_00af0251;
    iVar10 = puVar3[1];
    pbVar8 = (byte *)*puVar3;
  }
  uVar5 = (uint)*pbVar8;
  *(undefined4 *)(*unaff_ESI + 0x14) = 0x67;
  *(uint *)(*unaff_ESI + 0x18) = uVar5;
  iVar10 = iVar10 + -1;
  pbVar8 = pbVar8 + 1;
  (**(code **)(*unaff_ESI + 4))();
  if ((((uint)bVar1 * 0x100 + (uint)bVar2 != uVar5 * 2 + 6) || (uVar5 == 0)) || (4 < uVar5)) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0xb;
    (**(code **)*unaff_ESI)();
  }
  unaff_ESI[0x49] = uVar5;
  iStack_8 = 0;
  if (uVar5 != 0) {
    piStack_10 = unaff_ESI + 0x4a;
    do {
      if (iVar10 == 0) {
        uVar4 = (*(code *)puVar3[3])();
        if ((char)uVar4 == '\0') goto LAB_00af0251;
        iVar10 = puVar3[1];
        pbVar8 = (byte *)*puVar3;
      }
      uVar6 = (uint)*pbVar8;
      iVar10 = iVar10 + -1;
      pbVar8 = pbVar8 + 1;
      if (iVar10 == 0) {
        uVar4 = (*(code *)puVar3[3])();
        if ((char)uVar4 == '\0') goto LAB_00af0251;
        iVar10 = puVar3[1];
        pbVar8 = (byte *)*puVar3;
      }
      puVar11 = (uint *)unaff_ESI[0x31];
      iVar10 = iVar10 + -1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar7 = 0;
      if (0 < unaff_ESI[9]) {
        do {
          if (uVar6 == *puVar11) goto LAB_00af018e;
          iVar7 = iVar7 + 1;
          puVar11 = puVar11 + 0x15;
        } while (iVar7 < unaff_ESI[9]);
      }
      *(undefined4 *)(*unaff_ESI + 0x14) = 5;
      *(uint *)(*unaff_ESI + 0x18) = uVar6;
      (**(code **)*unaff_ESI)();
LAB_00af018e:
      *piStack_10 = (int)puVar11;
      puVar11[5] = (int)(uint)bVar1 >> 4;
      puVar11[6] = bVar1 & 0xf;
      iVar7 = *unaff_ESI;
      *(uint *)(iVar7 + 0x18) = uVar6;
      *(uint *)(iVar7 + 0x1c) = puVar11[5];
      *(uint *)(iVar7 + 0x20) = puVar11[6];
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x68;
      (**(code **)(*unaff_ESI + 4))();
      iStack_8 = iStack_8 + 1;
      piStack_10 = piStack_10 + 1;
    } while (iStack_8 < (int)uVar5);
  }
  if (iVar10 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') goto LAB_00af0251;
    iVar10 = puVar3[1];
    pbVar8 = (byte *)*puVar3;
  }
  iVar10 = iVar10 + -1;
  pbVar9 = pbVar8 + 1;
  unaff_ESI[0x5b] = (uint)*pbVar8;
  if (iVar10 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') goto LAB_00af0251;
    iVar10 = puVar3[1];
    pbVar9 = (byte *)*puVar3;
  }
  iVar10 = iVar10 + -1;
  pbVar8 = pbVar9 + 1;
  unaff_ESI[0x5c] = (uint)*pbVar9;
  if (iVar10 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') {
LAB_00af0251:
      return uVar4 & 0xffffff00;
    }
    iVar10 = puVar3[1];
    pbVar8 = (byte *)*puVar3;
  }
  bVar1 = *pbVar8;
  unaff_ESI[0x5e] = bVar1 & 0xf;
  iVar7 = *unaff_ESI;
  unaff_ESI[0x5d] = (int)(uint)bVar1 >> 4;
  *(int *)(iVar7 + 0x18) = unaff_ESI[0x5b];
  *(int *)(iVar7 + 0x1c) = unaff_ESI[0x5c];
  *(int *)(iVar7 + 0x20) = unaff_ESI[0x5d];
  *(int *)(iVar7 + 0x24) = unaff_ESI[0x5e];
  *(undefined4 *)(*unaff_ESI + 0x14) = 0x69;
  (**(code **)(*unaff_ESI + 4))();
  *(undefined4 *)(unaff_ESI[0x65] + 0x10) = 0;
  iVar7 = unaff_ESI[0x1f];
  unaff_ESI[0x1f] = iVar7 + 1;
  *puVar3 = pbVar8 + 1;
  puVar3[1] = iVar10 + -1;
  return CONCAT31((int3)((uint)(iVar7 + 1) >> 8),1);
}


//// FUNCTION FUN_00af02e0 @ 00af02e0 ////

undefined4 __cdecl FUN_00af02e0(int *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  int *piVar10;
  byte *pbVar11;
  int iVar12;
  undefined4 *puVar13;
  int iStack_128;
  int iStack_120;
  undefined4 uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  byte bStack_10c;
  undefined4 *local_108;
  uint uStack_104;
  byte abStack_100 [256];
  
  puVar3 = (undefined4 *)param_1[6];
  iStack_128 = puVar3[1];
  puVar8 = (undefined1 *)*puVar3;
  local_108 = puVar3;
  if (iStack_128 == 0) {
    uVar5 = (*(code *)puVar3[3])(param_1);
    if ((char)uVar5 == '\0') goto LAB_00af05e0;
    iStack_128 = puVar3[1];
    puVar8 = (undefined1 *)*puVar3;
  }
  uVar1 = *puVar8;
  iStack_128 = iStack_128 + -1;
  puVar8 = puVar8 + 1;
  if (iStack_128 == 0) {
    uVar5 = (*(code *)puVar3[3])(param_1);
    if ((char)uVar5 == '\0') {
LAB_00af05e0:
      return uVar5 & 0xffffff00;
    }
    iStack_128 = puVar3[1];
    puVar8 = (undefined1 *)*puVar3;
  }
  iStack_128 = iStack_128 + -1;
  iVar6 = CONCAT11(uVar1,*puVar8) - 2;
  pbVar9 = puVar8 + 1;
  do {
    if (iVar6 < 0x11) {
      uVar7 = 0;
      if (iVar6 != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0xb;
        uVar7 = (**(code **)*param_1)(param_1);
      }
      *puVar3 = pbVar9;
      puVar3[1] = iStack_128;
      return CONCAT31((int3)((uint)uVar7 >> 8),1);
    }
    if (iStack_128 == 0) {
      uVar5 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar5 == '\0') goto LAB_00af05e0;
      iStack_128 = puVar3[1];
      pbVar9 = (byte *)*puVar3;
    }
    uStack_104 = (uint)*pbVar9;
    *(undefined4 *)(*param_1 + 0x14) = 0x50;
    *(uint *)(*param_1 + 0x18) = uStack_104;
    iStack_128 = iStack_128 + -1;
    pbVar9 = pbVar9 + 1;
    (**(code **)(*param_1 + 4))(param_1,1);
    uStack_11c = uStack_11c & 0xffffff00;
    iStack_120 = 0;
    iVar12 = 1;
    do {
      puVar3 = local_108;
      if (iStack_128 == 0) {
        uVar5 = (*(code *)local_108[3])(param_1);
        if ((char)uVar5 == '\0') goto LAB_00af05e0;
        iStack_128 = puVar3[1];
        pbVar9 = (byte *)*puVar3;
      }
      bVar2 = *pbVar9;
      *(byte *)((int)&uStack_11c + iVar12) = bVar2;
      iStack_128 = iStack_128 + -1;
      iStack_120 = iStack_120 + (uint)bVar2;
      pbVar9 = pbVar9 + 1;
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0x11);
    iVar12 = *param_1;
    *(uint *)(iVar12 + 0x18) = uStack_11c >> 8 & 0xff;
    *(uint *)(iVar12 + 0x1c) = uStack_11c >> 0x10 & 0xff;
    *(uint *)(iVar12 + 0x20) = uStack_11c >> 0x18;
    *(uint *)(iVar12 + 0x24) = uStack_118 & 0xff;
    *(uint *)(iVar12 + 0x28) = uStack_118 >> 8 & 0xff;
    *(uint *)(iVar12 + 0x2c) = uStack_118 >> 0x10 & 0xff;
    *(uint *)(iVar12 + 0x30) = uStack_118 >> 0x18;
    *(uint *)(iVar12 + 0x34) = uStack_114 & 0xff;
    *(undefined4 *)(*param_1 + 0x14) = 0x56;
    (**(code **)(*param_1 + 4))(param_1,2);
    iVar12 = *param_1;
    *(uint *)(iVar12 + 0x18) = uStack_114 >> 8 & 0xff;
    *(uint *)(iVar12 + 0x1c) = uStack_114 >> 0x10 & 0xff;
    *(uint *)(iVar12 + 0x20) = uStack_114 >> 0x18;
    *(uint *)(iVar12 + 0x24) = uStack_110 & 0xff;
    *(uint *)(iVar12 + 0x28) = uStack_110 >> 8 & 0xff;
    *(uint *)(iVar12 + 0x2c) = uStack_110 >> 0x10 & 0xff;
    *(uint *)(iVar12 + 0x30) = uStack_110 >> 0x18;
    *(uint *)(iVar12 + 0x34) = (uint)bStack_10c;
    *(undefined4 *)(*param_1 + 0x14) = 0x56;
    (**(code **)(*param_1 + 4))(param_1,2);
    if ((0x100 < iStack_120) || (iVar6 + -0x11 < iStack_120)) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    iVar12 = 0;
    if (0 < iStack_120) {
      do {
        puVar3 = local_108;
        if (iStack_128 == 0) {
          uVar5 = (*(code *)local_108[3])(param_1);
          if ((char)uVar5 == '\0') goto LAB_00af05e0;
          iStack_128 = puVar3[1];
          pbVar9 = (byte *)*puVar3;
        }
        bVar2 = *pbVar9;
        iStack_128 = iStack_128 + -1;
        pbVar9 = pbVar9 + 1;
        abStack_100[iVar12] = bVar2;
        iVar12 = iVar12 + 1;
      } while (iVar12 < iStack_120);
    }
    iVar6 = (iVar6 + -0x11) - iStack_120;
    if ((uStack_104 & 0x10) == 0) {
      iVar12 = uStack_104 + 0x28;
      uVar5 = uStack_104;
    }
    else {
      iVar12 = uStack_104 + 0x1c;
      uVar5 = uStack_104 - 0x10;
    }
    piVar10 = param_1 + iVar12;
    if (((int)uVar5 < 0) || (3 < (int)uVar5)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1e;
      *(uint *)(*param_1 + 0x18) = uVar5;
      (**(code **)*param_1)(param_1);
    }
    if (*piVar10 == 0) {
      iVar12 = FUN_00af2bf0((int)param_1);
      *piVar10 = iVar12;
    }
    puVar4 = (uint *)*piVar10;
    *puVar4 = uStack_11c;
    puVar4[1] = uStack_118;
    puVar4[2] = uStack_114;
    puVar4[3] = uStack_110;
    *(byte *)(puVar4 + 4) = bStack_10c;
    pbVar11 = abStack_100;
    puVar13 = (undefined4 *)(*piVar10 + 0x11);
    for (iVar12 = 0x40; puVar3 = local_108, iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar13 = *(undefined4 *)pbVar11;
      pbVar11 = pbVar11 + 4;
      puVar13 = puVar13 + 1;
    }
  } while( true );
}


//// FUNCTION FUN_00af05f0 @ 00af05f0 ////

undefined4 FUN_00af05f0(void)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ushort uVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  int iVar13;
  ushort *puVar14;
  int *unaff_EDI;
  int *piStack_c;
  
  puVar3 = (undefined4 *)unaff_EDI[6];
  iVar13 = puVar3[1];
  puVar11 = (undefined1 *)*puVar3;
  if (iVar13 == 0) {
    uVar6 = (*(code *)puVar3[3])();
    if ((char)uVar6 == '\0') goto LAB_00af083e;
    puVar11 = (undefined1 *)*puVar3;
    iVar13 = puVar3[1];
  }
  uVar1 = *puVar11;
  iVar13 = iVar13 + -1;
  puVar11 = puVar11 + 1;
  if (iVar13 == 0) {
    uVar6 = (*(code *)puVar3[3])();
    if ((char)uVar6 == '\0') {
LAB_00af083e:
      return uVar6 & 0xffffff00;
    }
    puVar11 = (undefined1 *)*puVar3;
    iVar13 = puVar3[1];
  }
  iVar13 = iVar13 + -1;
  pbVar12 = puVar11 + 1;
  iVar8 = CONCAT11(uVar1,*puVar11) - 2;
  do {
    iVar5 = iVar8;
    if (iVar5 < 1) {
      uVar9 = 0;
      if (iVar5 != 0) {
        *(undefined4 *)(*unaff_EDI + 0x14) = 0xb;
        uVar9 = (**(code **)*unaff_EDI)();
      }
      *puVar3 = pbVar12;
      puVar3[1] = iVar13;
      return CONCAT31((int3)((uint)uVar9 >> 8),1);
    }
    if (iVar13 == 0) {
      uVar6 = (*(code *)puVar3[3])();
      if ((char)uVar6 == '\0') goto LAB_00af083e;
      pbVar12 = (byte *)*puVar3;
      iVar13 = puVar3[1];
    }
    bVar2 = *pbVar12;
    *(undefined4 *)(*unaff_EDI + 0x14) = 0x51;
    iVar7 = (int)(uint)bVar2 >> 4;
    uVar6 = bVar2 & 0xf;
    *(uint *)(*unaff_EDI + 0x18) = uVar6;
    *(int *)(*unaff_EDI + 0x1c) = iVar7;
    iVar13 = iVar13 + -1;
    pbVar12 = pbVar12 + 1;
    (**(code **)(*unaff_EDI + 4))();
    if (3 < uVar6) {
      *(undefined4 *)(*unaff_EDI + 0x14) = 0x1f;
      *(uint *)(*unaff_EDI + 0x18) = uVar6;
      (**(code **)*unaff_EDI)();
    }
    if (unaff_EDI[uVar6 + 0x24] == 0) {
      iVar8 = FUN_00af2bd0((int)unaff_EDI);
      unaff_EDI[uVar6 + 0x24] = iVar8;
    }
    iVar8 = unaff_EDI[uVar6 + 0x24];
    piStack_c = (int *)&DAT_00d883f0;
    do {
      if (iVar7 == 0) {
        if (iVar13 == 0) {
          uVar6 = (*(code *)puVar3[3])();
          if ((char)uVar6 == '\0') goto LAB_00af083e;
          pbVar12 = (byte *)*puVar3;
          iVar13 = puVar3[1];
        }
        uVar10 = (ushort)*pbVar12;
      }
      else {
        if (iVar13 == 0) {
          uVar6 = (*(code *)puVar3[3])();
          if ((char)uVar6 == '\0') goto LAB_00af083e;
          pbVar12 = (byte *)*puVar3;
          iVar13 = puVar3[1];
        }
        bVar2 = *pbVar12;
        iVar13 = iVar13 + -1;
        pbVar12 = pbVar12 + 1;
        if (iVar13 == 0) {
          uVar6 = (*(code *)puVar3[3])();
          if ((char)uVar6 == '\0') goto LAB_00af083e;
          pbVar12 = (byte *)*puVar3;
          iVar13 = puVar3[1];
        }
        uVar10 = (ushort)bVar2 * 0x100 + (ushort)*pbVar12;
      }
      iVar4 = *piStack_c;
      iVar13 = iVar13 + -1;
      piStack_c = piStack_c + 1;
      pbVar12 = pbVar12 + 1;
      *(ushort *)(iVar8 + iVar4 * 2) = uVar10;
    } while ((int)piStack_c < 0xd884f0);
    if (1 < *(int *)(*unaff_EDI + 0x68)) {
      puVar14 = (ushort *)(iVar8 + 4);
      piStack_c = (int *)0x8;
      do {
        iVar8 = *unaff_EDI;
        *(uint *)(iVar8 + 0x18) = (uint)puVar14[-2];
        *(uint *)(iVar8 + 0x1c) = (uint)puVar14[-1];
        *(uint *)(iVar8 + 0x20) = (uint)*puVar14;
        *(uint *)(iVar8 + 0x24) = (uint)puVar14[1];
        *(uint *)(iVar8 + 0x28) = (uint)puVar14[2];
        *(uint *)(iVar8 + 0x2c) = (uint)puVar14[3];
        *(uint *)(iVar8 + 0x30) = (uint)puVar14[4];
        *(uint *)(iVar8 + 0x34) = (uint)puVar14[5];
        *(undefined4 *)(*unaff_EDI + 0x14) = 0x5d;
        (**(code **)(*unaff_EDI + 4))();
        puVar14 = puVar14 + 8;
        piStack_c = (int *)((int)piStack_c + -1);
      } while (piStack_c != (int *)0x0);
    }
    iVar8 = iVar5 + -0x41;
    if (iVar7 != 0) {
      iVar8 = iVar5 + -0x81;
    }
  } while( true );
}


//// FUNCTION FUN_00af0850 @ 00af0850 ////

uint __cdecl FUN_00af0850(int *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  
  puVar3 = (undefined4 *)param_1[6];
  iVar7 = puVar3[1];
  puVar8 = (undefined1 *)*puVar3;
  if (iVar7 == 0) {
    uVar4 = (*(code *)puVar3[3])(param_1);
    if ((char)uVar4 == '\0') goto LAB_00af08e2;
    puVar8 = (undefined1 *)*puVar3;
    iVar7 = puVar3[1];
  }
  uVar1 = *puVar8;
  iVar7 = iVar7 + -1;
  puVar8 = puVar8 + 1;
  if (iVar7 == 0) {
    uVar4 = (*(code *)puVar3[3])(param_1);
    if ((char)uVar4 == '\0') goto LAB_00af08e2;
    puVar8 = (undefined1 *)*puVar3;
    iVar7 = puVar3[1];
  }
  iVar7 = iVar7 + -1;
  pbVar9 = puVar8 + 1;
  if (CONCAT11(uVar1,*puVar8) != 4) {
    *(undefined4 *)(*param_1 + 0x14) = 0xb;
    (**(code **)*param_1)(param_1);
  }
  if (iVar7 == 0) {
    uVar4 = (*(code *)puVar3[3])(param_1);
    if ((char)uVar4 == '\0') goto LAB_00af08e2;
    pbVar9 = (byte *)*puVar3;
    iVar7 = puVar3[1];
  }
  bVar2 = *pbVar9;
  iVar7 = iVar7 + -1;
  pbVar9 = pbVar9 + 1;
  if (iVar7 == 0) {
    uVar4 = (*(code *)puVar3[3])(param_1);
    if ((char)uVar4 == '\0') {
LAB_00af08e2:
      return uVar4 & 0xffffff00;
    }
    pbVar9 = (byte *)*puVar3;
    iVar7 = puVar3[1];
  }
  iVar5 = (uint)bVar2 * 0x100 + (uint)*pbVar9;
  *(undefined4 *)(*param_1 + 0x14) = 0x52;
  *(int *)(*param_1 + 0x18) = iVar5;
  uVar6 = (**(code **)(*param_1 + 4))(param_1,1);
  param_1[0x3f] = iVar5;
  *puVar3 = pbVar9 + 1;
  puVar3[1] = iVar7 + -1;
  return CONCAT31((int3)((uint)uVar6 >> 8),1);
}


//// FUNCTION FUN_00af0930 @ 00af0930 ////

void __fastcall FUN_00af0930(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint in_EAX;
  int *unaff_ESI;
  char *unaff_EDI;
  
  iVar1 = in_EAX + param_1;
  if ((((in_EAX < 0xe) || (*unaff_EDI != 'J')) || (unaff_EDI[1] != 'F')) ||
     (((unaff_EDI[2] != 'I' || (unaff_EDI[3] != 'F')) || (unaff_EDI[4] != '\0')))) {
    if (((5 < in_EAX) && (*unaff_EDI == 'J')) &&
       ((unaff_EDI[1] == 'F' &&
        (((unaff_EDI[2] == 'X' && (unaff_EDI[3] == 'X')) && (unaff_EDI[4] == '\0')))))) {
      cVar2 = unaff_EDI[5];
      if (cVar2 == '\x10') {
        *(undefined4 *)(*unaff_ESI + 0x14) = 0x6c;
        *(int *)(*unaff_ESI + 0x18) = iVar1;
        (**(code **)(*unaff_ESI + 4))();
        return;
      }
      if (cVar2 != '\x11') {
        if (cVar2 != '\x13') {
          *(undefined4 *)(*unaff_ESI + 0x14) = 0x59;
          *(uint *)(*unaff_ESI + 0x18) = (uint)(byte)unaff_EDI[5];
          *(int *)(*unaff_ESI + 0x1c) = iVar1;
          (**(code **)(*unaff_ESI + 4))();
          return;
        }
        *(undefined4 *)(*unaff_ESI + 0x14) = 0x6e;
        *(int *)(*unaff_ESI + 0x18) = iVar1;
        (**(code **)(*unaff_ESI + 4))();
        return;
      }
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x6d;
      *(int *)(*unaff_ESI + 0x18) = iVar1;
      (**(code **)(*unaff_ESI + 4))();
      return;
    }
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x4d;
    *(int *)(*unaff_ESI + 0x18) = iVar1;
    (**(code **)(*unaff_ESI + 4))();
  }
  else {
    *(undefined1 *)(unaff_ESI + 0x40) = 1;
    *(char *)((int)unaff_ESI + 0x101) = unaff_EDI[5];
    *(char *)((int)unaff_ESI + 0x102) = unaff_EDI[6];
    *(char *)((int)unaff_ESI + 0x103) = unaff_EDI[7];
    *(ushort *)(unaff_ESI + 0x41) = (ushort)(byte)unaff_EDI[8] * 0x100 + (ushort)(byte)unaff_EDI[9];
    *(ushort *)((int)unaff_ESI + 0x106) =
         (ushort)(byte)unaff_EDI[10] * 0x100 + (ushort)(byte)unaff_EDI[0xb];
    if (*(char *)((int)unaff_ESI + 0x101) != '\x01') {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x77;
      *(uint *)(*unaff_ESI + 0x18) = (uint)*(byte *)((int)unaff_ESI + 0x101);
      *(uint *)(*unaff_ESI + 0x1c) = (uint)*(byte *)((int)unaff_ESI + 0x102);
      (**(code **)(*unaff_ESI + 4))();
    }
    iVar3 = *unaff_ESI;
    *(uint *)(iVar3 + 0x18) = (uint)*(byte *)((int)unaff_ESI + 0x101);
    *(uint *)(iVar3 + 0x1c) = (uint)*(byte *)((int)unaff_ESI + 0x102);
    *(uint *)(iVar3 + 0x20) = (uint)*(ushort *)(unaff_ESI + 0x41);
    *(uint *)(iVar3 + 0x24) = (uint)*(ushort *)((int)unaff_ESI + 0x106);
    *(uint *)(iVar3 + 0x28) = (uint)*(byte *)((int)unaff_ESI + 0x103);
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x57;
    (**(code **)(*unaff_ESI + 4))();
    if (unaff_EDI[0xc] != '\0' || unaff_EDI[0xd] != '\0') {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x5a;
      *(uint *)(*unaff_ESI + 0x18) = (uint)(byte)unaff_EDI[0xc];
      *(uint *)(*unaff_ESI + 0x1c) = (uint)(byte)unaff_EDI[0xd];
      (**(code **)(*unaff_ESI + 4))();
    }
    if (iVar1 + -0xe != (uint)(byte)unaff_EDI[0xc] * (uint)(byte)unaff_EDI[0xd] * 3) {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x58;
      *(int *)(*unaff_ESI + 0x18) = iVar1 + -0xe;
      (**(code **)(*unaff_ESI + 4))();
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00af0b80 @ 00af0b80 ////

void __thiscall FUN_00af0b80(void *this,int param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  char *in_EAX;
  int *unaff_ESI;
  
  if (((((void *)0xb < this) && (*in_EAX == 'A')) && (in_EAX[1] == 'd')) &&
     (((in_EAX[2] == 'o' && (in_EAX[3] == 'b')) && (in_EAX[4] == 'e')))) {
    cVar1 = in_EAX[7];
    cVar2 = in_EAX[8];
    bVar3 = in_EAX[0xb];
    cVar4 = in_EAX[9];
    cVar5 = in_EAX[10];
    iVar6 = *unaff_ESI;
    *(uint *)(iVar6 + 0x18) = (uint)CONCAT11(in_EAX[5],in_EAX[6]);
    *(uint *)(iVar6 + 0x1c) = (uint)CONCAT11(cVar1,cVar2);
    *(uint *)(iVar6 + 0x20) = (uint)CONCAT11(cVar4,cVar5);
    *(uint *)(iVar6 + 0x24) = (uint)bVar3;
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x4c;
    (**(code **)(*unaff_ESI + 4))();
    *(byte *)((int)unaff_ESI + 0x109) = bVar3;
    *(undefined1 *)(unaff_ESI + 0x42) = 1;
    return;
  }
  *(undefined4 *)(*unaff_ESI + 0x14) = 0x4e;
  *(int *)(*unaff_ESI + 0x18) = (int)this + param_1;
  (**(code **)(*unaff_ESI + 4))();
  return;
}


//// FUNCTION FUN_00af0c30 @ 00af0c30 ////

undefined1 __cdecl FUN_00af0c30(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  void *pvStack_1c;
  void *pvStack_18;
  byte abStack_10 [16];
  
  puVar2 = (undefined4 *)param_1[6];
  iVar5 = puVar2[1];
  pbVar4 = (byte *)*puVar2;
  if (iVar5 == 0) {
    cVar3 = (*(code *)puVar2[3])(param_1);
    if (cVar3 == '\0') {
      return 0;
    }
    pbVar4 = (byte *)*puVar2;
    iVar5 = puVar2[1];
  }
  bVar1 = *pbVar4;
  iVar5 = iVar5 + -1;
  pbVar4 = pbVar4 + 1;
  if (iVar5 == 0) {
    cVar3 = (*(code *)puVar2[3])(param_1);
    if (cVar3 == '\0') {
      return 0;
    }
    pbVar4 = (byte *)*puVar2;
    iVar5 = puVar2[1];
  }
  iVar5 = iVar5 + -1;
  uVar6 = ((uint)bVar1 * 0x100 + (uint)*pbVar4) - 2;
  pbVar4 = pbVar4 + 1;
  if ((int)uVar6 < 0xe) {
    pvStack_1c = (void *)(((int)uVar6 < 1) - 1 & uVar6);
  }
  else {
    pvStack_1c = (void *)0xe;
  }
  pvStack_18 = (void *)0x0;
  if (pvStack_1c != (void *)0x0) {
    do {
      if (iVar5 == 0) {
        cVar3 = (*(code *)puVar2[3])(param_1);
        if (cVar3 == '\0') {
          return 0;
        }
        pbVar4 = (byte *)*puVar2;
        iVar5 = puVar2[1];
      }
      bVar1 = *pbVar4;
      iVar5 = iVar5 + -1;
      pbVar4 = pbVar4 + 1;
      abStack_10[(int)pvStack_18] = bVar1;
      pvStack_18 = (void *)((int)pvStack_18 + 1);
    } while (pvStack_18 < pvStack_1c);
  }
  iVar7 = uVar6 - (int)pvStack_1c;
  if (param_1[0x5f] == 0xe0) {
    FUN_00af0930(iVar7);
  }
  else if (param_1[0x5f] == 0xee) {
    FUN_00af0b80(pvStack_1c,iVar7);
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x44;
    *(int *)(*param_1 + 0x18) = param_1[0x5f];
    (**(code **)*param_1)(param_1);
  }
  *puVar2 = pbVar4;
  puVar2[1] = iVar5;
  if (0 < iVar7) {
    (**(code **)(param_1[6] + 0x10))(param_1,iVar7);
  }
  return 1;
}


//// FUNCTION FUN_00af0d80 @ 00af0d80 ////

undefined4 __cdecl FUN_00af0d80(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  int iVar12;
  void *local_10;
  byte *local_4;
  
  pbVar5 = param_1;
  iVar2 = *(int *)(param_1 + 0x194);
  puVar8 = *(undefined4 **)(param_1 + 0x18);
  puVar7 = *(undefined4 **)(iVar2 + 0xa0);
  pbVar10 = (byte *)*puVar8;
  iVar12 = puVar8[1];
  if (puVar7 == (undefined4 *)0x0) {
    if (iVar12 == 0) {
      uVar6 = (*(code *)puVar8[3])(param_1);
      if ((char)uVar6 == '\0') goto LAB_00af0f45;
      pbVar10 = (byte *)*puVar8;
      iVar12 = puVar8[1];
    }
    bVar1 = *pbVar10;
    iVar12 = iVar12 + -1;
    pbVar9 = pbVar10 + 1;
    if (iVar12 == 0) {
      uVar6 = (*(code *)puVar8[3])(param_1);
      if ((char)uVar6 == '\0') {
LAB_00af0f45:
        return uVar6 & 0xffffff00;
      }
      pbVar9 = (byte *)*puVar8;
      iVar12 = puVar8[1];
    }
    iVar12 = iVar12 + -1;
    pbVar10 = pbVar9 + 1;
    pvVar11 = (void *)((uint)bVar1 * 0x100 + (uint)*pbVar9 + -2);
    if ((int)pvVar11 < 0) {
      local_10 = (void *)0x0;
      param_1 = pbVar10;
      goto LAB_00af0f69;
    }
    if (*(int *)(param_1 + 0x17c) == 0xfe) {
      local_10 = *(void **)(iVar2 + 0x5c);
    }
    else {
      local_10 = *(void **)(iVar2 + -800 + *(int *)(param_1 + 0x17c) * 4);
    }
    if (pvVar11 < local_10) {
      local_10 = pvVar11;
    }
    puVar7 = (undefined4 *)(**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,(int)local_10 + 0x14);
    *puVar7 = 0;
    *(byte *)(puVar7 + 1) = param_1[0x17c];
    pbVar9 = (byte *)(puVar7 + 5);
    puVar7[2] = pvVar11;
    puVar7[3] = local_10;
    puVar7[4] = pbVar9;
    *(undefined4 **)(iVar2 + 0xa0) = puVar7;
    *(undefined4 *)(iVar2 + 0xa4) = 0;
    pvVar11 = (void *)0x0;
  }
  else {
    pvVar11 = *(void **)(iVar2 + 0xa4);
    local_10 = (void *)puVar7[3];
    pbVar9 = (byte *)(puVar7[4] + (int)pvVar11);
  }
  param_1 = pbVar10;
  local_4 = pbVar9;
  if (pvVar11 < local_10) {
    do {
      *puVar8 = pbVar10;
      puVar8[1] = iVar12;
      *(void **)(iVar2 + 0xa4) = pvVar11;
      if (iVar12 == 0) {
        uVar6 = (*(code *)puVar8[3])(pbVar5);
        if ((char)uVar6 == '\0') goto LAB_00af0f45;
        pbVar10 = (byte *)*puVar8;
        iVar12 = puVar8[1];
        pbVar9 = local_4;
        param_1 = pbVar10;
      }
      while (iVar12 != 0) {
        local_4 = pbVar9 + 1;
        *pbVar9 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        iVar12 = iVar12 + -1;
        pvVar11 = (void *)((int)pvVar11 + 1);
        pbVar9 = local_4;
        param_1 = pbVar10;
        if (local_10 <= pvVar11) goto LAB_00af0f2d;
      }
    } while (pvVar11 < local_10);
    iVar12 = 0;
  }
LAB_00af0f2d:
  piVar3 = *(int **)(pbVar5 + 0x10c);
  if (piVar3 == (int *)0x0) {
    *(undefined4 **)(pbVar5 + 0x10c) = puVar7;
  }
  else {
    iVar4 = *piVar3;
    while (iVar4 != 0) {
      piVar3 = (int *)*piVar3;
      iVar4 = *piVar3;
    }
    *piVar3 = (int)puVar7;
  }
  pvVar11 = (void *)(puVar7[2] - (int)local_10);
LAB_00af0f69:
  *(undefined4 *)(iVar2 + 0xa0) = 0;
  if (*(int *)(pbVar5 + 0x17c) == 0xe0) {
    FUN_00af0930((int)pvVar11);
  }
  else if (*(int *)(pbVar5 + 0x17c) == 0xee) {
    FUN_00af0b80(local_10,(int)pvVar11);
  }
  else {
    *(undefined4 *)(*(int *)pbVar5 + 0x14) = 0x5b;
    *(undefined4 *)(*(int *)pbVar5 + 0x18) = *(undefined4 *)(pbVar5 + 0x17c);
    *(int *)(*(int *)pbVar5 + 0x1c) = (int)local_10 + (int)pvVar11;
    (**(code **)(*(int *)pbVar5 + 4))(pbVar5,1);
  }
  *puVar8 = param_1;
  puVar8[1] = iVar12;
  if (0 < (int)pvVar11) {
    puVar8 = (undefined4 *)(**(code **)(*(int *)(pbVar5 + 0x18) + 0x10))(pbVar5,pvVar11);
  }
  return CONCAT31((int3)((uint)puVar8 >> 8),1);
}


//// FUNCTION FUN_00af0ff0 @ 00af0ff0 ////

uint __cdecl FUN_00af0ff0(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  puVar2 = (undefined4 *)param_1[6];
  iVar6 = puVar2[1];
  pbVar5 = (byte *)*puVar2;
  if (iVar6 == 0) {
    uVar3 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar3 == '\0') goto LAB_00af102d;
    pbVar5 = (byte *)*puVar2;
    iVar6 = puVar2[1];
  }
  bVar1 = *pbVar5;
  iVar6 = iVar6 + -1;
  pbVar5 = pbVar5 + 1;
  if (iVar6 == 0) {
    uVar3 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar3 == '\0') {
LAB_00af102d:
      return uVar3 & 0xffffff00;
    }
    pbVar5 = (byte *)*puVar2;
    iVar6 = puVar2[1];
  }
  iVar4 = (uint)bVar1 * 0x100 + -2 + (uint)*pbVar5;
  *(undefined4 *)(*param_1 + 0x14) = 0x5b;
  *(int *)(*param_1 + 0x18) = param_1[0x5f];
  *(int *)(*param_1 + 0x1c) = iVar4;
  (**(code **)(*param_1 + 4))(param_1,1);
  *puVar2 = pbVar5 + 1;
  puVar2[1] = iVar6 + -1;
  if (0 < iVar4) {
    iVar4 = (**(code **)(param_1[6] + 0x10))(param_1,iVar4);
  }
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}


//// FUNCTION FUN_00af1090 @ 00af1090 ////

uint __cdecl FUN_00af1090(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  
  puVar2 = (undefined4 *)param_1[6];
  iVar4 = puVar2[1];
  pbVar5 = (byte *)*puVar2;
  do {
    if (iVar4 == 0) {
      uVar3 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar3 == '\0') {
LAB_00af112e:
        return uVar3 & 0xffffff00;
      }
      pbVar5 = (byte *)*puVar2;
      iVar4 = puVar2[1];
    }
    bVar1 = *pbVar5;
    while( true ) {
      pbVar5 = pbVar5 + 1;
      iVar4 = iVar4 + -1;
      if (bVar1 == 0xff) break;
      *(int *)(param_1[0x65] + 0x14) = *(int *)(param_1[0x65] + 0x14) + 1;
      *puVar2 = pbVar5;
      puVar2[1] = iVar4;
      if (iVar4 == 0) {
        uVar3 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar3 == '\0') goto LAB_00af112e;
        pbVar5 = (byte *)*puVar2;
        iVar4 = puVar2[1];
      }
      bVar1 = *pbVar5;
    }
    do {
      if (iVar4 == 0) {
        uVar3 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar3 == '\0') goto LAB_00af112e;
        pbVar5 = (byte *)*puVar2;
        iVar4 = puVar2[1];
      }
      uVar3 = (uint)*pbVar5;
      iVar4 = iVar4 + -1;
      pbVar5 = pbVar5 + 1;
    } while (uVar3 == 0xff);
    if (uVar3 != 0) {
      if (*(int *)(param_1[0x65] + 0x14) != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x74;
        *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_1[0x65] + 0x14);
        *(uint *)(*param_1 + 0x1c) = uVar3;
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
        *(undefined4 *)(param_1[0x65] + 0x14) = 0;
      }
      param_1[0x5f] = uVar3;
      *puVar2 = pbVar5;
      puVar2[1] = iVar4;
      return 1;
    }
    *(int *)(param_1[0x65] + 0x14) = *(int *)(param_1[0x65] + 0x14) + 2;
    *puVar2 = pbVar5;
    puVar2[1] = iVar4;
  } while( true );
}


//// FUNCTION FUN_00af1190 @ 00af1190 ////

uint __cdecl FUN_00af1190(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)param_1[6];
  pbVar4 = (byte *)*puVar2;
  iVar5 = puVar2[1];
  if (iVar5 == 0) {
    uVar3 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar3 == '\0') goto LAB_00af11cc;
    pbVar4 = (byte *)*puVar2;
    iVar5 = puVar2[1];
  }
  bVar1 = *pbVar4;
  iVar5 = iVar5 + -1;
  pbVar4 = pbVar4 + 1;
  if (iVar5 == 0) {
    uVar3 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar3 == '\0') {
LAB_00af11cc:
      return uVar3 & 0xffffff00;
    }
    pbVar4 = (byte *)*puVar2;
    iVar5 = puVar2[1];
  }
  uVar3 = (uint)*pbVar4;
  if ((bVar1 != 0xff) || (uVar3 != 0xd8)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x35;
    *(uint *)(*param_1 + 0x18) = (uint)bVar1;
    *(uint *)(*param_1 + 0x1c) = uVar3;
    (**(code **)*param_1)(param_1);
  }
  param_1[0x5f] = uVar3;
  puVar2[1] = iVar5 + -1;
  *puVar2 = pbVar4 + 1;
  return 1;
}


//// FUNCTION FUN_00af15b0 @ 00af15b0 ////

undefined4 __cdecl FUN_00af15b0(int *param_1)

{
  uint uVar1;
  
  if (param_1[0x5f] == 0) {
    uVar1 = FUN_00af1090(param_1);
    if ((char)uVar1 == '\0') goto LAB_00af1634;
  }
  if (param_1[0x5f] == *(int *)(param_1[0x65] + 0x10) + 0xd0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x62;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_1[0x65] + 0x10);
    uVar1 = (**(code **)(*param_1 + 4))(param_1,3);
    param_1[0x5f] = 0;
  }
  else {
    uVar1 = (**(code **)(param_1[6] + 0x14))(param_1,*(int *)(param_1[0x65] + 0x10));
    if ((char)uVar1 == '\0') {
LAB_00af1634:
      return uVar1 & 0xffffff00;
    }
  }
  *(uint *)(param_1[0x65] + 0x10) = *(int *)(param_1[0x65] + 0x10) + 1U & 7;
  return CONCAT31((int3)(uVar1 >> 8),1);
}


//// FUNCTION FUN_00af1770 @ 00af1770 ////

void __cdecl FUN_00af1770(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0xa8);
  *(undefined4 **)(param_1 + 0x194) = puVar1;
  *puVar1 = &LAB_00af1740;
  puVar1[1] = &LAB_00af1230;
  puVar1[2] = FUN_00af15b0;
  puVar1[6] = FUN_00af0ff0;
  puVar1[0x17] = 0;
  puVar2 = puVar1 + 0x18;
  iVar3 = 0x10;
  do {
    puVar2[-0x11] = FUN_00af0ff0;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1[7] = FUN_00af0c30;
  puVar1[0x15] = FUN_00af0c30;
  iVar3 = *(int *)(param_1 + 0x194);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined1 *)(iVar3 + 0xc) = 0;
  *(undefined1 *)(iVar3 + 0xd) = 0;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0xa0) = 0;
  return;
}


//// FUNCTION FUN_00af1920 @ 00af1920 ////

void FUN_00af1920(void)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  int *piVar3;
  
  if ((0xffdc < unaff_ESI[8]) || (0xffdc < unaff_ESI[7])) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x29;
    *(undefined4 *)(*unaff_ESI + 0x18) = 0xffdc;
    (**(code **)*unaff_ESI)();
  }
  if (unaff_ESI[0x30] != 8) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0xf;
    *(int *)(*unaff_ESI + 0x18) = unaff_ESI[0x30];
    (**(code **)*unaff_ESI)();
  }
  if (10 < unaff_ESI[9]) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x1a;
    *(int *)(*unaff_ESI + 0x18) = unaff_ESI[9];
    *(undefined4 *)(*unaff_ESI + 0x1c) = 10;
    (**(code **)*unaff_ESI)();
  }
  iVar2 = 0;
  unaff_ESI[0x44] = 1;
  unaff_ESI[0x45] = 1;
  if (0 < unaff_ESI[9]) {
    piVar3 = (int *)(unaff_ESI[0x31] + 0xc);
    do {
      if ((((piVar3[-1] < 1) || (4 < piVar3[-1])) || (*piVar3 < 1)) || (4 < *piVar3)) {
        *(undefined4 *)(*unaff_ESI + 0x14) = 0x12;
        (**(code **)*unaff_ESI)();
      }
      iVar1 = unaff_ESI[0x44];
      if (unaff_ESI[0x44] <= piVar3[-1]) {
        iVar1 = piVar3[-1];
      }
      unaff_ESI[0x44] = iVar1;
      iVar1 = unaff_ESI[0x45];
      if (unaff_ESI[0x45] <= *piVar3) {
        iVar1 = *piVar3;
      }
      unaff_ESI[0x45] = iVar1;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x15;
    } while (iVar2 < unaff_ESI[9]);
  }
  iVar2 = 0;
  unaff_ESI[0x46] = 8;
  if (0 < unaff_ESI[9]) {
    piVar3 = (int *)(unaff_ESI[0x31] + 0x1c);
    do {
      piVar3[2] = 8;
      iVar1 = FUN_00af3330(piVar3[-5] * unaff_ESI[7],unaff_ESI[0x44] << 3);
      *piVar3 = iVar1;
      iVar1 = FUN_00af3330(piVar3[-4] * unaff_ESI[8],unaff_ESI[0x45] << 3);
      piVar3[1] = iVar1;
      iVar1 = FUN_00af3330(piVar3[-5] * unaff_ESI[7],unaff_ESI[0x44]);
      piVar3[3] = iVar1;
      iVar1 = FUN_00af3330(piVar3[-4] * unaff_ESI[8],unaff_ESI[0x45]);
      piVar3[4] = iVar1;
      *(undefined1 *)(piVar3 + 5) = 1;
      piVar3[0xc] = 0;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x15;
    } while (iVar2 < unaff_ESI[9]);
  }
  iVar2 = FUN_00af3330(unaff_ESI[8],unaff_ESI[0x45] << 3);
  unaff_ESI[0x47] = iVar2;
  if ((unaff_ESI[9] <= unaff_ESI[0x49]) && ((char)unaff_ESI[0x32] == '\0')) {
    *(undefined1 *)(unaff_ESI[100] + 0x10) = 0;
    return;
  }
  *(undefined1 *)(unaff_ESI[100] + 0x10) = 1;
  return;
}


//// FUNCTION FUN_00af1b10 @ 00af1b10 ////

uint FUN_00af1b10(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *unaff_ESI;
  uint uStack_8;
  int *piStack_4;
  
  iVar2 = unaff_ESI[0x49];
  if (iVar2 != 1) {
    if ((iVar2 < 1) || (4 < iVar2)) {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x1a;
      *(int *)(*unaff_ESI + 0x18) = unaff_ESI[0x49];
      *(undefined4 *)(*unaff_ESI + 0x1c) = 4;
      (**(code **)*unaff_ESI)();
    }
    iVar2 = FUN_00af3330(unaff_ESI[7],unaff_ESI[0x44] << 3);
    unaff_ESI[0x4e] = iVar2;
    iVar2 = FUN_00af3330(unaff_ESI[8],unaff_ESI[0x45] << 3);
    unaff_ESI[0x4f] = iVar2;
    uVar4 = unaff_ESI[0x49];
    unaff_ESI[0x50] = 0;
    uStack_8 = 0;
    if (0 < (int)uVar4) {
      piStack_4 = unaff_ESI + 0x4a;
      do {
        iVar2 = *piStack_4;
        uVar4 = *(uint *)(iVar2 + 8);
        uVar1 = *(uint *)(iVar2 + 0xc);
        *(uint *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x24) * uVar4;
        uVar3 = *(uint *)(iVar2 + 0x1c) % uVar4;
        iVar5 = uVar1 * uVar4;
        *(uint *)(iVar2 + 0x34) = uVar4;
        *(uint *)(iVar2 + 0x38) = uVar1;
        *(int *)(iVar2 + 0x3c) = iVar5;
        if (uVar3 == 0) {
          uVar3 = uVar4;
        }
        *(uint *)(iVar2 + 0x44) = uVar3;
        uVar4 = *(uint *)(iVar2 + 0x20) % uVar1;
        if (uVar4 == 0) {
          uVar4 = uVar1;
        }
        *(uint *)(iVar2 + 0x48) = uVar4;
        if (10 < unaff_ESI[0x50] + iVar5) {
          *(undefined4 *)(*unaff_ESI + 0x14) = 0xd;
          (**(code **)*unaff_ESI)();
        }
        if (0 < iVar5) {
          do {
            unaff_ESI[unaff_ESI[0x50] + 0x51] = uStack_8;
            iVar5 = iVar5 + -1;
            unaff_ESI[0x50] = unaff_ESI[0x50] + 1;
          } while (iVar5 != 0);
        }
        uVar4 = uStack_8 + 1;
        piStack_4 = piStack_4 + 1;
        uStack_8 = uVar4;
      } while ((int)uVar4 < unaff_ESI[0x49]);
    }
    return uVar4;
  }
  iVar2 = unaff_ESI[0x4a];
  unaff_ESI[0x4e] = *(int *)(iVar2 + 0x1c);
  unaff_ESI[0x4f] = *(int *)(iVar2 + 0x20);
  uVar4 = *(uint *)(iVar2 + 0xc);
  *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar2 + 0x24);
  uVar1 = *(uint *)(iVar2 + 0x20);
  uVar3 = uVar1 % uVar4;
  *(undefined4 *)(iVar2 + 0x34) = 1;
  *(undefined4 *)(iVar2 + 0x38) = 1;
  *(undefined4 *)(iVar2 + 0x3c) = 1;
  *(undefined4 *)(iVar2 + 0x44) = 1;
  if (uVar3 == 0) {
    uVar3 = uVar4;
  }
  *(uint *)(iVar2 + 0x48) = uVar3;
  unaff_ESI[0x50] = 1;
  unaff_ESI[0x51] = 0;
  return uVar1 / uVar4;
}


//// FUNCTION FUN_00af1cb0 @ 00af1cb0 ////

void FUN_00af1cb0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *unaff_EBX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *local_8;
  int local_4;
  
  local_4 = 0;
  if (0 < unaff_EBX[0x49]) {
    local_8 = unaff_EBX + 0x4a;
    do {
      iVar1 = *local_8;
      if (*(int *)(iVar1 + 0x4c) == 0) {
        iVar2 = *(int *)(iVar1 + 0x10);
        if (((iVar2 < 0) || (3 < iVar2)) || (unaff_EBX[iVar2 + 0x24] == 0)) {
          *(undefined4 *)(*unaff_EBX + 0x14) = 0x34;
          *(int *)(*unaff_EBX + 0x18) = iVar2;
          (**(code **)*unaff_EBX)();
        }
        puVar3 = (undefined4 *)(**(code **)unaff_EBX[1])();
        puVar5 = (undefined4 *)unaff_EBX[iVar2 + 0x24];
        puVar6 = puVar3;
        for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
        *(undefined4 **)(iVar1 + 0x4c) = puVar3;
      }
      local_4 = local_4 + 1;
      local_8 = local_8 + 1;
    } while (local_4 < unaff_EBX[0x49]);
  }
  return;
}


//// FUNCTION FUN_00af1d60 @ 00af1d60 ////

void __cdecl FUN_00af1d60(int param_1)

{
  FUN_00af1b10();
  FUN_00af1cb0();
  (*(code *)**(undefined4 **)(param_1 + 0x198))(param_1);
  (*(code *)**(undefined4 **)(param_1 + 0x188))(param_1);
  **(undefined4 **)(param_1 + 400) = *(undefined4 *)(*(int *)(param_1 + 0x188) + 4);
  return;
}


//// FUNCTION FUN_00af1da0 @ 00af1da0 ////

int __cdecl FUN_00af1da0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[100];
  if (*(char *)(iVar1 + 0x11) != '\0') {
    return 2;
  }
  iVar2 = (**(code **)(param_1[0x65] + 4))(param_1);
  if (iVar2 == 1) {
    if (*(char *)(iVar1 + 0x14) != '\0') {
      FUN_00af1920();
      *(undefined1 *)(iVar1 + 0x14) = 0;
      return 1;
    }
    if (*(char *)(iVar1 + 0x10) == '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x23;
      (**(code **)*param_1)(param_1);
    }
    FUN_00af1d60((int)param_1);
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(iVar1 + 0x11) = 1;
    if (*(char *)(iVar1 + 0x14) == '\0') {
      if (param_1[0x1f] < param_1[0x21]) {
        param_1[0x21] = param_1[0x1f];
        return 2;
      }
    }
    else if (*(char *)(param_1[0x65] + 0xd) != '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x3b;
      (**(code **)*param_1)(param_1);
      return 2;
    }
  }
  return iVar2;
}


//// FUNCTION FUN_00af1e60 @ 00af1e60 ////

void __cdecl FUN_00af1e60(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[100];
  *puVar1 = FUN_00af1da0;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  *(undefined1 *)(puVar1 + 5) = 1;
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)param_1[0x65])(param_1);
  param_1[0x23] = 0;
  return;
}


//// FUNCTION FUN_00af1ec0 @ 00af1ec0 ////

void __cdecl FUN_00af1ec0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x18);
  *(undefined4 **)(param_1 + 400) = puVar1;
  *puVar1 = FUN_00af1da0;
  puVar1[1] = FUN_00af1e60;
  puVar1[2] = FUN_00af1d60;
  puVar1[3] = &LAB_00af1ea0;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  *(undefined1 *)(puVar1 + 5) = 1;
  return;
}


//// FUNCTION FUN_00af1f30 @ 00af1f30 ////

int __cdecl FUN_00af1f30(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = param_1[1];
  if (0x3b9ac9f0 < param_3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x36;
    *(undefined4 *)(*param_1 + 0x18) = 1;
    (**(code **)*param_1)(param_1);
  }
  if ((param_3 & 7) != 0) {
    param_3 = param_3 + (8 - (param_3 & 7));
  }
  if ((param_2 < 0) || (1 < param_2)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xe;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x34 + param_2 * 4);
  puVar2 = (undefined4 *)0x0;
  while (puVar4 = puVar3, puVar4 != (undefined4 *)0x0) {
    if (param_3 <= (uint)puVar4[2]) goto LAB_00af2060;
    puVar2 = puVar4;
    puVar3 = (undefined4 *)*puVar4;
  }
  iVar5 = param_3 + 0x10;
  if (puVar2 == (undefined4 *)0x0) {
    uVar6 = *(uint *)(&DAT_00d883d0 + param_2 * 4);
  }
  else {
    uVar6 = *(uint *)(&DAT_00d883d8 + param_2 * 4);
  }
  if (1000000000U - iVar5 < uVar6) {
    uVar6 = 1000000000U - iVar5;
  }
  puVar4 = (undefined4 *)FUN_00af3400(param_1,uVar6 + iVar5);
  while (puVar4 == (undefined4 *)0x0) {
    uVar6 = uVar6 >> 1;
    if (uVar6 < 0x32) {
      *(undefined4 *)(*param_1 + 0x14) = 0x36;
      *(undefined4 *)(*param_1 + 0x18) = 2;
      (**(code **)*param_1)(param_1);
    }
    puVar4 = (undefined4 *)FUN_00af3400(param_1,uVar6 + iVar5);
  }
  *(uint *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + uVar6 + iVar5;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = uVar6 + param_3;
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 **)(iVar1 + 0x34 + param_2 * 4) = puVar4;
  }
  else {
    *puVar2 = puVar4;
  }
LAB_00af2060:
  iVar1 = puVar4[1];
  puVar4[1] = iVar1 + param_3;
  puVar4[2] = puVar4[2] - param_3;
  return iVar1 + 0x10 + (int)puVar4;
}


//// FUNCTION FUN_00af2080 @ 00af2080 ////

undefined4 * __cdecl FUN_00af2080(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = param_1[1];
  if (0x3b9ac9f0 < param_3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x36;
    *(undefined4 *)(*param_1 + 0x18) = 3;
    (**(code **)*param_1)(param_1);
  }
  if ((param_3 & 7) != 0) {
    param_3 = param_3 + (8 - (param_3 & 7));
  }
  if ((param_2 < 0) || (1 < param_2)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xe;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar3 = (undefined4 *)FUN_00af3420(param_1,param_3 + 0x10);
  if (puVar3 == (undefined4 *)0x0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x36;
    *(undefined4 *)(*param_1 + 0x18) = 4;
    (**(code **)*param_1)(param_1);
  }
  *(uint *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + param_3 + 0x10;
  uVar2 = *(undefined4 *)(iVar1 + 0x3c + param_2 * 4);
  puVar3[1] = param_3;
  *puVar3 = uVar2;
  puVar3[2] = 0;
  *(undefined4 **)(iVar1 + 0x3c + param_2 * 4) = puVar3;
  return puVar3 + 4;
}


//// FUNCTION FUN_00af2140 @ 00af2140 ////

int __cdecl FUN_00af2140(int *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (uint)(0x3b9ac9f0 / (ulonglong)param_3);
  iVar2 = param_1[1];
  if (uVar1 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x46;
    (**(code **)*param_1)(param_1);
  }
  if ((int)param_4 <= (int)uVar1) {
    uVar1 = param_4;
  }
  *(uint *)(iVar2 + 0x50) = uVar1;
  iVar2 = FUN_00af1f30(param_1,param_2,param_4 * 4);
  uVar5 = 0;
  if (param_4 != 0) {
    do {
      if (param_4 - uVar5 <= uVar1) {
        uVar1 = param_4 - uVar5;
      }
      puVar3 = FUN_00af2080(param_1,param_2,uVar1 * param_3);
      for (uVar4 = uVar1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 **)(iVar2 + uVar5 * 4) = puVar3;
        uVar5 = uVar5 + 1;
        puVar3 = (undefined4 *)((int)puVar3 + param_3);
      }
    } while (uVar5 < param_4);
  }
  return iVar2;
}


//// FUNCTION FUN_00af21f0 @ 00af21f0 ////

int __cdecl FUN_00af21f0(int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (uint)(0x3b9ac9f0 / (ulonglong)(uint)(param_3 * 0x80));
  iVar2 = param_1[1];
  if (uVar1 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x46;
    (**(code **)*param_1)(param_1);
  }
  if ((int)param_4 <= (int)uVar1) {
    uVar1 = param_4;
  }
  *(uint *)(iVar2 + 0x50) = uVar1;
  iVar2 = FUN_00af1f30(param_1,param_2,param_4 * 4);
  uVar5 = 0;
  if (param_4 != 0) {
    do {
      if (param_4 - uVar5 <= uVar1) {
        uVar1 = param_4 - uVar5;
      }
      puVar3 = FUN_00af2080(param_1,param_2,uVar1 * param_3 * 0x80);
      for (uVar4 = uVar1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 **)(iVar2 + uVar5 * 4) = puVar3;
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + param_3 * 0x20;
      }
    } while (uVar5 < param_4);
  }
  return iVar2;
}


//// FUNCTION FUN_00af22a0 @ 00af22a0 ////

void __cdecl
FUN_00af22a0(int *param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[1];
  if (param_2 != 1) {
    *(undefined4 *)(*param_1 + 0x14) = 0xe;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar2 = (undefined4 *)FUN_00af1f30(param_1,param_2,0x78);
  puVar2[1] = param_5;
  puVar2[2] = param_4;
  *puVar2 = 0;
  puVar2[3] = param_6;
  *(undefined1 *)(puVar2 + 8) = param_3;
  *(undefined1 *)((int)puVar2 + 0x22) = 0;
  puVar2[9] = *(undefined4 *)(iVar1 + 0x44);
  *(undefined4 **)(iVar1 + 0x44) = puVar2;
  return;
}


//// FUNCTION FUN_00af2310 @ 00af2310 ////

void __cdecl
FUN_00af2310(int *param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[1];
  if (param_2 != 1) {
    *(undefined4 *)(*param_1 + 0x14) = 0xe;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar2 = (undefined4 *)FUN_00af1f30(param_1,param_2,0x78);
  puVar2[1] = param_5;
  puVar2[2] = param_4;
  *puVar2 = 0;
  puVar2[3] = param_6;
  *(undefined1 *)(puVar2 + 8) = param_3;
  *(undefined1 *)((int)puVar2 + 0x22) = 0;
  puVar2[9] = *(undefined4 *)(iVar1 + 0x48);
  *(undefined4 **)(iVar1 + 0x48) = puVar2;
  return;
}


//// FUNCTION FUN_00af2380 @ 00af2380 ////

void __cdecl FUN_00af2380(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[1];
  iVar4 = 0;
  iVar5 = 0;
  for (piVar2 = *(int **)(iVar1 + 0x44); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
    if (*piVar2 == 0) {
      iVar4 = iVar4 + piVar2[3] * piVar2[2];
      iVar5 = iVar5 + piVar2[1] * piVar2[2];
    }
  }
  for (piVar2 = *(int **)(iVar1 + 0x48); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
    if (*piVar2 == 0) {
      iVar4 = iVar4 + piVar2[3] * piVar2[2] * 0x80;
      iVar5 = iVar5 + piVar2[1] * piVar2[2] * 0x80;
    }
  }
  if (0 < iVar4) {
    iVar3 = FUN_00af3440(param_1,iVar4,iVar5);
    if (iVar3 < iVar5) {
      iVar3 = iVar3 / iVar4;
      if (iVar3 < 1) {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = 1000000000;
    }
    for (piVar2 = *(int **)(iVar1 + 0x44); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
      if (*piVar2 == 0) {
        if (iVar3 < (int)((piVar2[1] - 1U) / (uint)piVar2[3] + 1)) {
          piVar2[4] = piVar2[3] * iVar3;
          FUN_00af3450(param_1);
          *(undefined1 *)((int)piVar2 + 0x22) = 1;
        }
        else {
          piVar2[4] = piVar2[1];
        }
        iVar4 = FUN_00af2140(param_1,1,piVar2[2],piVar2[4]);
        *piVar2 = iVar4;
        piVar2[5] = *(int *)(iVar1 + 0x50);
        piVar2[6] = 0;
        piVar2[7] = 0;
        *(undefined1 *)((int)piVar2 + 0x21) = 0;
      }
    }
    for (piVar2 = *(int **)(iVar1 + 0x48); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
      if (*piVar2 == 0) {
        if (iVar3 < (int)((piVar2[1] - 1U) / (uint)piVar2[3] + 1)) {
          piVar2[4] = piVar2[3] * iVar3;
          FUN_00af3450(param_1);
          *(undefined1 *)((int)piVar2 + 0x22) = 1;
        }
        else {
          piVar2[4] = piVar2[1];
        }
        iVar4 = FUN_00af21f0(param_1,1,piVar2[2],piVar2[4]);
        *piVar2 = iVar4;
        piVar2[5] = *(int *)(iVar1 + 0x50);
        piVar2[6] = 0;
        piVar2[7] = 0;
        *(undefined1 *)((int)piVar2 + 0x21) = 0;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00af2520 @ 00af2520 ////

void __cdecl FUN_00af2520(undefined4 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  int iVar5;
  
  iVar3 = unaff_ESI[4];
  iVar1 = unaff_ESI[2];
  iVar4 = unaff_ESI[6] * iVar1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar2 = iVar3 - iVar5;
      if (unaff_ESI[5] < iVar3 - iVar5) {
        iVar2 = unaff_ESI[5];
      }
      iVar3 = unaff_ESI[7] - (unaff_ESI[6] + iVar5);
      if (iVar3 <= iVar2) {
        iVar2 = iVar3;
      }
      iVar3 = unaff_ESI[1] - (unaff_ESI[6] + iVar5);
      if (iVar3 <= iVar2) {
        iVar2 = iVar3;
      }
      if (iVar2 < 1) {
        return;
      }
      iVar2 = iVar2 * iVar1;
      if (param_2 == '\0') {
        (*(code *)unaff_ESI[10])
                  (param_1,unaff_ESI + 10,*(undefined4 *)(*unaff_ESI + iVar5 * 4),iVar4,iVar2);
      }
      else {
        (*(code *)unaff_ESI[0xb])(param_1,unaff_ESI + 10,*(undefined4 *)(*unaff_ESI + iVar5 * 4));
      }
      iVar3 = unaff_ESI[4];
      iVar5 = iVar5 + unaff_ESI[5];
      iVar4 = iVar4 + iVar2;
    } while (iVar5 < iVar3);
  }
  return;
}


//// FUNCTION FUN_00af25c0 @ 00af25c0 ////

void __cdecl FUN_00af25c0(undefined4 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  int iVar5;
  
  iVar3 = unaff_ESI[4];
  iVar1 = unaff_ESI[2];
  iVar4 = unaff_ESI[6] * iVar1 * 0x80;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar2 = iVar3 - iVar5;
      if (unaff_ESI[5] < iVar3 - iVar5) {
        iVar2 = unaff_ESI[5];
      }
      iVar3 = unaff_ESI[7] - (unaff_ESI[6] + iVar5);
      if (iVar3 <= iVar2) {
        iVar2 = iVar3;
      }
      iVar3 = unaff_ESI[1] - (unaff_ESI[6] + iVar5);
      if (iVar3 <= iVar2) {
        iVar2 = iVar3;
      }
      if (iVar2 < 1) {
        return;
      }
      iVar2 = iVar2 * iVar1 * 0x80;
      if (param_2 == '\0') {
        (*(code *)unaff_ESI[10])
                  (param_1,unaff_ESI + 10,*(undefined4 *)(*unaff_ESI + iVar5 * 4),iVar4,iVar2);
      }
      else {
        (*(code *)unaff_ESI[0xb])(param_1,unaff_ESI + 10,*(undefined4 *)(*unaff_ESI + iVar5 * 4));
      }
      iVar3 = unaff_ESI[4];
      iVar5 = iVar5 + unaff_ESI[5];
      iVar4 = iVar4 + iVar2;
    } while (iVar5 < iVar3);
  }
  return;
}


//// FUNCTION FUN_00af28f0 @ 00af28f0 ////

void __cdecl FUN_00af28f0(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = param_1[1];
  if ((param_2 < 0) || (1 < param_2)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xe;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_2 == 1) {
    for (iVar2 = *(int *)(iVar1 + 0x44); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x24)) {
      if (*(char *)(iVar2 + 0x22) != '\0') {
        *(undefined1 *)(iVar2 + 0x22) = 0;
        (**(code **)(iVar2 + 0x30))(param_1,iVar2 + 0x28);
      }
    }
    iVar2 = *(int *)(iVar1 + 0x48);
    *(undefined4 *)(iVar1 + 0x44) = 0;
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x24)) {
      if (*(char *)(iVar2 + 0x22) != '\0') {
        *(undefined1 *)(iVar2 + 0x22) = 0;
        (**(code **)(iVar2 + 0x30))(param_1,iVar2 + 0x28);
      }
    }
    *(undefined4 *)(iVar1 + 0x48) = 0;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x3c + param_2 * 4);
  *(undefined4 *)(iVar1 + 0x3c + param_2 * 4) = 0;
  while (puVar3 != (undefined4 *)0x0) {
    iVar2 = puVar3[2];
    iVar4 = puVar3[1];
    puVar5 = (undefined4 *)*puVar3;
    FUN_00af3430(param_1,puVar3);
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) - (iVar2 + 0x10 + iVar4);
    puVar3 = puVar5;
    param_2 = param_4;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x34 + param_2 * 4);
  *(undefined4 *)(iVar1 + 0x34 + param_2 * 4) = 0;
  while (puVar3 != (undefined4 *)0x0) {
    iVar2 = puVar3[2];
    iVar4 = puVar3[1];
    puVar5 = (undefined4 *)*puVar3;
    FUN_00af3410(param_1,puVar3);
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) - (iVar2 + 0x10 + iVar4);
    puVar3 = puVar5;
  }
  return;
}


//// FUNCTION FUN_00af2a40 @ 00af2a40 ////

void __cdecl FUN_00af2a40(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char *_Src;
  int iVar3;
  int *piVar4;
  int local_4;
  
  piVar1 = param_1;
  param_1[1] = 0;
  local_4 = FUN_00af3470();
  puVar2 = (undefined4 *)FUN_00af3400(piVar1,0x54);
  if (puVar2 == (undefined4 *)0x0) {
    piVar4 = piVar1;
    FUN_00af3480();
    *(undefined4 *)(*piVar1 + 0x14) = 0x36;
    *(undefined4 *)(*piVar1 + 0x18) = 0;
    (**(code **)*piVar1)(piVar1,piVar4);
  }
  *puVar2 = FUN_00af1f30;
  puVar2[1] = FUN_00af2080;
  puVar2[2] = FUN_00af2140;
  puVar2[3] = FUN_00af21f0;
  puVar2[4] = FUN_00af22a0;
  puVar2[5] = FUN_00af2310;
  puVar2[6] = FUN_00af2380;
  puVar2[7] = &LAB_00af2660;
  puVar2[8] = &LAB_00af27a0;
  puVar2[9] = FUN_00af28f0;
  puVar2[10] = &LAB_00af2a00;
  puVar2[0xc] = 1000000000;
  puVar2[0xb] = local_4;
  puVar2[0xe] = 0;
  puVar2[0x10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xf] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0x54;
  piVar1[1] = (int)puVar2;
  _Src = _getenv("JPEGMEM");
  if (_Src != (char *)0x0) {
    param_1 = (int *)CONCAT31(param_1._1_3_,0x78);
    iVar3 = _sscanf(_Src,"%ld%c",&local_4,&param_1);
    if (0 < iVar3) {
      if (((char)param_1 == 'm') || ((char)param_1 == 'M')) {
        puVar2[0xb] = local_4 * 1000000;
        return;
      }
      puVar2[0xb] = local_4 * 1000;
    }
  }
  return;
}


//// FUNCTION FUN_00af2b70 @ 00af2b70 ////

void __cdecl FUN_00af2b70(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x24))(param_1,1);
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(undefined4 *)(param_1 + 0x14) = 200;
      *(undefined4 *)(param_1 + 0x10c) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x14) = 100;
  }
  return;
}


//// FUNCTION FUN_00af2bb0 @ 00af2bb0 ////

void __cdecl FUN_00af2bb0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x28))(param_1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_00af2bd0 @ 00af2bd0 ////

void __cdecl FUN_00af2bd0(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x82);
  *(undefined1 *)(iVar1 + 0x80) = 0;
  return;
}


//// FUNCTION FUN_00af2bf0 @ 00af2bf0 ////

void __cdecl FUN_00af2bf0(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x112);
  *(undefined1 *)(iVar1 + 0x111) = 0;
  return;
}


//// FUNCTION FUN_00af2c10 @ 00af2c10 ////

uint __fastcall FUN_00af2c10(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_EAX;
  undefined3 uVar4;
  uint uVar3;
  
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  uVar3 = CONCAT31(uVar4,*(char *)(param_2 + 0x48));
  if ((((*(char *)(param_2 + 0x48) == '\0') &&
       (uVar3 = CONCAT31(uVar4,*(char *)(param_2 + 0x10a)), *(char *)(param_2 + 0x10a) == '\0')) &&
      (uVar3 = 0, *(int *)(param_2 + 0x28) == 3)) &&
     (((*(int *)(param_2 + 0x24) == 3 && (*(int *)(param_2 + 0x2c) == 2)) &&
      (*(int *)(param_2 + 100) == 3)))) {
    iVar1 = *(int *)(param_2 + 0xc4);
    if (((*(int *)(iVar1 + 8) != 2) || (uVar3 = 1, *(int *)(iVar1 + 0x5c) != 1)) ||
       (((*(int *)(iVar1 + 0xb0) != 1 ||
         ((((2 < *(int *)(iVar1 + 0xc) || (*(int *)(iVar1 + 0x60) != 1)) ||
           (*(int *)(iVar1 + 0xb4) != 1)) ||
          ((iVar2 = *(int *)(param_2 + 0x118), *(int *)(iVar1 + 0x24) != iVar2 ||
           (*(int *)(iVar1 + 0x78) != iVar2)))))) || (*(int *)(iVar1 + 0xcc) != iVar2)))) {
      uVar3 = 0;
    }
    return uVar3;
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00af2c90 @ 00af2c90 ////

void __cdecl FUN_00af2c90(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *extraout_ECX;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  piVar1 = param_1;
  if (param_1[5] != 0xca) {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  iVar2 = param_1[0xc];
  uVar4 = param_1[0xd];
  if ((uint)(iVar2 * 8) < uVar4 || iVar2 * 8 - uVar4 == 0) {
    iVar2 = FUN_00af3330(param_1[7],8);
    param_1[0x17] = iVar2;
    iVar2 = FUN_00af3330(param_1[8],8);
    param_1[0x46] = 1;
  }
  else if ((uint)(iVar2 * 4) < uVar4 || iVar2 * 4 - uVar4 == 0) {
    iVar2 = FUN_00af3330(param_1[7],4);
    param_1[0x17] = iVar2;
    iVar2 = FUN_00af3330(param_1[8],4);
    param_1[0x46] = 2;
  }
  else if (uVar4 < (uint)(iVar2 * 2)) {
    iVar2 = param_1[8];
    param_1[0x17] = param_1[7];
    param_1[0x46] = 8;
  }
  else {
    iVar2 = FUN_00af3330(param_1[7],2);
    param_1[0x17] = iVar2;
    iVar2 = FUN_00af3330(param_1[8],2);
    param_1[0x46] = 4;
  }
  piVar5 = (int *)param_1[0x31];
  param_1[0x18] = iVar2;
  piVar7 = param_1 + 9;
  param_1 = (int *)0x0;
  if (0 < *piVar7) {
    piVar5 = piVar5 + 3;
    do {
      iVar2 = piVar1[0x46];
      iVar3 = iVar2;
      if (iVar2 < 8) {
        do {
          iVar6 = piVar5[-1] * iVar3 * 2;
          if ((iVar6 - piVar1[0x44] * iVar2 != 0 && piVar1[0x44] * iVar2 <= iVar6) ||
             (iVar6 = *piVar5 * iVar3 * 2,
             iVar6 - piVar1[0x45] * iVar2 != 0 && piVar1[0x45] * iVar2 <= iVar6)) break;
          iVar3 = iVar3 * 2;
        } while (iVar3 < 8);
      }
      piVar5[6] = iVar3;
      param_1 = (int *)((int)param_1 + 1);
      piVar5 = piVar5 + 0x15;
    } while ((int)param_1 < piVar1[9]);
  }
  iVar2 = 0;
  if (0 < piVar1[9]) {
    piVar7 = (int *)(piVar1[0x31] + 0x24);
    do {
      iVar3 = FUN_00af3330(piVar7[-7] * *piVar7 * piVar1[7],piVar1[0x44] << 3);
      piVar7[1] = iVar3;
      iVar3 = FUN_00af3330(piVar7[-6] * piVar1[8] * *piVar7,piVar1[0x45] << 3);
      piVar7[2] = iVar3;
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 0x15;
      piVar5 = extraout_ECX;
    } while (iVar2 < piVar1[9]);
  }
  switch(piVar1[0xb]) {
  case 1:
    piVar1[0x19] = 1;
    break;
  case 2:
  case 3:
    piVar1[0x19] = 3;
    break;
  case 4:
  case 5:
    piVar1[0x19] = 4;
    break;
  default:
    piVar1[0x19] = piVar1[9];
  }
  iVar2 = 1;
  if (*(char *)((int)piVar1 + 0x4a) == '\0') {
    iVar2 = piVar1[0x19];
  }
  piVar1[0x1a] = iVar2;
  uVar4 = FUN_00af2c10(piVar5,(int)piVar1);
  if ((char)uVar4 == '\0') {
    piVar1[0x1b] = 1;
    return;
  }
  piVar1[0x1b] = piVar1[0x45];
  return;
}


//// FUNCTION FUN_00af2eb0 @ 00af2eb0 ////

void FUN_00af2eb0(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(in_EAX + 4))();
  iVar2 = 0;
  *(undefined4 **)(in_EAX + 0x120) = puVar1 + 0x40;
  puVar4 = puVar1;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  do {
    *(char *)(iVar2 + (int)(puVar1 + 0x40)) = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  puVar4 = puVar1 + 0x80;
  for (iVar2 = 0x60; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0xffffffff;
    puVar4 = puVar4 + 1;
  }
  puVar4 = puVar1 + 0xe0;
  for (iVar2 = 0x60; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = *(undefined4 **)(in_EAX + 0x120);
  puVar1 = puVar1 + 0x140;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}


//// FUNCTION FUN_00af2f30 @ 00af2f30 ////

void FUN_00af2f30(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int *unaff_ESI;
  char cStack_4;
  
  iVar1 = unaff_ESI[0x60];
  FUN_00af2c90(unaff_ESI);
  FUN_00af2eb0();
  *(undefined4 *)(iVar1 + 0xc) = 0;
  uVar2 = FUN_00af2c10(extraout_ECX,(int)unaff_ESI);
  *(char *)(iVar1 + 0x10) = (char)uVar2;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  if ((*(char *)((int)unaff_ESI + 0x4a) == '\0') || ((char)unaff_ESI[0x10] == '\0')) {
    *(undefined1 *)(unaff_ESI + 0x16) = 0;
    *(undefined1 *)((int)unaff_ESI + 0x59) = 0;
    *(undefined1 *)((int)unaff_ESI + 0x5a) = 0;
  }
  if (*(char *)((int)unaff_ESI + 0x4a) == '\0') goto LAB_00af2fd3;
  if (*(char *)((int)unaff_ESI + 0x41) != '\0') {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x2f;
    (**(code **)*unaff_ESI)();
  }
  if (unaff_ESI[0x19] == 3) {
    if (unaff_ESI[0x1d] == 0) {
      if ((char)unaff_ESI[0x14] == '\0') goto LAB_00af2f9c;
      *(undefined1 *)((int)unaff_ESI + 0x5a) = 1;
    }
    else {
      *(undefined1 *)((int)unaff_ESI + 0x59) = 1;
    }
  }
  else {
    *(undefined1 *)((int)unaff_ESI + 0x59) = 0;
    *(undefined1 *)((int)unaff_ESI + 0x5a) = 0;
    unaff_ESI[0x1d] = 0;
LAB_00af2f9c:
    *(undefined1 *)(unaff_ESI + 0x16) = 1;
  }
  if ((char)unaff_ESI[0x16] != '\0') {
    FUN_00af9d50(unaff_ESI);
    *(int *)(iVar1 + 0x14) = unaff_ESI[0x6a];
  }
  if ((*(char *)((int)unaff_ESI + 0x5a) != '\0') || (*(char *)((int)unaff_ESI + 0x59) != '\0')) {
    FUN_00af9050(unaff_ESI);
    *(int *)(iVar1 + 0x18) = unaff_ESI[0x6a];
  }
LAB_00af2fd3:
  if (*(char *)((int)unaff_ESI + 0x41) == '\0') {
    if (*(char *)(iVar1 + 0x10) == '\0') {
      FUN_00af7600(unaff_ESI);
      FUN_00af6fb0(unaff_ESI);
    }
    else {
      FUN_00af7d50((int)unaff_ESI);
    }
    FUN_00af6a30((int)unaff_ESI,*(char *)((int)unaff_ESI + 0x5a));
  }
  FUN_00af66f0(unaff_ESI);
  if (*(char *)((int)unaff_ESI + 0xc9) == '\0') {
    if ((char)unaff_ESI[0x32] == '\0') {
      FUN_00af5660((int)unaff_ESI);
    }
    else {
      FUN_00af6350((int)unaff_ESI);
    }
  }
  else {
    *(undefined4 *)(*unaff_ESI + 0x14) = 1;
    (**(code **)*unaff_ESI)();
  }
  if ((*(char *)(unaff_ESI[100] + 0x10) != '\0') || (cStack_4 = '\0', (char)unaff_ESI[0x10] != '\0')
     ) {
    cStack_4 = '\x01';
  }
  FUN_00af4a40(unaff_ESI,cStack_4);
  if (*(char *)((int)unaff_ESI + 0x41) == '\0') {
    FUN_00af3a70(unaff_ESI,'\0');
  }
  (**(code **)(unaff_ESI[1] + 0x18))();
  (**(code **)(unaff_ESI[100] + 8))();
  if (((unaff_ESI[2] != 0) && ((char)unaff_ESI[0x10] == '\0')) &&
     (*(char *)(unaff_ESI[100] + 0x10) != '\0')) {
    iVar3 = unaff_ESI[9];
    if ((char)unaff_ESI[0x32] != '\0') {
      iVar3 = iVar3 * 3 + 2;
    }
    *(undefined4 *)(unaff_ESI[2] + 4) = 0;
    *(int *)(unaff_ESI[2] + 8) = unaff_ESI[0x47] * iVar3;
    *(undefined4 *)(unaff_ESI[2] + 0xc) = 0;
    *(uint *)(unaff_ESI[2] + 0x10) = (*(char *)((int)unaff_ESI + 0x5a) != '\0') + 2;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  }
  return;
}


//// FUNCTION FUN_00af3100 @ 00af3100 ////

void __cdecl FUN_00af3100(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x60];
  if (*(char *)(iVar1 + 8) == '\0') {
    if ((*(char *)((int)param_1 + 0x4a) != '\0') && (param_1[0x1d] == 0)) {
      if (((char)param_1[0x14] == '\0') || (*(char *)((int)param_1 + 0x5a) == '\0')) {
        if ((char)param_1[0x16] == '\0') {
          *(undefined4 *)(*param_1 + 0x14) = 0x2e;
          (**(code **)*param_1)(param_1);
        }
        else {
          param_1[0x6a] = *(int *)(iVar1 + 0x14);
        }
      }
      else {
        param_1[0x6a] = *(int *)(iVar1 + 0x18);
        *(undefined1 *)(iVar1 + 8) = 1;
      }
    }
    (**(code **)param_1[0x67])(param_1);
    (**(code **)(param_1[0x62] + 8))(param_1);
    if (*(char *)((int)param_1 + 0x41) == '\0') {
      if (*(char *)(iVar1 + 0x10) == '\0') {
        (**(code **)param_1[0x69])(param_1);
      }
      (**(code **)param_1[0x68])(param_1);
      if (*(char *)((int)param_1 + 0x4a) != '\0') {
        (**(code **)param_1[0x6a])(param_1,*(undefined1 *)(iVar1 + 8));
      }
      (**(code **)param_1[99])(param_1,-(*(char *)(iVar1 + 8) != '\0') & 3);
      (**(code **)param_1[0x61])(param_1,0);
    }
  }
  else {
    *(undefined1 *)(iVar1 + 8) = 0;
    (**(code **)param_1[0x6a])(param_1,0);
    (**(code **)param_1[99])(param_1,2);
    (**(code **)param_1[0x61])(param_1,2);
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(uint *)(param_1[2] + 0x10) = (*(char *)(iVar1 + 8) != '\0') + 1 + *(int *)(iVar1 + 0xc);
    if (((char)param_1[0x10] != '\0') && (*(char *)(param_1[100] + 0x11) == '\0')) {
      *(uint *)(param_1[2] + 0x10) =
           *(int *)(param_1[2] + 0x10) + (*(char *)((int)param_1 + 0x5a) != '\0') + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00af3300 @ 00af3300 ////

void __cdecl FUN_00af3300(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x1c);
  *(undefined4 **)(param_1 + 0x180) = puVar1;
  *puVar1 = FUN_00af3100;
  puVar1[1] = &LAB_00af3260;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_00af2f30();
  return;
}


//// FUNCTION FUN_00af3330 @ 00af3330 ////

int __cdecl FUN_00af3330(int param_1,int param_2)

{
  return (param_1 + -1 + param_2) / param_2;
}


//// FUNCTION FUN_00af3340 @ 00af3340 ////

int __cdecl FUN_00af3340(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + -1 + param_2;
  return iVar1 - iVar1 % param_2;
}


//// FUNCTION FUN_00af3360 @ 00af3360 ////

void __cdecl FUN_00af3360(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)(param_1 + param_2 * 4);
  puVar3 = (undefined4 *)(param_3 + param_4 * 4);
  if (0 < param_5) {
    do {
      puVar4 = (undefined4 *)*puVar1;
      puVar5 = (undefined4 *)*puVar3;
      for (uVar2 = param_6 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
      param_5 = param_5 + -1;
      for (uVar2 = param_6 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    } while (param_5 != 0);
  }
  return;
}


//// FUNCTION FUN_00af33b0 @ 00af33b0 ////

void __cdecl FUN_00af33b0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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


//// FUNCTION FUN_00af33e0 @ 00af33e0 ////

void __cdecl FUN_00af33e0(undefined4 *param_1,uint param_2)

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


//// FUNCTION FUN_00af3400 @ 00af3400 ////

void __cdecl FUN_00af3400(undefined4 param_1,size_t param_2)

{
  _malloc(param_2);
  return;
}


//// FUNCTION FUN_00af3410 @ 00af3410 ////

void FUN_00af3410(undefined4 param_1,void *param_2)

{
                    /* WARNING: Subroutine does not return */
  _free(param_2);
}


//// FUNCTION FUN_00af3420 @ 00af3420 ////

void __cdecl FUN_00af3420(undefined4 param_1,size_t param_2)

{
  _malloc(param_2);
  return;
}


//// FUNCTION FUN_00af3430 @ 00af3430 ////

void FUN_00af3430(undefined4 param_1,void *param_2)

{
                    /* WARNING: Subroutine does not return */
  _free(param_2);
}


//// FUNCTION FUN_00af3440 @ 00af3440 ////

undefined4 __cdecl FUN_00af3440(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  return param_3;
}


//// FUNCTION FUN_00af3450 @ 00af3450 ////

void __cdecl FUN_00af3450(int *param_1)

{
  *(undefined4 *)(*param_1 + 0x14) = 0x31;
  (**(code **)*param_1)(param_1);
  return;
}


//// FUNCTION FUN_00af3470 @ 00af3470 ////

undefined4 FUN_00af3470(void)

{
  return 0;
}


//// FUNCTION FUN_00af3480 @ 00af3480 ////

void FUN_00af3480(void)

{
  return;
}


//// FUNCTION FUN_00af3490 @ 00af3490 ////

void FUN_00af3490(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x118);
  iVar2 = *(int *)(unaff_ESI + 0x184);
  iVar3 = (*(code *)**(undefined4 **)(unaff_ESI + 4))();
  *(int *)(iVar2 + 0x38) = iVar3;
  *(int *)(iVar2 + 0x3c) = iVar3 + *(int *)(unaff_ESI + 0x24) * 4;
  iVar3 = 0;
  if (0 < *(int *)(unaff_ESI + 0x24)) {
    piVar6 = (int *)(*(int *)(unaff_ESI + 0xc4) + 0xc);
    do {
      iVar4 = (piVar6[6] * *piVar6) / *(int *)(unaff_ESI + 0x118);
      iVar5 = (*(code *)**(undefined4 **)(unaff_ESI + 4))();
      iVar5 = iVar5 + iVar4 * 4;
      *(int *)(*(int *)(iVar2 + 0x38) + iVar3 * 4) = iVar5;
      *(int *)(*(int *)(iVar2 + 0x3c) + iVar3 * 4) = iVar5 + (iVar1 + 4) * iVar4 * 4;
      iVar3 = iVar3 + 1;
      piVar6 = piVar6 + 0x15;
    } while (iVar3 < *(int *)(unaff_ESI + 0x24));
  }
  return;
}


//// FUNCTION FUN_00af3540 @ 00af3540 ////

void __cdecl FUN_00af3540(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int local_20;
  int *local_1c;
  int local_14;
  
  iVar1 = *(int *)(param_1 + 0x118);
  iVar2 = *(int *)(param_1 + 0x184);
  local_20 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    piVar8 = (int *)(*(int *)(param_1 + 0xc4) + 0xc);
    local_1c = (int *)(iVar2 + 8);
    do {
      iVar6 = (piVar8[6] * *piVar8) / *(int *)(param_1 + 0x118);
      puVar3 = *(undefined4 **)(*(int *)(iVar2 + 0x38) + local_20 * 4);
      puVar7 = *(undefined4 **)(*(int *)(iVar2 + 0x3c) + local_20 * 4);
      iVar4 = *local_1c;
      local_14 = (iVar1 + 2) * iVar6;
      if (0 < local_14) {
        puVar9 = puVar7;
        do {
          uVar5 = *(undefined4 *)((int)puVar9 + (iVar4 - (int)puVar7));
          *puVar9 = uVar5;
          *(undefined4 *)(((int)puVar3 - (int)puVar7) + (int)puVar9) = uVar5;
          puVar9 = puVar9 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      if (0 < iVar6 * 2) {
        puVar9 = puVar7 + iVar6 * iVar1;
        puVar10 = (undefined4 *)(iVar4 + (iVar1 + -2) * iVar6 * 4);
        iVar11 = iVar6 * 2;
        do {
          *(undefined4 *)(((int)puVar7 - iVar4) + (int)puVar10) =
               *(undefined4 *)((int)puVar9 + (iVar4 - (int)puVar7));
          *puVar9 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      if (0 < iVar6) {
        puVar7 = puVar3 + -iVar6;
        do {
          *puVar7 = *puVar3;
          puVar7 = puVar7 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_20 = local_20 + 1;
      local_1c = local_1c + 1;
      piVar8 = piVar8 + 0x15;
    } while (local_20 < *(int *)(param_1 + 0x24));
  }
  return;
}


//// FUNCTION FUN_00af3690 @ 00af3690 ////

void __cdecl FUN_00af3690(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_10;
  
  iVar1 = *(int *)(param_1 + 0x118);
  iVar2 = *(int *)(param_1 + 0x184);
  local_10 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    piVar7 = (int *)(*(int *)(param_1 + 0xc4) + 0xc);
    do {
      iVar3 = (piVar7[6] * *piVar7) / *(int *)(param_1 + 0x118);
      puVar8 = *(undefined4 **)(*(int *)(iVar2 + 0x3c) + local_10 * 4);
      if (0 < iVar3) {
        puVar6 = puVar8 + (iVar1 + 2) * iVar3;
        puVar5 = puVar8 + -iVar3;
        puVar9 = puVar8 + (iVar1 + 1) * iVar3;
        iVar4 = *(int *)(*(int *)(iVar2 + 0x38) + local_10 * 4) - (int)puVar8;
        do {
          *(undefined4 *)(iVar4 + (int)puVar5) = *(undefined4 *)(iVar4 + (int)puVar9);
          *puVar5 = *puVar9;
          *(undefined4 *)(iVar4 + (int)puVar6) = *(undefined4 *)(iVar4 + (int)puVar8);
          *puVar6 = *puVar8;
          puVar9 = puVar9 + 1;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
          puVar6 = puVar6 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_10 = local_10 + 1;
      piVar7 = piVar7 + 0x15;
    } while (local_10 < *(int *)(param_1 + 0x24));
  }
  return;
}


//// FUNCTION FUN_00af3770 @ 00af3770 ////

void __cdecl FUN_00af3770(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = *(int *)(param_1 + 0x184);
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    piVar6 = (int *)(*(int *)(param_1 + 0xc4) + 0xc);
    do {
      uVar5 = piVar6[6] * *piVar6;
      iVar3 = (int)uVar5 / *(int *)(param_1 + 0x118);
      uVar8 = (uint)piVar6[8] % uVar5;
      if ((uint)piVar6[8] % uVar5 == 0) {
        uVar8 = uVar5;
      }
      if (iVar7 == 0) {
        *(int *)(iVar2 + 0x48) = (int)(uVar8 - 1) / iVar3 + 1;
      }
      iVar3 = iVar3 * 2;
      if (0 < iVar3) {
        puVar1 = (undefined4 *)
                 (*(int *)(*(int *)(iVar2 + 0x38 + *(int *)(iVar2 + 0x40) * 4) + iVar7 * 4) +
                 uVar8 * 4);
        puVar4 = puVar1;
        do {
          *puVar4 = puVar1[-1];
          puVar4 = puVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 0x15;
    } while (iVar7 < *(int *)(param_1 + 0x24));
  }
  return;
}


//// FUNCTION FUN_00af3a70 @ 00af3a70 ////

void __cdecl FUN_00af3a70(int *param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x50);
  param_1[0x61] = (int)puVar1;
  *puVar1 = &LAB_00af39f0;
  if (param_2 != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)(param_1);
  }
  if (*(char *)(param_1[0x68] + 8) == '\0') {
    iVar2 = param_1[0x46];
  }
  else {
    if (param_1[0x46] < 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x2f;
      (**(code **)*param_1)(param_1);
    }
    FUN_00af3490();
    iVar2 = param_1[0x46] + 2;
  }
  iVar4 = 0;
  if (0 < param_1[9]) {
    piVar5 = (int *)(param_1[0x31] + 0x24);
    puVar1 = puVar1 + 2;
    do {
      uVar3 = (**(code **)(param_1[1] + 8))
                        (param_1,1,piVar5[-2] * *piVar5,
                         ((piVar5[-6] * *piVar5) / param_1[0x46]) * iVar2);
      *puVar1 = uVar3;
      iVar4 = iVar4 + 1;
      puVar1 = puVar1 + 1;
      piVar5 = piVar5 + 0x15;
    } while (iVar4 < param_1[9]);
  }
  return;
}


//// FUNCTION FUN_00af3bb0 @ 00af3bb0 ////

undefined4 __cdecl FUN_00af3bb0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  int iStack_28;
  int *piStack_24;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar1 = *(int *)(param_1 + 0x11c);
  uVar12 = *(int *)(param_1 + 0x138) - 1;
  iVar2 = *(int *)(param_1 + 0x188);
  iVar8 = *(int *)(iVar2 + 0x18);
  if (iVar8 < *(int *)(iVar2 + 0x1c)) {
    do {
      for (uVar15 = *(uint *)(iVar2 + 0x14); uVar15 <= uVar12; uVar15 = uVar15 + 1) {
        FUN_00af33e0(*(undefined4 **)(iVar2 + 0x20),*(int *)(param_1 + 0x140) << 7);
        cVar6 = (**(code **)(*(int *)(param_1 + 0x198) + 4))(param_1,iVar2 + 0x20);
        if (cVar6 == '\0') {
          *(uint *)(iVar2 + 0x14) = uVar15;
          *(int *)(iVar2 + 0x18) = iVar8;
          return 0;
        }
        iVar9 = 0;
        iStack_28 = 0;
        iStack_14 = 0;
        if (0 < *(int *)(param_1 + 0x124)) {
          piStack_24 = (int *)(param_1 + 0x128);
          do {
            iVar3 = *piStack_24;
            if (*(char *)(iVar3 + 0x30) == '\0') {
              iVar9 = iVar9 + *(int *)(iVar3 + 0x3c);
              iStack_28 = iVar9;
            }
            else {
              iVar7 = *(int *)(iVar3 + 4) * 4;
              pcVar4 = *(code **)(*(int *)(param_1 + 0x19c) + 4 + iVar7);
              if (uVar15 < uVar12) {
                iVar11 = *(int *)(iVar3 + 0x34);
              }
              else {
                iVar11 = *(int *)(iVar3 + 0x44);
              }
              iVar5 = *(int *)(iVar3 + 0x40);
              iVar7 = *(int *)(iVar7 + param_2) + *(int *)(iVar3 + 0x24) * iVar8 * 4;
              iStack_18 = 0;
              if (0 < *(int *)(iVar3 + 0x38)) {
                do {
                  if (((*(uint *)(param_1 + 0x80) < iVar1 - 1U) ||
                      (iVar8 + iStack_18 < *(int *)(iVar3 + 0x48))) && (0 < iVar11)) {
                    puVar13 = (undefined4 *)(iVar2 + 0x20 + iVar9 * 4);
                    iVar14 = iVar5 * uVar15;
                    iStack_1c = iVar11;
                    do {
                      (*pcVar4)(param_1,iVar3,*puVar13,iVar7,iVar14);
                      iVar14 = iVar14 + *(int *)(iVar3 + 0x24);
                      puVar13 = puVar13 + 1;
                      iStack_1c = iStack_1c + -1;
                      iVar9 = iStack_28;
                    } while (iStack_1c != 0);
                  }
                  iVar9 = iVar9 + *(int *)(iVar3 + 0x34);
                  iVar7 = iVar7 + *(int *)(iVar3 + 0x24) * 4;
                  iStack_18 = iStack_18 + 1;
                  iStack_28 = iVar9;
                } while (iStack_18 < *(int *)(iVar3 + 0x38));
              }
            }
            iStack_14 = iStack_14 + 1;
            piStack_24 = piStack_24 + 1;
          } while (iStack_14 < *(int *)(param_1 + 0x124));
        }
      }
      *(undefined4 *)(iVar2 + 0x14) = 0;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(iVar2 + 0x1c));
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  uVar12 = *(int *)(param_1 + 0x80) + 1;
  *(uint *)(param_1 + 0x80) = uVar12;
  if (uVar12 < *(uint *)(param_1 + 0x11c)) {
    iVar1 = *(int *)(param_1 + 0x188);
    if (1 < *(int *)(param_1 + 0x124)) {
      *(undefined4 *)(iVar1 + 0x1c) = 1;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      return 3;
    }
    if (uVar12 < *(uint *)(param_1 + 0x11c) - 1) {
      uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x128) + 0xc);
    }
    else {
      uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x128) + 0x48);
    }
    *(undefined4 *)(iVar1 + 0x1c) = uVar10;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    return 3;
  }
  (**(code **)(*(int *)(param_1 + 400) + 0xc))(param_1);
  return 4;
}


//// FUNCTION FUN_00af3e60 @ 00af3e60 ////

undefined4 __cdecl FUN_00af3e60(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int *local_2c;
  int *local_28;
  int iStack_24;
  int local_20;
  int aiStack_10 [4];
  
  iVar1 = *(int *)(param_1 + 0x188);
  iVar12 = 0;
  if (0 < *(int *)(param_1 + 0x124)) {
    local_2c = (int *)(param_1 + 0x128);
    do {
      iVar4 = *(int *)(*local_2c + 0xc);
      iVar4 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                        (param_1,*(undefined4 *)(iVar1 + 0x48 + *(int *)(*local_2c + 4) * 4),
                         *(int *)(param_1 + 0x80) * iVar4,iVar4,1);
      aiStack_10[iVar12] = iVar4;
      iVar12 = iVar12 + 1;
      local_2c = local_2c + 1;
    } while (iVar12 < *(int *)(param_1 + 0x124));
  }
  iVar12 = *(int *)(iVar1 + 0x18);
  if (iVar12 < *(int *)(iVar1 + 0x1c)) {
    do {
      local_2c = *(int **)(iVar1 + 0x14);
      if (local_2c < *(uint *)(param_1 + 0x138)) {
        do {
          iVar4 = 0;
          local_20 = 0;
          if (0 < *(int *)(param_1 + 0x124)) {
            local_28 = (int *)(param_1 + 0x128);
            do {
              iVar2 = *local_28;
              iVar7 = *(int *)(iVar2 + 0x34);
              iVar5 = iVar7 * (int)local_2c;
              iStack_24 = 0;
              if (0 < *(int *)(iVar2 + 0x38)) {
                piVar11 = (int *)(aiStack_10[local_20] + iVar12 * 4);
                do {
                  iVar6 = *piVar11 + iVar5 * 0x80;
                  iVar9 = 0;
                  if (0 < iVar7) {
                    piVar13 = (int *)(iVar1 + 0x20 + iVar4 * 4);
                    do {
                      *piVar13 = iVar6;
                      iVar7 = *(int *)(iVar2 + 0x34);
                      iVar4 = iVar4 + 1;
                      piVar13 = piVar13 + 1;
                      iVar6 = iVar6 + 0x80;
                      iVar9 = iVar9 + 1;
                    } while (iVar9 < iVar7);
                  }
                  iStack_24 = iStack_24 + 1;
                  piVar11 = piVar11 + 1;
                } while (iStack_24 < *(int *)(iVar2 + 0x38));
              }
              local_20 = local_20 + 1;
              local_28 = local_28 + 1;
            } while (local_20 < *(int *)(param_1 + 0x124));
          }
          cVar3 = (**(code **)(*(int *)(param_1 + 0x198) + 4))(param_1,iVar1 + 0x20);
          if (cVar3 == '\0') {
            *(int *)(iVar1 + 0x18) = iVar12;
            *(int **)(iVar1 + 0x14) = local_2c;
            return 0;
          }
          local_2c = (int *)((int)local_2c + 1);
        } while (local_2c < *(uint *)(param_1 + 0x138));
      }
      *(undefined4 *)(iVar1 + 0x14) = 0;
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(iVar1 + 0x1c));
  }
  uVar8 = *(int *)(param_1 + 0x80) + 1;
  *(uint *)(param_1 + 0x80) = uVar8;
  if (*(uint *)(param_1 + 0x11c) <= uVar8) {
    (**(code **)(*(int *)(param_1 + 400) + 0xc))(param_1);
    return 4;
  }
  iVar1 = *(int *)(param_1 + 0x188);
  if (*(int *)(param_1 + 0x124) < 2) {
    if (uVar8 < *(uint *)(param_1 + 0x11c) - 1) {
      uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x128) + 0xc);
    }
    else {
      uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x128) + 0x48);
    }
    *(undefined4 *)(iVar1 + 0x1c) = uVar10;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    return 3;
  }
  *(undefined4 *)(iVar1 + 0x1c) = 1;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return 3;
}


//// FUNCTION FUN_00af4090 @ 00af4090 ////

int __cdecl FUN_00af4090(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar1 = *(int *)(param_1 + 0x11c);
  iVar4 = *(int *)(param_1 + 0x188);
  while ((*(int *)(param_1 + 0x7c) < *(int *)(param_1 + 0x84) ||
         ((*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x84) &&
          (*(uint *)(param_1 + 0x80) <= *(uint *)(param_1 + 0x88)))))) {
    iVar3 = (*(code *)**(undefined4 **)(param_1 + 400))(param_1);
    if (iVar3 == 0) {
      return 0;
    }
  }
  iVar3 = *(int *)(param_1 + 0xc4);
  iStack_14 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    puVar6 = (undefined4 *)(iVar4 + 0x48);
    do {
      if (*(char *)(iVar3 + 0x30) != '\0') {
        iVar4 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                          (param_1,*puVar6,*(int *)(param_1 + 0x88) * *(int *)(iVar3 + 0xc),
                           *(int *)(iVar3 + 0xc),0);
        if (*(uint *)(param_1 + 0x88) < iVar1 - 1U) {
          uStack_20 = *(uint *)(iVar3 + 0xc);
        }
        else {
          uStack_20 = *(uint *)(iVar3 + 0x20) % *(uint *)(iVar3 + 0xc);
          if (uStack_20 == 0) {
            uStack_20 = *(uint *)(iVar3 + 0xc);
          }
        }
        pcVar2 = *(code **)(*(int *)(param_1 + 0x19c) + 4 + iStack_14 * 4);
        iStack_1c = *(int *)(param_2 + iStack_14 * 4);
        iStack_18 = 0;
        if (0 < (int)uStack_20) {
          uVar8 = *(uint *)(iVar3 + 0x1c);
          do {
            iVar5 = *(int *)(iVar4 + iStack_18 * 4);
            iVar9 = 0;
            uVar7 = 0;
            if (uVar8 != 0) {
              do {
                (*pcVar2)(param_1,iVar3,iVar5,iStack_1c,iVar9);
                iVar9 = iVar9 + *(int *)(iVar3 + 0x24);
                uVar8 = *(uint *)(iVar3 + 0x1c);
                iVar5 = iVar5 + 0x80;
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar8);
            }
            iStack_1c = iStack_1c + *(int *)(iVar3 + 0x24) * 4;
            iStack_18 = iStack_18 + 1;
          } while (iStack_18 < (int)uStack_20);
        }
      }
      iStack_14 = iStack_14 + 1;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + 0x54;
    } while (iStack_14 < *(int *)(param_1 + 0x24));
  }
  uVar8 = *(int *)(param_1 + 0x88) + 1;
  *(uint *)(param_1 + 0x88) = uVar8;
  return 4 - (uint)(uVar8 < *(uint *)(param_1 + 0x11c));
}


//// FUNCTION FUN_00af4230 @ 00af4230 ////

uint FUN_00af4230(void)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined4 uVar2;
  short *psVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  undefined1 local_5;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)(unaff_EDI + 200));
  iVar5 = *(int *)(unaff_EDI + 0x188);
  local_5 = 0;
  if ((*(char *)(unaff_EDI + 200) == '\0') || (uVar1 = 0, *(int *)(unaff_EDI + 0x8c) == 0)) {
    return uVar1 & 0xffffff00;
  }
  if (*(int *)(iVar5 + 0x70) == 0) {
    uVar2 = (*(code *)**(undefined4 **)(unaff_EDI + 4))();
    *(undefined4 *)(iVar5 + 0x70) = uVar2;
  }
  iVar5 = *(int *)(iVar5 + 0x70);
  puVar4 = *(undefined4 **)(unaff_EDI + 0xc4);
  iVar7 = 0;
  if (0 < *(int *)(unaff_EDI + 0x24)) {
    iVar6 = 0;
    puVar4 = puVar4 + 0x13;
    do {
      psVar3 = (short *)*puVar4;
      if (((((psVar3 == (short *)0x0) || (*psVar3 == 0)) || (psVar3[1] == 0)) ||
          ((psVar3[8] == 0 || (psVar3[0x10] == 0)))) ||
         ((psVar3[9] == 0 ||
          ((psVar3[2] == 0 ||
           (psVar3 = (short *)(*(int *)(unaff_EDI + 0x8c) + iVar6),
           *(int *)(*(int *)(unaff_EDI + 0x8c) + iVar6) < 0)))))) {
        return (uint)psVar3 & 0xffffff00;
      }
      *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(psVar3 + 2);
      if (*(int *)(psVar3 + 2) != 0) {
        local_5 = 1;
      }
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(psVar3 + 4);
      if (*(int *)(psVar3 + 4) != 0) {
        local_5 = 1;
      }
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(psVar3 + 6);
      if (*(int *)(psVar3 + 6) != 0) {
        local_5 = 1;
      }
      *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(psVar3 + 8);
      if (*(int *)(psVar3 + 8) != 0) {
        local_5 = 1;
      }
      *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(psVar3 + 10);
      if (*(int *)(psVar3 + 10) != 0) {
        local_5 = 1;
      }
      iVar5 = iVar5 + 0x18;
      iVar7 = iVar7 + 1;
      puVar4 = puVar4 + 0x15;
      iVar6 = iVar6 + 0x100;
    } while (iVar7 < *(int *)(unaff_EDI + 0x24));
  }
  return CONCAT31((int3)((uint)puVar4 >> 8),local_5);
}


//// FUNCTION FUN_00af4a40 @ 00af4a40 ////

void __cdecl FUN_00af4a40(undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  
  puVar2 = param_1;
  puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x74);
  param_1[0x62] = puVar3;
  *puVar3 = &LAB_00af3b90;
  puVar3[2] = &LAB_00af49f0;
  puVar3[0x1c] = 0;
  if (param_2 != '\0') {
    piVar8 = param_1 + 0x31;
    _param_2 = 0;
    if (0 < (int)param_1[9]) {
      param_1 = puVar3 + 0x12;
      piVar8 = (int *)(*piVar8 + 0xc);
      do {
        iVar4 = *piVar8;
        iVar7 = iVar4;
        if (*(char *)(puVar2 + 0x32) != '\0') {
          iVar7 = iVar4 * 3;
        }
        iVar1 = puVar2[1];
        iVar4 = FUN_00af3340(piVar8[5],iVar4);
        iVar5 = FUN_00af3340(piVar8[4],piVar8[-1]);
        uVar6 = (**(code **)(iVar1 + 0x14))(puVar2,1,1,iVar5,iVar4,iVar7);
        *param_1 = uVar6;
        param_1 = param_1 + 1;
        _param_2 = _param_2 + 1;
        piVar8 = piVar8 + 0x15;
      } while (_param_2 < (int)puVar2[9]);
    }
    puVar3[1] = FUN_00af3e60;
    puVar3[3] = FUN_00af4090;
    puVar3[4] = puVar3 + 0x12;
    return;
  }
  iVar4 = (**(code **)(param_1[1] + 4))(param_1,1,0x500);
  puVar3[9] = iVar4 + 0x80;
  puVar3[10] = iVar4 + 0x100;
  puVar3[0xb] = iVar4 + 0x180;
  puVar3[0xc] = iVar4 + 0x200;
  puVar3[0xd] = iVar4 + 0x280;
  puVar3[0xe] = iVar4 + 0x300;
  puVar3[8] = iVar4;
  puVar3[0xf] = iVar4 + 0x380;
  puVar3[0x10] = iVar4 + 0x400;
  puVar3[0x11] = iVar4 + 0x480;
  puVar3[4] = 0;
  puVar3[1] = &LAB_00af3e50;
  puVar3[3] = FUN_00af3bb0;
  return;
}


//// FUNCTION FUN_00af4b90 @ 00af4b90 ////

void __cdecl FUN_00af4b90(int *param_1,char param_2,int param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined1 *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int iStack_520;
  int iStack_514;
  int iStack_510;
  char acStack_508 [256];
  int aiStack_408 [258];
  
  if ((param_3 < 0) || (3 < param_3)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x32;
    *(int *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  if (param_2 == '\0') {
    iVar10 = param_1[param_3 + 0x2c];
  }
  else {
    iVar10 = param_1[param_3 + 0x28];
  }
  if (iVar10 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x32;
    *(int *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  if (*param_4 == 0) {
    iVar2 = (**(code **)param_1[1])(param_1,1,0x590);
    *param_4 = iVar2;
  }
  iVar2 = *param_4;
  *(int *)(iVar2 + 0x8c) = iVar10;
  iVar14 = 0;
  iStack_520 = 1;
  do {
    bVar1 = *(byte *)(iStack_520 + iVar10);
    uVar11 = (uint)bVar1;
    if (0x100 < (int)(iVar14 + uVar11)) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (uVar11 != 0) {
      cVar8 = (char)iStack_520;
      pcVar3 = acStack_508 + iVar14;
      for (uVar6 = (uint)(bVar1 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint *)pcVar3 = CONCAT22(CONCAT11(cVar8,cVar8),CONCAT11(cVar8,cVar8));
        pcVar3 = pcVar3 + 4;
      }
      for (uVar6 = uVar11 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar3 = cVar8;
        pcVar3 = pcVar3 + 1;
      }
      iVar14 = iVar14 + uVar11;
    }
    iStack_520 = iStack_520 + 1;
  } while (iStack_520 < 0x11);
  acStack_508[iVar14] = '\0';
  iVar9 = 0;
  iVar15 = 0;
  iVar12 = (int)acStack_508[0];
  if (acStack_508[0] != '\0') {
    pcVar3 = acStack_508;
    do {
      cVar8 = *pcVar3;
      while (cVar8 == iVar12) {
        cVar8 = acStack_508[iVar15 + 1];
        aiStack_408[iVar15 + 1] = iVar9;
        iVar15 = iVar15 + 1;
        iVar9 = iVar9 + 1;
      }
      if (1 << ((byte)iVar12 & 0x1f) <= iVar9) {
        *(undefined4 *)(*param_1 + 0x14) = 8;
        (**(code **)*param_1)(param_1);
      }
      pcVar3 = acStack_508 + iVar15;
      iVar9 = iVar9 << 1;
      iVar12 = iVar12 + 1;
    } while (acStack_508[iVar15] != '\0');
  }
  iVar9 = 1;
  iVar15 = 0;
  do {
    if (*(char *)(iVar9 + iVar10) == '\0') {
      *(undefined4 *)(iVar2 + iVar9 * 4) = 0xffffffff;
    }
    else {
      *(int *)(iVar2 + 0x48 + iVar9 * 4) = iVar15 - aiStack_408[iVar15 + 1];
      iVar15 = iVar15 + (uint)*(byte *)(iVar9 + iVar10);
      *(int *)(iVar2 + iVar9 * 4) = aiStack_408[iVar15];
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x11);
  *(undefined4 *)(iVar2 + 0x44) = 0xfffff;
  puVar16 = (undefined4 *)(iVar2 + 0x90);
  for (iVar9 = 0x100; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  iVar9 = 0;
  iStack_510 = 0;
  iVar15 = 1;
  iStack_520 = 7;
  do {
    iStack_514 = 1;
    if (*(char *)(iVar15 + iVar10) != '\0') {
      iVar12 = 1 << ((byte)iStack_520 & 0x1f);
      puVar13 = (undefined1 *)(iVar9 + 0x11 + iVar10);
      do {
        iVar4 = aiStack_408[iVar9 + 1] << ((byte)iStack_520 & 0x1f);
        if (0 < iVar12) {
          puVar7 = (undefined1 *)(iVar4 + 0x490 + iVar2);
          piVar5 = (int *)(iVar2 + 0x90 + iVar4 * 4);
          iVar4 = iVar12;
          do {
            *piVar5 = iVar15;
            piVar5 = piVar5 + 1;
            *puVar7 = *puVar13;
            puVar7 = puVar7 + 1;
            iVar4 = iVar4 + -1;
            iVar9 = iStack_510;
          } while (iVar4 != 0);
        }
        iStack_514 = iStack_514 + 1;
        iVar9 = iVar9 + 1;
        puVar13 = puVar13 + 1;
        iStack_510 = iVar9;
      } while (iStack_514 <= (int)(uint)*(byte *)(iVar15 + iVar10));
    }
    iVar15 = iVar15 + 1;
    iStack_520 = iStack_520 + -1;
  } while (-1 < iStack_520);
  if ((param_2 != '\0') && (iVar2 = 0, 0 < iVar14)) {
    do {
      if (0xf < *(byte *)(iVar10 + 0x11 + iVar2)) {
        *(undefined4 *)(*param_1 + 0x14) = 8;
        (**(code **)*param_1)(param_1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar14);
  }
  return;
}


//// FUNCTION FUN_00af4e60 @ 00af4e60 ////

undefined4 __cdecl FUN_00af4e60(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  
  piVar1 = (int *)param_1[4];
  pbVar3 = (byte *)*param_1;
  iVar4 = param_1[1];
  if (piVar1[0x5f] == 0) {
    for (; param_3 < 0x19; param_3 = param_3 + 8) {
      if (iVar4 == 0) {
        uVar2 = (**(code **)(piVar1[6] + 0xc))(piVar1);
        if ((char)uVar2 == '\0') {
LAB_00af4f04:
          return uVar2 & 0xffffff00;
        }
        pbVar3 = *(byte **)piVar1[6];
        iVar4 = ((undefined4 *)piVar1[6])[1];
      }
      uVar2 = (uint)*pbVar3;
      iVar4 = iVar4 + -1;
      pbVar3 = pbVar3 + 1;
      if (uVar2 == 0xff) {
        do {
          if (iVar4 == 0) {
            uVar2 = (**(code **)(piVar1[6] + 0xc))(piVar1);
            if ((char)uVar2 == '\0') goto LAB_00af4f04;
            pbVar3 = *(byte **)piVar1[6];
            iVar4 = ((undefined4 *)piVar1[6])[1];
          }
          uVar2 = (uint)*pbVar3;
          iVar4 = iVar4 + -1;
          pbVar3 = pbVar3 + 1;
        } while (uVar2 == 0xff);
        if (uVar2 != 0) {
          piVar1[0x5f] = uVar2;
          goto LAB_00af4f11;
        }
        uVar2 = 0xff;
      }
      param_2 = param_2 << 8 | uVar2;
    }
  }
  else {
LAB_00af4f11:
    if (param_3 < param_4) {
      if (*(char *)(piVar1[0x66] + 8) == '\0') {
        *(undefined4 *)(*piVar1 + 0x14) = 0x75;
        (**(code **)(*piVar1 + 4))(piVar1,0xffffffff);
        *(undefined1 *)(piVar1[0x66] + 8) = 1;
      }
      param_2 = param_2 << (0x19U - (char)param_3 & 0x1f);
      param_3 = 0x19;
    }
  }
  param_1[1] = iVar4;
  *param_1 = pbVar3;
  param_1[3] = param_3;
  param_1[2] = param_2;
  return CONCAT31((int3)((uint)param_3 >> 8),1);
}


//// FUNCTION FUN_00af4f80 @ 00af4f80 ////

uint __cdecl FUN_00af4f80(undefined4 *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_3 < param_5) {
    uVar2 = FUN_00af4e60(param_1,param_2,param_3,param_5);
    if ((char)uVar2 == '\0') {
      return 0xffffffff;
    }
    param_2 = param_1[2];
    param_3 = param_1[3];
  }
  iVar3 = param_3 - param_5;
  uVar4 = (int)param_2 >> ((byte)iVar3 & 0x1f) & (1 << ((byte)param_5 & 0x1f)) - 1U;
  if (*(int *)(param_4 + param_5 * 4) < (int)uVar4) {
    do {
      if (iVar3 < 1) {
        uVar2 = FUN_00af4e60(param_1,param_2,iVar3,1);
        if ((char)uVar2 == '\0') {
          return 0xffffffff;
        }
        param_2 = param_1[2];
        iVar3 = param_1[3];
      }
      iVar3 = iVar3 + -1;
      uVar4 = uVar4 << 1 | (int)param_2 >> ((byte)iVar3 & 0x1f) & 1U;
      iVar1 = param_5 * 4;
      param_5 = param_5 + 1;
    } while (*(int *)(param_4 + 4 + iVar1) < (int)uVar4);
  }
  param_1[2] = param_2;
  param_1[3] = iVar3;
  if (param_5 < 0x11) {
    return (uint)*(byte *)(*(int *)(param_4 + 0x48 + param_5 * 4) + *(int *)(param_4 + 0x8c) + 0x11
                          + uVar4);
  }
  *(undefined4 *)(*(int *)param_1[4] + 0x14) = 0x76;
  (**(code **)(*(int *)param_1[4] + 4))((int *)param_1[4],0xffffffff);
  return 0;
}


//// FUNCTION FUN_00af5060 @ 00af5060 ////

undefined4 FUN_00af5060(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x198);
  *(int *)(*(int *)(unaff_ESI + 0x194) + 0x14) =
       *(int *)(*(int *)(unaff_ESI + 0x194) + 0x14) +
       ((int)(*(int *)(iVar1 + 0x10) + (*(int *)(iVar1 + 0x10) >> 0x1f & 7U)) >> 3);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  uVar2 = (**(code **)(*(int *)(unaff_ESI + 0x194) + 8))();
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  iVar3 = 0;
  if (0 < *(int *)(unaff_ESI + 0x124)) {
    puVar4 = (undefined4 *)(iVar1 + 0x14);
    do {
      *puVar4 = 0;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < *(int *)(unaff_ESI + 0x124));
  }
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(unaff_ESI + 0xfc);
  iVar3 = *(int *)(unaff_ESI + 0x17c);
  if (iVar3 == 0) {
    *(undefined1 *)(iVar1 + 8) = 0;
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


//// FUNCTION FUN_00af5660 @ 00af5660 ////

void __cdecl FUN_00af5660(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0xac);
  *(undefined4 **)(param_1 + 0x198) = puVar1;
  *puVar1 = &LAB_00af5510;
  puVar1[1] = &LAB_00af50e0;
  puVar1[0xe] = 0;
  puVar1[10] = 0;
  puVar1[0xf] = 0;
  puVar1[0xb] = 0;
  puVar1[0x10] = 0;
  puVar1[0xc] = 0;
  puVar1[0x11] = 0;
  puVar1[0xd] = 0;
  return;
}


//// FUNCTION FUN_00af56b0 @ 00af56b0 ////

undefined4 FUN_00af56b0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x198);
  *(int *)(*(int *)(unaff_ESI + 0x194) + 0x14) =
       *(int *)(*(int *)(unaff_ESI + 0x194) + 0x14) +
       ((int)(*(int *)(iVar1 + 0x10) + (*(int *)(iVar1 + 0x10) >> 0x1f & 7U)) >> 3);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  uVar2 = (**(code **)(*(int *)(unaff_ESI + 0x194) + 8))();
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  iVar3 = 0;
  if (0 < *(int *)(unaff_ESI + 0x124)) {
    puVar4 = (undefined4 *)(iVar1 + 0x18);
    do {
      *puVar4 = 0;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < *(int *)(unaff_ESI + 0x124));
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(unaff_ESI + 0xfc);
  iVar3 = *(int *)(unaff_ESI + 0x17c);
  if (iVar3 == 0) {
    *(undefined1 *)(iVar1 + 8) = 0;
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


//// FUNCTION FUN_00af5740 @ 00af5740 ////

uint __cdecl FUN_00af5740(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *local_3c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10 [4];
  
  iVar10 = param_1;
  uVar2 = *(undefined4 *)(param_1 + 0x178);
  iVar3 = *(int *)(param_1 + 0x198);
  if (((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(iVar3 + 0x28) == 0)) &&
     (uVar7 = FUN_00af56b0(), (char)uVar7 == '\0')) {
    return uVar7;
  }
  if (*(char *)(iVar3 + 8) == '\0') {
    local_18 = param_1;
    local_28 = **(undefined4 **)(param_1 + 0x18);
    local_24 = (*(undefined4 **)(param_1 + 0x18))[1];
    uVar7 = *(uint *)(iVar3 + 0xc);
    iVar9 = *(int *)(iVar3 + 0x10);
    local_14 = *(undefined4 *)(iVar3 + 0x14);
    local_10[0] = *(int *)(iVar3 + 0x18);
    local_10[1] = *(undefined4 *)(iVar3 + 0x1c);
    local_10[3] = *(undefined4 *)(iVar3 + 0x24);
    piVar1 = (int *)(param_1 + 0x140);
    local_10[2] = *(undefined4 *)(iVar3 + 0x20);
    param_1 = 0;
    if (0 < *piVar1) {
      local_3c = (int *)(iVar10 + 0x144);
      do {
        puVar4 = *(undefined2 **)(param_2 + param_1 * 4);
        iVar5 = *local_3c;
        iVar6 = *(int *)(iVar3 + 0x2c + *(int *)(*(int *)(iVar10 + 0x128 + iVar5 * 4) + 0x14) * 4);
        if (iVar9 < 8) {
          uVar8 = FUN_00af4e60(&local_28,uVar7,iVar9,0);
          if ((char)uVar8 == '\0') goto LAB_00af5979;
          iVar9 = local_1c;
          uVar7 = local_20;
          if (7 < local_1c) goto LAB_00af5849;
          iVar11 = 1;
LAB_00af5872:
          uVar8 = FUN_00af4f80(&local_28,uVar7,iVar9,iVar6,iVar11);
          iVar9 = local_1c;
          uVar7 = local_20;
          uVar12 = uVar8;
          if ((int)uVar8 < 0) goto LAB_00af5979;
        }
        else {
LAB_00af5849:
          uVar8 = (int)uVar7 >> ((char)iVar9 - 8U & 0x1f) & 0xff;
          iVar11 = *(int *)(iVar6 + 0x90 + uVar8 * 4);
          if (iVar11 == 0) {
            iVar11 = 9;
            goto LAB_00af5872;
          }
          iVar9 = iVar9 - iVar11;
          uVar12 = (uint)*(byte *)(uVar8 + 0x490 + iVar6);
        }
        uVar8 = 0;
        if (uVar12 != 0) {
          if ((iVar9 < (int)uVar12) &&
             (uVar8 = FUN_00af4e60(&local_28,uVar7,iVar9,uVar12), iVar9 = local_1c, uVar7 = local_20
             , (char)uVar8 == '\0')) {
LAB_00af5979:
            return uVar8 & 0xffffff00;
          }
          iVar9 = iVar9 - uVar12;
          uVar8 = (1 << ((byte)uVar12 & 0x1f)) - 1U & (int)uVar7 >> ((byte)iVar9 & 0x1f);
          if ((int)uVar8 < *(int *)(&DAT_00d885b0 + uVar12 * 4)) {
            uVar8 = *(int *)(&DAT_00d885f0 + uVar12 * 4) + uVar8;
          }
        }
        iVar6 = local_10[iVar5];
        local_10[iVar5] = iVar6 + uVar8;
        local_3c = local_3c + 1;
        *puVar4 = (short)(iVar6 + uVar8 << ((byte)uVar2 & 0x1f));
        param_1 = param_1 + 1;
      } while (param_1 < *(int *)(iVar10 + 0x140));
    }
    **(undefined4 **)(iVar10 + 0x18) = local_28;
    *(undefined4 *)(*(int *)(iVar10 + 0x18) + 4) = local_24;
    *(undefined4 *)(iVar3 + 0x14) = local_14;
    *(int *)(iVar3 + 0x10) = iVar9;
    *(int *)(iVar3 + 0x18) = local_10[0];
    *(int *)(iVar3 + 0x1c) = local_10[1];
    *(int *)(iVar3 + 0x20) = local_10[2];
    *(uint *)(iVar3 + 0xc) = uVar7;
    *(int *)(iVar3 + 0x24) = local_10[3];
  }
  iVar10 = *(int *)(iVar3 + 0x28) + -1;
  *(int *)(iVar3 + 0x28) = iVar10;
  return CONCAT31((int3)((uint)iVar10 >> 8),1);
}


//// FUNCTION FUN_00af5990 @ 00af5990 ////

uint __cdecl FUN_00af5990(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int local_2c;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  iVar6 = *(int *)(param_1 + 0x170);
  uVar1 = *(undefined4 *)(param_1 + 0x178);
  iVar2 = *(int *)(param_1 + 0x198);
  if (((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(iVar2 + 0x28) == 0)) &&
     (uVar5 = FUN_00af56b0(), (char)uVar5 == '\0')) {
    return uVar5;
  }
  if (*(char *)(iVar2 + 8) == '\0') {
    if (*(int *)(iVar2 + 0x14) != 0) {
      iVar6 = *(int *)(iVar2 + 0x28) + -1;
      *(int *)(iVar2 + 0x28) = iVar6;
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + -1;
      return CONCAT31((int3)((uint)iVar6 >> 8),1);
    }
    local_14 = **(undefined4 **)(param_1 + 0x18);
    iVar3 = *param_2;
    local_10 = (*(undefined4 **)(param_1 + 0x18))[1];
    uVar5 = *(uint *)(iVar2 + 0xc);
    iVar8 = *(int *)(iVar2 + 0x10);
    iVar4 = *(int *)(iVar2 + 0x3c);
    iVar11 = 0;
    local_4 = param_1;
    for (local_2c = *(int *)(param_1 + 0x16c); local_2c <= iVar6; local_2c = local_2c + 1) {
      if (iVar8 < 8) {
        uVar7 = FUN_00af4e60(&local_14,uVar5,iVar8,0);
        if ((char)uVar7 == '\0') goto LAB_00af5b87;
        iVar8 = local_8;
        uVar5 = local_c;
        if (7 < local_8) goto LAB_00af5a75;
        iVar9 = 1;
LAB_00af5a9e:
        uVar7 = FUN_00af4f80(&local_14,uVar5,iVar8,iVar4,iVar9);
        iVar8 = local_8;
        uVar5 = local_c;
        if ((int)uVar7 < 0) goto LAB_00af5b87;
      }
      else {
LAB_00af5a75:
        uVar7 = (int)uVar5 >> ((char)iVar8 - 8U & 0x1f) & 0xff;
        iVar9 = *(int *)(iVar4 + 0x90 + uVar7 * 4);
        if (iVar9 == 0) {
          iVar9 = 9;
          goto LAB_00af5a9e;
        }
        uVar7 = (uint)*(byte *)(uVar7 + 0x490 + iVar4);
        iVar8 = iVar8 - iVar9;
      }
      iVar9 = (int)uVar7 >> 4;
      uVar10 = uVar7 & 0xf;
      if (uVar10 == 0) {
        if (iVar9 != 0xf) {
          iVar11 = 1 << ((byte)iVar9 & 0x1f);
          if (iVar9 != 0) {
            if ((iVar8 < iVar9) &&
               (uVar7 = FUN_00af4e60(&local_14,uVar5,iVar8,iVar9), iVar8 = local_8, uVar5 = local_c,
               (char)uVar7 == '\0')) goto LAB_00af5b87;
            iVar8 = iVar8 - iVar9;
            iVar11 = iVar11 + ((int)uVar5 >> ((byte)iVar8 & 0x1f) & iVar11 - 1U);
          }
          iVar11 = iVar11 + -1;
          break;
        }
        local_2c = local_2c + 0xf;
      }
      else {
        local_2c = local_2c + iVar9;
        if ((iVar8 < (int)uVar10) &&
           (uVar7 = FUN_00af4e60(&local_14,uVar5,iVar8,uVar10), iVar8 = local_8, uVar5 = local_c,
           (char)uVar7 == '\0')) {
LAB_00af5b87:
          return uVar7 & 0xffffff00;
        }
        iVar8 = iVar8 - uVar10;
        uVar7 = (1 << (sbyte)uVar10) - 1U & (int)uVar5 >> ((byte)iVar8 & 0x1f);
        if ((int)uVar7 < *(int *)(&DAT_00d885b0 + uVar10 * 4)) {
          uVar7 = *(int *)(&DAT_00d885f0 + uVar10 * 4) + uVar7;
        }
        *(short *)(iVar3 + *(int *)(&DAT_00d883f0 + local_2c * 4) * 2) =
             (short)(uVar7 << ((byte)uVar1 & 0x1f));
      }
    }
    **(undefined4 **)(param_1 + 0x18) = local_14;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = local_10;
    *(uint *)(iVar2 + 0xc) = uVar5;
    *(int *)(iVar2 + 0x10) = iVar8;
    *(int *)(iVar2 + 0x14) = iVar11;
  }
  iVar6 = *(int *)(iVar2 + 0x28) + -1;
  *(int *)(iVar2 + 0x28) = iVar6;
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}


//// FUNCTION FUN_00af5bf0 @ 00af5bf0 ////

uint __cdecl FUN_00af5bf0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  iVar6 = param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x178);
  iVar2 = *(int *)(param_1 + 0x198);
  if (((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(iVar2 + 0x28) == 0)) &&
     (uVar4 = FUN_00af56b0(), (char)uVar4 == '\0')) {
    return uVar4;
  }
  local_4 = param_1;
  local_14 = **(undefined4 **)(param_1 + 0x18);
  local_10 = (*(undefined4 **)(param_1 + 0x18))[1];
  uVar4 = *(uint *)(iVar2 + 0xc);
  iVar7 = *(int *)(iVar2 + 0x10);
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x140)) {
    do {
      puVar3 = *(ushort **)(param_2 + iVar8 * 4);
      if ((iVar7 < 1) &&
         (uVar5 = FUN_00af4e60(&local_14,uVar4,iVar7,1), uVar4 = local_c, iVar7 = local_8,
         (char)uVar5 == '\0')) {
        return uVar5 & 0xffffff00;
      }
      iVar7 = iVar7 + -1;
      if (((int)uVar4 >> ((byte)iVar7 & 0x1f) & 1U) != 0) {
        param_1._0_2_ = (ushort)(1 << ((byte)uVar1 & 0x1f));
        *puVar3 = *puVar3 | (ushort)param_1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(iVar6 + 0x140));
  }
  **(undefined4 **)(iVar6 + 0x18) = local_14;
  *(undefined4 *)(*(int *)(iVar6 + 0x18) + 4) = local_10;
  *(uint *)(iVar2 + 0xc) = uVar4;
  iVar6 = *(int *)(iVar2 + 0x28) + -1;
  *(int *)(iVar2 + 0x28) = iVar6;
  *(int *)(iVar2 + 0x10) = iVar7;
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}


//// FUNCTION FUN_00af60e0 @ 00af60e0 ////

void __cdecl FUN_00af60e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  int local_c;
  int *local_8;
  
  bVar8 = param_1[0x5b] != 0;
  iVar2 = param_1[0x66];
  bVar4 = false;
  if (bVar8) {
    if ((param_1[0x5c] < param_1[0x5b]) || (0x3f < param_1[0x5c])) {
      bVar4 = true;
    }
    bVar9 = param_1[0x49] == 1;
  }
  else {
    bVar9 = param_1[0x5c] == 0;
  }
  if (!bVar9) {
    bVar4 = true;
  }
  if ((param_1[0x5d] != 0) && (param_1[0x5e] != param_1[0x5d] + -1)) {
    bVar4 = true;
  }
  if ((0xd < param_1[0x5e]) || (bVar4)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x10;
    *(int *)(*param_1 + 0x18) = param_1[0x5b];
    *(int *)(*param_1 + 0x1c) = param_1[0x5c];
    *(int *)(*param_1 + 0x20) = param_1[0x5d];
    *(int *)(*param_1 + 0x24) = param_1[0x5e];
    (**(code **)*param_1)(param_1);
  }
  local_c = 0;
  if (0 < param_1[0x49]) {
    local_8 = param_1 + 0x4a;
    do {
      iVar3 = *(int *)(*local_8 + 4);
      piVar6 = (int *)(iVar3 * 0x100 + param_1[0x23]);
      if ((bVar8) && (*piVar6 < 0)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x73;
        *(int *)(*param_1 + 0x18) = iVar3;
        *(undefined4 *)(*param_1 + 0x1c) = 0;
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
      }
      iVar7 = param_1[0x5b];
      if (iVar7 <= param_1[0x5c]) {
        do {
          if (param_1[0x5d] != (piVar6[iVar7] & (piVar6[iVar7] < 0) - 1)) {
            *(undefined4 *)(*param_1 + 0x14) = 0x73;
            *(int *)(*param_1 + 0x18) = iVar3;
            *(int *)(*param_1 + 0x1c) = iVar7;
            (**(code **)(*param_1 + 4))(param_1,0xffffffff);
          }
          piVar6[iVar7] = param_1[0x5e];
          iVar7 = iVar7 + 1;
        } while (iVar7 <= param_1[0x5c]);
      }
      local_c = local_c + 1;
      local_8 = local_8 + 1;
    } while (local_c < param_1[0x49]);
  }
  if (param_1[0x5d] == 0) {
    if (bVar8) {
      *(code **)(iVar2 + 4) = FUN_00af5990;
    }
    else {
      *(code **)(iVar2 + 4) = FUN_00af5740;
    }
  }
  else if (bVar8) {
    *(undefined1 **)(iVar2 + 4) = &LAB_00af5ce0;
  }
  else {
    *(code **)(iVar2 + 4) = FUN_00af5bf0;
  }
  local_c = 0;
  if (0 < param_1[0x49]) {
    puVar5 = (undefined4 *)(iVar2 + 0x18);
    piVar6 = param_1 + 0x4a;
    do {
      if (bVar8) {
        iVar3 = *(int *)(*piVar6 + 0x18);
        piVar1 = (int *)(iVar2 + 0x2c + iVar3 * 4);
        FUN_00af4b90(param_1,'\0',iVar3,piVar1);
        *(int *)(iVar2 + 0x3c) = *piVar1;
      }
      else if (param_1[0x5d] == 0) {
        iVar3 = *(int *)(*piVar6 + 0x14);
        FUN_00af4b90(param_1,'\x01',iVar3,(int *)(iVar2 + 0x2c + iVar3 * 4));
      }
      *puVar5 = 0;
      local_c = local_c + 1;
      piVar6 = piVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (local_c < param_1[0x49]);
  }
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined1 *)(iVar2 + 8) = 0;
  *(int *)(iVar2 + 0x28) = param_1[0x3f];
  return;
}


//// FUNCTION FUN_00af6350 @ 00af6350 ////

void __cdecl FUN_00af6350(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x40);
  *(undefined4 **)(param_1 + 0x198) = puVar1;
  *puVar1 = FUN_00af60e0;
  iVar3 = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1 = (undefined4 *)
           (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x24) << 8);
  *(undefined4 **)(param_1 + 0x8c) = puVar1;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      puVar4 = puVar1;
      for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 0x40;
    } while (iVar3 < *(int *)(param_1 + 0x24));
  }
  return;
}


//// FUNCTION FUN_00af63c0 @ 00af63c0 ////

void __cdecl FUN_00af63c0(int *param_1)

{
  int iVar1;
  ushort *puVar2;
  float *pfVar3;
  ushort *puVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  short *psVar11;
  undefined4 *puVar12;
  code *local_14;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_14 = (code *)0x0;
  local_c = 0;
  if (0 < param_1[9]) {
    piVar10 = (int *)(param_1[0x67] + 0x2c);
    puVar12 = (undefined4 *)(param_1[0x31] + 0x24);
    iVar9 = 0;
    do {
      switch(*puVar12) {
      case 1:
        iVar9 = 0;
        local_14 = (code *)&LAB_00afb2d0;
        local_10 = 0;
        break;
      case 2:
        iVar9 = 0;
        local_14 = FUN_00afae60;
        local_10 = 0;
        break;
      default:
        *(undefined4 *)(*param_1 + 0x14) = 7;
        *(undefined4 *)(*param_1 + 0x18) = *puVar12;
        (**(code **)*param_1)(param_1);
        break;
      case 4:
        iVar9 = 0;
        local_14 = (code *)&LAB_00afab40;
        local_10 = 0;
        break;
      case 8:
        iVar1 = param_1[0x11];
        if (iVar1 == 0) {
          iVar9 = 0;
          local_14 = (code *)&LAB_00af9df0;
          local_10 = 0;
        }
        else if (iVar1 == 1) {
          iVar9 = 1;
          local_14 = (code *)&LAB_00afa320;
          local_10 = 1;
        }
        else if (iVar1 == 2) {
          iVar9 = 2;
          local_14 = (code *)&LAB_00afa710;
          local_10 = 2;
        }
        else {
          *(undefined4 *)(*param_1 + 0x14) = 0x30;
          (**(code **)*param_1)(param_1);
        }
      }
      piVar10[-10] = (int)local_14;
      if (((*(char *)(puVar12 + 3) != '\0') && (*piVar10 != iVar9)) &&
         (puVar2 = (ushort *)puVar12[10], puVar2 != (ushort *)0x0)) {
        *piVar10 = iVar9;
        if (iVar9 == 0) {
          iVar1 = puVar12[0xb];
          iVar5 = 0;
          do {
            *(uint *)(iVar1 + iVar5 * 4) = (uint)puVar2[iVar5];
            iVar5 = iVar5 + 1;
          } while (iVar5 < 0x40);
        }
        else if (iVar9 == 1) {
          piVar8 = (int *)(puVar12[0xb] + 8);
          puVar4 = puVar2 + 2;
          psVar11 = &DAT_00d88632;
          do {
            piVar8[-2] = (int)((uint)puVar4[-2] * (int)psVar11[-1] + 0x800) >> 0xc;
            piVar8[-1] = (int)((uint)puVar4[-1] * (int)*psVar11 + 0x800) >> 0xc;
            *piVar8 = (int)((int)*(short *)((int)&DAT_00d88630 + -(int)puVar2 + (int)puVar4) *
                            (uint)*puVar4 + 0x800) >> 0xc;
            piVar8[1] = (int)((int)*(short *)((int)&DAT_00d88632 + -(int)puVar2 + (int)puVar4) *
                              (uint)puVar4[1] + 0x800) >> 0xc;
            psVar11 = psVar11 + 4;
            piVar8 = piVar8 + 4;
            puVar4 = puVar4 + 4;
            iVar9 = local_10;
          } while ((int)psVar11 < 0xd886b2);
        }
        else if (iVar9 == 2) {
          pfVar3 = (float *)puVar12[0xb];
          pdVar6 = (double *)&DAT_00d886b0;
          do {
            *pfVar3 = (float)*puVar2 * (float)*pdVar6;
            pdVar7 = pdVar6 + 1;
            pfVar3[1] = (float)puVar2[1] * (float)*pdVar6 * 1.3870399;
            pfVar3[2] = (float)puVar2[2] * (float)*pdVar6 * 1.306563;
            pfVar3[3] = (float)puVar2[3] * (float)*pdVar6 * 1.1758755;
            pfVar3[4] = (float)puVar2[4] * (float)*pdVar6;
            pfVar3[5] = (float)puVar2[5] * (float)*pdVar6 * 0.78569496;
            pfVar3[6] = (float)puVar2[6] * (float)*pdVar6 * 0.5411961;
            pfVar3[7] = (float)puVar2[7] * (float)*pdVar6 * 0.27589938;
            puVar2 = puVar2 + 8;
            pfVar3 = pfVar3 + 8;
            pdVar6 = pdVar7;
          } while ((int)pdVar7 < 0xd886f0);
        }
        else {
          *(undefined4 *)(*param_1 + 0x14) = 0x30;
          (**(code **)*param_1)(param_1);
        }
      }
      local_c = local_c + 1;
      piVar10 = piVar10 + 1;
      puVar12 = puVar12 + 0x15;
    } while (local_c < param_1[9]);
  }
  return;
}


//// FUNCTION FUN_00af66f0 @ 00af66f0 ////

void __cdecl FUN_00af66f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = param_1;
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x54);
  param_1[0x67] = puVar2;
  *puVar2 = FUN_00af63c0;
  if (0 < (int)param_1[9]) {
    param_1 = (undefined4 *)(param_1[0x31] + 0x50);
    puVar2 = puVar2 + 0xb;
    iVar5 = 0;
    do {
      puVar3 = (undefined4 *)(**(code **)puVar1[1])(puVar1,1,0x100);
      *param_1 = puVar3;
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      *puVar2 = 0xffffffff;
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 0x15;
      puVar2 = puVar2 + 1;
    } while (iVar5 < (int)puVar1[9]);
  }
  return;
}


//// FUNCTION FUN_00af67f0 @ 00af67f0 ////

void __cdecl
FUN_00af67f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int *param_6)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x18c);
  puVar1 = (uint *)(iVar2 + 0x18);
  if (*(int *)(iVar2 + 0x18) == 0) {
    uVar4 = (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                      (param_1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0x14),
                       *(undefined4 *)(iVar2 + 0x10),1);
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
  }
  uVar3 = *puVar1;
  (**(code **)(*(int *)(param_1 + 0x1a0) + 4))
            (param_1,param_2,param_3,param_4,*(undefined4 *)(iVar2 + 0xc),puVar1,
             *(undefined4 *)(iVar2 + 0x10));
  if (uVar3 < *puVar1) {
    iVar5 = *puVar1 - uVar3;
    (**(code **)(*(int *)(param_1 + 0x1a8) + 4))(param_1,*(int *)(iVar2 + 0xc) + uVar3 * 4,0,iVar5);
    *param_6 = *param_6 + iVar5;
  }
  if (*(uint *)(iVar2 + 0x10) <= *puVar1) {
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + *(uint *)(iVar2 + 0x10);
    *puVar1 = 0;
  }
  return;
}


//// FUNCTION FUN_00af6890 @ 00af6890 ////

void __cdecl FUN_00af6890(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int in_stack_00000014;
  int *in_stack_00000018;
  int in_stack_0000001c;
  
  iVar1 = *(int *)(param_1 + 0x18c);
  if (*(int *)(iVar1 + 0x18) == 0) {
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                      (param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x14),
                       *(undefined4 *)(iVar1 + 0x10),0);
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
  }
  uVar4 = *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0x18);
  uVar3 = in_stack_0000001c - *in_stack_00000018;
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  uVar3 = *(int *)(param_1 + 0x60) - *(int *)(iVar1 + 0x14);
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  (**(code **)(*(int *)(param_1 + 0x1a8) + 4))
            (param_1,*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 0x18) * 4,
             in_stack_00000014 + *in_stack_00000018 * 4,uVar4);
  *in_stack_00000018 = *in_stack_00000018 + uVar4;
  uVar4 = *(int *)(iVar1 + 0x18) + uVar4;
  *(uint *)(iVar1 + 0x18) = uVar4;
  if (*(uint *)(iVar1 + 0x10) <= uVar4) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + *(uint *)(iVar1 + 0x10);
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  return;
}


//// FUNCTION FUN_00af6a30 @ 00af6a30 ////

void __cdecl FUN_00af6a30(int param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x1c);
  *(undefined4 **)(param_1 + 0x18c) = puVar2;
  *puVar2 = &LAB_00af6930;
  puVar2[2] = 0;
  puVar2[3] = 0;
  if (*(char *)(param_1 + 0x4a) != '\0') {
    iVar5 = *(int *)(param_1 + 0x114);
    puVar2[4] = iVar5;
    if (param_2 != '\0') {
      iVar1 = *(int *)(param_1 + 4);
      iVar3 = FUN_00af3340(*(int *)(param_1 + 0x60),iVar5);
      uVar4 = (**(code **)(iVar1 + 0x10))
                        (param_1,1,0,*(int *)(param_1 + 100) * *(int *)(param_1 + 0x5c),iVar3,iVar5)
      ;
      puVar2[2] = uVar4;
      return;
    }
    uVar4 = (**(code **)(*(int *)(param_1 + 4) + 8))
                      (param_1,1,*(int *)(param_1 + 100) * *(int *)(param_1 + 0x5c),iVar5);
    puVar2[3] = uVar4;
  }
  return;
}


//// FUNCTION FUN_00af6ae0 @ 00af6ae0 ////

void __cdecl
FUN_00af6ae0(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,
            int param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar3 = param_1;
  iVar2 = *(int *)(param_1 + 0x1a0);
  if (*(int *)(param_1 + 0x114) <= *(int *)(iVar2 + 0x5c)) {
    piVar1 = (int *)(param_1 + 0x24);
    param_1 = *(int *)(param_1 + 0xc4);
    iVar5 = 0;
    if (0 < *piVar1) {
      iVar6 = iVar2 + 0xc;
      do {
        (**(code **)(iVar6 + 0x28))
                  (iVar3,param_1,
                   *(int *)(param_2 + iVar5 * 4) + *(int *)(iVar6 + 0x58) * *param_3 * 4,iVar6);
        iVar5 = iVar5 + 1;
        param_1 = param_1 + 0x54;
        iVar6 = iVar6 + 4;
      } while (iVar5 < *(int *)(iVar3 + 0x24));
    }
    *(undefined4 *)(iVar2 + 0x5c) = 0;
  }
  uVar7 = *(int *)(iVar3 + 0x114) - *(int *)(iVar2 + 0x5c);
  if (*(uint *)(iVar2 + 0x60) < uVar7) {
    uVar7 = *(uint *)(iVar2 + 0x60);
  }
  uVar4 = param_7 - *param_6;
  if (uVar4 < uVar7) {
    uVar7 = uVar4;
  }
  (**(code **)(*(int *)(iVar3 + 0x1a4) + 4))
            (iVar3,iVar2 + 0xc,*(undefined4 *)(iVar2 + 0x5c),param_5 + *param_6 * 4,uVar7);
  *param_6 = *param_6 + uVar7;
  iVar5 = *(int *)(iVar2 + 0x5c) + uVar7;
  *(uint *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) - uVar7;
  *(int *)(iVar2 + 0x5c) = iVar5;
  if (*(int *)(iVar3 + 0x114) <= iVar5) {
    *param_3 = *param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00af6be0 @ 00af6be0 ////

void __cdecl FUN_00af6be0(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int local_c;
  
  iVar3 = *param_4;
  iVar4 = *(int *)(param_1 + 0x1a0) + *(int *)(param_2 + 4);
  bVar1 = *(byte *)(iVar4 + 0x8c);
  uVar10 = (uint)bVar1;
  uVar5 = (uint)*(byte *)(iVar4 + 0x96);
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x114)) {
    param_4 = param_3;
    do {
      puVar9 = *(undefined4 **)(iVar3 + local_c * 4);
      puVar6 = (undefined1 *)*param_4;
      puVar8 = (undefined4 *)(*(int *)(param_1 + 0x5c) + (int)puVar9);
      while (puVar9 < puVar8) {
        uVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        if (uVar10 != 0) {
          puVar11 = puVar9;
          for (uVar7 = (uint)(bVar1 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
            puVar11 = puVar11 + 1;
          }
          for (uVar7 = uVar10 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar11 = uVar2;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          puVar9 = (undefined4 *)((int)puVar9 + uVar10);
        }
      }
      if (1 < uVar5) {
        FUN_00af3360(iVar3,local_c,iVar3,local_c + 1,uVar5 - 1,*(uint *)(param_1 + 0x5c));
      }
      local_c = local_c + uVar5;
      param_4 = param_4 + 1;
    } while (local_c < *(int *)(param_1 + 0x114));
  }
  return;
}


//// FUNCTION FUN_00af6e80 @ 00af6e80 ////

void __cdecl FUN_00af6e80(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  int local_c;
  
  iVar1 = *param_4;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x114)) {
    do {
      local_c = 0;
      do {
        pbVar7 = (byte *)*param_3;
        if (local_c == 0) {
          pbVar9 = (byte *)param_3[-1];
        }
        else {
          pbVar9 = (byte *)param_3[1];
        }
        puVar2 = *(undefined1 **)(iVar1 + iVar3 * 4);
        iVar3 = iVar3 + 1;
        iVar8 = (uint)*pbVar7 * 3 + (uint)*pbVar9;
        iVar4 = (uint)pbVar7[1] * 3 + (uint)pbVar9[1];
        *puVar2 = (char)(iVar8 * 4 + 8 >> 4);
        pbVar9 = pbVar9 + 2;
        pbVar7 = pbVar7 + 2;
        puVar2[1] = (char)(iVar8 * 3 + 7 + iVar4 >> 4);
        for (iVar6 = *(int *)(param_2 + 0x28) + -2; puVar2 = puVar2 + 2, iVar6 != 0;
            iVar6 = iVar6 + -1) {
          iVar5 = (uint)*pbVar7 * 3 + (uint)*pbVar9;
          pbVar9 = pbVar9 + 1;
          *puVar2 = (char)(iVar4 * 3 + 8 + iVar8 >> 4);
          pbVar7 = pbVar7 + 1;
          puVar2[1] = (char)(iVar4 * 3 + 7 + iVar5 >> 4);
          iVar8 = iVar4;
          iVar4 = iVar5;
        }
        *puVar2 = (char)(iVar4 * 3 + 8 + iVar8 >> 4);
        puVar2[1] = (char)(iVar4 * 4 + 7 >> 4);
        local_c = local_c + 1;
      } while (local_c < 2);
      param_3 = param_3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x114));
  }
  return;
}


//// FUNCTION FUN_00af6fb0 @ 00af6fb0 ////

void __cdecl FUN_00af6fb0(int *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iStack_10;
  undefined1 uStack_c;
  
  puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0xa0);
  param_1[0x68] = (int)puVar3;
  *puVar3 = &LAB_00af6ac0;
  puVar3[1] = FUN_00af6ae0;
  *(undefined1 *)(puVar3 + 2) = 0;
  if (*(char *)((int)param_1 + 0x10a) != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x19;
    (**(code **)*param_1)(param_1);
  }
  if (((char)param_1[0x12] == '\0') || (bVar2 = true, param_1[0x46] < 2)) {
    bVar2 = false;
  }
  iStack_10 = 0;
  if (0 < param_1[9]) {
    piVar8 = (int *)(param_1[0x31] + 0x24);
    puVar7 = puVar3 + 0xd;
    do {
      iVar4 = (piVar8[-7] * *piVar8) / param_1[0x46];
      iVar5 = (piVar8[-6] * *piVar8) / param_1[0x46];
      iVar9 = param_1[0x45];
      iVar1 = param_1[0x44];
      puVar7[0xc] = iVar5;
      if ((char)piVar8[3] == '\0') {
        *puVar7 = &LAB_00af6bd0;
      }
      else if ((iVar4 == iVar1) && (iVar5 == iVar9)) {
        *puVar7 = &LAB_00af6bc0;
      }
      else {
        if (iVar4 * 2 == iVar1) {
          if (iVar5 == iVar9) {
            if ((bVar2) && (2 < (uint)piVar8[1])) {
              *puVar7 = &LAB_00af6dc0;
            }
            else {
              *puVar7 = &LAB_00af6ce0;
            }
          }
          else {
            if ((iVar4 * 2 != iVar1) || (iVar5 * 2 != iVar9)) goto LAB_00af70ff;
            if ((bVar2) && (2 < (uint)piVar8[1])) {
              *puVar7 = FUN_00af6e80;
              *(undefined1 *)(puVar3 + 2) = 1;
            }
            else {
              *puVar7 = &LAB_00af6d40;
            }
          }
        }
        else {
LAB_00af70ff:
          if ((iVar1 % iVar4 == 0) && (iVar9 % iVar5 == 0)) {
            uStack_c = (undefined1)(iVar1 / iVar4);
            *puVar7 = FUN_00af6be0;
            *(undefined1 *)(iStack_10 + 0x8c + (int)puVar3) = uStack_c;
            *(char *)(iStack_10 + 0x96 + (int)puVar3) = (char)(iVar9 / iVar5);
          }
          else {
            *(undefined4 *)(*param_1 + 0x14) = 0x26;
            (**(code **)*param_1)(param_1);
          }
        }
        iVar9 = param_1[0x45];
        iVar1 = param_1[1];
        iVar4 = FUN_00af3340(param_1[0x17],param_1[0x44]);
        uVar6 = (**(code **)(iVar1 + 8))(param_1,1,iVar4,iVar9);
        puVar7[-10] = uVar6;
      }
      iStack_10 = iStack_10 + 1;
      puVar7 = puVar7 + 1;
      piVar8 = piVar8 + 0x15;
    } while (iStack_10 < param_1[9]);
  }
  return;
}


//// FUNCTION FUN_00af71a0 @ 00af71a0 ////

void FUN_00af71a0(void)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(in_EAX + 0x1a4);
  uVar2 = (*(code *)**(undefined4 **)(in_EAX + 4))();
  *(undefined4 *)(iVar1 + 8) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(in_EAX + 4))();
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(in_EAX + 4))();
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(in_EAX + 4))();
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  iVar3 = 0;
  uStack_4 = 0x5b6900;
  iVar6 = -0xe25100;
  iVar5 = -0xb2f480;
  iVar4 = 0x2c8d00;
  do {
    *(int *)(iVar3 + *(int *)(iVar1 + 8)) = iVar5 >> 0x10;
    *(int *)(iVar3 + *(int *)(iVar1 + 0xc)) = iVar6 >> 0x10;
    *(int *)(iVar3 + *(int *)(iVar1 + 0x10)) = uStack_4;
    *(int *)(iVar3 + *(int *)(iVar1 + 0x14)) = iVar4;
    uStack_4 = uStack_4 + -0xb6d2;
    iVar4 = iVar4 + -0x581a;
    iVar5 = iVar5 + 0x166e9;
    iVar6 = iVar6 + 0x1c5a2;
    iVar3 = iVar3 + 4;
  } while (-0x2b34e7 < iVar4);
  return;
}


//// FUNCTION FUN_00af7270 @ 00af7270 ////

void __cdecl FUN_00af7270(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  
  iVar5 = *(int *)(param_1 + 0x5c);
  iVar6 = *(int *)(param_1 + 0x1a4);
  iVar7 = *(int *)(param_1 + 0x120);
  iVar8 = *(int *)(iVar6 + 8);
  iVar9 = *(int *)(iVar6 + 0xc);
  iVar10 = *(int *)(iVar6 + 0x10);
  iVar6 = *(int *)(iVar6 + 0x14);
  if (-1 < param_5 + -1) {
    iVar16 = param_3 << 2;
    do {
      piVar1 = (int *)(iVar16 + *param_2);
      piVar2 = (int *)(iVar16 + param_2[2]);
      pbVar11 = *(byte **)(iVar16 + param_2[1]);
      puVar12 = (undefined1 *)*param_4;
      param_4 = param_4 + 1;
      iVar16 = iVar16 + 4;
      if (iVar5 != 0) {
        iVar14 = *piVar1 - (int)pbVar11;
        iVar13 = *piVar2 - (int)pbVar11;
        param_1 = iVar5;
        do {
          bVar3 = pbVar11[iVar13];
          uVar15 = (uint)pbVar11[iVar14];
          bVar4 = *pbVar11;
          *puVar12 = *(undefined1 *)(*(int *)(iVar8 + (uint)bVar3 * 4) + uVar15 + iVar7);
          puVar12[1] = *(undefined1 *)
                        ((*(int *)(iVar6 + (uint)bVar4 * 4) + *(int *)(iVar10 + (uint)bVar3 * 4) >>
                         0x10) + uVar15 + iVar7);
          puVar12[2] = *(undefined1 *)(*(int *)(iVar9 + (uint)bVar4 * 4) + uVar15 + iVar7);
          puVar12 = puVar12 + 3;
          pbVar11 = pbVar11 + 1;
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}


//// FUNCTION FUN_00af7390 @ 00af7390 ////

void __cdecl FUN_00af7390(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x5c);
  if (-1 < param_5 + -1) {
    iVar5 = param_3 << 2;
    param_1 = param_5;
    do {
      iVar6 = 0;
      if (0 < iVar1) {
        do {
          puVar4 = *(undefined1 **)(iVar5 + *(int *)(param_2 + iVar6 * 4));
          puVar3 = (undefined1 *)(*param_4 + iVar6);
          for (iVar7 = iVar2; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + iVar1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar1);
      }
      param_4 = param_4 + 1;
      iVar5 = iVar5 + 4;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


//// FUNCTION FUN_00af74a0 @ 00af74a0 ////

void __cdecl FUN_00af74a0(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  
  iVar6 = *(int *)(param_1 + 0x5c);
  iVar7 = *(int *)(param_1 + 0x1a4);
  iVar8 = *(int *)(param_1 + 0x120);
  iVar9 = *(int *)(iVar7 + 8);
  iVar10 = *(int *)(iVar7 + 0xc);
  iVar11 = *(int *)(iVar7 + 0x10);
  iVar7 = *(int *)(iVar7 + 0x14);
  if (-1 < param_5 + -1) {
    iVar15 = param_3 << 2;
    do {
      piVar1 = (int *)(iVar15 + *param_2);
      piVar2 = (int *)(iVar15 + param_2[2]);
      pbVar12 = *(byte **)(iVar15 + param_2[1]);
      piVar3 = (int *)(iVar15 + param_2[3]);
      puVar13 = (undefined1 *)*param_4;
      param_4 = param_4 + 1;
      iVar15 = iVar15 + 4;
      if (iVar6 != 0) {
        iVar16 = *piVar1 - (int)pbVar12;
        iVar14 = *piVar2 - (int)pbVar12;
        iVar18 = *piVar3 - (int)pbVar12;
        param_1 = iVar6;
        do {
          bVar4 = pbVar12[iVar14];
          uVar17 = (uint)pbVar12[iVar16];
          bVar5 = *pbVar12;
          *puVar13 = *(undefined1 *)(((iVar8 - *(int *)(iVar9 + (uint)bVar4 * 4)) - uVar17) + 0xff);
          puVar13[1] = *(undefined1 *)
                        (((iVar8 - (*(int *)(iVar7 + (uint)bVar5 * 4) +
                                    *(int *)(iVar11 + (uint)bVar4 * 4) >> 0x10)) - uVar17) + 0xff);
          puVar13[2] = *(undefined1 *)
                        (((iVar8 - *(int *)(iVar10 + (uint)bVar5 * 4)) - uVar17) + 0xff);
          puVar13[3] = pbVar12[iVar18];
          pbVar12 = pbVar12 + 1;
          param_1 = param_1 + -1;
          puVar13 = puVar13 + 4;
        } while (param_1 != 0);
      }
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}


//// FUNCTION FUN_00af7600 @ 00af7600 ////

void __cdecl FUN_00af7600(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x18);
  param_1[0x69] = (int)puVar1;
  *puVar1 = &DAT_00af75f0;
  switch(param_1[10]) {
  case 1:
    if (param_1[9] != 1) {
LAB_00af766b:
      *(undefined4 *)(*param_1 + 0x14) = 10;
      (**(code **)*param_1)(param_1);
    }
    break;
  case 2:
  case 3:
    if (param_1[9] != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 10;
      (**(code **)*param_1)(param_1);
    }
    break;
  case 4:
  case 5:
    if (param_1[9] != 4) {
      *(undefined4 *)(*param_1 + 0x14) = 10;
      (**(code **)*param_1)(param_1);
    }
    break;
  default:
    if (param_1[9] < 1) goto LAB_00af766b;
  }
  iVar2 = param_1[0xb];
  if (iVar2 == 1) {
    param_1[0x19] = 1;
    if ((param_1[10] == 1) || (param_1[10] == 3)) {
      puVar1[1] = &LAB_00af7410;
      iVar2 = 1;
      if (1 < param_1[9]) {
        iVar3 = 0x54;
        do {
          *(undefined1 *)(param_1[0x31] + 0x30 + iVar3) = 0;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x54;
        } while (iVar2 < param_1[9]);
      }
      goto LAB_00af7796;
    }
  }
  else {
    if (iVar2 == 2) {
      iVar2 = param_1[10];
      param_1[0x19] = 3;
      if (iVar2 == 3) {
        puVar1[1] = FUN_00af7270;
        FUN_00af71a0();
      }
      else if (iVar2 == 1) {
        puVar1[1] = &LAB_00af7440;
      }
      else if (iVar2 == 2) {
        puVar1[1] = FUN_00af7390;
      }
      else {
        *(undefined4 *)(*param_1 + 0x14) = 0x1b;
        (**(code **)*param_1)(param_1);
      }
      goto LAB_00af7796;
    }
    if (iVar2 == 4) {
      param_1[0x19] = 4;
      if (param_1[10] == 5) {
        puVar1[1] = FUN_00af74a0;
        FUN_00af71a0();
      }
      else if (param_1[10] == 4) {
        puVar1[1] = FUN_00af7390;
      }
      else {
        *(undefined4 *)(*param_1 + 0x14) = 0x1b;
        (**(code **)*param_1)(param_1);
      }
      goto LAB_00af7796;
    }
    if (iVar2 == param_1[10]) {
      param_1[0x19] = param_1[9];
      puVar1[1] = FUN_00af7390;
      goto LAB_00af7796;
    }
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x1b;
  (**(code **)*param_1)(param_1);
LAB_00af7796:
  if (*(char *)((int)param_1 + 0x4a) == '\0') {
    param_1[0x1a] = param_1[0x19];
    return;
  }
  param_1[0x1a] = 1;
  return;
}


//// FUNCTION FUN_00af77d0 @ 00af77d0 ////

void FUN_00af77d0(void)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(in_EAX + 0x1a0);
  uVar2 = (*(code *)**(undefined4 **)(in_EAX + 4))();
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(in_EAX + 4))();
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(in_EAX + 4))();
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(in_EAX + 4))();
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  iVar3 = 0;
  uStack_4 = 0x5b6900;
  iVar6 = -0xe25100;
  iVar5 = -0xb2f480;
  iVar4 = 0x2c8d00;
  do {
    *(int *)(iVar3 + *(int *)(iVar1 + 0x10)) = iVar5 >> 0x10;
    *(int *)(iVar3 + *(int *)(iVar1 + 0x14)) = iVar6 >> 0x10;
    *(int *)(iVar3 + *(int *)(iVar1 + 0x18)) = uStack_4;
    *(int *)(iVar3 + *(int *)(iVar1 + 0x1c)) = iVar4;
    uStack_4 = uStack_4 + -0xb6d2;
    iVar4 = iVar4 + -0x581a;
    iVar5 = iVar5 + 0x166e9;
    iVar6 = iVar6 + 0x1c5a2;
    iVar3 = iVar3 + 4;
  } while (-0x2b34e7 < iVar4);
  return;
}


//// FUNCTION FUN_00af79d0 @ 00af79d0 ////

void __cdecl FUN_00af79d0(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  byte *pbVar17;
  
  iVar3 = *(int *)(param_1 + 0x1a0);
  iVar4 = *(int *)(iVar3 + 0x10);
  iVar5 = *(int *)(param_1 + 0x120);
  iVar6 = *(int *)(iVar3 + 0x14);
  iVar7 = *(int *)(iVar3 + 0x18);
  iVar3 = *(int *)(iVar3 + 0x1c);
  pbVar17 = *(byte **)(*param_2 + param_3 * 4);
  pbVar13 = *(byte **)(param_2[2] + param_3 * 4);
  pbVar15 = *(byte **)(param_2[1] + param_3 * 4);
  puVar11 = (undefined1 *)*param_4;
  for (uVar12 = *(uint *)(param_1 + 0x5c) >> 1; uVar12 != 0; uVar12 = uVar12 - 1) {
    bVar1 = *pbVar13;
    bVar2 = *pbVar15;
    pbVar15 = pbVar15 + 1;
    pbVar13 = pbVar13 + 1;
    iVar8 = *(int *)(iVar4 + (uint)bVar1 * 4);
    iVar16 = *(int *)(iVar3 + (uint)bVar2 * 4);
    iVar9 = *(int *)(iVar7 + (uint)bVar1 * 4);
    uVar14 = (uint)*pbVar17;
    iVar10 = *(int *)(iVar6 + (uint)bVar2 * 4);
    *puVar11 = *(undefined1 *)(iVar8 + uVar14 + iVar5);
    iVar16 = iVar16 + iVar9 >> 0x10;
    puVar11[1] = *(undefined1 *)(iVar16 + uVar14 + iVar5);
    puVar11[2] = *(undefined1 *)(iVar5 + uVar14 + iVar10);
    uVar14 = (uint)pbVar17[1];
    puVar11[3] = *(undefined1 *)(iVar8 + uVar14 + iVar5);
    puVar11[4] = *(undefined1 *)(iVar16 + uVar14 + iVar5);
    puVar11[5] = *(undefined1 *)(iVar5 + uVar14 + iVar10);
    pbVar17 = pbVar17 + 2;
    puVar11 = puVar11 + 6;
  }
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    iVar3 = *(int *)(iVar3 + (uint)*pbVar15 * 4);
    iVar7 = *(int *)(iVar7 + (uint)*pbVar13 * 4);
    uVar12 = (uint)*pbVar17;
    iVar6 = *(int *)(iVar6 + (uint)*pbVar15 * 4);
    *puVar11 = *(undefined1 *)(*(int *)(iVar4 + (uint)*pbVar13 * 4) + uVar12 + iVar5);
    puVar11[1] = *(undefined1 *)(uVar12 + (iVar3 + iVar7 >> 0x10) + iVar5);
    puVar11[2] = *(undefined1 *)(uVar12 + iVar6 + iVar5);
  }
  return;
}


//// FUNCTION FUN_00af7b20 @ 00af7b20 ////

void __cdecl FUN_00af7b20(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  int iVar17;
  int iVar18;
  
  iVar18 = *(int *)(param_1 + 0x1a0);
  iVar3 = *(int *)(iVar18 + 0x10);
  iVar4 = *(int *)(param_1 + 0x120);
  iVar5 = *(int *)(iVar18 + 0x14);
  iVar6 = *(int *)(iVar18 + 0x18);
  iVar18 = *(int *)(iVar18 + 0x1c);
  puVar1 = (undefined4 *)(*param_2 + param_3 * 8);
  pbVar14 = (byte *)*puVar1;
  pbVar15 = (byte *)puVar1[1];
  pbVar11 = *(byte **)(param_2[1] + param_3 * 4);
  puVar10 = (undefined1 *)*param_4;
  puVar16 = (undefined1 *)param_4[1];
  pbVar9 = *(byte **)(param_2[2] + param_3 * 4);
  for (uVar12 = *(uint *)(param_1 + 0x5c) >> 1; uVar12 != 0; uVar12 = uVar12 - 1) {
    bVar2 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    iVar7 = *(int *)(iVar3 + (uint)*pbVar9 * 4);
    iVar8 = *(int *)(iVar5 + (uint)bVar2 * 4);
    uVar13 = (uint)*pbVar14;
    iVar17 = *(int *)(iVar18 + (uint)bVar2 * 4) + *(int *)(iVar6 + (uint)*pbVar9 * 4) >> 0x10;
    *puVar10 = *(undefined1 *)(uVar13 + iVar7 + iVar4);
    puVar10[1] = *(undefined1 *)(uVar13 + iVar17 + iVar4);
    puVar10[2] = *(undefined1 *)(uVar13 + iVar8 + iVar4);
    uVar13 = (uint)pbVar14[1];
    pbVar14 = pbVar14 + 2;
    puVar10[3] = *(undefined1 *)(uVar13 + iVar7 + iVar4);
    puVar10[4] = *(undefined1 *)(uVar13 + iVar17 + iVar4);
    puVar10[5] = *(undefined1 *)(uVar13 + iVar8 + iVar4);
    uVar13 = (uint)*pbVar15;
    puVar10 = puVar10 + 6;
    *puVar16 = *(undefined1 *)(uVar13 + iVar7 + iVar4);
    puVar16[1] = *(undefined1 *)(uVar13 + iVar17 + iVar4);
    puVar16[2] = *(undefined1 *)(uVar13 + iVar8 + iVar4);
    uVar13 = (uint)pbVar15[1];
    pbVar15 = pbVar15 + 2;
    puVar16[3] = *(undefined1 *)(uVar13 + iVar7 + iVar4);
    puVar16[4] = *(undefined1 *)(uVar13 + iVar17 + iVar4);
    puVar16[5] = *(undefined1 *)(uVar13 + iVar8 + iVar4);
    puVar16 = puVar16 + 6;
    pbVar9 = pbVar9 + 1;
  }
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    iVar3 = *(int *)(iVar3 + (uint)*pbVar9 * 4);
    iVar18 = *(int *)(iVar18 + (uint)*pbVar11 * 4);
    iVar6 = *(int *)(iVar6 + (uint)*pbVar9 * 4);
    iVar5 = *(int *)(iVar5 + (uint)*pbVar11 * 4);
    uVar12 = (uint)*pbVar14;
    *puVar10 = *(undefined1 *)(iVar3 + uVar12 + iVar4);
    iVar18 = iVar18 + iVar6 >> 0x10;
    puVar10[1] = *(undefined1 *)(iVar18 + uVar12 + iVar4);
    puVar10[2] = *(undefined1 *)(iVar4 + uVar12 + iVar5);
    uVar12 = (uint)*pbVar15;
    *puVar16 = *(undefined1 *)(iVar3 + uVar12 + iVar4);
    puVar16[1] = *(undefined1 *)(iVar18 + uVar12 + iVar4);
    puVar16[2] = *(undefined1 *)(uVar12 + iVar5 + iVar4);
  }
  return;
}


//// FUNCTION FUN_00af7d50 @ 00af7d50 ////

void __cdecl FUN_00af7d50(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x30);
  *(undefined4 **)(param_1 + 0x1a0) = puVar1;
  *puVar1 = &LAB_00af78a0;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[10] = *(int *)(param_1 + 100) * *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x114) == 2) {
    puVar1[1] = &LAB_00af78c0;
    puVar1[3] = FUN_00af7b20;
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,puVar1[10]);
    puVar1[8] = uVar2;
    FUN_00af77d0();
    return;
  }
  puVar1[8] = 0;
  puVar1[1] = &LAB_00af7990;
  puVar1[3] = FUN_00af79d0;
  FUN_00af77d0();
  return;
}


//// FUNCTION FUN_00af7eb0 @ 00af7eb0 ////

void __thiscall FUN_00af7eb0(void *this,int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_4;
  
  iVar2 = *(int *)(*(int *)((int)this + 0x1a8) + 0x18);
  local_10 = *param_1;
  local_14 = param_1[5];
  local_4 = param_1[3];
  local_18 = param_1[1];
  local_1c = param_1[2];
  iVar8 = param_1[4];
  iVar3 = local_10;
  if (local_10 < local_18) {
    do {
      if (local_1c <= local_4) {
        psVar4 = (short *)(*(int *)(iVar2 + iVar3 * 4) + (local_1c * 0x20 + iVar8) * 2);
        iVar7 = iVar8;
        iVar6 = local_1c;
        psVar5 = psVar4;
        do {
          for (; iVar7 <= local_14; iVar7 = iVar7 + 1) {
            sVar1 = *psVar4;
            psVar4 = psVar4 + 1;
            if (sVar1 != 0) {
              *param_1 = iVar3;
              local_10 = iVar3;
              goto LAB_00af7f65;
            }
          }
          iVar6 = iVar6 + 1;
          psVar4 = psVar5 + 0x20;
          iVar7 = iVar8;
          psVar5 = psVar4;
        } while (iVar6 <= local_4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= local_18);
LAB_00af7f65:
    iVar3 = local_18;
    if (local_10 < local_18) {
      do {
        if (local_1c <= local_4) {
          psVar4 = (short *)(*(int *)(iVar2 + iVar3 * 4) + (local_1c * 0x20 + iVar8) * 2);
          iVar7 = iVar8;
          iVar6 = local_1c;
          psVar5 = psVar4;
          do {
            for (; iVar7 <= local_14; iVar7 = iVar7 + 1) {
              sVar1 = *psVar4;
              psVar4 = psVar4 + 1;
              if (sVar1 != 0) {
                param_1[1] = iVar3;
                local_18 = iVar3;
                goto LAB_00af7fea;
              }
            }
            iVar6 = iVar6 + 1;
            psVar4 = psVar5 + 0x20;
            iVar7 = iVar8;
            psVar5 = psVar4;
          } while (iVar6 <= local_4);
        }
        iVar3 = iVar3 + -1;
      } while (local_10 <= iVar3);
    }
  }
LAB_00af7fea:
  if (local_1c < local_4) {
    iVar7 = (local_1c * 0x20 + iVar8) * 2;
    iVar3 = local_10;
    local_c = local_1c;
    do {
      for (; iVar3 <= local_18; iVar3 = iVar3 + 1) {
        psVar4 = (short *)(*(int *)(iVar2 + iVar3 * 4) + iVar7);
        for (iVar6 = iVar8; iVar6 <= local_14; iVar6 = iVar6 + 1) {
          sVar1 = *psVar4;
          psVar4 = psVar4 + 1;
          if (sVar1 != 0) {
            param_1[2] = local_c;
            local_1c = local_c;
            goto LAB_00af806a;
          }
        }
      }
      local_c = local_c + 1;
      iVar7 = iVar7 + 0x40;
      iVar3 = local_10;
    } while (local_c <= local_4);
LAB_00af806a:
    if (local_1c < local_4) {
      iVar7 = (local_4 * 0x20 + iVar8) * 2;
      iVar3 = local_10;
      local_c = local_4;
      do {
        for (; iVar3 <= local_18; iVar3 = iVar3 + 1) {
          psVar4 = (short *)(*(int *)(iVar2 + iVar3 * 4) + iVar7);
          for (iVar6 = iVar8; iVar6 <= local_14; iVar6 = iVar6 + 1) {
            sVar1 = *psVar4;
            psVar4 = psVar4 + 1;
            if (sVar1 != 0) {
              param_1[3] = local_c;
              local_4 = local_c;
              goto LAB_00af80ea;
            }
          }
        }
        local_c = local_c + -1;
        iVar7 = iVar7 + -0x40;
        iVar3 = local_10;
      } while (local_1c <= local_c);
    }
  }
LAB_00af80ea:
  local_c = iVar8;
  if (iVar8 < local_14) {
    do {
      if (local_10 <= local_18) {
        iVar3 = local_10;
        do {
          psVar4 = (short *)(*(int *)(iVar2 + iVar3 * 4) + (local_1c * 0x20 + local_c) * 2);
          for (iVar7 = local_1c; iVar7 <= local_4; iVar7 = iVar7 + 1) {
            if (*psVar4 != 0) {
              param_1[4] = local_c;
              iVar8 = local_c;
              goto LAB_00af8159;
            }
            psVar4 = psVar4 + 0x20;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 <= local_18);
      }
      local_c = local_c + 1;
    } while (local_c <= local_14);
LAB_00af8159:
    local_c = local_14;
    if (iVar8 < local_14) {
      do {
        if (local_10 <= local_18) {
          iVar3 = local_10;
          do {
            psVar4 = (short *)(*(int *)(iVar2 + iVar3 * 4) + (local_1c * 0x20 + local_c) * 2);
            for (iVar7 = local_1c; iVar7 <= local_4; iVar7 = iVar7 + 1) {
              if (*psVar4 != 0) {
                param_1[5] = local_c;
                local_14 = local_c;
                goto LAB_00af81cd;
              }
              psVar4 = psVar4 + 0x20;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 <= local_18);
        }
        local_c = local_c + -1;
      } while (iVar8 <= local_c);
    }
  }
LAB_00af81cd:
  iVar3 = (local_14 - iVar8) * 8;
  iVar6 = (local_4 - local_1c) * 0xc;
  iVar7 = (local_18 - local_10) * 0x10;
  param_1[6] = iVar3 * iVar3 + iVar6 * iVar6 + iVar7 * iVar7;
  iVar3 = 0;
  local_c = local_10;
  if (local_10 <= local_18) {
    do {
      if (local_1c <= local_4) {
        local_10 = (local_4 - local_1c) + 1;
        psVar4 = (short *)(*(int *)(iVar2 + local_c * 4) + (local_1c * 0x20 + iVar8) * 2);
        do {
          if (iVar8 <= local_14) {
            iVar7 = (local_14 - iVar8) + 1;
            psVar5 = psVar4;
            do {
              if (*psVar5 != 0) {
                iVar3 = iVar3 + 1;
              }
              psVar5 = psVar5 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          psVar4 = psVar4 + 0x20;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      local_c = local_c + 1;
    } while (local_c <= local_18);
    param_1[7] = iVar3;
    return;
  }
  param_1[7] = 0;
  return;
}


//// FUNCTION FUN_00af82a0 @ 00af82a0 ////

void __cdecl FUN_00af82a0(void *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  if (param_3 < param_4) {
    iVar7 = param_3 * 2;
    piVar6 = (int *)(param_3 * 0x20 + 0xc + param_2);
    do {
      iVar3 = 0;
      if (param_4 < iVar7) {
        piVar1 = (int *)0x0;
        if (0 < iVar7) {
          piVar2 = (int *)(param_2 + 0x18);
          iVar5 = param_3;
          do {
            if (iVar3 < *piVar2) {
              piVar1 = piVar2 + -6;
              iVar3 = *piVar2;
            }
            piVar2 = piVar2 + 8;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      else {
        piVar1 = (int *)0x0;
        if (0 < iVar7) {
          piVar2 = (int *)(param_2 + 0x1c);
          iVar5 = param_3;
          do {
            if ((iVar3 < *piVar2) && (0 < piVar2[-1])) {
              piVar1 = piVar2 + -7;
              iVar3 = *piVar2;
            }
            piVar2 = piVar2 + 8;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      if (piVar1 == (int *)0x0) {
        return;
      }
      piVar6[-2] = piVar1[1];
      *piVar6 = piVar1[3];
      piVar6[2] = piVar1[5];
      piVar6[-3] = *piVar1;
      piVar6[-1] = piVar1[2];
      piVar6[1] = piVar1[4];
      iVar5 = (piVar1[1] - *piVar1) * 0x10;
      iVar3 = (piVar1[3] - piVar1[2]) * 0xc;
      cVar4 = iVar5 <= iVar3;
      if (!(bool)cVar4) {
        iVar3 = iVar5;
      }
      if (iVar3 < (piVar1[5] - piVar1[4]) * 8) {
        cVar4 = '\x02';
      }
      if (cVar4 == '\0') {
        iVar3 = (piVar1[1] + *piVar1) / 2;
        piVar1[1] = iVar3;
        piVar6[-3] = iVar3 + 1;
      }
      else if (cVar4 == '\x01') {
        iVar3 = (piVar1[3] + piVar1[2]) / 2;
        piVar1[3] = iVar3;
        piVar6[-1] = iVar3 + 1;
      }
      else if (cVar4 == '\x02') {
        iVar3 = (piVar1[5] + piVar1[4]) / 2;
        piVar1[5] = iVar3;
        piVar6[1] = iVar3 + 1;
      }
      FUN_00af7eb0(param_1,piVar1);
      FUN_00af7eb0(param_1,piVar6 + -3);
      param_3 = param_3 + 1;
      iVar7 = iVar7 + 2;
      piVar6 = piVar6 + 8;
    } while (param_3 < param_4);
  }
  return;
}


//// FUNCTION FUN_00af8410 @ 00af8410 ////

void __cdecl FUN_00af8410(int param_1,int param_2)

{
  int iVar1;
  int *in_EAX;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar6 = in_EAX[4];
  iVar1 = in_EAX[2];
  iVar3 = *in_EAX;
  iVar11 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  if (iVar3 <= in_EAX[1]) {
    local_38 = iVar3 * 8 + 4;
    do {
      if (iVar1 <= in_EAX[3]) {
        puVar8 = (ushort *)
                 (*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x18) + iVar3 * 4) +
                 (iVar1 * 0x20 + iVar6) * 2);
        iVar4 = (in_EAX[3] - iVar1) + 1;
        iVar7 = iVar1 * 4 + 2;
        do {
          if (iVar6 <= in_EAX[5]) {
            iVar5 = iVar6 * 8 + 4;
            iVar10 = (in_EAX[5] - iVar6) + 1;
            puVar9 = puVar8;
            do {
              uVar2 = (uint)*puVar9;
              puVar9 = puVar9 + 1;
              if (uVar2 != 0) {
                local_34 = local_34 + local_38 * uVar2;
                local_30 = local_30 + iVar7 * uVar2;
                iVar11 = iVar11 + uVar2;
                local_2c = local_2c + iVar5 * uVar2;
              }
              iVar5 = iVar5 + 8;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
          puVar8 = puVar8 + 0x20;
          iVar7 = iVar7 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar3 = iVar3 + 1;
      local_38 = local_38 + 8;
    } while (iVar3 <= in_EAX[1]);
  }
  iVar6 = iVar11 >> 1;
  *(char *)(param_2 + **(int **)(param_1 + 0x74)) = (char)((iVar6 + local_34) / iVar11);
  *(char *)(param_2 + *(int *)(*(int *)(param_1 + 0x74) + 4)) = (char)((local_30 + iVar6) / iVar11);
  *(char *)(param_2 + *(int *)(*(int *)(param_1 + 0x74) + 8)) = (char)((local_2c + iVar6) / iVar11);
  return;
}


//// FUNCTION FUN_00af8590 @ 00af8590 ////

void __cdecl FUN_00af8590(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *unaff_EDI;
  
  piVar1 = (int *)(**(code **)unaff_EDI[1])();
  iVar3 = 0;
  *piVar1 = 0;
  piVar1[1] = 0x1f;
  piVar1[2] = 0;
  piVar1[3] = 0x3f;
  piVar1[4] = 0;
  piVar1[5] = 0x1f;
  FUN_00af7eb0(unaff_EDI,piVar1);
  iVar2 = FUN_00af82a0(unaff_EDI,(int)piVar1,1,param_1);
  if (0 < iVar2) {
    do {
      FUN_00af8410((int)unaff_EDI,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  unaff_EDI[0x1c] = iVar2;
  *(undefined4 *)(*unaff_EDI + 0x14) = 0x60;
  *(int *)(*unaff_EDI + 0x18) = iVar2;
  (**(code **)(*unaff_EDI + 4))();
  return;
}


//// FUNCTION FUN_00af8620 @ 00af8620 ////

void __thiscall FUN_00af8620(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_428;
  int local_424;
  int aiStack_400 [256];
  
  iVar1 = *(int *)(in_EAX + 0x70);
  iVar7 = (int)this + 0x1c;
  local_424 = 0x7fffffff;
  local_428 = 0;
  if (iVar1 < 1) {
    local_424 = 0x7fffffff;
  }
  else {
    piVar2 = *(int **)(in_EAX + 0x74);
    iVar11 = *piVar2;
    iVar3 = piVar2[1];
    iVar4 = piVar2[2];
    do {
      uVar5 = (uint)*(byte *)(iVar11 + local_428);
      if ((int)uVar5 < param_1) {
        iVar12 = (uVar5 - param_1) * 2;
        iVar12 = iVar12 * iVar12;
        iVar9 = param_1 + 0x18;
LAB_00af86ac:
        iVar6 = iVar9;
      }
      else {
        iVar6 = param_1 + 0x18;
        iVar9 = param_1;
        if (iVar6 < (int)uVar5) {
          iVar12 = (uVar5 - iVar6) * 2;
          iVar12 = iVar12 * iVar12;
          goto LAB_00af86ac;
        }
        iVar12 = 0;
        if (param_1 * 2 + 0x18 >> 1 < (int)uVar5) goto LAB_00af86ac;
      }
      uVar8 = (uint)*(byte *)(iVar3 + local_428);
      iVar6 = (uVar5 - iVar6) * 2;
      if ((int)uVar8 < (int)this) {
        iVar9 = (uVar8 - (int)this) * 3;
        iVar12 = iVar12 + iVar9 * iVar9;
        iVar9 = uVar8 - iVar7;
      }
      else {
        if (iVar7 < (int)uVar8) {
          iVar9 = (uVar8 - iVar7) * 3;
          iVar12 = iVar12 + iVar9 * iVar9;
        }
        else if ((int)uVar8 <= iVar7 + (int)this >> 1) {
          iVar9 = uVar8 - iVar7;
          goto LAB_00af8715;
        }
        iVar9 = uVar8 - (int)this;
      }
LAB_00af8715:
      uVar5 = (uint)*(byte *)(iVar4 + local_428);
      if ((int)uVar5 < param_2) {
        iVar12 = iVar12 + (uVar5 - param_2) * (uVar5 - param_2);
        iVar10 = uVar5 - (param_2 + 0x18);
      }
      else {
        iVar10 = param_2 + 0x18;
        if (iVar10 < (int)uVar5) {
          iVar12 = iVar12 + (uVar5 - iVar10) * (uVar5 - iVar10);
        }
        else if ((int)uVar5 <= param_2 * 2 + 0x18 >> 1) {
          iVar10 = uVar5 - iVar10;
          goto LAB_00af8775;
        }
        iVar10 = uVar5 - param_2;
      }
LAB_00af8775:
      iVar6 = iVar6 * iVar6 + iVar9 * 3 * iVar9 * 3 + iVar10 * iVar10;
      aiStack_400[local_428] = iVar12;
      if (iVar6 < local_424) {
        local_424 = iVar6;
      }
      local_428 = local_428 + 1;
    } while (local_428 < iVar1);
  }
  iVar7 = 0;
  iVar11 = 0;
  if (0 < iVar1) {
    do {
      if (aiStack_400[iVar11] <= local_424) {
        *(char *)(iVar7 + param_3) = (char)iVar11;
        iVar7 = iVar7 + 1;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar1);
  }
  return;
}


//// FUNCTION FUN_00af87f0 @ 00af87f0 ////

void __cdecl
FUN_00af87f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,byte *param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_208;
  int local_200 [128];
  
  piVar4 = local_200;
  for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar4 = 0x7fffffff;
    piVar4 = piVar4 + 1;
  }
  local_210 = 0;
  if (0 < param_5) {
    do {
      bVar1 = *(byte *)(local_210 + param_6);
      uVar7 = (uint)bVar1;
      piVar4 = *(int **)(param_1 + 0x74);
      iVar2 = param_3 - (uint)*(byte *)(piVar4[1] + uVar7);
      iVar5 = iVar2 * 3;
      iVar3 = param_4 - (uint)*(byte *)(piVar4[2] + uVar7);
      iVar6 = (param_2 - (uint)*(byte *)(uVar7 + *piVar4)) * 2;
      iVar9 = iVar3 * iVar3 + iVar5 * iVar5 + iVar6 * iVar6;
      iVar5 = (iVar3 + 4) * 0x10;
      local_21c = (iVar6 + 8) * 0x20;
      piVar4 = local_200;
      local_218 = 4;
      pbVar8 = param_7;
      do {
        local_208 = 8;
        iVar3 = iVar9;
        local_214 = (iVar2 * 9 + 0x12) * 8;
        do {
          if (iVar3 < *piVar4) {
            *piVar4 = iVar3;
            *pbVar8 = bVar1;
          }
          iVar6 = iVar3 + iVar5;
          if (iVar6 < piVar4[1]) {
            piVar4[1] = iVar6;
            pbVar8[1] = bVar1;
          }
          iVar6 = iVar6 + iVar5 + 0x80;
          if (iVar6 < piVar4[2]) {
            piVar4[2] = iVar6;
            pbVar8[2] = bVar1;
          }
          iVar6 = iVar6 + iVar5 + 0x100;
          if (iVar6 < piVar4[3]) {
            piVar4[3] = iVar6;
            pbVar8[3] = bVar1;
          }
          iVar3 = iVar3 + local_214;
          local_214 = local_214 + 0x120;
          piVar4 = piVar4 + 4;
          pbVar8 = pbVar8 + 4;
          local_208 = local_208 + -1;
        } while (local_208 != 0);
        iVar9 = iVar9 + local_21c;
        local_21c = local_21c + 0x200;
        local_218 = local_218 + -1;
      } while (local_218 != 0);
      local_210 = local_210 + 1;
    } while (local_210 < param_5);
  }
  return;
}


//// FUNCTION FUN_00af8970 @ 00af8970 ////

void __cdecl FUN_00af8970(int param_1,int param_2,int param_3)

{
  int in_EAX;
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  short *psVar4;
  int iVar5;
  void *this;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_184;
  byte local_180 [128];
  undefined1 local_100 [256];
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x18);
  iVar6 = (param_3 >> 2) * 0x20 + 4;
  iVar7 = (param_2 >> 2) * 0x20 + 4;
  this = (void *)((in_EAX >> 3) * 0x20 + 2);
  iVar1 = FUN_00af8620(this,iVar7,iVar6,(int)local_100);
  FUN_00af87f0(param_1,iVar7,(int)this,iVar6,iVar1,(int)local_100,local_180);
  pbVar3 = local_180;
  piVar8 = (int *)(iVar5 + (param_2 >> 2) * 0x10);
  local_184 = 4;
  do {
    iVar1 = 8;
    iVar5 = ((in_EAX >> 3) * 0x100 + (param_3 >> 2) * 4) * 2;
    do {
      psVar4 = (short *)(*piVar8 + iVar5);
      iVar5 = iVar5 + 0x40;
      *psVar4 = *pbVar3 + 1;
      psVar4[1] = pbVar3[1] + 1;
      pbVar2 = pbVar3 + 3;
      psVar4[2] = pbVar3[2] + 1;
      pbVar3 = pbVar3 + 4;
      iVar1 = iVar1 + -1;
      psVar4[3] = *pbVar2 + 1;
    } while (iVar1 != 0);
    piVar8 = piVar8 + 1;
    local_184 = local_184 + -1;
  } while (local_184 != 0);
  return;
}


//// FUNCTION FUN_00af8a90 @ 00af8a90 ////

void __cdecl FUN_00af8a90(int param_1,int param_2,int *param_3,int param_4)

{
  byte *pbVar1;
  short *psVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  byte *pbVar9;
  int local_10;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x18);
  iVar5 = *(int *)(param_1 + 0x5c);
  if (0 < param_4) {
    iVar7 = param_2 - (int)param_3;
    local_10 = param_4;
    do {
      pbVar9 = *(byte **)(iVar7 + (int)param_3);
      pcVar8 = (char *)*param_3;
      for (iVar6 = iVar5; iVar6 != 0; iVar6 = iVar6 + -1) {
        bVar3 = *pbVar9;
        pbVar1 = pbVar9 + 2;
        psVar2 = (short *)(*(int *)(iVar4 + (uint)(bVar3 >> 3) * 4) +
                          ((uint)(pbVar9[1] >> 2) * 0x20 + (uint)(*pbVar1 >> 3)) * 2);
        pbVar9 = pbVar9 + 3;
        if (*psVar2 == 0) {
          FUN_00af8970(param_1,(uint)(bVar3 >> 3),(uint)(*pbVar1 >> 3));
        }
        *pcVar8 = (char)*psVar2 + -1;
        pcVar8 = pcVar8 + 1;
      }
      param_3 = param_3 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}


//// FUNCTION FUN_00af8b60 @ 00af8b60 ////

void __cdecl FUN_00af8b60(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  short *psVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  undefined1 *local_5c;
  int local_54;
  int local_50;
  int local_4c;
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_24;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x1a8);
  iVar3 = *(int *)(iVar2 + 0x18);
  iVar4 = *(int *)(param_1 + 0x120);
  piVar5 = *(int **)(param_1 + 0x74);
  iVar6 = *piVar5;
  iVar7 = piVar5[1];
  iVar8 = piVar5[2];
  iVar9 = *(int *)(iVar2 + 0x28);
  if (0 < param_4) {
    local_48 = param_3;
    local_24 = param_4;
    do {
      iVar10 = 0;
      pbVar12 = *(byte **)((int)local_48 + (param_2 - (int)param_3));
      local_5c = (undefined1 *)*local_48;
      if (*(char *)(iVar2 + 0x24) == '\0') {
        psVar14 = *(short **)(iVar2 + 0x20);
        local_38 = 1;
        param_4 = 3;
        *(undefined1 *)(iVar2 + 0x24) = 1;
      }
      else {
        pbVar12 = pbVar12 + iVar1 * 3 + -3;
        local_5c = local_5c + iVar1 + -1;
        psVar14 = (short *)(*(int *)(iVar2 + 0x20) + (iVar1 * 3 + 3) * 2);
        local_38 = -1;
        param_4 = -3;
        *(undefined1 *)(iVar2 + 0x24) = 0;
      }
      iVar17 = 0;
      iVar15 = 0;
      local_3c = 0;
      local_40 = 0;
      local_44 = 0;
      local_4c = 0;
      local_4c._0_2_ = 0;
      local_50 = 0;
      local_50._0_2_ = 0;
      local_54 = 0;
      local_54._0_2_ = 0;
      for (iVar11 = iVar1; iVar11 != 0; iVar11 = iVar11 + -1) {
        uVar18 = (uint)*(byte *)(*(int *)(iVar9 + (psVar14[param_4] + 8 + iVar17 >> 4) * 4) +
                                 (uint)*pbVar12 + iVar4);
        uVar20 = (uint)*(byte *)(*(int *)(iVar9 + (psVar14[param_4 + 1] + 8 + iVar10 >> 4) * 4) +
                                 (uint)pbVar12[1] + iVar4);
        uVar16 = (uint)*(byte *)(*(int *)(iVar9 + (psVar14[param_4 + 2] + 8 + iVar15 >> 4) * 4) +
                                 (uint)pbVar12[2] + iVar4);
        iVar13 = (int)uVar16 >> 3;
        iVar15 = ((int)uVar20 >> 2) * 0x20 + iVar13;
        iVar17 = (int)uVar18 >> 3;
        iVar10 = *(int *)(iVar3 + iVar17 * 4);
        if (*(short *)(iVar10 + iVar15 * 2) == 0) {
          FUN_00af8970(param_1,iVar17,iVar13);
        }
        iVar10 = *(ushort *)(iVar10 + iVar15 * 2) - 1;
        *local_5c = (char)iVar10;
        iVar19 = uVar18 - *(byte *)(iVar10 + iVar6);
        iVar21 = uVar20 - *(byte *)(iVar10 + iVar7);
        iVar13 = uVar16 - *(byte *)(iVar10 + iVar8);
        *psVar14 = (short)local_54 + (short)iVar19 * 3;
        local_54 = local_44 + iVar19 * 5;
        iVar17 = iVar19 * 7;
        psVar14[1] = (short)local_50 + (short)iVar21 * 3;
        local_50 = local_40 + iVar21 * 5;
        iVar10 = iVar21 * 7;
        psVar14[2] = (short)local_4c + (short)iVar13 * 3;
        local_4c = local_3c + iVar13 * 5;
        iVar15 = iVar13 * 7;
        pbVar12 = pbVar12 + param_4;
        psVar14 = psVar14 + param_4;
        local_5c = local_5c + local_38;
        local_3c = iVar13;
        local_40 = iVar21;
        local_44 = iVar19;
      }
      *psVar14 = (short)local_54;
      psVar14[1] = (short)local_50;
      psVar14[2] = (short)local_4c;
      local_48 = local_48 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  return;
}


//// FUNCTION FUN_00af8e40 @ 00af8e40 ////

void FUN_00af8e40(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = *(int *)(in_EAX + 0x1a8);
  iVar1 = (*(code *)**(undefined4 **)(in_EAX + 4))();
  piVar2 = (int *)(iVar1 + 0x3fc);
  *(int **)(iVar4 + 0x28) = piVar2;
  iVar4 = 0;
  uVar3 = 0;
  iVar1 = 0;
  piVar5 = piVar2;
  do {
    piVar2[uVar3] = iVar4;
    *piVar5 = iVar1;
    uVar3 = uVar3 + 1;
    piVar5 = piVar5 + -1;
    iVar4 = iVar4 + 1;
    iVar1 = iVar1 + -1;
  } while ((int)uVar3 < 0x10);
  if ((int)uVar3 < 0x30) {
    piVar5 = piVar2 + -uVar3;
    do {
      piVar2[uVar3] = iVar4;
      *piVar5 = -iVar4;
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + -1;
      iVar4 = iVar4 + (~uVar3 & 1);
    } while ((int)uVar3 < 0x30);
  }
  if ((int)uVar3 < 0x100) {
    piVar5 = piVar2 + -uVar3;
    do {
      piVar2[uVar3] = iVar4;
      *piVar5 = -iVar4;
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + -1;
    } while ((int)uVar3 < 0x100);
  }
  return;
}


//// FUNCTION FUN_00af8f20 @ 00af8f20 ////

void __cdecl FUN_00af8f20(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = param_1[0x6a];
  iVar2 = *(int *)(iVar1 + 0x18);
  if (param_1[0x13] != 0) {
    param_1[0x13] = 2;
  }
  if (param_2 == '\0') {
    if (param_1[0x13] == 2) {
      *(code **)(iVar1 + 4) = FUN_00af8b60;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_00af8a90;
    }
    *(undefined **)(iVar1 + 8) = &DAT_00af8f10;
    iVar5 = param_1[0x1c];
    if (iVar5 < 1) {
      *(undefined4 *)(*param_1 + 0x14) = 0x38;
      *(undefined4 *)(*param_1 + 0x18) = 1;
      (**(code **)*param_1)(param_1);
    }
    if (0x100 < iVar5) {
      *(undefined4 *)(*param_1 + 0x14) = 0x39;
      *(undefined4 *)(*param_1 + 0x18) = 0x100;
      (**(code **)*param_1)(param_1);
    }
    if (param_1[0x13] == 2) {
      uVar4 = (param_1[0x17] + 2) * 6;
      if (*(int *)(iVar1 + 0x20) == 0) {
        uVar3 = (**(code **)(param_1[1] + 4))(param_1,1,uVar4);
        *(undefined4 *)(iVar1 + 0x20) = uVar3;
      }
      FUN_00af33e0(*(undefined4 **)(iVar1 + 0x20),uVar4);
      if (*(int *)(iVar1 + 0x28) == 0) {
        FUN_00af8e40();
      }
      *(undefined1 *)(iVar1 + 0x24) = 0;
    }
  }
  else {
    *(undefined1 **)(iVar1 + 4) = &LAB_00af7dd0;
    *(undefined1 **)(iVar1 + 8) = &LAB_00af8ee0;
    *(undefined1 *)(iVar1 + 0x1c) = 1;
  }
  if (*(char *)(iVar1 + 0x1c) != '\0') {
    iVar5 = 0;
    do {
      FUN_00af33e0(*(undefined4 **)(iVar2 + iVar5 * 4),0x1000);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x20);
    *(undefined1 *)(iVar1 + 0x1c) = 0;
  }
  return;
}


//// FUNCTION FUN_00af9050 @ 00af9050 ////

void __cdecl FUN_00af9050(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x2c);
  param_1[0x6a] = (int)puVar1;
  *puVar1 = FUN_00af8f20;
  puVar1[3] = &LAB_00af9040;
  puVar1[8] = 0;
  puVar1[10] = 0;
  if (param_1[0x19] != 3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x2f;
    (**(code **)*param_1)(param_1);
  }
  uVar2 = (**(code **)param_1[1])(param_1,1,0x80);
  puVar1[6] = uVar2;
  iVar3 = 0;
  do {
    uVar2 = (**(code **)(param_1[1] + 4))(param_1,1,0x1000);
    *(undefined4 *)(puVar1[6] + iVar3) = uVar2;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x80);
  *(undefined1 *)(puVar1 + 7) = 1;
  if (*(char *)((int)param_1 + 0x5a) == '\0') {
    puVar1[4] = 0;
  }
  else {
    iVar3 = param_1[0x15];
    if (iVar3 < 8) {
      *(undefined4 *)(*param_1 + 0x14) = 0x38;
      *(undefined4 *)(*param_1 + 0x18) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (0x100 < iVar3) {
      *(undefined4 *)(*param_1 + 0x14) = 0x39;
      *(undefined4 *)(*param_1 + 0x18) = 0x100;
      (**(code **)*param_1)(param_1);
    }
    uVar2 = (**(code **)(param_1[1] + 8))(param_1,1,iVar3,3);
    puVar1[4] = uVar2;
    puVar1[5] = iVar3;
  }
  if (param_1[0x13] != 0) {
    param_1[0x13] = 2;
  }
  if (param_1[0x13] == 2) {
    uVar2 = (**(code **)(param_1[1] + 4))(param_1,1,(param_1[0x17] + 2) * 6);
    puVar1[8] = uVar2;
    FUN_00af8e40();
    return;
  }
  return;
}


//// FUNCTION FUN_00af9180 @ 00af9180 ////

int __cdecl FUN_00af9180(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  iVar1 = param_1[0x19];
  iVar2 = param_1[0x15];
  iVar7 = 1;
  do {
    iVar9 = iVar7;
    iVar7 = iVar9 + 1;
    iVar4 = iVar7;
    if (1 < iVar1) {
      iVar6 = iVar1 + -1;
      do {
        iVar4 = iVar4 * iVar7;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  } while (iVar4 <= iVar2);
  if (iVar9 < 2) {
    *(undefined4 *)(*param_1 + 0x14) = 0x38;
    *(int *)(*param_1 + 0x18) = iVar4;
    (**(code **)*param_1)(param_1);
  }
  iVar4 = 1;
  iVar7 = iVar1;
  piVar8 = param_2;
  if (0 < iVar1) {
    for (; iVar6 = iVar1, iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar8 = iVar9;
      piVar8 = piVar8 + 1;
    }
    do {
      iVar4 = iVar4 * iVar9;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  do {
    iVar7 = 0;
    bVar3 = false;
    if (iVar1 < 1) {
      return iVar4;
    }
    do {
      iVar9 = iVar7;
      if (param_1[0xb] == 2) {
        iVar9 = (&DAT_00d88820)[iVar7];
      }
      iVar6 = param_2[iVar9] + 1;
      iVar5 = (iVar4 / param_2[iVar9]) * iVar6;
      if (iVar5 - iVar2 != 0 && iVar2 <= iVar5) {
        if (!bVar3) {
          return iVar4;
        }
        break;
      }
      iVar7 = iVar7 + 1;
      param_2[iVar9] = iVar6;
      bVar3 = true;
      iVar4 = iVar5;
    } while (iVar7 < iVar1);
  } while( true );
}


//// FUNCTION FUN_00af92b0 @ 00af92b0 ////

void __cdecl FUN_00af92b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iStack_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = param_1[0x6a];
  piStack_20 = (int *)(iVar2 + 0x20);
  iVar3 = FUN_00af9180(param_1,piStack_20);
  if (param_1[0x19] == 3) {
    iVar5 = *param_1;
    *(int *)(iVar5 + 0x18) = iVar3;
    *(int *)(iVar5 + 0x1c) = *piStack_20;
    *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar2 + 0x24);
    *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 *)(*param_1 + 0x14) = 0x5e;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x5f;
    *(int *)(*param_1 + 0x18) = iVar3;
  }
  (**(code **)(*param_1 + 4))(param_1,1);
  piVar4 = (int *)(**(code **)(param_1[1] + 8))(param_1,1,iVar3,param_1[0x19]);
  iStack_18 = 0;
  piVar10 = piVar4;
  iStack_24 = iVar3;
  if (0 < param_1[0x19]) {
    do {
      iStack_1c = *piStack_20;
      iVar5 = iStack_24 / iStack_1c;
      if (0 < iStack_1c) {
        iVar1 = iStack_1c + -1;
        iVar8 = 0;
        iStack_28 = 0;
        do {
          for (iVar7 = iVar8; iVar7 < iVar3; iVar7 = iVar7 + iStack_24) {
            iVar6 = 0;
            if (0 < iVar5) {
              do {
                iVar9 = *piVar10 + iVar6;
                iVar6 = iVar6 + 1;
                *(char *)(iVar7 + iVar9) = (char)((iVar1 / 2 + iStack_28) / iVar1);
              } while (iVar6 < iVar5);
            }
          }
          iStack_28 = iStack_28 + 0xff;
          iVar8 = iVar8 + iVar5;
          iStack_1c = iStack_1c + -1;
        } while (iStack_1c != 0);
      }
      iStack_18 = iStack_18 + 1;
      piStack_20 = piStack_20 + 1;
      piVar10 = piVar10 + 1;
      iStack_24 = iVar5;
    } while (iStack_18 < param_1[0x19]);
    *(int *)(iVar2 + 0x14) = iVar3;
    *(int **)(iVar2 + 0x10) = piVar4;
    return;
  }
  *(int *)(iVar2 + 0x14) = iVar3;
  *(int **)(iVar2 + 0x10) = piVar4;
  return;
}


//// FUNCTION FUN_00af9430 @ 00af9430 ////

void __cdecl FUN_00af9430(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int local_18;
  int iStack_14;
  int *piStack_10;
  char cStack_c;
  
  iVar1 = *(int *)(param_1 + 0x1a8);
  if (*(int *)(param_1 + 0x4c) == 1) {
    local_18 = 0x1fe;
    *(undefined1 *)(iVar1 + 0x1c) = 1;
  }
  else {
    local_18 = 0;
    *(undefined1 *)(iVar1 + 0x1c) = 0;
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 4) + 8))
                    (param_1,1,local_18 + 0x100,*(undefined4 *)(param_1 + 100));
  *(undefined4 *)(iVar1 + 0x18) = uVar3;
  iVar4 = *(int *)(iVar1 + 0x14);
  iStack_14 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    piStack_10 = (int *)(iVar1 + 0x20);
    do {
      iVar6 = *piStack_10;
      iVar4 = iVar4 / iVar6;
      if (local_18 != 0) {
        *(int *)(*(int *)(iVar1 + 0x18) + iStack_14 * 4) =
             *(int *)(*(int *)(iVar1 + 0x18) + iStack_14 * 4) + 0xff;
      }
      puVar2 = *(undefined1 **)(*(int *)(iVar1 + 0x18) + iStack_14 * 4);
      iVar5 = (iVar6 + 0xfe) / (iVar6 * 2 + -2);
      iVar9 = 0;
      iVar10 = 0;
      do {
        if (iVar5 < iVar10) {
          iVar7 = iVar9 * 0x1fe;
          do {
            iVar5 = (iVar7 + 0x2fc + iVar6) / (iVar6 * 2 + -2);
            iVar9 = iVar9 + 1;
            iVar7 = iVar7 + 0x1fe;
          } while (iVar5 < iVar10);
        }
        cStack_c = (char)iVar4;
        puVar2[iVar10] = (char)iVar9 * cStack_c;
        iVar10 = iVar10 + 1;
      } while (iVar10 < 0x100);
      if (local_18 != 0) {
        iVar6 = 1;
        puVar8 = puVar2;
        do {
          puVar8 = puVar8 + -1;
          *puVar8 = *puVar2;
          puVar2[iVar6 + 0xff] = puVar2[0xff];
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x100);
      }
      iStack_14 = iStack_14 + 1;
      piStack_10 = piStack_10 + 1;
    } while (iStack_14 < *(int *)(param_1 + 100));
  }
  return;
}


//// FUNCTION FUN_00af95a0 @ 00af95a0 ////

int * __fastcall FUN_00af95a0(int param_1)

{
  byte *pbVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  
  piVar2 = (int *)(*(code *)**(undefined4 **)(in_EAX + 4))();
  puVar6 = &DAT_00d88720;
  piVar4 = piVar2;
  do {
    iVar3 = 0;
    piVar5 = piVar4;
    do {
      pbVar1 = puVar6 + iVar3;
      iVar3 = iVar3 + 1;
      piVar4 = piVar5 + 1;
      *piVar5 = (int)((uint)*pbVar1 * -0x1fe + 0xfe01) / (param_1 * 0x200 + -0x200);
      piVar5 = piVar4;
    } while (iVar3 < 0x10);
    puVar6 = puVar6 + 0x10;
  } while ((int)puVar6 < 0xd88820);
  return piVar2;
}


//// FUNCTION FUN_00af9620 @ 00af9620 ////

void FUN_00af9620(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBX;
  int iVar4;
  int *piVar5;
  
  iVar1 = *(int *)(unaff_EBX + 0x1a8);
  iVar4 = 0;
  if (0 < *(int *)(unaff_EBX + 100)) {
    piVar5 = (int *)(iVar1 + 0x34);
    do {
      iVar2 = 0;
      if (0 < iVar4) {
        piVar3 = (int *)(iVar1 + 0x20);
        do {
          if (piVar5[-5] == *piVar3) {
            piVar3 = *(int **)(iVar1 + 0x34 + iVar2 * 4);
            if (piVar3 != (int *)0x0) goto LAB_00af965e;
            break;
          }
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar2 < iVar4);
      }
      piVar3 = FUN_00af95a0(piVar5[-5]);
LAB_00af965e:
      *piVar5 = (int)piVar3;
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < *(int *)(unaff_EBX + 100));
  }
  return;
}


//// FUNCTION FUN_00af9720 @ 00af9720 ////

void __cdecl FUN_00af9720(int param_1,int param_2,int *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  
  piVar4 = *(int **)(*(int *)(param_1 + 0x1a8) + 0x18);
  iVar5 = piVar4[1];
  iVar6 = *(int *)(param_1 + 0x5c);
  iVar7 = *piVar4;
  iVar8 = piVar4[2];
  if (0 < param_4) {
    iVar11 = param_2 - (int)param_3;
    do {
      pbVar9 = *(byte **)(iVar11 + (int)param_3);
      pcVar10 = (char *)*param_3;
      for (iVar12 = iVar6; iVar12 != 0; iVar12 = iVar12 + -1) {
        bVar3 = *pbVar9;
        pbVar1 = pbVar9 + 1;
        pbVar2 = pbVar9 + 2;
        pbVar9 = pbVar9 + 3;
        *pcVar10 = *(char *)((uint)bVar3 + iVar7) + *(char *)((uint)*pbVar1 + iVar5) +
                   *(char *)((uint)*pbVar2 + iVar8);
        pcVar10 = pcVar10 + 1;
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


//// FUNCTION FUN_00af97e0 @ 00af97e0 ////

void __cdecl FUN_00af97e0(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  int local_1c;
  int *local_10;
  
  iVar1 = *(int *)(param_1 + 100);
  uVar2 = *(uint *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x1a8);
  if (0 < (int)param_4) {
    iVar8 = param_2 - (int)param_3;
    local_10 = param_4;
    do {
      FUN_00af33e0((undefined4 *)*param_3,uVar2);
      iVar4 = *(int *)(iVar3 + 0x30);
      local_1c = 0;
      if (0 < iVar1) {
        param_4 = (int *)(iVar3 + 0x34);
        do {
          iVar5 = *(int *)(*(int *)(iVar3 + 0x18) + local_1c * 4);
          iVar6 = *param_4;
          pcVar9 = (char *)*param_3;
          uVar11 = 0;
          pbVar7 = (byte *)(*(int *)(iVar8 + (int)param_3) + local_1c);
          for (uVar10 = uVar2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar9 = *pcVar9 + *(char *)(*(int *)(iVar6 + iVar4 * 0x40 + uVar11 * 4) +
                                          (uint)*pbVar7 + iVar5);
            pbVar7 = pbVar7 + iVar1;
            pcVar9 = pcVar9 + 1;
            uVar11 = uVar11 + 1 & 0xf;
          }
          local_1c = local_1c + 1;
          param_4 = param_4 + 1;
        } while (local_1c < iVar1);
      }
      param_3 = param_3 + 1;
      local_10 = (int *)((int)local_10 + -1);
      *(uint *)(iVar3 + 0x30) = iVar4 + 1U & 0xf;
    } while (local_10 != (int *)0x0);
  }
  return;
}


//// FUNCTION FUN_00af9910 @ 00af9910 ////

void __cdecl FUN_00af9910(int param_1,int param_2,int *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  char *pcVar19;
  int local_24;
  
  iVar4 = *(int *)(param_1 + 0x1a8);
  piVar5 = *(int **)(iVar4 + 0x18);
  iVar6 = *(int *)(param_1 + 0x5c);
  iVar7 = *piVar5;
  iVar8 = piVar5[1];
  iVar9 = piVar5[2];
  if (0 < param_4) {
    iVar14 = param_2 - (int)param_3;
    local_24 = param_4;
    do {
      iVar10 = *(int *)(iVar4 + 0x30);
      pcVar19 = (char *)*param_3;
      iVar11 = *(int *)(iVar4 + 0x3c);
      iVar12 = *(int *)(iVar4 + 0x38);
      pbVar15 = *(byte **)(iVar14 + (int)param_3);
      iVar16 = iVar10 * 0x40;
      iVar13 = *(int *)(iVar4 + 0x34);
      uVar17 = 0;
      for (iVar18 = iVar6; iVar18 != 0; iVar18 = iVar18 + -1) {
        bVar3 = *pbVar15;
        pbVar1 = pbVar15 + 1;
        pbVar2 = pbVar15 + 2;
        pbVar15 = pbVar15 + 3;
        *pcVar19 = *(char *)(*(int *)(iVar13 + iVar16 + uVar17 * 4) + (uint)bVar3 + iVar7) +
                   *(char *)(iVar8 + *(int *)(iVar12 + iVar16 + uVar17 * 4) + (uint)*pbVar1) +
                   *(char *)(iVar9 + *(int *)(iVar11 + iVar16 + uVar17 * 4) + (uint)*pbVar2);
        pcVar19 = pcVar19 + 1;
        uVar17 = uVar17 + 1 & 0xf;
      }
      *(uint *)(iVar4 + 0x30) = iVar10 + 1U & 0xf;
      param_3 = param_3 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  return;
}


//// FUNCTION FUN_00af9a30 @ 00af9a30 ////

void __cdecl FUN_00af9a30(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  short *psVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  char *pcVar17;
  int local_2c;
  int local_28;
  int local_1c;
  int local_18;
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x120);
  iVar4 = *(int *)(param_1 + 100);
  iVar5 = *(int *)(param_1 + 0x1a8);
  if (0 < param_4) {
    iVar11 = param_2 - (int)param_3;
    local_18 = param_4;
    do {
      FUN_00af33e0((undefined4 *)*param_3,uVar2);
      local_1c = 0;
      if (0 < iVar4) {
        piVar12 = (int *)(iVar5 + 0x44);
        do {
          pcVar17 = (char *)*param_3;
          psVar13 = (short *)*piVar12;
          pbVar15 = (byte *)(*(int *)(iVar11 + (int)param_3) + local_1c);
          if (*(char *)(iVar5 + 0x54) == '\0') {
            iVar16 = 1;
            local_28 = iVar4;
          }
          else {
            pcVar17 = pcVar17 + (uVar2 - 1);
            pbVar15 = pbVar15 + (uVar2 - 1) * iVar4;
            iVar16 = -1;
            psVar13 = psVar13 + uVar2 + 1;
            local_28 = -iVar4;
          }
          iVar6 = *(int *)(*(int *)(iVar5 + 0x18) + local_1c * 4);
          iVar7 = *(int *)(*(int *)(iVar5 + 0x10) + local_1c * 4);
          iVar8 = 0;
          param_4 = 0;
          param_4._0_2_ = 0;
          local_2c = 0;
          for (uVar14 = uVar2; uVar14 != 0; uVar14 = uVar14 - 1) {
            uVar9 = (uint)*(byte *)((uint)*pbVar15 + (psVar13[iVar16] + 8 + iVar8 >> 4) + iVar3);
            bVar1 = *(byte *)(uVar9 + iVar6);
            *pcVar17 = *pcVar17 + bVar1;
            iVar10 = uVar9 - *(byte *)((uint)bVar1 + iVar7);
            *psVar13 = (short)param_4 + (short)iVar10 * 3;
            param_4 = local_2c + iVar10 * 5;
            iVar8 = iVar10 * 7;
            pbVar15 = pbVar15 + local_28;
            pcVar17 = pcVar17 + iVar16;
            psVar13 = psVar13 + iVar16;
            local_2c = iVar10;
          }
          *psVar13 = (short)param_4;
          local_1c = local_1c + 1;
          piVar12 = piVar12 + 1;
        } while (local_1c < iVar4);
      }
      param_3 = param_3 + 1;
      local_18 = local_18 + -1;
      *(bool *)(iVar5 + 0x54) = *(char *)(iVar5 + 0x54) == '\0';
    } while (local_18 != 0);
  }
  return;
}


//// FUNCTION FUN_00af9bf0 @ 00af9bf0 ////

void FUN_00af9bf0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(unaff_ESI + 100)) {
    puVar2 = (undefined4 *)(*(int *)(unaff_ESI + 0x1a8) + 0x44);
    do {
      uVar1 = (**(code **)(*(int *)(unaff_ESI + 4) + 4))();
      *puVar2 = uVar1;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < *(int *)(unaff_ESI + 100));
  }
  return;
}


//// FUNCTION FUN_00af9c30 @ 00af9c30 ////

void __cdecl FUN_00af9c30(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = param_1[0x6a];
  param_1[0x1d] = *(int *)(iVar1 + 0x10);
  iVar3 = param_1[0x13];
  param_1[0x1c] = *(int *)(iVar1 + 0x14);
  if (iVar3 == 0) {
    if (param_1[0x19] != 3) {
      *(undefined1 **)(iVar1 + 4) = &LAB_00af9670;
      return;
    }
    *(code **)(iVar1 + 4) = FUN_00af9720;
    return;
  }
  if (iVar3 == 1) {
    if (param_1[0x19] == 3) {
      *(code **)(iVar1 + 4) = FUN_00af9910;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_00af97e0;
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
    if (*(char *)(iVar1 + 0x1c) == '\0') {
      FUN_00af9430((int)param_1);
    }
    if (*(int *)(iVar1 + 0x34) == 0) {
      FUN_00af9620();
      return;
    }
  }
  else {
    if (iVar3 != 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x30;
      (**(code **)*param_1)(param_1);
      return;
    }
    puVar2 = (undefined4 *)(iVar1 + 0x44);
    *(code **)(iVar1 + 4) = FUN_00af9a30;
    *(undefined1 *)(iVar1 + 0x54) = 0;
    if (*(int *)(iVar1 + 0x44) == 0) {
      FUN_00af9bf0();
    }
    iVar1 = param_1[0x17];
    iVar3 = 0;
    if (0 < param_1[0x19]) {
      do {
        FUN_00af33e0((undefined4 *)*puVar2,iVar1 * 2 + 4);
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < param_1[0x19]);
    }
  }
  return;
}


//// FUNCTION FUN_00af9d50 @ 00af9d50 ////

void __cdecl FUN_00af9d50(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x58);
  param_1[0x6a] = (int)puVar1;
  *puVar1 = FUN_00af9c30;
  puVar1[2] = &DAT_00af9d20;
  puVar1[3] = &LAB_00af9d30;
  puVar1[0x11] = 0;
  puVar1[0xd] = 0;
  if (4 < param_1[0x19]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x37;
    *(undefined4 *)(*param_1 + 0x18) = 4;
    (**(code **)*param_1)(param_1);
  }
  if (0x100 < param_1[0x15]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x39;
    *(undefined4 *)(*param_1 + 0x18) = 0x100;
    (**(code **)*param_1)(param_1);
  }
  FUN_00af92b0(param_1);
  FUN_00af9430((int)param_1);
  if (param_1[0x13] == 2) {
    FUN_00af9bf0();
  }
  return;
}


//// FUNCTION FUN_00afae60 @ 00afae60 ////

void __cdecl FUN_00afae60(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int local_40 [7];
  int local_24;
  int local_20 [7];
  int local_4;
  
  piVar4 = *(int **)(param_2 + 0x50);
  iVar3 = *(int *)(param_1 + 0x120) + 0x80;
  param_1 = 6;
  piVar1 = (int *)&stack0xffffffb0;
  do {
    piVar5 = piVar1 + 4;
    if (((param_1 != 4) && (param_1 != 2)) && (param_1 != 0)) {
      if (((param_3[8] == 0) && (param_3[0x18] == 0)) &&
         ((param_3[0x28] == 0 && (param_3[0x38] == 0)))) {
        iVar7 = (int)*param_3 * *piVar4 * 4;
        *piVar5 = iVar7;
      }
      else {
        iVar8 = (int)param_3[0x28] * piVar4[0x28] * 0x1b37 +
                (int)param_3[0x18] * piVar4[0x18] * -0x28ba +
                (int)param_3[0x38] * piVar4[0x38] * -0x1712 + (int)param_3[8] * piVar4[8] * 0x73fc;
        iVar7 = (int)*param_3 * *piVar4 * 0x8000;
        *piVar5 = iVar8 + 0x1000 + iVar7 >> 0xd;
        iVar7 = (iVar7 - iVar8) + 0x1000 >> 0xd;
      }
      piVar1[0xc] = iVar7;
    }
    if (((param_1 != 5) && (param_1 != 3)) && (param_1 != 1)) {
      if ((((param_3[9] == 0) && (param_3[0x19] == 0)) && (param_3[0x29] == 0)) &&
         (param_3[0x39] == 0)) {
        iVar7 = (int)param_3[1] * piVar4[1] * 4;
        piVar1[5] = iVar7;
      }
      else {
        iVar8 = (int)param_3[0x29] * piVar4[0x29] * 0x1b37 +
                (int)param_3[0x19] * piVar4[0x19] * -0x28ba +
                (int)param_3[0x39] * piVar4[0x39] * -0x1712 + (int)param_3[9] * piVar4[9] * 0x73fc;
        iVar7 = (int)param_3[1] * piVar4[1] * 0x8000;
        piVar1[5] = iVar8 + 0x1000 + iVar7 >> 0xd;
        iVar7 = (iVar7 - iVar8) + 0x1000 >> 0xd;
      }
      piVar1[0xd] = iVar7;
    }
    if (((param_1 != 6) && (param_1 != 4)) && (param_1 != 2)) {
      if (((param_3[10] == 0) && (param_3[0x1a] == 0)) &&
         ((param_3[0x2a] == 0 && (param_3[0x3a] == 0)))) {
        iVar7 = (int)param_3[2] * piVar4[2] * 4;
        piVar1[6] = iVar7;
      }
      else {
        iVar8 = (int)param_3[0x2a] * piVar4[0x2a] * 0x1b37 +
                (int)param_3[0x1a] * piVar4[0x1a] * -0x28ba +
                (int)param_3[0x3a] * piVar4[0x3a] * -0x1712 + (int)param_3[10] * piVar4[10] * 0x73fc
        ;
        iVar7 = (int)param_3[2] * piVar4[2] * 0x8000;
        piVar1[6] = iVar8 + 0x1000 + iVar7 >> 0xd;
        iVar7 = (iVar7 - iVar8) + 0x1000 >> 0xd;
      }
      piVar1[0xe] = iVar7;
    }
    if (((param_1 != 7) && (param_1 != 5)) && (param_1 != 3)) {
      if (((param_3[0xb] == 0) && (param_3[0x1b] == 0)) &&
         ((param_3[0x2b] == 0 && (param_3[0x3b] == 0)))) {
        iVar7 = (int)param_3[3] * piVar4[3] * 4;
        piVar1[7] = iVar7;
      }
      else {
        iVar8 = (int)param_3[0x2b] * piVar4[0x2b] * 0x1b37 +
                (int)param_3[0x1b] * piVar4[0x1b] * -0x28ba +
                (int)param_3[0x3b] * piVar4[0x3b] * -0x1712 +
                (int)param_3[0xb] * piVar4[0xb] * 0x73fc;
        iVar7 = (int)param_3[3] * piVar4[3] * 0x8000;
        piVar1[7] = iVar8 + 0x1000 + iVar7 >> 0xd;
        iVar7 = (iVar7 - iVar8) + 0x1000 >> 0xd;
      }
      piVar1[0xf] = iVar7;
    }
    iVar7 = param_1 + -2;
    param_3 = param_3 + 4;
    piVar4 = piVar4 + 4;
    bVar9 = param_1 != 2;
    piVar1 = piVar5;
    param_1 = param_1 + -4;
  } while (bVar9 && -1 < iVar7);
  puVar6 = (undefined1 *)(*param_4 + param_5);
  if (((local_40[1] == 0) && (local_40[3] == 0)) && ((local_40[5] == 0 && (local_24 == 0)))) {
    uVar2 = *(undefined1 *)((local_40[0] + 0x10 >> 5 & 0x3ffU) + iVar3);
    *puVar6 = uVar2;
  }
  else {
    iVar7 = local_40[1] * 0x73fc + local_40[3] * -0x28ba + local_40[5] * 0x1b37 + local_24 * -0x1712
    ;
    *puVar6 = *(undefined1 *)((iVar7 + 0x80000 + local_40[0] * 0x8000 >> 0x14 & 0x3ffU) + iVar3);
    uVar2 = *(undefined1 *)(((local_40[0] * 0x8000 - iVar7) + 0x80000 >> 0x14 & 0x3ffU) + iVar3);
  }
  puVar6[1] = uVar2;
  puVar6 = (undefined1 *)(param_4[1] + param_5);
  if ((((local_20[1] == 0) && (local_20[3] == 0)) && (local_20[5] == 0)) && (local_4 == 0)) {
    uVar2 = *(undefined1 *)((local_20[0] + 0x10 >> 5 & 0x3ffU) + iVar3);
    *puVar6 = uVar2;
    puVar6[1] = uVar2;
    return;
  }
  iVar7 = local_20[1] * 0x73fc + local_20[5] * 0x1b37 + local_4 * -0x1712 + local_20[3] * -0x28ba;
  *puVar6 = *(undefined1 *)((iVar7 + 0x80000 + local_20[0] * 0x8000 >> 0x14 & 0x3ffU) + iVar3);
  puVar6[1] = *(undefined1 *)(((local_20[0] * 0x8000 - iVar7) + 0x80000 >> 0x14 & 0x3ffU) + iVar3);
  return;
}


//// FUNCTION RemoveAt @ 00afb31e ////

/* Library Function - Single Match
    public: int __thiscall ATL::CSimpleArray<struct HINSTANCE__ *,class
   ATL::CSimpleArrayEqualHelper<struct HINSTANCE__ *> >::RemoveAt(int)
   
   Library: Visual Studio 2003 Release */

int __thiscall
ATL::CSimpleArray<HINSTANCE__*,ATL::CSimpleArrayEqualHelper<HINSTANCE__*>_>::RemoveAt
          (CSimpleArray<HINSTANCE__*,ATL::CSimpleArrayEqualHelper<HINSTANCE__*>_> *this,int param_1)

{
  void *_Dst;
  int iVar1;
  
  if ((param_1 < 0) || (iVar1 = *(int *)(this + 4), iVar1 <= param_1)) {
    iVar1 = 0;
  }
  else {
    if (param_1 != iVar1 + -1) {
      _Dst = (void *)(*(int *)this + param_1 * 4);
      _memmove(_Dst,(void *)((int)_Dst + 4),(iVar1 - param_1) * 4 - 4);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + -1;
    iVar1 = 1;
  }
  return iVar1;
}


//// FUNCTION FUN_00afb361 @ 00afb361 ////

void __fastcall FUN_00afb361(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00afb3c8 @ 00afb3c8 ////

undefined4 __fastcall FUN_00afb3c8(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
  *(undefined1 *)(param_1 + 1) = 1;
  return 0;
}


//// FUNCTION operator[] @ 00afb3e0 ////

/* Library Function - Single Match
    public: struct HINSTANCE__ * & __thiscall ATL::CSimpleArray<struct HINSTANCE__ *,class
   ATL::CSimpleArrayEqualHelper<struct HINSTANCE__ *> >::operator[](int)
   
   Library: Visual Studio 2003 Release */

HINSTANCE__ ** __thiscall
ATL::CSimpleArray<HINSTANCE__*,ATL::CSimpleArrayEqualHelper<HINSTANCE__*>_>::operator[]
          (CSimpleArray<HINSTANCE__*,ATL::CSimpleArrayEqualHelper<HINSTANCE__*>_> *this,int param_1)

{
  code *pcVar1;
  HINSTANCE__ **ppHVar2;
  
  if ((-1 < param_1) && (param_1 < *(int *)(this + 4))) {
    return (HINSTANCE__ **)(*(int *)this + param_1 * 4);
  }
  RaiseException(0xc000008c,1,0,(ULONG_PTR *)0x0);
  pcVar1 = (code *)swi(3);
  ppHVar2 = (HINSTANCE__ **)(*pcVar1)();
  return ppHVar2;
}


//// FUNCTION InternalSetAtIndex @ 00afb407 ////

/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall ATL::CSimpleArray<unsigned long,class
   ATL::CSimpleArrayEqualHelper<unsigned long> >::InternalSetAtIndex(int,unsigned long const &)
    public: void __thiscall ATL::CSimpleArray<struct HINSTANCE__ *,class
   ATL::CSimpleArrayEqualHelper<struct HINSTANCE__ *> >::InternalSetAtIndex(int,struct HINSTANCE__ *
   const &)
    public: void __thiscall ATL::CSimpleArray<class CDHtmlControlSink *,class
   ATL::CSimpleArrayEqualHelper<class CDHtmlControlSink *> >::InternalSetAtIndex(int,class
   CDHtmlControlSink * const &)
    public: void __thiscall ATL::CSimpleArray<class CDHtmlElementEventSink *,class
   ATL::CSimpleArrayEqualHelper<class CDHtmlElementEventSink *> >::InternalSetAtIndex(int,class
   CDHtmlElementEventSink * const &)
   
   Library: Visual Studio 2003 Release */

void __thiscall InternalSetAtIndex(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)this + param_1 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return;
}


//// FUNCTION FUN_00afb41f @ 00afb41f ////

void __fastcall FUN_00afb41f(undefined4 *param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION ~CComCritSecLock<ATL::CComCriticalSection> @ 00afb459 ////

/* Library Function - Single Match
    public: __thiscall ATL::CComCritSecLock<class ATL::CComCriticalSection>::~CComCritSecLock<class
   ATL::CComCriticalSection>(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall
ATL::CComCritSecLock<ATL::CComCriticalSection>::~CComCritSecLock<ATL::CComCriticalSection>
          (CComCritSecLock<ATL::CComCriticalSection> *this)

{
  if (this[4] != (CComCritSecLock<ATL::CComCriticalSection>)0x0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)this);
    this[4] = (CComCritSecLock<ATL::CComCriticalSection>)0x0;
  }
  return;
}


//// FUNCTION _ATL_BASE_MODULE70 @ 00afb470 ////

/* Library Function - Single Match
    public: __thiscall ATL::_ATL_BASE_MODULE70::_ATL_BASE_MODULE70(void)
   
   Library: Visual Studio 2003 Release */

_ATL_BASE_MODULE70 * __thiscall
ATL::_ATL_BASE_MODULE70::_ATL_BASE_MODULE70(_ATL_BASE_MODULE70 *this)

{
  FUN_009a1350((undefined4 *)(this + 0x18));
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  return this;
}


//// FUNCTION FUN_00afb492 @ 00afb492 ////

void __fastcall FUN_00afb492(int param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_00afb361((undefined4 *)(param_1 + 0x30));
  return;
}


//// FUNCTION RemoveResourceInstance @ 00afb4a8 ////

/* Library Function - Single Match
    public: bool __thiscall ATL::CAtlBaseModule::RemoveResourceInstance(struct HINSTANCE__ *)
   
   Library: Visual Studio 2003 Release */

bool __thiscall
ATL::CAtlBaseModule::RemoveResourceInstance(CAtlBaseModule *this,HINSTANCE__ *param_1)

{
  HINSTANCE__ **ppHVar1;
  bool bVar2;
  int iVar3;
  LPCRITICAL_SECTION local_c;
  CAtlBaseModule *local_8;
  
  local_c = (LPCRITICAL_SECTION)(this + 0x18);
  local_8 = this;
  EnterCriticalSection(local_c);
  iVar3 = 0;
  local_8 = (CAtlBaseModule *)CONCAT31(local_8._1_3_,1);
  if (0 < *(int *)(this + 0x34)) {
    do {
      ppHVar1 = CSimpleArray<HINSTANCE__*,ATL::CSimpleArrayEqualHelper<HINSTANCE__*>_>::operator[]
                          ((CSimpleArray<HINSTANCE__*,ATL::CSimpleArrayEqualHelper<HINSTANCE__*>_> *
                           )(this + 0x30),iVar3);
      if (*ppHVar1 == param_1) {
        CSimpleArray<HINSTANCE__*,ATL::CSimpleArrayEqualHelper<HINSTANCE__*>_>::RemoveAt
                  ((CSimpleArray<HINSTANCE__*,ATL::CSimpleArrayEqualHelper<HINSTANCE__*>_> *)
                   (this + 0x30),iVar3);
        bVar2 = true;
        goto LAB_00afb4e4;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0x34));
  }
  bVar2 = false;
LAB_00afb4e4:
  CComCritSecLock<ATL::CComCriticalSection>::~CComCritSecLock<ATL::CComCriticalSection>
            ((CComCritSecLock<ATL::CComCriticalSection> *)&local_c);
  return bVar2;
}


//// FUNCTION GetHInstanceAt @ 00afb501 ////

/* Library Function - Single Match
    public: struct HINSTANCE__ * __thiscall ATL::CAtlBaseModule::GetHInstanceAt(int)
   
   Library: Visual Studio 2003 Release */

HINSTANCE__ * __thiscall ATL::CAtlBaseModule::GetHInstanceAt(CAtlBaseModule *this,int param_1)

{
  HINSTANCE__ **ppHVar1;
  HINSTANCE__ *pHVar2;
  LPCRITICAL_SECTION local_c;
  CAtlBaseModule *local_8;
  
  local_c = (LPCRITICAL_SECTION)(this + 0x18);
  local_8 = this;
  EnterCriticalSection(local_c);
  local_8 = (CAtlBaseModule *)CONCAT31(local_8._1_3_,1);
  if ((*(int *)(this + 0x34) < param_1) || (param_1 < 0)) {
    pHVar2 = (HINSTANCE__ *)0x0;
  }
  else if (param_1 == *(int *)(this + 0x34)) {
    pHVar2 = *(HINSTANCE__ **)(this + 8);
  }
  else {
    ppHVar1 = CSimpleArray<HINSTANCE__*,ATL::CSimpleArrayEqualHelper<HINSTANCE__*>_>::operator[]
                        ((CSimpleArray<HINSTANCE__*,ATL::CSimpleArrayEqualHelper<HINSTANCE__*>_> *)
                         (this + 0x30),param_1);
    pHVar2 = *ppHVar1;
  }
  CComCritSecLock<ATL::CComCriticalSection>::~CComCritSecLock<ATL::CComCriticalSection>
            ((CComCritSecLock<ATL::CComCriticalSection> *)&local_c);
  return pHVar2;
}


//// FUNCTION Add @ 00afb54f ////

/* Library Function - Single Match
    public: int __thiscall ATL::CSimpleArray<struct HINSTANCE__ *,class
   ATL::CSimpleArrayEqualHelper<struct HINSTANCE__ *> >::Add(struct HINSTANCE__ * const &)
   
   Library: Visual Studio 2003 Release */

int __thiscall
ATL::CSimpleArray<HINSTANCE__*,ATL::CSimpleArrayEqualHelper<HINSTANCE__*>_>::Add
          (CSimpleArray<HINSTANCE__*,ATL::CSimpleArrayEqualHelper<HINSTANCE__*>_> *this,
          HINSTANCE__ **param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(this + 4) == *(int *)(this + 8)) {
    if (*(int *)(this + 8) == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = *(int *)(this + 4) * 2;
    }
    piVar1 = FUN_00ad58c5(*(int **)this,(uint *)(iVar2 << 2));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    *(int *)(this + 8) = iVar2;
    *(int **)this = piVar1;
  }
  InternalSetAtIndex(this,*(int *)(this + 4),param_1);
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return 1;
}


//// FUNCTION CAtlBaseModule @ 00afb59a ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    public: __thiscall ATL::CAtlBaseModule::CAtlBaseModule(void)
   
   Library: Visual Studio 2003 Release */

CAtlBaseModule * __thiscall ATL::CAtlBaseModule::CAtlBaseModule(CAtlBaseModule *this)

{
  int iVar1;
  _OSVERSIONINFOA local_9c;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  _ATL_BASE_MODULE70::_ATL_BASE_MODULE70((_ATL_BASE_MODULE70 *)this);
  *(undefined4 *)(this + 8) = 0x400000;
  *(undefined4 *)(this + 4) = 0x400000;
  *(undefined4 *)this = 0x3c;
  this[0xc] = (CAtlBaseModule)0x0;
  _memset(&local_9c,0,0x94);
  local_9c.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_9c);
  if (local_9c.dwPlatformId == 2) {
    if (local_9c.dwMajorVersion < 5) goto LAB_00afb614;
  }
  else if ((local_9c.dwPlatformId != 1) ||
          ((local_9c.dwMajorVersion < 5 &&
           ((local_9c.dwMajorVersion != 4 || (local_9c.dwMinorVersion == 0)))))) goto LAB_00afb614;
  this[0xc] = (CAtlBaseModule)0x1;
LAB_00afb614:
  *(undefined4 *)(this + 0x10) = 0x710;
  *(undefined **)(this + 0x14) = &DAT_00d8884c;
  iVar1 = FUN_009a1370((LPCRITICAL_SECTION)(this + 0x18));
  if (iVar1 < 0) {
    DAT_0105c88c = 1;
  }
  return this;
}


//// FUNCTION AddResourceInstance @ 00afb645 ////

/* Library Function - Single Match
    public: bool __thiscall ATL::CAtlBaseModule::AddResourceInstance(struct HINSTANCE__ *)
   
   Library: Visual Studio 2003 Release */

bool __thiscall ATL::CAtlBaseModule::AddResourceInstance(CAtlBaseModule *this,HINSTANCE__ *param_1)

{
  int iVar1;
  LPCRITICAL_SECTION local_c;
  CAtlBaseModule *local_8;
  
  local_c = (LPCRITICAL_SECTION)(this + 0x18);
  local_8 = this;
  EnterCriticalSection(local_c);
  local_8 = (CAtlBaseModule *)CONCAT31(local_8._1_3_,1);
  iVar1 = CSimpleArray<HINSTANCE__*,ATL::CSimpleArrayEqualHelper<HINSTANCE__*>_>::Add
                    ((CSimpleArray<HINSTANCE__*,ATL::CSimpleArrayEqualHelper<HINSTANCE__*>_> *)
                     (this + 0x30),&param_1);
  CComCritSecLock<ATL::CComCriticalSection>::~CComCritSecLock<ATL::CComCriticalSection>
            ((CComCritSecLock<ATL::CComCriticalSection> *)&local_c);
  return iVar1 != 0;
}


//// FUNCTION FUN_00afb6d0 @ 00afb6d0 ////

undefined4 __cdecl FUN_00afb6d0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *param_1;
}


//// FUNCTION FUN_00afb6f0 @ 00afb6f0 ////

void __thiscall
FUN_00afb6f0(void *this,int param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  if ((((param_1 != 0) && (param_2 != 0)) && (-1 < param_5)) && (param_5 < 10)) {
    *(int *)((int)this + 4) = param_2;
    *(int *)this = param_1;
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_3);
  }
  return;
}


//// FUNCTION Zlib_InflateBuffer @ 00afb800 ////

undefined4 * __thiscall Zlib_InflateBuffer(void *this,int param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((param_1 == 0) || (param_3 == 0)) {
    return (undefined4 *)0x0;
  }
  *(int *)((int)this + 4) = param_3;
  *(int *)this = param_1;
  puVar1 = operator_new(param_2);
  puVar4 = puVar1;
  for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  *(uint *)((int)this + 0x10) = param_2;
  *(undefined4 **)((int)this + 0xc) = puVar1;
  zlib_inflateInit_copy2((int)this,"1.2.1",0x38);
  iVar2 = zlib_inflate_copy2(this,4);
  if ((iVar2 == 1) || ((iVar2 != 2 && ((iVar2 != -5 || (*(int *)((int)this + 4) != 0)))))) {
    iVar2 = zlib_inflateEnd_copy2((int)this);
    if ((iVar2 == 0) && (param_2 == *(uint *)((int)this + 0x14))) {
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00afb8b0 @ 00afb8b0 ////

undefined4 __cdecl FUN_00afb8b0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *local_40;
  uint local_3c;
  undefined1 local_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_3c = 0;
  local_40 = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_00afb6f0(local_38,(int)param_1,param_2,&local_40,&local_3c,9);
  uVar5 = local_3c;
  if ((local_40 != (uint *)0x0) && (local_3c != 0)) {
    if ((int)param_2 < (int)local_3c) {
      uVar1 = ((int)(param_2 + 3 + ((int)(param_2 + 3) >> 0x1f & 3U)) >> 2) * 4 + 0x10;
      local_3c = uVar1;
      puVar2 = operator_new(uVar1);
      puVar6 = puVar2;
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar6 = 0;
        puVar6 = (uint *)((int)puVar6 + 1);
      }
      *puVar2 = uVar1;
      puVar2[1] = param_2;
      *(byte *)(puVar2 + 3) = (byte)puVar2[3] | 1;
    }
    else {
      uVar1 = ((int)(local_3c + 3 + ((int)(local_3c + 3) >> 0x1f & 3U)) >> 2) * 4 + 0x10;
      local_3c = uVar1;
      puVar2 = operator_new(uVar1);
      puVar6 = puVar2;
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar6 = 0;
        puVar6 = (uint *)((int)puVar6 + 1);
      }
      *puVar2 = uVar1;
      *(byte *)(puVar2 + 3) = (byte)puVar2[3] & 0xfe;
      puVar2[1] = param_2;
      param_2 = uVar5;
      param_1 = local_40;
    }
    puVar2[2] = uVar5;
    puVar6 = puVar2 + 4;
    for (uVar5 = param_2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = *param_1;
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar6 = (char)*param_1;
      param_1 = (uint *)((int)param_1 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  return 0;
}


//// FUNCTION Pak_DecodeEntryData @ 00afb9d0 ////

void __cdecl Pak_DecodeEntryData(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 local_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar3 = *(uint *)(param_1 + 4);
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    puVar1 = operator_new(uVar3);
    puVar4 = (undefined4 *)(param_1 + 0x10);
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
    return;
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  Zlib_InflateBuffer(local_38,param_1 + 0x10,uVar3,*(int *)(param_1 + 8));
  return;
}


//// FUNCTION DelayLoad_Direct3DCreate9 @ 00afba33 ////

void DelayLoad_Direct3DCreate9(void)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       ___delayLoadHelper2_8(&ImgDelayDescr_00e4a89c.grAttrs,(int *)&Direct3DCreate9_exref);
                    /* WARNING: Could not recover jumptable at 0x00afba4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


//// FUNCTION FUN_00afba54 @ 00afba54 ////

int * FUN_00afba54(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_00d88898;
  while( true ) {
    if (PTR_DAT_00e9b014 <= piVar1) {
      return &DAT_00d88870;
    }
    if (param_1 == *piVar1) break;
    piVar1 = piVar1 + 9;
  }
  return piVar1;
}


//// FUNCTION FUN_00afba7f @ 00afba7f ////

uint __fastcall FUN_00afba7f(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint local_8;
  
  uVar3 = 0;
  if (*(int *)(&DAT_00d890a0 + (*(int *)(param_1 + 4) * 5 + *(int *)(param_2 + 4)) * 4) != 0) {
    local_8 = 0;
    puVar5 = (uint *)(param_1 + 0xc);
    iVar4 = 5;
    do {
      uVar1 = *puVar5;
      if (uVar1 != 0) {
        local_8 = local_8 + 1;
      }
      uVar2 = *(uint *)((param_2 - param_1) + (int)puVar5);
      if (uVar1 < uVar2) {
        if (uVar1 == 0) {
          uVar3 = uVar3 + 0x100;
        }
        else {
          uVar3 = uVar3 + (uVar2 - uVar1);
        }
      }
      else if (uVar2 < uVar1) {
        if (uVar2 == 0) {
          uVar3 = uVar3 + 0x1000000;
        }
        else {
          uVar3 = uVar3 + (uVar1 - uVar2) * 0x10000;
        }
      }
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (local_8 != uVar3 >> 0x18) {
      return uVar3;
    }
  }
  return 0xffffffff;
}


//// FUNCTION FUN_00afbaf6 @ 00afbaf6 ////

int FUN_00afbaf6(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0xffffffff;
  piVar4 = &DAT_00d88870;
  do {
    if (*param_1 == 0) {
      return *piVar4;
    }
    piVar1 = FUN_00afba54(*param_1);
    if ((*piVar1 != 0) && ((piVar1[1] != 1 || (param_2 != 0)))) {
      if (*param_3 == *piVar1) {
        return *param_3;
      }
      uVar2 = FUN_00afba7f((int)param_3,(int)piVar1);
      if (((uVar2 != 0xffffffff) && (uVar2 <= uVar3)) &&
         ((uVar2 != uVar3 || ((uint)piVar1[2] < (uint)piVar4[2])))) {
        uVar3 = uVar2;
        piVar4 = piVar1;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}


//// FUNCTION FUN_00afbb67 @ 00afbb67 ////

int FUN_00afbb67(int *param_1,uint param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined1 local_18 [12];
  byte local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_00b05dc4(1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x18))(param_1,&local_8);
    (**(code **)(*param_1 + 0x1c))(param_1,&local_158);
    (**(code **)(*param_1 + 0x20))(param_1,0,local_28);
    if (((param_2 & 0x100000) != 0) &&
       ((**(code **)(*param_1 + 0x24))(param_1,local_18), (local_c & 0x20) != 0)) {
      param_2 = param_2 | 0x10;
    }
  }
  uVar3 = 0xffffffff;
  piVar4 = &DAT_00d88898;
  piVar6 = &DAT_00d88870;
  piVar5 = &DAT_00d88870;
  if (&DAT_00d88898 < PTR_DAT_00e9b014) {
    do {
      piVar6 = piVar5;
      if ((*piVar4 != 0) &&
         ((local_8 == (int *)0x0 ||
          (iVar1 = (**(code **)(*local_8 + 0x28))
                             (local_8,local_154,local_158,local_1c,param_2,param_3,*piVar4),
          -1 < iVar1)))) {
        piVar6 = piVar4;
        if (*param_4 == *piVar4) break;
        piVar6 = piVar5;
        if ((((piVar4[8] != 0) &&
             (uVar2 = FUN_00afba7f((int)param_4,(int)piVar4), uVar2 != 0xffffffff)) &&
            (uVar2 <= uVar3)) && ((uVar2 != uVar3 || ((uint)piVar4[2] < (uint)piVar5[2])))) {
          uVar3 = uVar2;
          piVar6 = piVar4;
        }
      }
      piVar4 = piVar4 + 9;
      piVar5 = piVar6;
    } while (piVar4 < PTR_DAT_00e9b014);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  FUN_00b05dc4(0);
  return *piVar6;
}


//// FUNCTION FUN_00afbc65 @ 00afbc65 ////

int FUN_00afbc65(int param_1)

{
  int iStack_8;
  
  if (param_1 == 0x36314c41) {
    iStack_8 = 0x33;
    param_1 = iStack_8;
  }
  else if (param_1 == 0x36315220) {
    iStack_8 = 0x24;
    param_1 = iStack_8;
  }
  return param_1;
}


//// FUNCTION FUN_00afbc86 @ 00afbc86 ////

int FUN_00afbc86(float *param_1,float *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_58 [21];
  
  FUN_00b061ad(local_58);
  iVar1 = FUN_00b0a172(local_58,param_1,param_2,param_3,0);
  iVar2 = 0;
  if (iVar1 < 0) {
    iVar2 = iVar1;
  }
  FUN_00b061c6((int)local_58);
  return iVar2;
}


//// FUNCTION FUN_00afbcc0 @ 00afbcc0 ////

float10 FUN_00afbcc0(float param_1)

{
  return SQRT((float10)param_1);
}


//// FUNCTION FUN_00afbcda @ 00afbcda ////

int FUN_00afbcda(int *param_1,undefined4 param_2,uint *param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 *param_8,uint param_9,
                undefined4 param_10)

{
  int iVar1;
  int extraout_EAX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_cc [18];
  undefined4 local_84;
  byte local_78 [20];
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c [8];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10 [3];
  
  FUN_00b0a7fd(local_10);
  FUN_00b0e258((undefined4 *)local_78);
  if (param_1 == (int *)0x0) {
    iVar2 = -0x7789f794;
  }
  else if ((param_4 == 0) || (param_8 == (undefined4 *)0x0)) {
    iVar2 = -0x7789f794;
  }
  else {
    if (param_9 == 0xffffffff) {
      param_9 = 0x80004;
    }
    iVar1 = FUN_00b0e42c(local_78,local_cc,param_1,param_2,param_3,0,0);
    if (-1 < iVar1) {
      local_60 = param_5;
      local_5c = param_6;
      local_64 = param_4;
      local_58 = 0;
      local_54[0] = *param_8;
      local_54[1] = param_8[1];
      local_54[2] = param_8[2];
      local_54[3] = param_8[3];
      local_44 = 0;
      local_40 = 1;
      puVar3 = local_54;
      puVar4 = local_3c;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      local_1c = local_84;
      local_18 = param_10;
      local_14 = param_7;
      FUN_00b0e11b(local_10,local_cc,&local_64,param_9);
      iVar1 = extraout_EAX;
      iVar2 = 0;
      if (-1 < extraout_EAX) goto LAB_00afbdab;
    }
    iVar2 = iVar1;
  }
LAB_00afbdab:
  thunk_FUN_00b0e34a(local_78);
  FUN_00b0a807(local_10);
  return iVar2;
}


//// FUNCTION FUN_00afbdc2 @ 00afbdc2 ////

int FUN_00afbdc2(LPCWSTR param_1,int param_2,undefined4 param_3,uint *param_4,int param_5)

{
  int *in_EAX;
  int iVar1;
  int local_e0 [21];
  undefined4 local_8c [24];
  int local_2c;
  byte local_18 [20];
  
  FUN_00b061ad(local_8c);
  FUN_00b0e258((undefined4 *)local_18);
  if ((param_1 == (LPCWSTR)0x0) || (in_EAX == (int *)0x0)) {
    iVar1 = -0x7789f794;
  }
  else {
    iVar1 = FUN_00b0e42c(local_18,local_e0,in_EAX,param_3,param_4,0,1);
    if (((-1 < iVar1) && (iVar1 = FUN_00b06242(local_8c,local_e0), -1 < iVar1)) &&
       (iVar1 = FUN_00b0a424(local_8c,param_1,param_2,param_5), -1 < iVar1)) {
      (**(code **)(*in_EAX + 0x30))();
      if (local_2c == 0) {
        (**(code **)(*in_EAX + 0xc))();
        iVar1 = (**(code **)(*(int *)param_1 + 0xc))(param_1);
        (**(code **)(*(int *)param_1 + 8))(param_1);
        if (iVar1 != 0) {
          iVar1 = -0x7789f798;
          goto LAB_00afbe82;
        }
      }
      iVar1 = 0;
    }
  }
LAB_00afbe82:
  thunk_FUN_00b0e34a(local_18);
  FUN_00b061c6((int)local_8c);
  return iVar1;
}


//// FUNCTION FUN_00afbe9c @ 00afbe9c ////

void FUN_00afbe9c(LPCWSTR param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
  FUN_00afbdc2(param_1,param_2,param_4,param_5,0);
  return;
}


//// FUNCTION FUN_00afbebb @ 00afbebb ////

void FUN_00afbebb(LPCWSTR param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
  FUN_00afbdc2(param_1,param_2,param_4,param_5,1);
  return;
}


//// FUNCTION FUN_00afbeda @ 00afbeda ////

void FUN_00afbeda(LPCWSTR param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
  FUN_00afbdc2(param_1,param_2,param_4,param_5,2);
  return;
}


//// FUNCTION FUN_00afbef9 @ 00afbef9 ////

void __thiscall FUN_00afbef9(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return;
}


//// FUNCTION FUN_00afbf15 @ 00afbf15 ////

int FUN_00afbf15(int *param_1,undefined4 param_2,uint *param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 *param_9,
                uint param_10,undefined4 param_11)

{
  int extraout_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_bc [18];
  undefined4 local_74;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [6];
  undefined4 local_40 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14 [3];
  int local_8;
  
  FUN_00b0a7fd(local_14);
  FUN_00b0e3fd(&local_8);
  if (((param_1 == (int *)0x0) || (param_4 == 0)) || (param_9 == (undefined4 *)0x0)) {
    iVar1 = -0x7789f794;
  }
  else {
    if (param_10 == 0xffffffff) {
      param_10 = 0x80004;
    }
    iVar1 = FUN_00b0e920(&local_8,local_bc,param_1,param_2,param_3,0,0);
    if (-1 < iVar1) {
      local_64 = param_5;
      local_60 = param_6;
      local_5c = param_7;
      local_68 = param_4;
      puVar2 = param_9;
      puVar3 = local_58;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar2 = local_40;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = *param_9;
        param_9 = param_9 + 1;
        puVar2 = puVar2 + 1;
      }
      local_20 = local_74;
      local_1c = param_11;
      local_18 = param_8;
      FUN_00b0e11b(local_14,local_bc,&local_68,param_10);
      iVar1 = extraout_EAX;
      if (-1 < extraout_EAX) {
        iVar1 = 0;
      }
    }
  }
  thunk_FUN_00b0e403(&local_8);
  FUN_00b0a807(local_14);
  return iVar1;
}


//// FUNCTION FUN_00afbff1 @ 00afbff1 ////

int FUN_00afbff1(LPCWSTR param_1,int param_2,undefined4 param_3,uint *param_4,int param_5)

{
  int *in_EAX;
  int iVar1;
  int local_cc [21];
  undefined4 local_78 [24];
  int local_18;
  int local_8;
  
  FUN_00b061ad(local_78);
  FUN_00b0e3fd(&local_8);
  if ((param_1 == (LPCWSTR)0x0) || (in_EAX == (int *)0x0)) {
    iVar1 = -0x7789f794;
  }
  else {
    iVar1 = FUN_00b0e920(&local_8,local_cc,in_EAX,param_3,param_4,0,1);
    if (((-1 < iVar1) && (iVar1 = FUN_00b06242(local_78,local_cc), -1 < iVar1)) &&
       (iVar1 = FUN_00b0a424(local_78,param_1,param_2,param_5), -1 < iVar1)) {
      (**(code **)(*in_EAX + 0x20))();
      if (local_18 == 0) {
        (**(code **)(*in_EAX + 0xc))();
        iVar1 = (**(code **)(*(int *)param_1 + 0xc))(param_1);
        (**(code **)(*(int *)param_1 + 8))(param_1);
        if (iVar1 != 0) {
          iVar1 = -0x7789f798;
          goto LAB_00afc0a8;
        }
      }
      iVar1 = 0;
    }
  }
LAB_00afc0a8:
  thunk_FUN_00b0e403(&local_8);
  FUN_00b061c6((int)local_78);
  return iVar1;
}


//// FUNCTION FUN_00afc0bf @ 00afc0bf ////

void FUN_00afc0bf(LPCWSTR param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
  FUN_00afbff1(param_1,param_2,param_4,param_5,0);
  return;
}


//// FUNCTION FUN_00afc0de @ 00afc0de ////

void FUN_00afc0de(LPCWSTR param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
  FUN_00afbff1(param_1,param_2,param_4,param_5,1);
  return;
}


//// FUNCTION FUN_00afc0fd @ 00afc0fd ////

void FUN_00afc0fd(LPCWSTR param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
  FUN_00afbff1(param_1,param_2,param_4,param_5,2);
  return;
}


//// FUNCTION FUN_00afc11c @ 00afc11c ////

undefined4 __fastcall
FUN_00afc11c(undefined4 param_1,int *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6
            ,uint param_7,int *param_8,int param_9,uint param_10)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_148 [60];
  uint local_10c;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  int local_e0;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  if (param_2 == (int *)0x0) {
    return 0x8876086c;
  }
  if (param_7 == 0xffffffff) {
    param_7 = 0;
  }
  if (((param_7 & 0xffe039ec) != 0) ||
     ((((param_9 != 0 && (param_9 != 1)) && (param_9 != 2)) && (param_9 != 3)))) {
    return 0x8876086c;
  }
  if (param_8 == (int *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = *param_8;
  }
  if (param_9 == 3) {
    if (local_14 == 0) {
      local_14 = 0x15;
    }
  }
  else {
    piVar1 = FUN_00afba54(local_14);
    local_14 = FUN_00afbb67(param_2,param_7,param_10,piVar1);
    if (local_14 == 0) {
      return 0x8876086a;
    }
  }
  if (param_3 == (uint *)0x0) {
    local_c = 0xffffffff;
  }
  else {
    local_c = *param_3;
  }
  if (param_4 == (uint *)0x0) {
    local_8 = 0xffffffff;
  }
  else {
    local_8 = *param_4;
  }
  if (param_5 == (uint *)0x0) {
    local_10 = 0xffffffff;
  }
  else {
    local_10 = *param_5;
  }
  if (param_6 == (uint *)0x0) {
    local_18 = 0xffffffff;
  }
  else {
    local_18 = *param_6;
  }
  if (local_c == 0xffffffff) {
    if (local_8 != 0xffffffff) {
      local_c = local_8;
      goto LAB_00afc22b;
    }
    local_8 = 0x100;
    local_c = 0x100;
  }
  else {
    if (local_8 == 0xffffffff) {
      local_8 = local_c;
    }
LAB_00afc22b:
    if (local_c == 0) {
      local_c = 1;
    }
    if (local_8 == 0) {
      local_8 = 1;
    }
  }
  if (param_10 == 5) {
    if (local_8 < local_c) {
      local_8 = local_c;
    }
    local_c = local_8;
  }
  if ((local_10 == 0xffffffff) || (local_10 == 0)) {
    local_10 = 1;
  }
  if (param_9 == 3) goto LAB_00afc39c;
  (**(code **)(*param_2 + 0x1c))(param_2,local_148);
  if (param_10 == 4) {
    if (local_e8 < local_10) {
      local_10 = local_e8;
    }
    if (local_e8 < local_c) {
      local_c = local_e8;
    }
LAB_00afc2fb:
    if (local_e8 < local_8) {
      local_8 = local_e8;
    }
  }
  else {
    if (local_f0 < local_c) {
      local_c = local_f0;
    }
    if (local_ec < local_8) {
      local_8 = local_ec;
    }
    if (param_10 == 3) {
      if ((local_10c & 0x20) != 0) {
        local_e0 = 1;
      }
      if (local_e0 != 0) {
        if (local_e0 * local_8 < local_c) {
          local_c = local_e0 * local_8;
        }
        local_e8 = local_e0 * local_c;
        goto LAB_00afc2fb;
      }
    }
  }
  uVar4 = local_8;
  uVar3 = local_c;
  uVar5 = local_10;
  if (param_10 == 3) {
    uVar2 = 2;
  }
  else if (param_10 == 4) {
    uVar2 = 0x40000;
  }
  else {
    uVar2 = param_10;
    if (param_10 == 5) {
      uVar2 = 0x20000;
    }
  }
  if ((((local_18 == 1) && ((local_10c & 0x100) != 0)) &&
      ((local_14 != 0x31545844 &&
       (((local_14 != 0x32545844 && (local_14 != 0x33545844)) && (local_14 != 0x34545844)))))) &&
     (local_14 != 0x35545844)) {
    uVar2 = 0;
  }
  if ((local_10c & uVar2) != 0) {
    local_c = 1;
    if (1 < uVar3) {
      do {
        local_c = local_c << 1;
      } while (local_c < uVar3);
    }
    local_8 = 1;
    if (1 < uVar4) {
      do {
        local_8 = local_8 << 1;
      } while (local_8 < uVar4);
    }
    local_10 = 1;
    if (1 < uVar5) {
      do {
        local_10 = local_10 << 1;
      } while (local_10 < uVar5);
    }
  }
LAB_00afc39c:
  if (((local_14 == 0x31545844) || (local_14 == 0x32545844)) ||
     ((local_14 == 0x33545844 || ((local_14 == 0x34545844 || (local_14 == 0x35545844)))))) {
    local_c = local_c + 3 & 0xfffffffc;
    local_8 = local_8 + 3 & 0xfffffffc;
  }
  if (param_10 == 3) {
    uVar5 = 0x4000;
  }
  else if (param_10 == 4) {
    uVar5 = 0x8000;
  }
  else {
    uVar5 = param_10;
    if (param_10 == 5) {
      uVar5 = 0x10000;
    }
  }
  if ((param_9 == 3) ||
     (((local_10c & uVar5) != 0 &&
      (((local_10c & 0x100) == 0 ||
       ((((local_c & local_c - 1) == 0 && ((local_8 & local_8 - 1) == 0)) &&
        ((local_10 & local_10 - 1) == 0)))))))) {
    uVar5 = 0;
    for (uVar3 = local_c; uVar3 != 0; uVar3 = uVar3 >> 1) {
      uVar5 = uVar5 + 1;
    }
    uVar3 = 0;
    for (uVar4 = local_8; uVar4 != 0; uVar4 = uVar4 >> 1) {
      uVar3 = uVar3 + 1;
    }
    uVar2 = 0;
    for (uVar4 = local_10; uVar4 != 0; uVar4 = uVar4 >> 1) {
      uVar2 = uVar2 + 1;
    }
    if (uVar5 <= uVar3) {
      uVar5 = uVar3;
    }
    if ((param_10 == 4) && (uVar5 < uVar2)) {
      uVar5 = uVar2;
    }
    if ((uVar5 < local_18) || (local_18 == 0)) {
      local_18 = uVar5;
    }
    if ((local_18 != 1) && ((param_7 & 0x400) != 0)) {
      local_18 = 0;
    }
  }
  else {
    local_18 = 1;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = local_c;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = local_8;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = local_10;
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = local_18;
  }
  if (param_8 != (int *)0x0) {
    *param_8 = local_14;
  }
  return 0;
}


//// FUNCTION FUN_00afc4d1 @ 00afc4d1 ////

void __thiscall
FUN_00afc4d1(void *this,int *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5,
            int *param_6,int param_7)

{
  FUN_00afc11c(this,param_1,param_2,param_3,(uint *)0x0,param_4,param_5,param_6,param_7,3);
  return;
}


//// FUNCTION FUN_00afc4f8 @ 00afc4f8 ////

void __thiscall
FUN_00afc4f8(void *this,int *param_1,uint *param_2,uint *param_3,uint param_4,int *param_5,
            int param_6)

{
  FUN_00afc11c(this,param_1,param_2,param_2,(uint *)0x0,param_3,param_4,param_5,param_6,5);
  return;
}


//// FUNCTION FUN_00afc51f @ 00afc51f ////

void __thiscall
FUN_00afc51f(void *this,int *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
            uint param_6,int *param_7,int param_8)

{
  FUN_00afc11c(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,4);
  return;
}


//// FUNCTION FUN_00afc547 @ 00afc547 ////

int __thiscall
FUN_00afc547(void *this,int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6
            ,int param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 == (int *)0x0) || (param_8 == 0)) {
    iVar1 = -0x7789f794;
  }
  else {
    uVar2 = param_5;
    if (param_5 == 0xffffffff) {
      uVar2 = 0;
    }
    iVar1 = FUN_00afc4d1(this,param_1,&param_2,&param_3,&param_4,uVar2,&param_6,param_7);
    if ((-1 < iVar1) &&
       (iVar1 = (**(code **)(*param_1 + 0x5c))
                          (param_1,param_2,param_3,param_4,uVar2 & 0xffe07fff,param_6,param_7,
                           param_8,0), -1 < iVar1)) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00afc5b7 @ 00afc5b7 ////

int __thiscall
FUN_00afc5b7(void *this,int *param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 == (int *)0x0) || (param_7 == 0)) {
    iVar1 = -0x7789f794;
  }
  else {
    uVar2 = param_4;
    if (param_4 == 0xffffffff) {
      uVar2 = 0;
    }
    iVar1 = FUN_00afc4f8(this,param_1,&param_2,&param_3,uVar2,&param_5,param_6);
    if ((-1 < iVar1) &&
       (iVar1 = (**(code **)(*param_1 + 100))
                          (param_1,param_2,param_3,uVar2 & 0xffe07fff,param_5,param_6,param_7,0),
       -1 < iVar1)) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00afc620 @ 00afc620 ////

int __thiscall
FUN_00afc620(void *this,int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
            uint param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 == (int *)0x0) || (param_9 == 0)) {
    iVar1 = -0x7789f794;
  }
  else {
    uVar2 = param_6;
    if (param_6 == 0xffffffff) {
      uVar2 = 0;
    }
    iVar1 = FUN_00afc11c(this,param_1,&param_2,&param_3,&param_4,&param_5,uVar2,&param_7,param_8,4);
    if ((-1 < iVar1) &&
       (iVar1 = (**(code **)(*param_1 + 0x60))
                          (param_1,param_2,param_3,param_4,param_5,uVar2 & 0xffe07fff,param_7,
                           param_8,param_9,0), -1 < iVar1)) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00afc69a @ 00afc69a ////

void FUN_00afc69a(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_2[2];
  fVar2 = *param_3;
  fVar3 = param_3[2];
  fVar4 = *param_2;
  fVar5 = *param_2;
  fVar6 = param_3[1];
  fVar7 = *param_3;
  fVar8 = param_2[1];
  *param_1 = param_3[2] * param_2[1] - param_2[2] * param_3[1];
  param_1[1] = fVar1 * fVar2 - fVar3 * fVar4;
  param_1[2] = fVar5 * fVar6 - fVar7 * fVar8;
  return;
}


//// FUNCTION FUN_00afc6ea @ 00afc6ea ////

int FUN_00afc6ea(int *param_1,undefined *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 local_e4 [21];
  undefined1 local_90 [24];
  int local_78;
  undefined1 local_70 [24];
  int local_58;
  float local_54;
  byte local_50 [20];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  uint local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  void *local_10;
  uint local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_00b0e258((undefined4 *)local_50);
  if ((param_1 == (int *)0x0) || (param_2 == (undefined *)0x0)) {
    iVar3 = -0x7789f794;
  }
  else {
    local_24 = (**(code **)(*param_1 + 0x34))(param_1);
    iVar3 = (**(code **)(*param_1 + 0x44))(param_1,0,local_90);
    if (-1 < iVar3) {
      local_10 = operator_new(local_78 << 4);
      if (local_10 == (void *)0x0) {
        local_10 = (void *)0x0;
      }
      else {
        FUN_00401380(local_10,0x10,local_78,&LAB_00afbcd7);
      }
      if ((local_10 != (void *)0x0) && (local_c = 0, local_24 != 0)) {
        do {
          iVar3 = (**(code **)(*param_1 + 0x44))(param_1,local_c,local_70);
          if (iVar3 < 0) break;
          (**(code **)(*param_1 + 0x48))(param_1,local_c,&local_8);
          if (local_c == 0) {
            uVar5 = 0x20000;
          }
          else {
            uVar5 = 0;
          }
          iVar1 = FUN_00b0e42c(local_50,local_e4,local_8,0,(uint *)0x0,0,uVar5);
          iVar3 = local_58;
          if (iVar1 < 0) break;
          local_34 = (float)local_58;
          local_20 = local_54;
          if (local_58 < 0) {
            local_34 = local_34 + 4.2949673e+09;
          }
          local_34 = 1.0 / local_34;
          local_1c = local_54;
          local_30 = (float)(int)local_54;
          if ((int)local_54 < 0) {
            local_30 = local_30 + 4.2949673e+09;
          }
          local_30 = 1.0 / local_30;
          local_2c = local_34;
          local_28 = local_30;
          piVar2 = FUN_00b19e49(local_e4);
          if (piVar2 == (int *)0x0) break;
          FUN_00b10119((int)piVar2);
          local_14 = 0;
          if (0 < (int)local_20) {
            do {
              local_18 = 0;
              if (0 < iVar3) {
                local_1c = ((float)local_14 + 0.5) * local_28;
                pvVar4 = local_10;
                do {
                  local_38 = local_1c;
                  local_3c = ((float)local_18 + 0.5) * local_2c;
                  (*(code *)param_2)(pvVar4,&local_3c,&local_34,param_3);
                  pvVar4 = (void *)((int)pvVar4 + 0x10);
                  local_18 = local_18 + 1;
                } while (local_18 < iVar3);
              }
              (**(code **)(*piVar2 + 8))(local_14,0,local_10);
              local_14 = local_14 + 1;
            } while (local_14 < (int)local_20);
          }
          (**(code **)*piVar2)(1);
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 8))(local_8);
            local_8 = (int *)0x0;
          }
          local_c = local_c + 1;
        } while (local_c < local_24);
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_10);
    }
  }
  thunk_FUN_00b0e34a(local_50);
  return iVar3;
}


//// FUNCTION FUN_00afc900 @ 00afc900 ////

int FUN_00afc900(int *param_1,undefined *param_2,undefined4 param_3)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_ec [24];
  int local_d4;
  undefined1 local_cc [24];
  int local_b4;
  undefined4 local_ac [21];
  byte local_58 [20];
  uint local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  uint local_24;
  float local_20;
  float local_1c;
  void *local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  local_c = (int *)0x0;
  FUN_00b0e258((undefined4 *)local_58);
  if ((param_1 == (int *)0x0) || (param_2 == (undefined *)0x0)) {
    iVar3 = -0x7789f794;
  }
  else {
    local_44 = (**(code **)(*param_1 + 0x34))(param_1);
    iVar3 = (**(code **)(*param_1 + 0x44))(param_1,0,local_ec);
    if (-1 < iVar3) {
      local_18 = operator_new(local_d4 << 4);
      if (local_18 == (void *)0x0) {
        local_18 = (void *)0x0;
      }
      else {
        FUN_00401380(local_18,0x10,local_d4,&LAB_00afbcd7);
      }
      if ((local_18 != (void *)0x0) && (local_24 = 0, local_44 != 0)) {
        while ((iVar3 = (**(code **)(*param_1 + 0x48))(param_1,0,local_24,&local_c), -1 < iVar3 &&
               (iVar3 = (**(code **)(*param_1 + 0x44))(param_1,local_24,local_cc), -1 < iVar3))) {
          if (local_24 == 0) {
            uVar4 = 0x20000;
          }
          else {
            uVar4 = 0;
          }
          iVar3 = FUN_00b0e42c(local_58,local_ac,local_c,0,(uint *)0x0,0,uVar4);
          if ((iVar3 < 0) || (piVar1 = FUN_00b19e49(local_ac), piVar1 == (int *)0x0)) break;
          FUN_00b10119((int)piVar1);
          local_1c = (float)local_b4;
          local_14 = local_b4;
          if (local_b4 < 0) {
            local_1c = local_1c + 4.2949673e+09;
          }
          local_1c = 1.0 / local_1c;
          local_10 = 0;
          local_3c = 0.0;
          local_40 = local_1c + local_1c;
          local_38 = local_40;
          local_34 = local_40;
          if (0 < local_b4) {
            do {
              local_8 = 0;
              local_20 = 1.0 - ((float)local_10 + (float)local_10 + 1.0) * local_1c;
              pvVar2 = local_18;
              do {
                local_2c = local_20;
                local_28 = 1.0 - ((float)local_8 + (float)local_8 + 1.0) * local_1c;
                local_30 = 1.0;
                (*(code *)param_2)(pvVar2,&local_30,&local_3c,param_3);
                iVar3 = local_10;
                pvVar2 = (void *)((int)pvVar2 + 0x10);
                local_8 = local_8 + 1;
              } while (local_8 < local_14);
              (**(code **)(*piVar1 + 8))(local_10,0,local_18);
              local_10 = iVar3 + 1;
            } while (local_10 < local_14);
          }
          (**(code **)*piVar1)(1);
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 8))(local_c);
            local_c = (int *)0x0;
          }
          iVar3 = (**(code **)(*param_1 + 0x48))(param_1,1,local_24,&local_c);
          if (((iVar3 < 0) ||
              (iVar3 = FUN_00b0e42c(local_58,local_ac,local_c,0,(uint *)0x0,0,0), iVar3 < 0)) ||
             (piVar1 = FUN_00b19e49(local_ac), piVar1 == (int *)0x0)) break;
          FUN_00b10119((int)piVar1);
          local_3c = 0.0;
          local_10 = 0;
          local_38 = local_40;
          local_34 = local_40;
          if (0 < local_14) {
            do {
              local_8 = 0;
              local_20 = 1.0 - ((float)local_10 + (float)local_10 + 1.0) * local_1c;
              pvVar2 = local_18;
              do {
                local_2c = local_20;
                local_30 = -1.0;
                local_28 = ((float)local_8 + (float)local_8 + 1.0) * local_1c - 1.0;
                (*(code *)param_2)(pvVar2,&local_30,&local_3c,param_3);
                iVar3 = local_10;
                pvVar2 = (void *)((int)pvVar2 + 0x10);
                local_8 = local_8 + 1;
              } while (local_8 < local_14);
              (**(code **)(*piVar1 + 8))(local_10,0,local_18);
              local_10 = iVar3 + 1;
            } while (local_10 < local_14);
          }
          (**(code **)*piVar1)(1);
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 8))(local_c);
            local_c = (int *)0x0;
          }
          iVar3 = (**(code **)(*param_1 + 0x48))(param_1,2,local_24,&local_c);
          if (((iVar3 < 0) ||
              (iVar3 = FUN_00b0e42c(local_58,local_ac,local_c,0,(uint *)0x0,0,0), iVar3 < 0)) ||
             (piVar1 = FUN_00b19e49(local_ac), piVar1 == (int *)0x0)) break;
          FUN_00b10119((int)piVar1);
          local_3c = local_40;
          local_10 = 0;
          local_38 = 0.0;
          local_34 = local_40;
          if (0 < local_14) {
            do {
              local_8 = 0;
              local_20 = ((float)local_10 + (float)local_10 + 1.0) * local_1c - 1.0;
              pvVar2 = local_18;
              do {
                local_2c = 1.0;
                local_28 = local_20;
                local_30 = ((float)local_8 + (float)local_8 + 1.0) * local_1c - 1.0;
                (*(code *)param_2)(pvVar2,&local_30,&local_3c,param_3);
                iVar3 = local_10;
                pvVar2 = (void *)((int)pvVar2 + 0x10);
                local_8 = local_8 + 1;
              } while (local_8 < local_14);
              (**(code **)(*piVar1 + 8))(local_10,0,local_18);
              local_10 = iVar3 + 1;
            } while (local_10 < local_14);
          }
          (**(code **)*piVar1)(1);
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 8))(local_c);
            local_c = (int *)0x0;
          }
          iVar3 = (**(code **)(*param_1 + 0x48))(param_1,3,local_24,&local_c);
          if (((iVar3 < 0) ||
              (iVar3 = FUN_00b0e42c(local_58,local_ac,local_c,0,(uint *)0x0,0,0), iVar3 < 0)) ||
             (piVar1 = FUN_00b19e49(local_ac), piVar1 == (int *)0x0)) break;
          FUN_00b10119((int)piVar1);
          local_3c = local_40;
          local_10 = 0;
          local_38 = 0.0;
          local_34 = local_40;
          if (0 < local_14) {
            do {
              local_8 = 0;
              local_20 = 1.0 - ((float)local_10 + (float)local_10 + 1.0) * local_1c;
              pvVar2 = local_18;
              do {
                local_28 = local_20;
                local_2c = -1.0;
                local_30 = ((float)local_8 + (float)local_8 + 1.0) * local_1c - 1.0;
                (*(code *)param_2)(pvVar2,&local_30,&local_3c,param_3);
                iVar3 = local_10;
                pvVar2 = (void *)((int)pvVar2 + 0x10);
                local_8 = local_8 + 1;
              } while (local_8 < local_14);
              (**(code **)(*piVar1 + 8))(local_10,0,local_18);
              local_10 = iVar3 + 1;
            } while (local_10 < local_14);
          }
          (**(code **)*piVar1)(1);
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 8))(local_c);
            local_c = (int *)0x0;
          }
          iVar3 = (**(code **)(*param_1 + 0x48))(param_1,4,local_24,&local_c);
          if (((iVar3 < 0) ||
              (iVar3 = FUN_00b0e42c(local_58,local_ac,local_c,0,(uint *)0x0,0,0), iVar3 < 0)) ||
             (piVar1 = FUN_00b19e49(local_ac), piVar1 == (int *)0x0)) break;
          FUN_00b10119((int)piVar1);
          local_3c = local_40;
          local_38 = local_40;
          local_10 = 0;
          local_34 = 0.0;
          if (0 < local_14) {
            do {
              local_8 = 0;
              local_20 = 1.0 - ((float)local_10 + (float)local_10 + 1.0) * local_1c;
              pvVar2 = local_18;
              do {
                local_28 = 1.0;
                local_2c = local_20;
                local_30 = ((float)local_8 + (float)local_8 + 1.0) * local_1c - 1.0;
                (*(code *)param_2)(pvVar2,&local_30,&local_3c,param_3);
                iVar3 = local_10;
                pvVar2 = (void *)((int)pvVar2 + 0x10);
                local_8 = local_8 + 1;
              } while (local_8 < local_14);
              (**(code **)(*piVar1 + 8))(local_10,0,local_18);
              local_10 = iVar3 + 1;
            } while (local_10 < local_14);
          }
          (**(code **)*piVar1)(1);
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 8))(local_c);
            local_c = (int *)0x0;
          }
          iVar3 = (**(code **)(*param_1 + 0x48))(param_1,5,local_24,&local_c);
          if (((iVar3 < 0) ||
              (iVar3 = FUN_00b0e42c(local_58,local_ac,local_c,0,(uint *)0x0,0,0), iVar3 < 0)) ||
             (piVar1 = FUN_00b19e49(local_ac), piVar1 == (int *)0x0)) break;
          FUN_00b10119((int)piVar1);
          local_3c = local_40;
          local_38 = local_40;
          local_10 = 0;
          local_34 = 0.0;
          if (0 < local_14) {
            do {
              local_8 = 0;
              local_20 = 1.0 - ((float)local_10 + (float)local_10 + 1.0) * local_1c;
              pvVar2 = local_18;
              do {
                local_2c = local_20;
                local_28 = -1.0;
                local_30 = 1.0 - ((float)local_8 + (float)local_8 + 1.0) * local_1c;
                (*(code *)param_2)(pvVar2,&local_30,&local_3c,param_3);
                iVar3 = local_10;
                pvVar2 = (void *)((int)pvVar2 + 0x10);
                local_8 = local_8 + 1;
              } while (local_8 < local_14);
              (**(code **)(*piVar1 + 8))(local_10,0,local_18);
              local_10 = iVar3 + 1;
            } while (local_10 < local_14);
          }
          (**(code **)*piVar1)(1);
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 8))(local_c);
            local_c = (int *)0x0;
          }
          local_24 = local_24 + 1;
          if (local_44 <= local_24) break;
        }
      }
      if (local_c != (int *)0x0) {
        (**(code **)(*local_c + 8))(local_c);
        local_c = (int *)0x0;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  thunk_FUN_00b0e34a(local_58);
  return iVar3;
}


//// FUNCTION FUN_00afd029 @ 00afd029 ////

int FUN_00afd029(int *param_1,undefined *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 local_e4 [21];
  undefined1 local_90 [16];
  int local_80;
  undefined1 local_74 [16];
  int local_64;
  int local_60;
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
  uint local_30;
  float local_2c;
  int local_28;
  int local_24;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  uint local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_00b0e3fd(&local_24);
  if ((param_1 == (int *)0x0) || (param_2 == (undefined *)0x0)) {
    iVar2 = -0x7789f794;
  }
  else {
    local_30 = (**(code **)(*param_1 + 0x34))(param_1);
    iVar2 = (**(code **)(*param_1 + 0x44))(param_1,0,local_90);
    if (-1 < iVar2) {
      local_28 = local_80;
      local_10 = operator_new(local_80 << 4);
      if (local_10 == (void *)0x0) {
        local_10 = (void *)0x0;
      }
      else {
        FUN_00401380(local_10,0x10,local_28,&LAB_00afbcd7);
      }
      if ((local_10 != (void *)0x0) && (local_c = 0, local_30 != 0)) {
        while (iVar2 = (**(code **)(*param_1 + 0x44))(param_1,local_c,local_74), -1 < iVar2) {
          (**(code **)(*param_1 + 0x48))(param_1,local_c,&local_8);
          if (local_c == 0) {
            uVar4 = 0x20000;
          }
          else {
            uVar4 = 0;
          }
          iVar2 = FUN_00b0e920(&local_24,local_e4,local_8,0,(uint *)0x0,0,uVar4);
          if ((iVar2 < 0) || (piVar1 = FUN_00b19e49(local_e4), piVar1 == (int *)0x0)) break;
          FUN_00b10119((int)piVar1);
          iVar2 = local_64;
          local_58 = (float)local_64;
          local_28 = local_60;
          local_3c = local_5c;
          if (local_64 < 0) {
            local_58 = local_58 + 4.2949673e+09;
          }
          local_58 = 1.0 / local_58;
          local_54 = (float)local_60;
          if (local_60 < 0) {
            local_54 = local_54 + 4.2949673e+09;
          }
          local_54 = 1.0 / local_54;
          local_20 = local_5c;
          local_50 = (float)(int)local_5c;
          if ((int)local_5c < 0) {
            local_50 = local_50 + 4.2949673e+09;
          }
          local_50 = 1.0 / local_50;
          local_18 = 0;
          local_38 = local_54;
          local_34 = local_50;
          local_2c = local_58;
          if (0 < (int)local_5c) {
            do {
              local_14 = 0;
              if (0 < local_28) {
                do {
                  local_1c = 0;
                  if (0 < iVar2) {
                    local_40 = ((float)local_14 + 0.5) * local_38;
                    local_20 = ((float)local_18 + 0.5) * local_34;
                    pvVar3 = local_10;
                    do {
                      local_48 = local_40;
                      local_44 = local_20;
                      local_4c = ((float)local_1c + 0.5) * local_2c;
                      (*(code *)param_2)(pvVar3,&local_4c,&local_58,param_3);
                      pvVar3 = (void *)((int)pvVar3 + 0x10);
                      local_1c = local_1c + 1;
                    } while (local_1c < iVar2);
                  }
                  (**(code **)(*piVar1 + 8))(local_14,local_18,local_10);
                  local_14 = local_14 + 1;
                } while (local_14 < local_28);
              }
              local_18 = local_18 + 1;
            } while (local_18 < (int)local_3c);
          }
          (**(code **)*piVar1)(1);
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 8))(local_8);
            local_8 = (int *)0x0;
          }
          local_c = local_c + 1;
          if (local_30 <= local_c) break;
        }
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_10);
    }
  }
  thunk_FUN_00b0e403(&local_24);
  return iVar2;
}


//// FUNCTION FUN_00afd290 @ 00afd290 ////

void FUN_00afd290(float *param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  double local_64;
  double local_5c;
  double local_44;
  double local_3c;
  double local_24;
  double local_1c;
  double local_14;
  double local_c;
  
  local_64 = (double)*param_2;
  local_5c = (double)param_2[1];
  local_44 = (double)*param_3;
  local_3c = (double)param_3[1];
  FUN_00b1af69((uint *)*param_4,(uint *)param_4[2],(int)&local_64,param_4[1],0,(int)&local_24,
               (int)&local_24,(int)&local_24,7,param_4[3],0,3,3,3);
  *param_1 = (float)local_24;
  param_1[1] = (float)local_1c;
  param_1[2] = (float)local_14;
  param_1[3] = (float)local_c;
  return;
}


//// FUNCTION FUN_00afd2fb @ 00afd2fb ////

void FUN_00afd2fb(float *param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  double local_64;
  double local_5c;
  double local_54;
  double local_44;
  double local_3c;
  double local_34;
  double local_24;
  double local_1c;
  double local_14;
  double local_c;
  
  local_64 = (double)*param_2;
  local_5c = (double)param_2[1];
  local_54 = (double)param_2[2];
  local_44 = (double)*param_3;
  local_3c = (double)param_3[1];
  local_34 = (double)param_3[2];
  FUN_00b1af69((uint *)*param_4,(uint *)param_4[2],(int)&local_64,param_4[1],0,(int)&local_24,
               (int)&local_24,(int)&local_24,7,param_4[3],0,3,3,3);
  *param_1 = (float)local_24;
  param_1[1] = (float)local_1c;
  param_1[2] = (float)local_14;
  param_1[3] = (float)local_c;
  return;
}


//// FUNCTION FUN_00afd372 @ 00afd372 ////

undefined4 FUN_00afd372(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int local_20;
  void *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  int *local_c;
  int *local_8;
  
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  local_10 = (void *)0x0;
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    iVar1 = (**(code **)(*param_2 + 0x10))(param_2,&local_8);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*local_8 + 0xc))(local_8);
      uVar2 = (**(code **)(*local_8 + 0x10))(local_8);
      uVar6 = (uVar2 >> 4) * 4;
      uVar5 = 4;
      if (4 < uVar6) {
        do {
          uVar5 = uVar5 * 2;
        } while (uVar5 < uVar6);
      }
      local_10 = operator_new(uVar5 << 3);
      if (local_10 != (void *)0x0) {
        uVar3 = 0;
        if (uVar2 >> 4 != 0) {
          do {
            *(double *)((int)local_10 + uVar3 * 8) = (double)*(float *)(iVar1 + uVar3 * 4);
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar6);
        }
        iVar1 = (**(code **)(*param_2 + 0xc))(param_2,&local_c);
        if (-1 < iVar1) {
          piVar8 = &local_18;
          piVar7 = &local_20;
          puVar4 = (uint *)(**(code **)(*local_c + 0xc))(local_c);
          iVar1 = FUN_00b1aeb9(puVar4,piVar7,piVar8);
          if (-1 < iVar1) {
            local_14 = uVar5 - 1;
            local_1c = local_10;
            uVar5 = __controlfp(0,0);
            __controlfp(0,0x30000);
            if (param_3 == 3) {
              FUN_00afc6ea(param_1,FUN_00afd290,&local_20);
            }
            else if (param_3 == 4) {
              FUN_00afd029(param_1,FUN_00afd2fb,&local_20);
            }
            else if (param_3 == 5) {
              FUN_00afc900(param_1,FUN_00afd2fb,&local_20);
            }
            __controlfp(uVar5,0x30000);
          }
        }
      }
    }
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
      local_c = (int *)0x0;
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_10);
  }
  return 0x8876086c;
}


//// FUNCTION FUN_00afd4f0 @ 00afd4f0 ////

void FUN_00afd4f0(int *param_1,int *param_2)

{
  FUN_00afd372(param_1,param_2,3);
  return;
}


//// FUNCTION FUN_00afd506 @ 00afd506 ////

void FUN_00afd506(int *param_1,int *param_2)

{
  FUN_00afd372(param_1,param_2,5);
  return;
}


//// FUNCTION FUN_00afd51c @ 00afd51c ////

void FUN_00afd51c(int *param_1,int *param_2)

{
  FUN_00afd372(param_1,param_2,4);
  return;
}


//// FUNCTION FUN_00afd532 @ 00afd532 ////

float10 __fastcall FUN_00afd532(int param_1)

{
  float *in_EAX;
  
  if (param_1 == 1) {
    return (float10)*in_EAX;
  }
  if (param_1 == 2) {
    return (float10)in_EAX[2];
  }
  if (param_1 == 4) {
    return (float10)in_EAX[1];
  }
  if (param_1 != 8) {
    if (param_1 != 0x10) {
      return (float10)0.0;
    }
    return (float10)*in_EAX * (float10)0.2125 +
           (float10)in_EAX[1] * (float10)0.7154 + (float10)in_EAX[2] * (float10)0.0721;
  }
  return (float10)in_EAX[3];
}


//// FUNCTION FUN_00afd57d @ 00afd57d ////

int FUN_00afd57d(int *param_1,int *param_2,undefined4 param_3,int *param_4,uint param_5,
                float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  float *pfVar10;
  float *extraout_EDX;
  float *pfVar11;
  int extraout_EDX_00;
  float *extraout_EDX_01;
  int iVar12;
  float10 fVar13;
  undefined4 local_1e8 [21];
  undefined4 local_194 [16];
  undefined4 local_154;
  undefined4 local_150;
  int local_140 [3];
  int local_134;
  int local_128;
  uint local_124;
  byte local_120 [20];
  byte local_10c [20];
  undefined1 local_f8 [24];
  int local_e0;
  float local_d8 [8];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  uint local_94;
  uint local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  int local_74;
  uint local_70;
  uint local_6c;
  int local_68 [3];
  int local_5c;
  int local_50;
  uint local_4c;
  float local_48;
  float local_44;
  float local_40;
  void *local_3c;
  void *local_38;
  int *local_34;
  void *local_30;
  int *local_2c;
  int *local_28;
  void *local_24;
  int *local_20;
  float *local_1c;
  uint local_18;
  float *local_14;
  float *local_10;
  uint local_c;
  float local_8;
  
  local_2c = (int *)0x0;
  local_34 = (int *)0x0;
  local_28 = (int *)0x0;
  local_20 = (int *)0x0;
  FUN_00b0e258((undefined4 *)local_10c);
  FUN_00b0e258((undefined4 *)local_120);
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    if (param_4 == (int *)0xffffffff) {
      param_4 = (int *)0x0;
    }
    if (((uint)param_4 & 0xffe4ffff) == 0) {
      if (param_5 == 0xffffffff) {
        param_5 = 1;
      }
      if ((param_5 != 0) &&
         ((((param_5 < 3 || (param_5 == 4)) || (param_5 == 8)) || (param_5 == 0x10)))) {
        iVar6 = (**(code **)(*param_1 + 0x44))(param_1,0,local_140);
        if ((iVar6 < 0) || (iVar6 = (**(code **)(*param_2 + 0x44))(param_2,0,local_68), iVar6 < 0))
        {
          iVar12 = -0x7fffbffb;
          goto LAB_00afdf30;
        }
        piVar7 = FUN_00afba54(local_68[0]);
        piVar8 = FUN_00afba54(local_140[0]);
        if (((*piVar7 != 0) && (*piVar8 != 0)) &&
           ((((((iVar6 = piVar7[1], iVar6 == 0 || (iVar6 == 1)) || ((iVar6 == 2 || (iVar6 == 4))))
              && ((((piVar8[1] == 0 || (piVar8[1] == 3)) && (1 < (uint)piVar8[5])) &&
                  ((1 < (uint)piVar8[6] && (1 < (uint)piVar8[7])))))) && (local_50 == local_128)) &&
            (local_4c == local_124)))) {
          uVar9 = (**(code **)(*param_2 + 0x34))(param_2);
          local_6c = (**(code **)(*param_1 + 0x34))(param_1);
          if (uVar9 == local_6c) {
            iVar12 = (**(code **)(*param_1 + 0x44))(param_1,0,local_f8);
            iVar6 = local_e0;
            if (-1 < iVar12) {
              local_30 = operator_new(local_e0 << 4);
              if (local_30 == (void *)0x0) {
                local_30 = (void *)0x0;
              }
              else {
                FUN_00401380(local_30,0x10,iVar6,&LAB_00afbcd7);
              }
              iVar6 = local_e0;
              local_3c = operator_new(local_e0 << 4);
              if (local_3c == (void *)0x0) {
                local_3c = (void *)0x0;
              }
              else {
                FUN_00401380(local_3c,0x10,iVar6,&LAB_00afbcd7);
              }
              iVar6 = local_e0;
              local_38 = operator_new(local_e0 << 4);
              if (local_38 == (void *)0x0) {
                local_38 = (void *)0x0;
              }
              else {
                FUN_00401380(local_38,0x10,iVar6,&LAB_00afbcd7);
              }
              iVar6 = local_e0;
              local_24 = operator_new(local_e0 << 4);
              if (local_24 == (void *)0x0) {
                local_24 = (void *)0x0;
              }
              else {
                FUN_00401380(local_24,0x10,iVar6,&LAB_00afbcd7);
              }
              local_10 = operator_new(local_e0 * 4 + 8);
              local_14 = operator_new(local_e0 * 4 + 8);
              local_1c = operator_new(local_e0 * 4 + 8);
              if ((((local_3c == (void *)0x0) || (local_38 == (void *)0x0)) ||
                  ((local_24 == (void *)0x0 ||
                   (((local_30 == (void *)0x0 || (local_10 == (float *)0x0)) ||
                    (local_14 == (float *)0x0)))))) || (local_1c == (float *)0x0)) {
LAB_00afdeb5:
                piVar7 = local_34;
                if (local_2c != (int *)0x0) {
                  (**(code **)*local_2c)(1);
                }
                if (piVar7 != (int *)0x0) {
                  (**(code **)*piVar7)(1);
                }
              }
              else {
                local_18 = 0;
                if (local_6c != 0) {
                  do {
                    (**(code **)(*param_1 + 0x48))(param_1,local_18,&local_20);
                    (**(code **)(*param_2 + 0x48))(param_2,local_18,&local_28);
                    if (local_18 == 0) {
                      uVar9 = 0x20000;
                    }
                    else {
                      uVar9 = 0;
                    }
                    iVar6 = FUN_00b0e42c(local_10c,local_194,local_20,0,(uint *)0x0,0,uVar9);
                    if (iVar6 < 0) goto LAB_00afdece;
                    if (param_1 == param_2) {
                      uVar9 = 0x10001;
                    }
                    else {
                      uVar9 = 1;
                    }
                    iVar6 = FUN_00b0e42c(local_120,local_1e8,local_28,param_3,(uint *)0x0,0,uVar9);
                    if (((iVar6 < 0) ||
                        (iVar6 = (**(code **)(*param_1 + 0x44))(param_1,local_18,local_140),
                        iVar6 < 0)) ||
                       (iVar6 = (**(code **)(*param_2 + 0x44))(param_2,local_18,local_68), iVar6 < 0
                       )) goto LAB_00afdece;
                    local_150 = 0;
                    local_154 = 0;
                    piVar7 = FUN_00b19e49(local_1e8);
                    local_2c = piVar7;
                    local_34 = FUN_00b19e49(local_194);
                    if ((piVar7 == (int *)0x0) || (local_34 == (int *)0x0)) goto LAB_00afdeb5;
                    (**(code **)(*piVar7 + 4))(local_4c - 1,0,local_30);
                    (**(code **)(*piVar7 + 4))(0,0,local_3c);
                    fVar13 = FUN_00afd532(param_5);
                    pfVar11 = local_10;
                    *local_10 = (float)fVar13;
                    fVar13 = FUN_00afd532(param_5);
                    *local_14 = (float)fVar13;
                    fVar13 = FUN_00afd532(param_5);
                    pfVar11[local_50 + 1] = (float)fVar13;
                    fVar13 = FUN_00afd532(param_5);
                    extraout_EDX[local_50 + 1] = (float)fVar13;
                    local_c = 0;
                    if (0 < local_50) {
                      pfVar10 = extraout_EDX;
                      do {
                        pfVar10 = pfVar10 + 1;
                        fVar13 = FUN_00afd532(param_5);
                        *(float *)(((int)pfVar11 - (int)extraout_EDX) + (int)pfVar10) =
                             (float)fVar13;
                        fVar13 = FUN_00afd532(param_5);
                        *pfVar10 = (float)fVar13;
                        local_c = local_c + 1;
                      } while ((int)local_c < local_50);
                    }
                    local_c = 0;
                    if (0 < (int)local_4c) {
                      do {
                        local_90 = local_c + 1;
                        pfVar11 = (float *)(local_90 % local_4c);
                        (**(code **)(*local_2c + 4))(pfVar11,0,local_38);
                        fVar13 = FUN_00afd532(param_5);
                        *local_1c = (float)fVar13;
                        fVar13 = FUN_00afd532(param_5);
                        iVar6 = 0;
                        *(float *)(extraout_EDX_00 + 4 + local_50 * 4) = (float)fVar13;
                        iVar12 = 0;
                        if (0 < local_50) {
                          do {
                            fVar13 = FUN_00afd532(param_5);
                            *extraout_EDX_01 = (float)fVar13;
                            iVar12 = iVar12 + 1;
                          } while (iVar12 < local_50);
                          if (0 < local_50) {
                            local_ac = -1.0;
                            local_94 = (uint)param_4 & 0x100000;
                            local_a8 = 0.0;
                            local_70 = (uint)param_4 & 0x80000;
                            local_b8 = 0.0;
                            local_b4 = -1.0;
                            do {
                              local_8 = 0.0;
                              local_a4 = 0.0;
                              if ((iVar6 != 0) || (((uint)param_4 & 0x10000) == 0)) {
                                if ((local_c != 0) || (((uint)param_4 & 0x20000) == 0)) {
                                  local_8 = 1.4013e-45;
                                  local_a4 = local_10[iVar6 + 1] + local_10[iVar6];
                                }
                                if (((int)local_c < (int)(local_4c - 1)) ||
                                   (((uint)param_4 & 0x20000) == 0)) {
                                  local_8 = (float)((int)local_8 + 1);
                                  local_a4 = local_a4 + local_1c[iVar6 + 1] + local_1c[iVar6];
                                }
                              }
                              local_74 = local_50 + -1;
                              if ((iVar6 < local_74) || (((uint)param_4 & 0x10000) == 0)) {
                                if ((local_c != 0) || (((uint)param_4 & 0x20000) == 0)) {
                                  local_8 = (float)((int)local_8 + 1);
                                  local_a4 = local_a4 - (local_10[iVar6 + 2] + local_10[iVar6 + 1]);
                                }
                                if (((int)local_c < (int)(local_4c - 1)) ||
                                   (((uint)param_4 & 0x20000) == 0)) {
                                  local_8 = (float)((int)local_8 + 1);
                                  local_a4 = local_a4 - (local_1c[iVar6 + 2] + local_1c[iVar6 + 1]);
                                }
                              }
                              local_a4 = local_a4 * param_6;
                              if (local_8 != 1.4013e-45) {
                                local_a4 = local_a4 / (float)(int)local_8;
                              }
                              local_8 = 0.0;
                              local_b0 = 0.0;
                              if ((local_c != 0) || (((uint)param_4 & 0x20000) == 0)) {
                                if ((iVar6 != 0) || (((uint)param_4 & 0x10000) == 0)) {
                                  local_8 = 1.4013e-45;
                                  local_b0 = local_14[iVar6] + local_10[iVar6];
                                }
                                if ((iVar6 < local_74) || (((uint)param_4 & 0x10000) == 0)) {
                                  local_8 = (float)((int)local_8 + 1);
                                  local_b0 = local_14[iVar6 + 2] + local_10[iVar6 + 2] + local_b0;
                                }
                              }
                              if (((int)local_c < (int)(local_4c - 1)) ||
                                 (((uint)param_4 & 0x20000) == 0)) {
                                if ((iVar6 != 0) || (((uint)param_4 & 0x10000) == 0)) {
                                  local_8 = (float)((int)local_8 + 1);
                                  local_b0 = local_b0 - (local_1c[iVar6] + local_14[iVar6]);
                                }
                                if ((iVar6 < local_74) || (((uint)param_4 & 0x10000) == 0)) {
                                  local_8 = (float)((int)local_8 + 1);
                                  local_b0 = local_b0 - (local_1c[iVar6 + 2] + local_14[iVar6 + 2]);
                                }
                              }
                              local_b0 = local_b0 * param_6;
                              if (local_8 != 1.4013e-45) {
                                local_b0 = local_b0 / (float)(int)local_8;
                              }
                              local_80 = local_ac;
                              local_7c = local_a8;
                              local_8c = local_b8;
                              local_88 = local_b4;
                              pfVar11 = &local_48;
                              local_a0 = local_b0 * local_a8 - local_b4 * local_a4;
                              local_9c = local_a4 * local_b8 - local_b0 * local_ac;
                              local_98 = local_b4 * local_ac - local_a8 * local_b8;
                              local_84 = local_b0;
                              local_78 = local_a4;
                              local_48 = local_a0;
                              local_44 = local_9c;
                              local_40 = local_98;
                              thunk_FUN_00b004d2();
                              fVar4 = 1.0;
                              if (local_94 != 0) {
                                local_d8[0] = local_10[iVar6];
                                local_d8[1] = local_10[iVar6 + 1];
                                local_d8[2] = local_10[iVar6 + 2];
                                local_d8[4] = local_14[iVar6 + 2];
                                local_d8[3] = local_14[iVar6];
                                local_d8[7] = local_1c[iVar6 + 2];
                                local_d8[5] = local_1c[iVar6];
                                fVar3 = 0.0;
                                fVar1 = (local_14 + iVar6)[1];
                                local_d8[6] = local_1c[iVar6 + 1];
                                iVar12 = 0;
                                do {
                                  pfVar10 = local_d8 + iVar12;
                                  fVar2 = *pfVar10 - fVar1;
                                  *pfVar10 = fVar2;
                                  if (fVar2 < 0.0) {
                                    *pfVar10 = 0.0;
                                  }
                                  iVar12 = iVar12 + 1;
                                  fVar3 = fVar3 + *pfVar10;
                                } while (iVar12 < 8);
                                local_8 = fVar3 * param_6 * 0.125;
                                if (0.0 < local_8) {
                                  fVar4 = SQRT(local_8 * local_8 + 1.0);
                                  fVar4 = (fVar4 - local_8) / fVar4;
                                }
                              }
                              if (local_34[2] == 1) {
                                pfVar10 = (float *)(iVar6 * 0x10 + (int)local_24);
                                if (local_70 == 0) {
                                  *pfVar10 = (local_48 + 1.0) * 0.5;
                                  pfVar10[1] = (local_44 + 1.0) * 0.5;
                                  fVar1 = (local_40 + 1.0) * 0.5;
                                }
                                else {
                                  *pfVar10 = 0.5 - local_48 * 0.5;
                                  pfVar10[1] = 0.5 - local_44 * 0.5;
                                  fVar1 = 0.5 - local_40 * 0.5;
                                }
                                pfVar10[2] = fVar1;
                                pfVar10[3] = fVar4;
                              }
                              else {
                                pfVar10 = (float *)(iVar6 * 0x10 + (int)local_24);
                                *pfVar10 = local_48;
                                pfVar10[1] = local_44;
                                pfVar10[3] = fVar4;
                                pfVar10[2] = local_40;
                                if (local_70 != 0) {
                                  *pfVar10 = *pfVar10 * -1.0;
                                  pfVar10[1] = pfVar10[1] * -1.0;
                                  pfVar10[2] = pfVar10[2] * -1.0;
                                }
                              }
                              iVar6 = iVar6 + 1;
                            } while (iVar6 < local_50);
                          }
                        }
                        (**(code **)(*local_34 + 8))(local_c,0,local_24,pfVar11);
                        pfVar10 = local_10;
                        pfVar5 = local_1c;
                        pfVar11 = local_14;
                        local_10 = local_14;
                        local_14 = local_1c;
                        local_1c = pfVar10;
                        local_c = local_90;
                      } while ((int)local_90 < (int)local_4c);
                    }
                    (**(code **)*local_2c)(1);
                    (**(code **)*local_34)(1);
                    if (local_28 != (int *)0x0) {
                      (**(code **)(*local_28 + 8))(local_28);
                      local_28 = (int *)0x0;
                    }
                    if (local_20 != (int *)0x0) {
                      (**(code **)(*local_20 + 8))(local_20);
                      local_20 = (int *)0x0;
                    }
                    local_18 = local_18 + 1;
                  } while (local_18 < local_6c);
                }
                if ((local_5c == 0) && (local_134 != 0)) {
                  (**(code **)(*param_2 + 0xc))(param_2,&param_4);
                  (**(code **)(*param_4 + 0xc))(param_4);
                  (**(code **)(*param_4 + 8))(param_4);
                }
              }
LAB_00afdece:
              if (local_28 != (int *)0x0) {
                (**(code **)(*local_28 + 8))(local_28);
                local_28 = (int *)0x0;
              }
              if (local_20 != (int *)0x0) {
                (**(code **)(*local_20 + 8))(local_20);
                local_20 = (int *)0x0;
              }
                    /* WARNING: Subroutine does not return */
              _free(local_30);
            }
            goto LAB_00afdf30;
          }
        }
      }
    }
  }
  iVar12 = -0x7789f794;
LAB_00afdf30:
  thunk_FUN_00b0e34a(local_120);
  thunk_FUN_00b0e34a(local_10c);
  return iVar12;
}


//// FUNCTION FUN_00afdf4f @ 00afdf4f ////

int FUN_00afdf4f(LPCWSTR param_1,int *param_2)

{
  int iVar1;
  int local_14 [2];
  float *local_c;
  float *local_8;
  
  FUN_00b1b8ca(local_14);
  iVar1 = FUN_00b1b8dc(local_14,param_1,0);
  if (-1 < iVar1) {
    iVar1 = FUN_00afbc86(local_c,local_8,param_2);
  }
  FUN_00b1bb4d(local_14);
  return iVar1;
}


//// FUNCTION FUN_00afdf90 @ 00afdf90 ////

int FUN_00afdf90(LPCWSTR param_1,int *param_2)

{
  int iVar1;
  int local_14 [2];
  float *local_c;
  float *local_8;
  
  FUN_00b1b8ca(local_14);
  iVar1 = FUN_00b1b8dc(local_14,param_1,1);
  if (-1 < iVar1) {
    iVar1 = FUN_00afbc86(local_c,local_8,param_2);
  }
  FUN_00b1bb4d(local_14);
  return iVar1;
}


//// FUNCTION FUN_00afdfd1 @ 00afdfd1 ////

int FUN_00afdfd1(HMODULE param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 local_10;
  float *local_c;
  float *local_8;
  
  FUN_00b1bb58(&local_10);
  iVar1 = FUN_00b1bb94(&local_10,param_1,param_2,1,0);
  if (-1 < iVar1) {
    iVar1 = FUN_00afbc86(local_c,local_8,param_3);
  }
  FUN_00b1bb65(&local_10);
  return iVar1;
}


//// FUNCTION FUN_00afe017 @ 00afe017 ////

int FUN_00afe017(HMODULE param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 local_10;
  float *local_c;
  float *local_8;
  
  FUN_00b1bb58(&local_10);
  iVar1 = FUN_00b1bb94(&local_10,param_1,param_2,1,1);
  if (-1 < iVar1) {
    iVar1 = FUN_00afbc86(local_c,local_8,param_3);
  }
  FUN_00b1bb65(&local_10);
  return iVar1;
}


//// FUNCTION FUN_00afe05d @ 00afe05d ////

int FUN_00afe05d(int *param_1,undefined4 param_2,uint *param_3,float *param_4,float *param_5,
                int *param_6,uint param_7,undefined4 param_8,int *param_9)

{
  int iVar1;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 local_38;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_00b061ad(&local_68);
  if (((param_1 == (int *)0x0) || (param_4 == (float *)0x0)) || (param_5 == (float *)0x0)) {
LAB_00afe0ce:
    iVar1 = -0x7789f794;
  }
  else {
    iVar1 = FUN_00b0a172(&local_68,param_4,param_5,param_9,1);
    if (iVar1 < 0) goto LAB_00afe0d3;
    if (param_6 == (int *)0x0) {
      local_14 = local_50;
      local_10 = iStack_4c;
      local_c = iStack_48;
      local_8 = iStack_44;
    }
    else {
      local_14 = *param_6;
      local_10 = param_6[1];
      local_c = param_6[2];
      local_8 = param_6[3];
      if ((((local_14 < 0) || (local_5c < local_c)) ||
          ((local_c < local_14 || ((local_10 < 0 || (local_58 < local_8)))))) ||
         (local_8 < local_10)) goto LAB_00afe0ce;
    }
    iVar1 = FUN_00afbcda(param_1,param_2,param_3,local_64,local_68,local_38,local_60,&local_14,
                         param_7,param_8);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
LAB_00afe0d3:
  FUN_00b061c6((int)&local_68);
  return iVar1;
}


//// FUNCTION FUN_00afe117 @ 00afe117 ////

int FUN_00afe117(int *param_1,int *param_2,uint *param_3,int *param_4,int *param_5,uint *param_6,
                uint param_7,int param_8)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_a4 [11];
  byte local_78 [20];
  undefined1 local_64 [12];
  int local_58;
  uint local_4c;
  uint local_48;
  undefined1 local_44 [12];
  int local_38;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  FUN_00b0e258((undefined4 *)local_78);
  piVar1 = param_4;
  if (param_1 == (int *)0x0) {
    iVar3 = -0x7789f794;
    goto LAB_00afe31c;
  }
  if (param_4 == (int *)0x0) {
    iVar3 = -0x7789f794;
    goto LAB_00afe31c;
  }
  (**(code **)(*param_1 + 0x30))(param_1,local_64);
  (**(code **)(*piVar1 + 0x30))(piVar1,local_44);
  if (((param_7 & 0xffff) == 5) || (param_8 != 0)) {
LAB_00afe282:
    uVar2 = 1;
    if (param_1 == piVar1) {
      uVar2 = 0x10001;
    }
    iVar3 = FUN_00b0e42c(local_78,&local_cc,piVar1,param_5,param_6,0,uVar2);
    if ((iVar3 < 0) ||
       (iVar3 = FUN_00afbcda(param_1,param_2,param_3,local_cc,local_c8,local_c4,param_5,local_a4,
                             param_7,param_8), iVar3 < 0)) goto LAB_00afe31c;
    if ((local_38 == 0) && (local_58 != 0)) {
      (**(code **)(*piVar1 + 0xc))(piVar1,&param_1);
      iVar3 = (**(code **)(*param_1 + 0xc))(param_1);
      (**(code **)(*param_1 + 8))(param_1);
      if (iVar3 != 0) {
        iVar3 = -0x7789f798;
        goto LAB_00afe31c;
      }
    }
  }
  else {
    if (param_2 != param_5) {
      if ((param_2 != (int *)0x0) && (param_5 != (int *)0x0)) {
        iVar3 = 0x100;
        bVar6 = true;
        piVar4 = param_2;
        piVar5 = param_5;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar6 = *piVar4 == *piVar5;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (bVar6);
        if (bVar6) goto LAB_00afe1a7;
      }
      goto LAB_00afe282;
    }
LAB_00afe1a7:
    if (param_3 == (uint *)0x0) {
      local_14 = 0;
      local_10 = 0;
      local_c = local_4c;
      local_8 = local_48;
    }
    else {
      local_14 = *param_3;
      local_10 = param_3[1];
      local_c = param_3[2];
      local_8 = param_3[3];
    }
    if (param_6 == (uint *)0x0) {
      local_24 = 0;
      local_20 = 0;
      local_1c = local_2c;
      local_18 = local_28;
    }
    else {
      local_24 = *param_6;
      local_20 = param_6[1];
      local_1c = param_6[2];
      local_18 = param_6[3];
    }
    if ((local_c - local_14 != local_1c - local_24) || (local_8 - local_10 != local_18 - local_20))
    goto LAB_00afe282;
    (**(code **)(*piVar1 + 0xc))(piVar1,&param_4);
    FUN_00b05dc4(1);
    iVar3 = -0x7fffbffb;
    if (local_58 == 0) {
      if (local_38 == 0) {
        iVar3 = (**(code **)(*param_4 + 0x88))(param_4,piVar1,&local_24,param_1,&local_14,0);
      }
      else if (local_38 == 2) {
        iVar3 = (**(code **)(*param_4 + 0x78))(param_4,piVar1,&local_24,param_1,&local_14);
      }
    }
    FUN_00b05dc4(0);
    (**(code **)(*param_4 + 8))(param_4);
    if (iVar3 < 0) goto LAB_00afe282;
  }
  iVar3 = 0;
LAB_00afe31c:
  thunk_FUN_00b0e34a(local_78);
  return iVar3;
}


//// FUNCTION FUN_00afe32b @ 00afe32b ////

int FUN_00afe32b(int *param_1,undefined4 param_2,uint *param_3,float *param_4,float *param_5,
                uint *param_6,uint param_7,undefined4 param_8,int *param_9)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58 [6];
  undefined4 local_40;
  undefined4 local_3c;
  uint local_1c [4];
  uint local_c;
  uint local_8;
  
  FUN_00b061ad(&local_70);
  if (((param_1 == (int *)0x0) || (param_4 == (float *)0x0)) || (param_5 == (float *)0x0)) {
LAB_00afe3a0:
    iVar1 = -0x7789f794;
  }
  else {
    iVar1 = FUN_00b0a172(&local_70,param_4,param_5,param_9,1);
    if (iVar1 < 0) goto LAB_00afe3a5;
    iVar1 = 6;
    puVar2 = local_1c;
    if (param_6 == (uint *)0x0) {
      puVar2 = local_58;
      puVar3 = local_1c;
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    else {
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = *param_6;
        param_6 = param_6 + 1;
        puVar2 = puVar2 + 1;
      }
      if ((((local_64 < local_1c[2]) || (local_1c[2] < local_1c[0])) ||
          ((local_60 < local_1c[3] || ((local_1c[3] < local_1c[1] || (local_5c < local_8)))))) ||
         (local_8 < local_c)) goto LAB_00afe3a0;
    }
    iVar1 = FUN_00afbf15(param_1,param_2,param_3,local_6c,local_70,local_40,local_3c,local_68,
                         local_1c,param_7,param_8);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
LAB_00afe3a5:
  FUN_00b061c6((int)&local_70);
  return iVar1;
}


//// FUNCTION FUN_00afe3e9 @ 00afe3e9 ////

int FUN_00afe3e9(int *param_1,undefined4 param_2,uint *param_3,int *param_4,undefined4 param_5,
                uint *param_6,uint param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_34 [11];
  int local_8;
  
  FUN_00b0e3fd(&local_8);
  if ((param_1 == (int *)0x0) || (param_4 == (int *)0x0)) {
    iVar3 = -0x7789f794;
  }
  else {
    uVar1 = 1;
    if (param_1 == param_4) {
      uVar1 = 0x10001;
    }
    iVar2 = FUN_00b0e920(&local_8,&local_5c,param_4,param_5,param_6,0,uVar1);
    if (-1 < iVar2) {
      iVar2 = FUN_00afbf15(param_1,param_2,param_3,local_5c,local_58,local_54,local_50,param_5,
                           local_34,param_7,param_8);
      iVar3 = 0;
      if (-1 < iVar2) goto LAB_00afe462;
    }
    iVar3 = iVar2;
  }
LAB_00afe462:
  thunk_FUN_00b0e403(&local_8);
  return iVar3;
}


//// FUNCTION FUN_00afe471 @ 00afe471 ////

byte * __thiscall FUN_00afe471(void *this,byte param_1)

{
  byte *_Memory;
  
  if ((param_1 & 2) == 0) {
    thunk_FUN_00b0e34a(this);
    _Memory = this;
    if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      _free(this);
    }
  }
  else {
    _Memory = (byte *)((int)this + -4);
    FUN_00a9e3d0(this,0x14,*(int *)_Memory,thunk_FUN_00b0e34a);
    if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  return _Memory;
}


//// FUNCTION FUN_00afe4bf @ 00afe4bf ////

int * __thiscall FUN_00afe4bf(void *this,byte param_1)

{
  int *_Memory;
  
  if ((param_1 & 2) == 0) {
    thunk_FUN_00b0e403(this);
    _Memory = this;
    if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      _free(this);
    }
  }
  else {
    _Memory = (int *)((int)this + -4);
    FUN_00a9e3d0(this,4,*_Memory,thunk_FUN_00b0e403);
    if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  return _Memory;
}


//// FUNCTION FUN_00afe50d @ 00afe50d ////

uint FUN_00afe50d(int *param_1,int *param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  int **ppiVar3;
  uint uVar4;
  bool bVar5;
  undefined1 local_64 [24];
  uint local_4c;
  uint local_48;
  undefined1 local_44 [16];
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int *local_1c;
  uint local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar1 = param_1;
  if ((param_1 == (int *)0x0) ||
     (((local_14 = (**(code **)(*param_1 + 0x28))(param_1), local_14 != 3 && (local_14 != 4)) &&
      (local_14 != 5)))) {
    return 0x8876086c;
  }
  local_1c = piVar1;
  uVar2 = 5;
  if (param_4 != 0xffffffff) goto LAB_00afe5ad;
  if (local_14 == 3) {
    (**(code **)(*piVar1 + 0x44))(piVar1,0,local_64);
    if (((local_4c & local_4c - 1) == 0) && (param_4 = uVar2, (local_48 & local_48 - 1) == 0))
    goto LAB_00afe5ad;
    param_4 = 0;
LAB_00afe5e7:
    bVar5 = param_4 != 0;
    param_4 = uVar2;
    if (bVar5) goto LAB_00afe5ad;
  }
  else {
    if (local_14 == 4) {
      (**(code **)(*piVar1 + 0x44))(piVar1,0,local_44);
      if ((local_34 & local_34 - 1) != 0) goto LAB_00afe5a6;
      local_4c = local_30 & local_30 - 1;
    }
    else {
      if (local_14 != 5) goto LAB_00afe5e7;
      (**(code **)(*piVar1 + 0x44))(piVar1,0,local_64);
      local_4c = local_4c & local_4c - 1;
      local_2c = local_48;
    }
    if ((local_4c == 0) && (param_4 = uVar2, (local_2c & local_2c - 1) == 0)) goto LAB_00afe5ad;
  }
LAB_00afe5a6:
  param_4 = 0x80004;
LAB_00afe5ad:
  if (local_14 == 5) {
    param_4 = param_4 | 0x70000;
  }
  if ((param_4 & 0x400000) == 0) {
    param_4 = param_4 & 0xff9fffff;
  }
  else {
    param_4 = param_4 | 0x600000;
  }
  local_24 = (**(code **)(*piVar1 + 0x34))(piVar1);
  if (param_3 == 0xffffffff) {
    param_3 = 0;
  }
  if (param_3 < local_24) {
    param_1 = (int *)0x0;
    local_c = (int *)0x0;
    local_8 = (int *)0x0;
    local_10 = (int *)0x0;
    local_28 = ((local_14 != 5) - 1 & 5) + 1;
    if (((param_4 & 0xff) == 2) || (local_20 = 0, (param_4 & 0xff) == 5)) {
      local_20 = 1;
    }
    local_18 = 0;
    uVar2 = param_4;
    if (local_28 != 0) {
      do {
        if (local_14 == 3) {
          ppiVar3 = &param_1;
LAB_00afe686:
          uVar2 = (**(code **)(*local_1c + 0x48))(local_1c,param_3,ppiVar3);
        }
        else {
          if (local_14 == 4) {
            ppiVar3 = &local_c;
            goto LAB_00afe686;
          }
          if (local_14 == 5) {
            uVar2 = (**(code **)(*local_1c + 0x48))(local_1c,local_18,param_3,&param_1);
          }
        }
        uVar4 = param_3;
        if ((int)uVar2 < 0) goto LAB_00afe7b9;
LAB_00afe77e:
        uVar4 = uVar4 + 1;
        if (uVar4 < local_24) {
          if (local_14 == 3) {
            ppiVar3 = &local_8;
LAB_00afe6ce:
            uVar2 = (**(code **)(*local_1c + 0x48))(local_1c,uVar4,ppiVar3);
          }
          else {
            if (local_14 == 4) {
              ppiVar3 = &local_10;
              goto LAB_00afe6ce;
            }
            if (local_14 == 5) {
              uVar2 = (**(code **)(*local_1c + 0x48))(local_1c,local_18,uVar4,&local_8);
            }
          }
          if (-1 < (int)uVar2) {
            if (local_14 == 3) {
LAB_00afe6f1:
              uVar2 = FUN_00afe117(local_8,param_2,(uint *)0x0,param_1,param_2,(uint *)0x0,param_4,0
                                  );
            }
            else if (local_14 == 4) {
              uVar2 = FUN_00afe3e9(local_10,param_2,(uint *)0x0,local_c,param_2,(uint *)0x0,param_4,
                                   0);
            }
            else if (local_14 == 5) goto LAB_00afe6f1;
            if (-1 < (int)uVar2) {
              if (local_20 == 0) goto LAB_00afe75e;
              if (param_1 != (int *)0x0) {
                (**(code **)(*param_1 + 8))(param_1);
                param_1 = (int *)0x0;
              }
              if (local_c != (int *)0x0) {
                (**(code **)(*local_c + 8))(local_c);
              }
              param_1 = local_8;
              local_8 = (int *)0x0;
              local_c = local_10;
              goto LAB_00afe77b;
            }
          }
          goto LAB_00afe7b9;
        }
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 8))(param_1);
          param_1 = (int *)0x0;
        }
        if (local_c != (int *)0x0) {
          (**(code **)(*local_c + 8))(local_c);
          local_c = (int *)0x0;
        }
        local_18 = local_18 + 1;
      } while (local_18 < local_28);
    }
    uVar2 = 0;
LAB_00afe7b9:
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
      param_1 = (int *)0x0;
    }
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
      local_c = (int *)0x0;
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 8))(local_10);
    }
  }
  else {
    uVar2 = 0x8876086c;
  }
  return uVar2;
LAB_00afe75e:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
LAB_00afe77b:
    local_10 = (int *)0x0;
  }
  goto LAB_00afe77e;
}


//// FUNCTION FUN_00afe7ff @ 00afe7ff ////

int FUN_00afe7ff(int *param_1,undefined4 param_2,uint *param_3,LPCWSTR param_4,int *param_5,
                uint param_6,undefined4 param_7,int *param_8)

{
  int iVar1;
  int local_14 [2];
  float *local_c;
  float *local_8;
  
  FUN_00b1b8ca(local_14);
  iVar1 = FUN_00b1b8dc(local_14,param_4,0);
  if (-1 < iVar1) {
    iVar1 = FUN_00afe05d(param_1,param_2,param_3,local_c,local_8,param_5,param_6,param_7,param_8);
  }
  FUN_00b1bb4d(local_14);
  return iVar1;
}


//// FUNCTION FUN_00afe852 @ 00afe852 ////

int FUN_00afe852(int *param_1,undefined4 param_2,uint *param_3,LPCWSTR param_4,int *param_5,
                uint param_6,undefined4 param_7,int *param_8)

{
  int iVar1;
  int local_14 [2];
  float *local_c;
  float *local_8;
  
  FUN_00b1b8ca(local_14);
  iVar1 = FUN_00b1b8dc(local_14,param_4,1);
  if (-1 < iVar1) {
    iVar1 = FUN_00afe05d(param_1,param_2,param_3,local_c,local_8,param_5,param_6,param_7,param_8);
  }
  FUN_00b1bb4d(local_14);
  return iVar1;
}


//// FUNCTION FUN_00afe8a5 @ 00afe8a5 ////

int FUN_00afe8a5(int *param_1,undefined4 param_2,uint *param_3,HMODULE param_4,undefined4 param_5,
                int *param_6,uint param_7,undefined4 param_8,int *param_9)

{
  int iVar1;
  undefined4 local_10;
  float *local_c;
  float *local_8;
  
  FUN_00b1bb58(&local_10);
  iVar1 = FUN_00b1bb94(&local_10,param_4,param_5,1,0);
  if (-1 < iVar1) {
    iVar1 = FUN_00afe05d(param_1,param_2,param_3,local_c,local_8,param_6,param_7,param_8,param_9);
  }
  FUN_00b1bb65(&local_10);
  return iVar1;
}


//// FUNCTION FUN_00afe8fd @ 00afe8fd ////

int FUN_00afe8fd(int *param_1,undefined4 param_2,uint *param_3,HMODULE param_4,undefined4 param_5,
                int *param_6,uint param_7,undefined4 param_8,int *param_9)

{
  int iVar1;
  undefined4 local_10;
  float *local_c;
  float *local_8;
  
  FUN_00b1bb58(&local_10);
  iVar1 = FUN_00b1bb94(&local_10,param_4,param_5,1,1);
  if (-1 < iVar1) {
    iVar1 = FUN_00afe05d(param_1,param_2,param_3,local_c,local_8,param_6,param_7,param_8,param_9);
  }
  FUN_00b1bb65(&local_10);
  return iVar1;
}


//// FUNCTION FUN_00afe955 @ 00afe955 ////

int FUN_00afe955(int *param_1,undefined4 param_2,uint *param_3,LPCWSTR param_4,uint *param_5,
                uint param_6,undefined4 param_7,int *param_8)

{
  int iVar1;
  int local_14 [2];
  float *local_c;
  float *local_8;
  
  FUN_00b1b8ca(local_14);
  iVar1 = FUN_00b1b8dc(local_14,param_4,0);
  if (-1 < iVar1) {
    iVar1 = FUN_00afe32b(param_1,param_2,param_3,local_c,local_8,param_5,param_6,param_7,param_8);
  }
  FUN_00b1bb4d(local_14);
  return iVar1;
}


//// FUNCTION FUN_00afe9a8 @ 00afe9a8 ////

int FUN_00afe9a8(int *param_1,undefined4 param_2,uint *param_3,LPCWSTR param_4,uint *param_5,
                uint param_6,undefined4 param_7,int *param_8)

{
  int iVar1;
  int local_14 [2];
  float *local_c;
  float *local_8;
  
  FUN_00b1b8ca(local_14);
  iVar1 = FUN_00b1b8dc(local_14,param_4,1);
  if (-1 < iVar1) {
    iVar1 = FUN_00afe32b(param_1,param_2,param_3,local_c,local_8,param_5,param_6,param_7,param_8);
  }
  FUN_00b1bb4d(local_14);
  return iVar1;
}


//// FUNCTION FUN_00afe9fb @ 00afe9fb ////

int FUN_00afe9fb(int *param_1,undefined4 param_2,uint *param_3,HMODULE param_4,undefined4 param_5,
                uint *param_6,uint param_7,undefined4 param_8,int *param_9)

{
  int iVar1;
  undefined4 local_10;
  float *local_c;
  float *local_8;
  
  FUN_00b1bb58(&local_10);
  iVar1 = FUN_00b1bb94(&local_10,param_4,param_5,1,0);
  if (-1 < iVar1) {
    iVar1 = FUN_00afe32b(param_1,param_2,param_3,local_c,local_8,param_6,param_7,param_8,param_9);
  }
  FUN_00b1bb65(&local_10);
  return iVar1;
}


//// FUNCTION FUN_00afea53 @ 00afea53 ////

int FUN_00afea53(int *param_1,undefined4 param_2,uint *param_3,HMODULE param_4,undefined4 param_5,
                uint *param_6,uint param_7,undefined4 param_8,int *param_9)

{
  int iVar1;
  undefined4 local_10;
  float *local_c;
  float *local_8;
  
  FUN_00b1bb58(&local_10);
  iVar1 = FUN_00b1bb94(&local_10,param_4,param_5,1,1);
  if (-1 < iVar1) {
    iVar1 = FUN_00afe32b(param_1,param_2,param_3,local_c,local_8,param_6,param_7,param_8,param_9);
  }
  FUN_00b1bb65(&local_10);
  return iVar1;
}


//// FUNCTION FUN_00afeaab @ 00afeaab ////

uint FUN_00afeaab(int *param_1,float *param_2,float *param_3,uint param_4,int *param_5,uint param_6,
                 uint param_7,uint param_8,uint param_9,int param_10,uint param_11,uint param_12,
                 uint param_13,int *param_14,undefined4 *param_15,uint param_16,undefined4 *param_17
                 )

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint extraout_ECX;
  int **ppiVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined4 local_4dc;
  int local_dc [7];
  int local_c0 [2];
  int local_b8;
  uint local_b4;
  int *local_b0;
  uint local_ac;
  int local_74;
  int local_70;
  uint local_6c [14];
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar6 = param_14;
  uVar3 = param_4;
  FUN_00b061ad(local_c0);
  local_8 = (int *)0x0;
  param_14 = (int *)0x0;
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  if ((((param_1 == (int *)0x0) || (param_2 == (float *)0x0)) || (param_3 == (float *)0x0)) ||
     (param_17 == (undefined4 *)0x0)) {
    uVar9 = 0x8876086c;
    goto LAB_00aff2df;
  }
  local_6c[0xd] = (uint)(uVar3 == 0xfffffffd);
  local_28 = (uint)(param_5 == (int *)0xfffffffd);
  local_20 = (uint)(param_6 == 0xfffffffd);
  local_30 = (uint)(param_7 == 0xfffffffd);
  local_1c = (uint)(param_9 == 0xfffffffd);
  if ((piVar6 == (int *)0x0) && (param_16 == 0xffffffff)) {
    piVar6 = local_dc;
  }
  uVar9 = FUN_00b0a172(local_c0,param_2,param_3,piVar6,1);
  if ((int)uVar9 < 0) goto LAB_00aff2df;
  if (param_16 == 0xffffffff) {
    param_16 = piVar6[5];
  }
  param_3 = (float *)0x1;
  for (; local_74 != 0; local_74 = *(int *)(local_74 + 0x4c)) {
    param_3 = (float *)((int)param_3 + 1);
  }
  param_2 = (float *)0x1;
  if (param_16 == 5) {
    if (local_70 != 0) {
      do {
        local_70 = *(int *)(local_70 + 0x50);
        param_2 = (float *)((int)param_2 + 1);
      } while (local_70 != 0);
      if (param_2 == (float *)0x6) goto LAB_00afebab;
    }
    uVar9 = 0x80004005;
    goto LAB_00aff2df;
  }
LAB_00afebab:
  if (param_7 == 0xfffffffd) {
    param_7 = (uint)param_3;
  }
  if (((uVar3 == 0xfffffffe) || (uVar3 == 0xfffffffd)) || ((int)local_b4 < 0)) {
    param_4 = local_b4;
  }
  else if (((uVar3 == 0) || (uVar3 == 0xffffffff)) && (param_4 = 1, 1 < local_b4)) {
    do {
      param_4 = param_4 << 1;
    } while (param_4 < local_b4);
  }
  if (((param_5 == (int *)0xfffffffe) || (param_5 == (int *)0xfffffffd)) || ((int)local_b0 < 0)) {
    param_5 = local_b0;
  }
  else if (((param_5 == (int *)0x0) || (param_5 == (int *)0xffffffff)) &&
          (param_5 = (int *)0x1, (int *)0x1 < local_b0)) {
    do {
      param_5 = (int *)((int)param_5 << 1);
    } while (param_5 < local_b0);
  }
  if (((param_6 == 0xfffffffe) || (param_6 == 0xfffffffd)) || ((int)local_ac < 0)) {
    param_6 = local_ac;
  }
  else if (((param_6 == 0) || (param_6 == 0xffffffff)) && (param_6 = 1, 1 < local_ac)) {
    do {
      param_6 = param_6 << 1;
    } while (param_6 < local_ac);
  }
  if (param_11 == 0xffffffff) {
    param_11 = 0x80004;
  }
  if (param_12 == 0xffffffff) {
    param_12 = 5;
  }
  if (param_16 == 5) {
    param_11 = param_11 | 0x70000;
    param_12 = param_12 | 0x70000;
  }
  if ((((char)param_11 == '\x01') || ((param_12 & 0xff) == 2)) || ((param_12 & 0xff) == 5)) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  if (local_b8 == 0) {
    puVar7 = &local_4dc;
    for (iVar4 = 0x100; uVar3 = 0, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
  }
  else {
    uVar3 = 0;
    do {
      uVar9 = *(uint *)(local_b8 + uVar3 * 4);
      (&local_4dc)[uVar3] =
           -(uint)(uVar9 != (param_13 >> 0x10 & 0xff | (param_13 & 0xff) << 0x10 |
                            param_13 & 0xff00ff00)) & uVar9;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    param_13 = 0;
    if ((param_9 != 0x29) && (local_c0[0] == 0x29)) {
      uVar9 = 0;
      uVar3 = 0xffffff00;
      do {
        if ((&local_4dc)[uVar9] != (((uVar9 | 0xffffff00) << 8 | uVar9) << 8 | uVar9)) break;
        uVar9 = uVar9 + 1;
      } while (uVar9 < 0x100);
      if (uVar9 == 0x100) {
        local_c0[0] = 0x32;
      }
      else {
        local_6c[3] = 0xff;
        local_6c[0xc] = 0xff;
        local_6c[0] = 0;
        local_6c[1] = 0x55;
        local_6c[2] = 0xaa;
        local_6c[5] = 0;
        local_6c[6] = 0x24;
        local_6c[7] = 0x49;
        local_6c[8] = 0x6d;
        local_6c[9] = 0x92;
        local_6c[10] = 0xb6;
        local_6c[0xb] = 0xdb;
        uVar9 = 0;
        do {
          if ((&local_4dc)[uVar9] !=
              (((local_6c[uVar9 & 3] | 0xffffff00) << 8 | local_6c[(uVar9 >> 2 & 7) + 5]) << 8 |
              local_6c[(uVar9 >> 5) + 5])) break;
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x100);
        if (uVar9 == 0x100) {
          local_c0[0] = 0x1b;
        }
      }
    }
  }
  iVar4 = local_c0[0];
  if ((param_9 == 0) || (param_9 == 0xfffffffd)) {
    if (param_13 != 0) {
      puVar2 = (uint *)FUN_00afba54(local_c0[0]);
      uVar3 = puVar2[1];
      if ((((uVar3 == 0) || (uVar3 == 1)) || (uVar3 == 2)) && (puVar2[4] == 0)) {
        puVar10 = local_6c + 4;
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar10 = puVar10 + 1;
        }
        local_6c[4] = 0;
        local_6c[8] = 1;
        iVar4 = FUN_00afbb67((int *)0x0,param_8,param_16,(int *)(local_6c + 4));
        if (iVar4 == 0) {
          iVar4 = local_c0[0];
        }
      }
    }
    param_9 = FUN_00afbc65(iVar4);
    uVar3 = extraout_ECX;
    if ((param_10 != 3) && (param_9 == 0x14)) {
      param_9 = 0x16;
    }
  }
  piVar6 = param_5;
  uVar1 = param_4;
  if (param_15 == (undefined4 *)0x0) {
LAB_00afee75:
    if ((local_1c == 0) || ((param_9 != 0x28 && (param_9 != 0x29)))) {
      if (param_9 == 0x28) {
LAB_00afeeb6:
        param_9 = 0x15;
      }
      else if (param_9 == 0x29) {
        param_9 = 0x16;
        uVar9 = 0;
        do {
          if (*(char *)((int)&local_4dc + uVar9 * 4 + 3) != -1) goto LAB_00afeeb6;
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x100);
      }
      goto LAB_00afeebd;
    }
    uVar9 = 0x8876086c;
  }
  else {
    puVar7 = &local_4dc;
    puVar11 = param_15;
    for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar11 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar11 = puVar11 + 1;
    }
    uVar3 = 0;
    if (local_b8 == 0) goto LAB_00afee75;
LAB_00afeebd:
    if ((param_10 != 0) || (local_14 = 1, (param_8 & 0x200) != 0)) {
      local_14 = 0;
    }
    local_34 = param_6;
    local_2c = param_7;
    local_24 = param_9;
    uVar9 = FUN_00afc11c(uVar3,param_1,&param_4,(uint *)&param_5,&param_6,&param_7,param_8,
                         (int *)&param_9,param_10,param_16);
    uVar3 = param_9;
    if (-1 < (int)uVar9) {
      if ((((((local_6c[0xd] == 0) || (uVar1 == param_4)) &&
            ((local_28 == 0 || (piVar6 == param_5)))) && ((local_20 == 0 || (local_34 == param_6))))
          && ((local_30 == 0 || (local_2c == param_7)))) &&
         ((local_1c == 0 || (local_24 == param_9)))) {
        if (param_16 == 3) {
          uVar9 = (**(code **)(*param_1 + 0x5c))
                            (param_1,param_4,param_5,param_7,param_8 & 0xffe07fff,param_9,param_10,
                             &local_c,0);
        }
        else if (param_16 == 4) {
          uVar9 = (**(code **)(*param_1 + 0x60))
                            (param_1,param_4,param_5,param_6,param_7,param_8 & 0xffe07fff,param_9,
                             param_10,&local_c,0);
        }
        else if (param_16 == 5) {
          uVar9 = (**(code **)(*param_1 + 100))
                            (param_1,param_4,param_7,param_8 & 0xffe07fff,param_9,param_10,&local_c,
                             0);
        }
        if (-1 < (int)uVar9) {
          piVar6 = local_c;
          if (local_14 != 0) {
            if (param_16 == 3) {
              uVar9 = (**(code **)(*param_1 + 0x5c))
                                (param_1,param_4,param_5,param_7,0,uVar3,2,&local_10,0);
            }
            else if (param_16 == 4) {
              uVar9 = (**(code **)(*param_1 + 0x60))
                                (param_1,param_4,param_5,param_6,param_7,0,uVar3,2,&local_10,0);
            }
            else if (param_16 == 5) {
              uVar9 = (**(code **)(*param_1 + 100))(param_1,param_4,param_7,0,uVar3,2,&local_10,0);
            }
            piVar6 = local_10;
            if ((int)uVar9 < 0) goto LAB_00aff29c;
          }
          param_4 = 0;
          piVar8 = local_c0;
          param_5 = piVar8;
          if (param_2 != (float *)0x0) {
            do {
              param_9 = 0;
              param_5 = piVar8;
              if (param_3 != (float *)0x0) {
                while (param_9 < param_7) {
                  if (param_16 == 3) {
                    ppiVar5 = &param_14;
LAB_00aff0bb:
                    uVar9 = (**(code **)(*piVar6 + 0x48))(piVar6,param_9,ppiVar5);
                  }
                  else {
                    if (param_16 == 4) {
                      ppiVar5 = &local_8;
                      goto LAB_00aff0bb;
                    }
                    if (param_16 == 5) {
                      uVar9 = (**(code **)(*piVar6 + 0x48))(piVar6,param_4,param_9,&param_14);
                    }
                  }
                  if ((int)uVar9 < 0) goto LAB_00aff29c;
                  if (param_16 == 3) {
LAB_00aff0dd:
                    uVar9 = FUN_00afbcda(param_14,param_15,(uint *)0x0,piVar8[1],*piVar8,piVar8[0xc]
                                         ,&local_4dc,piVar8 + 6,param_11,param_13);
                  }
                  else if (param_16 == 4) {
                    uVar9 = FUN_00afbf15(local_8,param_15,(uint *)0x0,piVar8[1],*piVar8,piVar8[0xc],
                                         piVar8[0xd],&local_4dc,piVar8 + 6,param_11,param_13);
                  }
                  else if (param_16 == 5) goto LAB_00aff0dd;
                  if ((int)uVar9 < 0) goto LAB_00aff29c;
                  if (local_8 != (int *)0x0) {
                    (**(code **)(*local_8 + 8))(local_8);
                    local_8 = (int *)0x0;
                  }
                  if (param_14 != (int *)0x0) {
                    (**(code **)(*param_14 + 8))(param_14);
                    param_14 = (int *)0x0;
                  }
                  param_9 = param_9 + 1;
                  if (param_3 <= param_9) break;
                  piVar8 = (int *)piVar8[0x13];
                }
              }
              if ((local_18 == 0) && (param_9 < param_7)) {
                do {
                  if (param_16 == 3) {
                    ppiVar5 = &param_14;
LAB_00aff1ab:
                    uVar9 = (**(code **)(*piVar6 + 0x48))(piVar6,param_9,ppiVar5);
                  }
                  else {
                    if (param_16 == 4) {
                      ppiVar5 = &local_8;
                      goto LAB_00aff1ab;
                    }
                    if (param_16 == 5) {
                      uVar9 = (**(code **)(*piVar6 + 0x48))(piVar6,param_4,param_9,&param_14);
                    }
                  }
                  if ((int)uVar9 < 0) goto LAB_00aff29c;
                  if (param_16 == 3) {
LAB_00aff1d1:
                    uVar9 = FUN_00afbcda(param_14,param_15,(uint *)0x0,piVar8[1],*piVar8,piVar8[0xc]
                                         ,&local_4dc,piVar8 + 6,param_11,param_13);
                  }
                  else if (param_16 == 4) {
                    uVar9 = FUN_00afbf15(local_8,param_15,(uint *)0x0,piVar8[1],*piVar8,piVar8[0xc],
                                         piVar8[0xd],&local_4dc,piVar8 + 6,param_11,param_13);
                  }
                  else if (param_16 == 5) goto LAB_00aff1d1;
                  if ((int)uVar9 < 0) goto LAB_00aff29c;
                  if (local_8 != (int *)0x0) {
                    (**(code **)(*local_8 + 8))(local_8);
                    local_8 = (int *)0x0;
                  }
                  if (param_14 != (int *)0x0) {
                    (**(code **)(*param_14 + 8))(param_14);
                    param_14 = (int *)0x0;
                  }
                  param_9 = param_9 + 1;
                } while (param_9 < param_7);
              }
              piVar8 = (int *)param_5[0x14];
              param_4 = param_4 + 1;
              param_5 = piVar8;
            } while (param_4 < param_2);
          }
          if ((((local_18 == 0) || (param_7 <= param_3)) ||
              (uVar9 = FUN_00afe50d(piVar6,&local_4dc,(int)param_3 - 1,param_12), -1 < (int)uVar9))
             && ((local_14 == 0 ||
                 (uVar9 = (**(code **)(*param_1 + 0x7c))(param_1,local_10,local_c), -1 < (int)uVar9)
                 ))) {
            piVar6 = local_c;
            local_c = (int *)0x0;
            *param_17 = piVar6;
            uVar9 = 0;
          }
        }
      }
      else {
        uVar9 = 0x8876086a;
      }
    }
  }
LAB_00aff29c:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (param_14 != (int *)0x0) {
    (**(code **)(*param_14 + 8))(param_14);
    param_14 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
    local_10 = (int *)0x0;
  }
LAB_00aff2df:
  FUN_00b061c6((int)local_c0);
  return uVar9;
}


//// FUNCTION FUN_00aff320 @ 00aff320 ////

void FUN_00aff320(int *param_1,float *param_2,float *param_3,uint param_4,int *param_5,uint param_6,
                 uint param_7,uint param_8,int param_9,uint param_10,uint param_11,uint param_12,
                 int *param_13,undefined4 *param_14,undefined4 *param_15)

{
  FUN_00afeaab(param_1,param_2,param_3,param_4,param_5,1,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,3,param_15);
  return;
}


//// FUNCTION FUN_00aff35f @ 00aff35f ////

void FUN_00aff35f(int *param_1,float *param_2,float *param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,int param_8,uint param_9,uint param_10,uint param_11,int *param_12,
                 undefined4 *param_13,undefined4 *param_14)

{
  FUN_00afeaab(param_1,param_2,param_3,param_4,(int *)param_4,1,param_5,param_6,param_7,param_8,
               param_9,param_10,param_11,param_12,param_13,5,param_14);
  return;
}


//// FUNCTION FUN_00aff39e @ 00aff39e ////

void FUN_00aff39e(int *param_1,float *param_2,float *param_3,uint param_4,int *param_5,uint param_6,
                 uint param_7,uint param_8,uint param_9,int param_10,uint param_11,uint param_12,
                 uint param_13,int *param_14,undefined4 *param_15,undefined4 *param_16)

{
  FUN_00afeaab(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,4,param_16);
  return;
}


//// FUNCTION FUN_00aff3de @ 00aff3de ////

int * FUN_00aff3de(LPCWSTR param_1,int param_2,int *param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int local_120 [21];
  undefined4 local_cc [21];
  undefined1 local_78 [12];
  int local_6c;
  undefined1 local_5c [12];
  int local_50;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  uint local_28;
  uint *local_24;
  uint local_20;
  int *local_1c;
  uint *local_18;
  uint local_14;
  undefined4 *local_10;
  uint local_c;
  undefined4 *local_8;
  
  FUN_00b061ad(local_cc);
  piVar7 = param_3;
  if (param_1 == (LPCWSTR)0x0) {
    piVar7 = (int *)0x8876086c;
    goto LAB_00aff76a;
  }
  if (param_3 == (int *)0x0) {
LAB_00aff40f:
    piVar7 = (int *)0x8876086c;
    goto LAB_00aff76a;
  }
  iVar2 = (**(code **)(*param_3 + 0x28))(param_3);
  local_3c = iVar2;
  if (iVar2 == 3) {
LAB_00aff42f:
    local_1c = piVar7;
    (**(code **)(*piVar7 + 0x44))(piVar7,0,local_5c);
  }
  else {
    if (iVar2 != 4) {
      if (iVar2 != 5) goto LAB_00aff40f;
      goto LAB_00aff42f;
    }
    local_1c = piVar7;
    (**(code **)(*piVar7 + 0x44))(piVar7,0,local_78);
    local_50 = local_6c;
  }
  local_34 = local_50;
  if (param_2 == 4) {
    local_28 = ((iVar2 != 5) - 1 & 5) + 1;
    local_20 = (**(code **)(*piVar7 + 0x34))(piVar7);
  }
  else {
    local_20 = 1;
    local_28 = 1;
  }
  uVar6 = local_20 * local_28;
  local_8 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_24 = (uint *)0x0;
  local_18 = (uint *)0x0;
  if (iVar2 == 3) {
LAB_00aff4a0:
    puVar3 = operator_new(uVar6 * 0x14 + 4);
    if (puVar3 == (uint *)0x0) {
      local_24 = (uint *)0x0;
    }
    else {
      *puVar3 = uVar6;
      FUN_00401380(puVar3 + 1,0x14,uVar6,FUN_00b0e258);
      local_24 = puVar3 + 1;
    }
    if ((local_24 == (uint *)0x0) ||
       (puVar4 = operator_new(uVar6 * 4), local_8 = puVar4, puVar4 == (undefined4 *)0x0))
    goto LAB_00aff7a5;
LAB_00aff547:
    for (uVar5 = uVar6 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; piVar7 = param_3, iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
LAB_00aff55a:
    local_2c = local_cc;
    local_14 = 0;
    if (local_28 != 0) {
      local_38 = 0;
      do {
        if (local_14 != 0) {
          puVar4 = operator_new(0x54);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = (undefined4 *)FUN_00b061ad(puVar4);
          }
          if (puVar4 == (undefined4 *)0x0) goto LAB_00aff7a5;
          local_2c[0x14] = puVar4;
          local_2c = puVar4;
        }
        local_c = 0;
        local_30 = local_2c;
        if (local_20 != 0) {
          do {
            uVar5 = local_c;
            if (local_c != 0) {
              puVar4 = operator_new(0x54);
              if (puVar4 == (undefined4 *)0x0) {
                puVar4 = (undefined4 *)0x0;
              }
              else {
                puVar4 = (undefined4 *)FUN_00b061ad(puVar4);
              }
              if (puVar4 == (undefined4 *)0x0) goto LAB_00aff7a5;
              local_30[0x13] = puVar4;
              local_30 = puVar4;
            }
            iVar2 = uVar5 + local_38;
            puVar4 = local_8;
            if ((local_3c == 3) || (puVar4 = local_10, local_3c == 4)) {
              param_3 = (int *)(**(code **)(*local_1c + 0x48))(local_1c,local_c,puVar4 + iVar2);
            }
            else if (local_3c == 5) {
              param_3 = (int *)(**(code **)(*local_1c + 0x48))
                                         (local_1c,local_14,local_c,local_8 + iVar2);
            }
            if ((int)param_3 < 0) goto LAB_00aff6ee;
            if (local_3c == 3) {
LAB_00aff648:
              param_3 = (int *)FUN_00b0e42c(local_24 + iVar2 * 5,local_120,(int *)local_8[iVar2],
                                            param_4,(uint *)0x0,0,1);
            }
            else if (local_3c == 4) {
              param_3 = (int *)FUN_00b0e920(local_18 + iVar2,local_120,(int *)local_10[iVar2],
                                            param_4,(uint *)0x0,0,1);
            }
            else if (local_3c == 5) goto LAB_00aff648;
            if (((int)param_3 < 0) ||
               (param_3 = (int *)FUN_00b06242(local_30,local_120), (int)param_3 < 0))
            goto LAB_00aff6ee;
            local_c = local_c + 1;
          } while (local_c < local_20);
        }
        local_14 = local_14 + 1;
        local_38 = local_38 + local_20;
      } while (local_14 < local_28);
    }
    param_3 = (int *)FUN_00b0a424(local_cc,param_1,param_2,param_5);
    if (-1 < (int)param_3) {
      if (local_34 == 0) {
        (**(code **)(*piVar7 + 0xc))(piVar7,&param_3);
        (**(code **)(*param_3 + 0xc))(param_3);
        (**(code **)(*param_3 + 8))(param_3);
      }
      param_3 = (int *)0x0;
    }
  }
  else {
    if (iVar2 != 4) {
      if (iVar2 == 5) goto LAB_00aff4a0;
      goto LAB_00aff55a;
    }
    puVar3 = operator_new(uVar6 * 4 + 4);
    if (puVar3 == (uint *)0x0) {
      local_18 = (uint *)0x0;
    }
    else {
      *puVar3 = uVar6;
      FUN_00401380(puVar3 + 1,4,uVar6,FUN_00b0e3fd);
      local_18 = puVar3 + 1;
    }
    if ((local_18 != (uint *)0x0) &&
       (puVar4 = operator_new(uVar6 * 4), local_10 = puVar4, puVar4 != (undefined4 *)0x0))
    goto LAB_00aff547;
LAB_00aff7a5:
    param_3 = (int *)0x8007000e;
  }
LAB_00aff6ee:
  uVar5 = 0;
  if (local_24 != (uint *)0x0) {
    FUN_00afe471(local_24,3);
  }
  if (local_18 != (uint *)0x0) {
    FUN_00afe4bf(local_18,3);
  }
  if (local_8 != (undefined4 *)0x0) {
    if (uVar6 != 0) {
      do {
        piVar7 = local_8 + uVar5;
        piVar1 = (int *)*piVar7;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *piVar7 = 0;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_8);
  }
  uVar5 = 0;
  piVar7 = param_3;
  if (local_10 != (undefined4 *)0x0) {
    if (uVar6 != 0) {
      do {
        piVar7 = local_10 + uVar5;
        piVar1 = (int *)*piVar7;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *piVar7 = 0;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_10);
  }
LAB_00aff76a:
  FUN_00b061c6((int)local_cc);
  return piVar7;
}


//// FUNCTION FUN_00aff7b1 @ 00aff7b1 ////

void FUN_00aff7b1(LPCWSTR param_1,int param_2,int *param_3,undefined4 param_4)

{
  FUN_00aff3de(param_1,param_2,param_3,param_4,0);
  return;
}


//// FUNCTION FUN_00aff7cd @ 00aff7cd ////

void FUN_00aff7cd(LPCWSTR param_1,int param_2,int *param_3,undefined4 param_4)

{
  FUN_00aff3de(param_1,param_2,param_3,param_4,1);
  return;
}


//// FUNCTION FUN_00aff7e9 @ 00aff7e9 ////

void FUN_00aff7e9(LPCWSTR param_1,int param_2,int *param_3,undefined4 param_4)

{
  FUN_00aff3de(param_1,param_2,param_3,param_4,2);
  return;
}


//// FUNCTION FUN_00aff805 @ 00aff805 ////

int FUN_00aff805(int *param_1,LPCWSTR param_2,uint param_3,int *param_4,uint param_5,uint param_6,
                uint param_7,int param_8,uint param_9,uint param_10,uint param_11,int *param_12,
                undefined4 *param_13,undefined4 *param_14)

{
  int iVar1;
  int local_14 [2];
  float *local_c;
  float *local_8;
  
  FUN_00b1b8ca(local_14);
  iVar1 = FUN_00b1b8dc(local_14,param_2,0);
  if (-1 < iVar1) {
    iVar1 = FUN_00aff320(param_1,local_c,local_8,param_3,param_4,param_5,param_6,param_7,param_8,
                         param_9,param_10,param_11,param_12,param_13,param_14);
  }
  FUN_00b1bb4d(local_14);
  return iVar1;
}


//// FUNCTION FUN_00aff86a @ 00aff86a ////

int FUN_00aff86a(int *param_1,LPCWSTR param_2,uint param_3,int *param_4,uint param_5,uint param_6,
                uint param_7,int param_8,uint param_9,uint param_10,uint param_11,int *param_12,
                undefined4 *param_13,undefined4 *param_14)

{
  int iVar1;
  int local_14 [2];
  float *local_c;
  float *local_8;
  
  FUN_00b1b8ca(local_14);
  iVar1 = FUN_00b1b8dc(local_14,param_2,1);
  if (-1 < iVar1) {
    iVar1 = FUN_00aff320(param_1,local_c,local_8,param_3,param_4,param_5,param_6,param_7,param_8,
                         param_9,param_10,param_11,param_12,param_13,param_14);
  }
  FUN_00b1bb4d(local_14);
  return iVar1;
}


//// FUNCTION FUN_00aff8cf @ 00aff8cf ////

int FUN_00aff8cf(int *param_1,HMODULE param_2,undefined4 param_3,uint param_4,int *param_5,
                uint param_6,uint param_7,uint param_8,int param_9,uint param_10,uint param_11,
                uint param_12,int *param_13,undefined4 *param_14,undefined4 *param_15)

{
  int iVar1;
  undefined4 local_10;
  float *local_c;
  float *local_8;
  
  FUN_00b1bb58(&local_10);
  iVar1 = FUN_00b1bb94(&local_10,param_2,param_3,1,0);
  if (-1 < iVar1) {
    iVar1 = FUN_00aff320(param_1,local_c,local_8,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11,param_12,param_13,param_14,param_15);
  }
  FUN_00b1bb65(&local_10);
  return iVar1;
}


//// FUNCTION FUN_00aff939 @ 00aff939 ////

int FUN_00aff939(int *param_1,HMODULE param_2,undefined4 param_3,uint param_4,int *param_5,
                uint param_6,uint param_7,uint param_8,int param_9,uint param_10,uint param_11,
                uint param_12,int *param_13,undefined4 *param_14,undefined4 *param_15)

{
  int iVar1;
  undefined4 local_10;
  float *local_c;
  float *local_8;
  
  FUN_00b1bb58(&local_10);
  iVar1 = FUN_00b1bb94(&local_10,param_2,param_3,1,1);
  if (-1 < iVar1) {
    iVar1 = FUN_00aff320(param_1,local_c,local_8,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11,param_12,param_13,param_14,param_15);
  }
  FUN_00b1bb65(&local_10);
  return iVar1;
}


//// FUNCTION FUN_00aff9a3 @ 00aff9a3 ////

void FUN_00aff9a3(int *param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  FUN_00afeaab(param_1,param_2,param_3,0xffffffff,(int *)0xffffffff,1,0xffffffff,0,0,1,0xffffffff,
               0xffffffff,0,(int *)0x0,(undefined4 *)0x0,3,param_4);
  return;
}


//// FUNCTION FUN_00aff9d2 @ 00aff9d2 ////

int FUN_00aff9d2(int *param_1,LPCWSTR param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                int param_7,uint param_8,uint param_9,uint param_10,int *param_11,
                undefined4 *param_12,undefined4 *param_13)

{
  int iVar1;
  int local_14 [2];
  float *local_c;
  float *local_8;
  
  FUN_00b1b8ca(local_14);
  iVar1 = FUN_00b1b8dc(local_14,param_2,0);
  if (-1 < iVar1) {
    iVar1 = FUN_00aff35f(param_1,local_c,local_8,param_3,param_4,param_5,param_6,param_7,param_8,
                         param_9,param_10,param_11,param_12,param_13);
  }
  FUN_00b1bb4d(local_14);
  return iVar1;
}


//// FUNCTION FUN_00affa34 @ 00affa34 ////

int FUN_00affa34(int *param_1,LPCWSTR param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                int param_7,uint param_8,uint param_9,uint param_10,int *param_11,
                undefined4 *param_12,undefined4 *param_13)

{
  int iVar1;
  int local_14 [2];
  float *local_c;
  float *local_8;
  
  FUN_00b1b8ca(local_14);
  iVar1 = FUN_00b1b8dc(local_14,param_2,1);
  if (-1 < iVar1) {
    iVar1 = FUN_00aff35f(param_1,local_c,local_8,param_3,param_4,param_5,param_6,param_7,param_8,
                         param_9,param_10,param_11,param_12,param_13);
  }
  FUN_00b1bb4d(local_14);
  return iVar1;
}


//// FUNCTION FUN_00affa96 @ 00affa96 ////

int FUN_00affa96(int *param_1,HMODULE param_2,undefined4 param_3,uint param_4,uint param_5,
                uint param_6,uint param_7,int param_8,uint param_9,uint param_10,uint param_11,
                int *param_12,undefined4 *param_13,undefined4 *param_14)

{
  int iVar1;
  undefined4 local_10;
  float *local_c;
  float *local_8;
  
  FUN_00b1bb58(&local_10);
  iVar1 = FUN_00b1bb94(&local_10,param_2,param_3,1,0);
  if (-1 < iVar1) {
    iVar1 = FUN_00aff35f(param_1,local_c,local_8,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11,param_12,param_13,param_14);
  }
  FUN_00b1bb65(&local_10);
  return iVar1;
}


//// FUNCTION FUN_00affafd @ 00affafd ////

int FUN_00affafd(int *param_1,HMODULE param_2,undefined4 param_3,uint param_4,uint param_5,
                uint param_6,uint param_7,int param_8,uint param_9,uint param_10,uint param_11,
                int *param_12,undefined4 *param_13,undefined4 *param_14)

{
  int iVar1;
  undefined4 local_10;
  float *local_c;
  float *local_8;
  
  FUN_00b1bb58(&local_10);
  iVar1 = FUN_00b1bb94(&local_10,param_2,param_3,1,1);
  if (-1 < iVar1) {
    iVar1 = FUN_00aff35f(param_1,local_c,local_8,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11,param_12,param_13,param_14);
  }
  FUN_00b1bb65(&local_10);
  return iVar1;
}


//// FUNCTION FUN_00affb64 @ 00affb64 ////

void FUN_00affb64(int *param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  FUN_00afeaab(param_1,param_2,param_3,0xffffffff,(int *)0xffffffff,1,0xffffffff,0,0,1,0xffffffff,
               0xffffffff,0,(int *)0x0,(undefined4 *)0x0,5,param_4);
  return;
}


//// FUNCTION FUN_00affb93 @ 00affb93 ////

int FUN_00affb93(int *param_1,LPCWSTR param_2,uint param_3,int *param_4,uint param_5,uint param_6,
                uint param_7,uint param_8,int param_9,uint param_10,uint param_11,uint param_12,
                int *param_13,undefined4 *param_14,undefined4 *param_15)

{
  int iVar1;
  int local_14 [2];
  float *local_c;
  float *local_8;
  
  FUN_00b1b8ca(local_14);
  iVar1 = FUN_00b1b8dc(local_14,param_2,0);
  if (-1 < iVar1) {
    iVar1 = FUN_00aff39e(param_1,local_c,local_8,param_3,param_4,param_5,param_6,param_7,param_8,
                         param_9,param_10,param_11,param_12,param_13,param_14,param_15);
  }
  FUN_00b1bb4d(local_14);
  return iVar1;
}


//// FUNCTION FUN_00affbfb @ 00affbfb ////

int FUN_00affbfb(int *param_1,LPCWSTR param_2,uint param_3,int *param_4,uint param_5,uint param_6,
                uint param_7,uint param_8,int param_9,uint param_10,uint param_11,uint param_12,
                int *param_13,undefined4 *param_14,undefined4 *param_15)

{
  int iVar1;
  int local_14 [2];
  float *local_c;
  float *local_8;
  
  FUN_00b1b8ca(local_14);
  iVar1 = FUN_00b1b8dc(local_14,param_2,1);
  if (-1 < iVar1) {
    iVar1 = FUN_00aff39e(param_1,local_c,local_8,param_3,param_4,param_5,param_6,param_7,param_8,
                         param_9,param_10,param_11,param_12,param_13,param_14,param_15);
  }
  FUN_00b1bb4d(local_14);
  return iVar1;
}


//// FUNCTION FUN_00affc63 @ 00affc63 ////

int FUN_00affc63(int *param_1,HMODULE param_2,undefined4 param_3,uint param_4,int *param_5,
                uint param_6,uint param_7,uint param_8,uint param_9,int param_10,uint param_11,
                uint param_12,uint param_13,int *param_14,undefined4 *param_15,undefined4 *param_16)

{
  int iVar1;
  undefined4 local_10;
  float *local_c;
  float *local_8;
  
  FUN_00b1bb58(&local_10);
  iVar1 = FUN_00b1bb94(&local_10,param_2,param_3,1,0);
  if (-1 < iVar1) {
    iVar1 = FUN_00aff39e(param_1,local_c,local_8,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11,param_12,param_13,param_14,param_15,param_16);
  }
  FUN_00b1bb65(&local_10);
  return iVar1;
}


//// FUNCTION FUN_00affcd0 @ 00affcd0 ////

int FUN_00affcd0(int *param_1,HMODULE param_2,undefined4 param_3,uint param_4,int *param_5,
                uint param_6,uint param_7,uint param_8,uint param_9,int param_10,uint param_11,
                uint param_12,uint param_13,int *param_14,undefined4 *param_15,undefined4 *param_16)

{
  int iVar1;
  undefined4 local_10;
  float *local_c;
  float *local_8;
  
  FUN_00b1bb58(&local_10);
  iVar1 = FUN_00b1bb94(&local_10,param_2,param_3,1,1);
  if (-1 < iVar1) {
    iVar1 = FUN_00aff39e(param_1,local_c,local_8,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11,param_12,param_13,param_14,param_15,param_16);
  }
  FUN_00b1bb65(&local_10);
  return iVar1;
}


//// FUNCTION FUN_00affd3d @ 00affd3d ////

void FUN_00affd3d(int *param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  FUN_00afeaab(param_1,param_2,param_3,0xffffffff,(int *)0xffffffff,0xffffffff,0xffffffff,0,0,1,
               0xffffffff,0xffffffff,0,(int *)0x0,(undefined4 *)0x0,4,param_4);
  return;
}


//// FUNCTION FUN_00affd6b @ 00affd6b ////

void FUN_00affd6b(int *param_1,LPCWSTR param_2,undefined4 *param_3)

{
  FUN_00aff805(param_1,param_2,0xffffffff,(int *)0xffffffff,0xffffffff,0,0,1,0xffffffff,0xffffffff,0
               ,(int *)0x0,(undefined4 *)0x0,param_3);
  return;
}


//// FUNCTION FUN_00affd93 @ 00affd93 ////

void FUN_00affd93(int *param_1,LPCWSTR param_2,undefined4 *param_3)

{
  FUN_00aff86a(param_1,param_2,0xffffffff,(int *)0xffffffff,0xffffffff,0,0,1,0xffffffff,0xffffffff,0
               ,(int *)0x0,(undefined4 *)0x0,param_3);
  return;
}


//// FUNCTION FUN_00affdbb @ 00affdbb ////

void FUN_00affdbb(int *param_1,HMODULE param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_00aff8cf(param_1,param_2,param_3,0xffffffff,(int *)0xffffffff,0xffffffff,0,0,1,0xffffffff,
               0xffffffff,0,(int *)0x0,(undefined4 *)0x0,param_4);
  return;
}


//// FUNCTION FUN_00affde6 @ 00affde6 ////

void FUN_00affde6(int *param_1,HMODULE param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_00aff939(param_1,param_2,param_3,0xffffffff,(int *)0xffffffff,0xffffffff,0,0,1,0xffffffff,
               0xffffffff,0,(int *)0x0,(undefined4 *)0x0,param_4);
  return;
}


//// FUNCTION FUN_00affe11 @ 00affe11 ////

void FUN_00affe11(int *param_1,LPCWSTR param_2,undefined4 *param_3)

{
  FUN_00aff9d2(param_1,param_2,0xffffffff,0xffffffff,0,0,1,0xffffffff,0xffffffff,0,(int *)0x0,
               (undefined4 *)0x0,param_3);
  return;
}


//// FUNCTION FUN_00affe38 @ 00affe38 ////

void FUN_00affe38(int *param_1,LPCWSTR param_2,undefined4 *param_3)

{
  FUN_00affa34(param_1,param_2,0xffffffff,0xffffffff,0,0,1,0xffffffff,0xffffffff,0,(int *)0x0,
               (undefined4 *)0x0,param_3);
  return;
}


//// FUNCTION FUN_00affe5f @ 00affe5f ////

void FUN_00affe5f(int *param_1,HMODULE param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_00affa96(param_1,param_2,param_3,0xffffffff,0xffffffff,0,0,1,0xffffffff,0xffffffff,0,
               (int *)0x0,(undefined4 *)0x0,param_4);
  return;
}


//// FUNCTION FUN_00affe89 @ 00affe89 ////

void FUN_00affe89(int *param_1,HMODULE param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_00affafd(param_1,param_2,param_3,0xffffffff,0xffffffff,0,0,1,0xffffffff,0xffffffff,0,
               (int *)0x0,(undefined4 *)0x0,param_4);
  return;
}


//// FUNCTION FUN_00affeb3 @ 00affeb3 ////

void FUN_00affeb3(int *param_1,LPCWSTR param_2,undefined4 *param_3)

{
  FUN_00affb93(param_1,param_2,0xffffffff,(int *)0xffffffff,0xffffffff,0xffffffff,0,0,1,0xffffffff,
               0xffffffff,0,(int *)0x0,(undefined4 *)0x0,param_3);
  return;
}


//// FUNCTION FUN_00affedc @ 00affedc ////

void FUN_00affedc(int *param_1,LPCWSTR param_2,undefined4 *param_3)

{
  FUN_00affbfb(param_1,param_2,0xffffffff,(int *)0xffffffff,0xffffffff,0xffffffff,0,0,1,0xffffffff,
               0xffffffff,0,(int *)0x0,(undefined4 *)0x0,param_3);
  return;
}


//// FUNCTION FUN_00afff05 @ 00afff05 ////

void FUN_00afff05(int *param_1,HMODULE param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_00affc63(param_1,param_2,param_3,0xffffffff,(int *)0xffffffff,0xffffffff,0xffffffff,0,0,1,
               0xffffffff,0xffffffff,0,(int *)0x0,(undefined4 *)0x0,param_4);
  return;
}


//// FUNCTION FUN_00afff31 @ 00afff31 ////

void FUN_00afff31(int *param_1,HMODULE param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_00affcd0(param_1,param_2,param_3,0xffffffff,(int *)0xffffffff,0xffffffff,0xffffffff,0,0,1,
               0xffffffff,0xffffffff,0,(int *)0x0,(undefined4 *)0x0,param_4);
  return;
}


//// FUNCTION FUN_00afff5d @ 00afff5d ////

undefined4 FUN_00afff5d(float param_1,float param_2)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = param_1 - param_2;
  if ((NAN(fVar1) || -1.1920929e-07 < fVar1 == (fVar1 == -1.1920929e-07)) ||
     (fVar1 < 1.1920929e-07 == (fVar1 == 1.1920929e-07))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


//// FUNCTION FUN_00afff91 @ 00afff91 ////

void FUN_00afff91(float param_1,float *param_2,float *param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1);
  fVar2 = (float10)fsin((float10)param_1);
  *param_3 = (float)fVar1;
  *param_2 = (float)fVar2;
  return;
}


//// FUNCTION FUN_00afffa9 @ 00afffa9 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00afffa9(void)

{
  FUN_00b1c672(1);
                    /* WARNING: Could not recover jumptable at 0x00afffb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00e9b100)();
  return;
}


//// FUNCTION FUN_00afffc2 @ 00afffc2 ////

void FUN_00afffc2(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = *(uint *)(param_2 + uVar4 * 4);
      uVar3 = uVar1 & 0x7fffffff;
      uVar2 = (ushort)(uVar1 >> 0x10) & 0x8000;
      if (uVar3 < 0x47fff000) {
        if (uVar3 < 0x38800000) {
          iVar5 = 0x71 - (uVar3 >> 0x17);
          if (iVar5 < 0x20) {
            uVar3 = (uVar1 & 0x7fffff | 0x800000) >> ((byte)iVar5 & 0x1f);
          }
          else {
            uVar3 = 0;
          }
          uVar3 = (uVar3 >> 0xd & 1) + 0xfff + uVar3;
        }
        else {
          uVar3 = (uVar3 >> 0xd & 1) + 0xc8000fff + uVar3;
        }
        uVar2 = (ushort)(uVar3 >> 0xd) | uVar2;
      }
      else {
        uVar2 = uVar2 | 0x7fff;
      }
      *(ushort *)(param_1 + uVar4 * 2) = uVar2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return;
}


//// FUNCTION FUN_00b00064 @ 00b00064 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b00064(void)

{
  FUN_00b1c672(1);
                    /* WARNING: Could not recover jumptable at 0x00b00071. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00e9b104)();
  return;
}


//// FUNCTION FUN_00b0007d @ 00b0007d ////

int FUN_00b0007d(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = *(ushort *)(param_2 + uVar4 * 2);
      uVar2 = (uint)uVar1;
      if ((uVar1 & 0x7c00) == 0) {
        if ((uVar1 & 0x3ff) == 0) {
          uVar2 = (uVar2 & 0xffff8000) << 0x10;
        }
        else {
          iVar5 = -0xe;
          for (uVar3 = uVar2 & 0x3ff; (uVar3 & 0x400) == 0; uVar3 = uVar3 << 1) {
            iVar5 = iVar5 + -1;
          }
          uVar2 = (((uVar2 & 0xffff8080) << 3 | uVar3) & 0xfffffbff) << 0xd |
                  (iVar5 + 0x7f) * 0x800000;
        }
      }
      else {
        uVar2 = ((uVar2 & 0xffff8000) << 3 | uVar2 & 0x3ff) << 0xd |
                ((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000;
      }
      *(uint *)(param_1 + uVar4 * 4) = uVar2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return param_1;
}


//// FUNCTION FUN_00b00124 @ 00b00124 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b00124(void)

{
  FUN_00b1c672(1);
                    /* WARNING: Could not recover jumptable at 0x00b00131. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00e9b0d4)();
  return;
}


//// FUNCTION FUN_00b001ff @ 00b001ff ////

void FUN_00b001ff(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_00b1c672(1);
  (*(code *)PTR_FUN_00e9b0d8)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


//// FUNCTION FUN_00b002e2 @ 00b002e2 ////

void FUN_00b002e2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_00b1c672(1);
  (*(code *)PTR_FUN_00e9b0dc)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


//// FUNCTION FUN_00b0035e @ 00b0035e ////

void FUN_00b0035e(void)

{
  FUN_00b1c672(1);
                    /* WARNING: Could not recover jumptable at 0x00b0036b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_00e9b018)();
  return;
}


//// FUNCTION FUN_00b003a1 @ 00b003a1 ////

undefined1  [10] FUN_00b003a1(float param_1,float param_2)

{
  undefined1 auVar1 [10];
  
  auVar1 = (undefined1  [10])fpatan((float10)param_1,(float10)param_2);
  return auVar1;
}


//// FUNCTION FUN_00b003b2 @ 00b003b2 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b003b2(void)

{
  FUN_00b1c672(1);
                    /* WARNING: Could not recover jumptable at 0x00b003bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00e9b03c)();
  return;
}


//// FUNCTION FUN_00b00400 @ 00b00400 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b00400(void)

{
  FUN_00b1c672(1);
                    /* WARNING: Could not recover jumptable at 0x00b0040d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00e9b02c)();
  return;
}


//// FUNCTION FUN_00b0045d @ 00b0045d ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b0045d(void)

{
  FUN_00b1c672(1);
                    /* WARNING: Could not recover jumptable at 0x00b0046a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00e9b110)();
  return;
}


//// FUNCTION FUN_00b0047c @ 00b0047c ////

float * FUN_00b0047c(float *param_1,int param_2,float *param_3,int param_4,float *param_5,
                    int param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  
  pfVar7 = param_1;
  for (; param_6 != 0; param_6 = param_6 + -1) {
    pfVar1 = param_3 + 1;
    fVar2 = *param_3;
    fVar3 = param_5[1];
    fVar4 = *param_3;
    fVar5 = param_5[5];
    fVar6 = param_3[1];
    param_3 = (float *)((int)param_3 + param_4);
    *param_1 = fVar2 * *param_5 + param_5[4] * *pfVar1;
    param_1[1] = fVar5 * fVar6 + fVar3 * fVar4;
    param_1 = (float *)((int)param_1 + param_2);
  }
  return pfVar7;
}


//// FUNCTION FUN_00b004d2 @ 00b004d2 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b004d2(void)

{
  FUN_00b1c672(1);
                    /* WARNING: Could not recover jumptable at 0x00b004df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00e9b034)();
  return;
}


//// FUNCTION FUN_00b00501 @ 00b00501 ////

void FUN_00b00501(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_00b1c672(1);
  (*(code *)PTR_FUN_00e9b0e0)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


//// FUNCTION FUN_00b005e3 @ 00b005e3 ////

void __thiscall FUN_00b005e3(void *this,float param_1)

{
  *(float *)this = (1.0 / param_1) * *(float *)this;
  *(float *)((int)this + 4) = (1.0 / param_1) * *(float *)((int)this + 4);
  return;
}


//// FUNCTION FUN_00b005ff @ 00b005ff ////

void FUN_00b005ff(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_00b1c672(1);
  (*(code *)PTR_FUN_00e9b0e4)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


//// FUNCTION FUN_00b00704 @ 00b00704 ////

void __thiscall FUN_00b00704(void *this,float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)((int)this + 4);
  *param_1 = (1.0 / param_2) * *(float *)this;
  param_1[1] = (1.0 / param_2) * fVar1;
  return;
}


//// FUNCTION FUN_00b00725 @ 00b00725 ////

void FUN_00b00725(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_00b1c672(1);
  (*(code *)PTR_FUN_00e9b0e8)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


//// FUNCTION FUN_00b007bb @ 00b007bb ////

void FUN_00b007bb(void)

{
  FUN_00b1c672(1);
                    /* WARNING: Could not recover jumptable at 0x00b007c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_00e9b01c)();
  return;
}


//// FUNCTION FUN_00b00861 @ 00b00861 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b00861(void)

{
  FUN_00b1c672(1);
                    /* WARNING: Could not recover jumptable at 0x00b0086e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00e9b114)();
  return;
}


//// FUNCTION FUN_00b00923 @ 00b00923 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b00923(void)

{
  FUN_00b1c672(1);
                    /* WARNING: Could not recover jumptable at 0x00b00930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00e9b040)();
  return;
}


//// FUNCTION FUN_00b00960 @ 00b00960 ////

void __thiscall FUN_00b00960(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((int)this + 8);
  fVar2 = *(float *)((int)this + 4);
  *param_1 = -*(float *)this;
  param_1[1] = -fVar2;
  param_1[2] = -fVar1;
  return;
}


//// FUNCTION FUN_00b00982 @ 00b00982 ////

void __thiscall FUN_00b00982(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)((int)this + 8);
  fVar2 = param_2[2];
  fVar3 = *(float *)((int)this + 4);
  fVar4 = param_2[1];
  *param_1 = *(float *)this - *param_2;
  param_1[1] = fVar3 - fVar4;
  param_1[2] = fVar1 - fVar2;
  return;
}


//// FUNCTION FUN_00b009a9 @ 00b009a9 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b009a9(void)

{
  FUN_00b1c672(1);
                    /* WARNING: Could not recover jumptable at 0x00b009b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00e9b118)();
  return;
}


//// FUNCTION FUN_00b00aa3 @ 00b00aa3 ////

void __thiscall FUN_00b00aa3(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 1.0 / param_2;
  fVar1 = *(float *)((int)this + 8);
  fVar2 = *(float *)((int)this + 4);
  *param_1 = fVar3 * *(float *)this;
  param_1[1] = fVar3 * fVar2;
  param_1[2] = fVar3 * fVar1;
  return;
}


//// FUNCTION FUN_00b00acd @ 00b00acd ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b00acd(void)

{
  FUN_00b1c672(1);
                    /* WARNING: Could not recover jumptable at 0x00b00ada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00e9b030)();
  return;
}


//// FUNCTION FUN_00b00b4e @ 00b00b4e ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b00b4e(void)

{
  FUN_00b1c672(1);
                    /* WARNING: Could not recover jumptable at 0x00b00b5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00e9b11c)();
  return;
}


//// FUNCTION FUN_00b00be7 @ 00b00be7 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b00be7(void)

{
  FUN_00b1c672(1);
                    /* WARNING: Could not recover jumptable at 0x00b00bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00e9b054)();
  return;
}


//// FUNCTION FUN_00b00c22 @ 00b00c22 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b00c22(void)

{
  FUN_00b1c672(1);
                    /* WARNING: Could not recover jumptable at 0x00b00c2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00e9b124)();
  return;
}


//// FUNCTION FUN_00b00c6c @ 00b00c6c ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b00c6c(void)

{
  FUN_00b1c672(1);
                    /* WARNING: Could not recover jumptable at 0x00b00c79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00e9b058)();
  return;
}


//// FUNCTION FUN_00b00da9 @ 00b00da9 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b00da9(void)

{
  FUN_00b1c672(1);
                    /* WARNING: Could not recover jumptable at 0x00b00db6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00e9b038)();
  return;
}


