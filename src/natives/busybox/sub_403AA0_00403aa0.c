// busybox.exe @ 0x403aa0 size=1615

int __usercall sub_403AA0@<eax>(int a1@<eax>, int a2@<edx>, char *a3@<ecx>, const char **a4, int *a5, char a6)
{
  int v7; // eax
  char v8; // dl
  int v9; // ebx
  char *v10; // ecx
  bool v11; // zf
  char *v12; // ecx
  int Val; // edx
  char *v14; // edi
  int v15; // ebx
  char *v16; // eax
  char *v17; // edx
  char v18; // al
  int v19; // eax
  DWORD EnvironmentVariableW; // eax
  char *v21; // eax
  int v22; // edi
  char *v23; // esi
  int v24; // eax
  int v25; // esi
  int v27; // ecx
  BOOL v28; // eax
  char *v29; // eax
  int v30; // esi
  int v31; // eax
  char *Str; // [esp+0h] [ebp-3Ch]
  char *v34; // [esp+14h] [ebp-28h]
  char *v35; // [esp+14h] [ebp-28h]
  int v36; // [esp+14h] [ebp-28h]
  int v37; // [esp+18h] [ebp-24h]
  char *v38; // [esp+1Ch] [ebp-20h]

  v38 = a3;
  if ( a3 == nullptr )
    return -1;
  if ( dword_473090 != 0 )
  {
    if ( dword_47307C != -1 )
    {
      v7 = dword_486020;
      if ( dword_486020 == 0 )
      {
        v8 = *a3;
        if ( *a3 != 45 )
          goto LABEL_6;
LABEL_39:
        a6 |= 2u;
LABEL_40:
        ++v38;
        goto LABEL_9;
      }
    }
  }
  else
  {
    dword_486020 = 1;
    dword_473090 = 1;
  }
  EnvironmentVariableW = GetEnvironmentVariableW(L"POSIXLY_CORRECT", nullptr, 0);
  v8 = *v38;
  dword_47307C = EnvironmentVariableW != 0;
  v7 = dword_486020;
  if ( v8 == 45 )
    goto LABEL_39;
LABEL_6:
  if ( dword_47307C != 0 || v8 == 43 )
  {
    a6 &= ~1u;
    if ( v8 == 43 )
      goto LABEL_40;
  }
LABEL_9:
  dword_48601C = nullptr;
  if ( v7 != 0 )
  {
    dword_473080 = -1;
    dword_473084 = -1;
  }
  while ( 1 )
  {
    if ( v7 == 0 )
    {
LABEL_19:
      v12 = ::Str;
      Val = *::Str;
      if ( (_BYTE)Val != 0 )
        goto LABEL_20;
    }
    dword_486020 = 0;
    v9 = dword_473090;
    if ( dword_473090 >= a1 )
    {
      v25 = dword_473080;
      v22 = dword_473084;
      ::Str = (char *)&unk_474028;
      if ( dword_473080 == -1 )
      {
        if ( dword_473084 != -1 )
          dword_473090 = dword_473084;
        goto LABEL_53;
      }
      Str = (char *)a2;
      v27 = dword_473090;
      goto LABEL_58;
    }
    v10 = *(char **)(a2 + 4 * dword_473090);
    v11 = *v10 == 45;
    ::Str = v10;
    if ( v11 )
    {
      Val = v10[1];
      if ( (_BYTE)Val != 0 )
      {
        v22 = dword_473084;
        v23 = v10;
        if ( dword_473084 != -1 && dword_473080 == -1 )
          goto LABEL_85;
        goto LABEL_70;
      }
      v35 = v10;
      v21 = strchr(v38, 45);
      v10 = v35;
      Val = 0;
      if ( v21 != nullptr )
        break;
    }
    ::Str = (char *)&unk_474028;
    if ( (a6 & 2) != 0 )
    {
      dword_48601C = v10;
      dword_473090 = v9 + 1;
      return 1;
    }
    if ( (a6 & 1) == 0 )
      return -1;
    if ( dword_473084 == -1 )
    {
      dword_473084 = v9;
      dword_473090 = v9 + 1;
      goto LABEL_19;
    }
    if ( dword_473080 == -1 )
    {
      dword_473090 = v9 + 1;
      goto LABEL_19;
    }
    v37 = dword_473080;
    v36 = dword_473084;
    sub_403610(dword_473084, dword_473080, v9, a2);
    dword_473080 = -1;
    v24 = dword_473090 - (v37 - v36);
    ++dword_473090;
    dword_473084 = v24;
    v7 = dword_486020;
  }
  v22 = dword_473084;
  v23 = v35;
  if ( dword_473084 == -1 || dword_473080 != -1 )
  {
LABEL_45:
    v14 = v23 + 1;
    ::Str = v23 + 1;
    goto LABEL_46;
  }
LABEL_85:
  dword_473080 = v9;
  if ( (_BYTE)Val == 0 )
    goto LABEL_45;
LABEL_70:
  v12 = v23 + 1;
  ::Str = v23 + 1;
  if ( (_BYTE)Val != 45 )
  {
LABEL_20:
    if ( a4 == nullptr || *(char **)(a2 + 4 * dword_473090) == v12 )
      goto LABEL_24;
    if ( (_BYTE)Val == 45 )
      goto LABEL_74;
    if ( (a6 & 4) == 0 )
      goto LABEL_24;
    v28 = false;
    if ( (_BYTE)Val != 58 )
      v28 = strchr(v38, Val) != nullptr;
LABEL_61:
    v15 = sub_403740(a2, v38, a4, a5, v28);
    if ( v15 == -1 )
    {
      v12 = ::Str;
      LOBYTE(Val) = *::Str;
      goto LABEL_24;
    }
    goto LABEL_62;
  }
  if ( v23[2] == 0 )
  {
    v25 = dword_473080;
    v27 = v9 + 1;
    ::Str = (char *)&unk_474028;
    dword_473090 = v9 + 1;
    if ( dword_473080 != -1 )
    {
      Str = (char *)a2;
LABEL_58:
      sub_403610(v22, v25, v27, (int)Str);
      dword_473090 -= v25 - v22;
    }
LABEL_53:
    dword_473080 = -1;
    dword_473084 = -1;
    return -1;
  }
  if ( a4 == nullptr )
  {
    v14 = v23 + 2;
    ++v23;
    ::Str = v14;
    goto LABEL_46;
  }
  if ( v12 != *(char **)(a2 + 4 * v9) )
  {
LABEL_74:
    v28 = false;
    ::Str = v12 + 1;
    goto LABEL_61;
  }
LABEL_24:
  v14 = v12 + 1;
  v15 = (char)Val;
  ::Str = v12 + 1;
  if ( (_BYTE)Val == 58 )
    goto LABEL_75;
  if ( (char)Val == 45 )
  {
    v23 = v12;
LABEL_46:
    if ( v23[1] != 0 )
    {
      v15 = 45;
LABEL_77:
      if ( dword_473094 != 0 && *v38 != 58 )
        sub_4036C0("unknown option -- %c", v15);
      dword_47308C = v15;
      return 63;
    }
    v29 = strchr(v38, 45);
    v17 = v29;
    if ( v29 != nullptr )
    {
      v18 = v29[1];
      v12 = v23;
      v15 = 45;
      goto LABEL_65;
    }
    return -1;
  }
  v34 = v12;
  v16 = strchr(v38, (char)Val);
  v12 = v34;
  v17 = v16;
  if ( v16 == nullptr )
  {
LABEL_75:
    if ( v12[1] == 0 )
      ++dword_473090;
    goto LABEL_77;
  }
  v18 = v16[1];
  if ( a4 != nullptr && v15 == 87 && v18 == 59 )
  {
    if ( v34[1] == 0 )
    {
      v19 = dword_473090 + 1;
      dword_473090 = v19;
      if ( v19 >= a1 )
      {
        ::Str = (char *)&unk_474028;
        if ( dword_473094 != 0 && *v38 != 58 )
          sub_4036C0("option requires an argument -- %c", 87);
        dword_47308C = 87;
        if ( *v38 != 58 )
          return 63;
        return 58;
      }
      ::Str = *(char **)(a2 + 4 * v19);
    }
    v15 = sub_403740(a2, v38, a4, a5, 0);
LABEL_62:
    ::Str = (char *)&unk_474028;
    return v15;
  }
LABEL_65:
  if ( v18 == 58 )
  {
    v30 = dword_473090;
    dword_48601C = nullptr;
    v31 = dword_473090 + 1;
    if ( v12[1] != 0 )
    {
      dword_48601C = v14;
    }
    else if ( v17[2] != 58 )
    {
      ++dword_473090;
      if ( a1 <= v31 )
      {
        ::Str = (char *)&unk_474028;
        if ( dword_473094 != 0 && *v38 != 58 )
          sub_4036C0("option requires an argument -- %c", v15);
        dword_47308C = v15;
        if ( *v38 != 58 )
          return 63;
        return 58;
      }
      dword_48601C = *(char **)(a2 + 4 * v31);
      v31 = v30 + 2;
    }
    ::Str = (char *)&unk_474028;
    dword_473090 = v31;
  }
  else if ( v12[1] == 0 )
  {
    ++dword_473090;
  }
  return v15;
}

