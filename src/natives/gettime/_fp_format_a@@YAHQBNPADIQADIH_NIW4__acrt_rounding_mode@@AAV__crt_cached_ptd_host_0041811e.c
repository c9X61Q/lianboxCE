// gettime.exe @ 0x41811e size=813

int __cdecl fp_format_a(
        _DWORD *a1,
        char *Str,
        unsigned int a3,
        int a4,
        int a5,
        signed int Size,
        char a7,
        int a8,
        int a9,
        __crt_cached_ptd_host *a10)
{
  signed int v10; // esi
  char *v11; // edi
  int result; // eax
  _QWORD *v13; // ebx
  char *v14; // eax
  char *v15; // edx
  char *v16; // edi
  char v17; // al
  __crt_cached_ptd_host *v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  unsigned __int16 v23; // dx
  char *i; // eax
  char v25; // cl
  unsigned int v26; // ebx
  _BYTE *v27; // eax
  bool v28; // cf
  unsigned int v29; // ebx
  int v30; // esi
  char v31; // cl
  _BYTE *v32; // edi
  __int64 v33; // kr00_8
  __int64 v34; // kr08_8
  unsigned int v35; // [esp+1Ch] [ebp-18h]
  unsigned int v36; // [esp+20h] [ebp-14h]
  unsigned int v37; // [esp+24h] [ebp-10h]
  _BYTE *v38; // [esp+24h] [ebp-10h]
  char *v39; // [esp+28h] [ebp-Ch]
  unsigned __int16 v40; // [esp+2Ch] [ebp-8h]

  v10 = Size;
  if ( Size < 0 )
    v10 = 0;
  v11 = Str;
  *Str = 0;
  if ( a3 <= v10 + 11 )
  {
    *((_BYTE *)a10 + 28) = 1;
    *((_DWORD *)a10 + 6) = 34;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a10);
    return 34;
  }
  v13 = a1;
  if ( ((a1[1] >> 20) & 0x7FF) != 0x7FF )
  {
    if ( (int)a1[1] < 0 )
    {
      *Str = 45;
      v11 = Str + 1;
    }
    v15 = v11 + 1;
    v37 = 1023;
    v39 = v11 + 1;
    if ( (a1[1] & 0x7FF00000) != 0 )
    {
      *v11 = 49;
    }
    else
    {
      *v11 = 48;
      if ( (a1[1] & 0xFFFFF | *a1) != 0 )
        v37 = 1022;
      else
        v37 = 0;
    }
    v16 = v11 + 2;
    if ( v10 != 0 )
    {
      v18 = a10;
      if ( *((_BYTE *)a10 + 20) == 0 )
      {
        __crt_cached_ptd_host::update_locale_slow(a10);
        v18 = a10;
        v15 = v39;
      }
      v17 = ***(_BYTE ***)(*((_DWORD *)v18 + 3) + 136);
    }
    else
    {
      v17 = 0;
    }
    *v15 = v17;
    if ( (a1[1] & 0xFFFFF) != 0 || *a1 != 0 )
    {
      v40 = 48;
      v19 = 983040;
      v20 = 0;
      v35 = 983040;
      v36 = 0;
      while ( v10 > 0 )
      {
        LODWORD(v21) = *a1 & v20;
        HIDWORD(v21) = v19 & a1[1] & 0xFFFFF;
        v22 = (unsigned __int16)((v21 >> v40) + 48);
        if ( v22 > 0x39 )
          LOBYTE(v22) = 32 * (a7 ^ 1) + 7 + v22;
        v23 = v40;
        *v16++ = v22;
        v20 = __PAIR64__(v35, v36) >> 4;
        v40 -= 4;
        v19 = v35 >> 4;
        --v10;
        v36 = v20;
        v35 >>= 4;
        if ( (__int16)(v23 - 4) < 0 )
          goto LABEL_40;
      }
      if ( (unsigned __int8)should_round_up(a1, v20, v19, v40, a9) == 0 )
      {
LABEL_42:
        if ( *v39 == 0 )
          v16 = v39;
        *v16 = 32 * (a7 ^ 1) + 80;
        v26 = (*v13 >> 52) & 0x7FF;
        v27 = v16 + 2;
        v28 = v26 < v37;
        v29 = v26 - v37;
        v38 = v16 + 2;
        v30 = -v28;
        if ( v28 )
        {
          v29 = -v29;
          v30 = (unsigned __int64)-__SPAIR64__(v30, v29) >> 32;
          v31 = 45;
        }
        else
        {
          v31 = 43;
        }
        v16[1] = v31;
        v32 = v16 + 2;
        *v27 = 48;
        if ( v30 < 0 )
          goto LABEL_59;
        if ( v30 <= 0 && v29 < 0x3E8
          || (*v38 = __SPAIR64__(v30, v29) / 1000 + 48,
              v32 = v38 + 1,
              v33 = __SPAIR64__(v30, v29) % 1000,
              v30 = (unsigned __int64)(__SPAIR64__(v30, v29) % 1000) >> 32,
              v29 = v33,
              v38 + 1 == v38) )
        {
          if ( v30 < 0 )
          {
LABEL_59:
            *v32 = v29 + 48;
            v32[1] = 0;
            return 0;
          }
          if ( v30 <= 0 && v29 < 0x64 )
            goto LABEL_57;
        }
        *v32++ = __SPAIR64__(v30, v29) / 100 + 48;
        v34 = __SPAIR64__(v30, v29) % 100;
        v30 = (unsigned __int64)(__SPAIR64__(v30, v29) % 100) >> 32;
        v29 = v34;
        if ( v32 == v38 )
        {
LABEL_57:
          if ( v30 < 0 || v30 <= 0 && v29 < 0xA )
            goto LABEL_59;
        }
        *v32++ = __SPAIR64__(v30, v29) / 10 + 48;
        LOBYTE(v29) = __SPAIR64__(v30, v29) % 10;
        goto LABEL_59;
      }
      for ( i = v16 - 1; ; --i )
      {
        v25 = *i;
        if ( *i != 102 && v25 != 70 )
          break;
        *i = 48;
      }
      v13 = a1;
      if ( i == v39 )
      {
        ++*(i - 1);
      }
      else
      {
        if ( v25 == 57 )
          v25 = 32 * (a7 ^ 1) + 64;
        *i = v25 + 1;
      }
    }
LABEL_40:
    if ( v10 > 0 )
    {
      memset(v16, 48, v10);
      v16 += v10;
    }
    goto LABEL_42;
  }
  result = fp_format_e(a1, Str, a3, a4, a5, v10, 0, a8, a9, a10);
  if ( result != 0 )
  {
    *Str = 0;
    return result;
  }
  v14 = strrchr(Str, 101);
  if ( v14 != nullptr )
  {
    *v14 = 32 * (a7 ^ 1) + 80;
    v14[3] = 0;
  }
  return 0;
}

