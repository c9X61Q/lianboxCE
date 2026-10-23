// gettime.exe @ 0x427003 size=433

unsigned int __cdecl __crt_mbstring::__mbrtoc32_utf8(
        __crt_mbstring *this,
        char32_t *a2,
        unsigned int a3,
        __crt_mbstring *a4,
        struct _Mbstatet *a5)
{
  unsigned __int8 *v5; // esi
  char32_t *v6; // edi
  __crt_mbstring *v7; // eax
  unsigned __int8 v9; // bl
  unsigned __int8 v10; // bh
  unsigned int v11; // edx
  unsigned __int8 v12; // bl
  unsigned int v13; // ecx
  unsigned int i; // eax
  unsigned __int8 v15; // bl
  unsigned __int8 v16; // ah
  unsigned int v17; // [esp+Ch] [ebp-24h]
  unsigned int v18; // [esp+10h] [ebp-20h]
  __crt_mbstring *v19; // [esp+18h] [ebp-18h]
  unsigned __int8 v20; // [esp+1Eh] [ebp-12h]
  unsigned __int8 v21; // [esp+1Fh] [ebp-11h]
  int v22; // [esp+20h] [ebp-10h]
  int v23; // [esp+24h] [ebp-Ch]
  int v24; // [esp+28h] [ebp-8h]

  v5 = (unsigned __int8 *)a4;
  v19 = this;
  if ( a4 == nullptr )
    v5 = (unsigned __int8 *)&unk_438E3C;
  if ( a2 != nullptr )
  {
    v6 = a2;
    if ( a3 == 0 )
      return -2;
    v7 = v19;
  }
  else
  {
    v6 = (char32_t *)&unk_429264;
    a3 = 1;
    v7 = nullptr;
    v19 = nullptr;
  }
  if ( *((_WORD *)v5 + 3) == 0 )
  {
    v9 = *(_BYTE *)v6;
    v6 = (char32_t *)((char *)v6 + 1);
    if ( (v9 & 0x80u) == 0 )
    {
      if ( v7 != nullptr )
        *(_DWORD *)v19 = v9;
      return v9 != 0;
    }
    if ( (v9 & 0xE0) == 0xC0 )
    {
      v10 = 2;
LABEL_19:
      v21 = v10;
      v11 = v9 & ((1 << (7 - v10)) - 1);
      v12 = v10;
      goto LABEL_23;
    }
    if ( (v9 & 0xF0) == 0xE0 )
    {
      v10 = 3;
      goto LABEL_19;
    }
    if ( (v9 & 0xF8) == 0xF0 )
    {
      v10 = 4;
      goto LABEL_19;
    }
    return __crt_mbstring::return_illegal_sequence((__crt_mbstring *)v5, a5);
  }
  v10 = v5[4];
  v12 = v5[6];
  v11 = *(_DWORD *)v5;
  v21 = v12;
  if ( (unsigned __int8)(v10 - 2) > 2u || v12 == 0 || v12 >= v10 )
    return __crt_mbstring::return_illegal_sequence((__crt_mbstring *)v5, a5);
LABEL_23:
  v13 = a3;
  v17 = v12;
  if ( v12 < a3 )
    v13 = v12;
  for ( i = (char *)v6 - (char *)a2; i < v13; i = v18 )
  {
    v15 = *(_BYTE *)v6;
    v6 = (char32_t *)((char *)v6 + 1);
    v20 = v15;
    v18 = i + 1;
    v16 = v15;
    v12 = v21;
    if ( (v16 & 0xC0) != 0x80 )
      return __crt_mbstring::return_illegal_sequence((__crt_mbstring *)v5, a5);
    v11 = v16 & 0x3F | (v11 << 6);
  }
  if ( v13 < v17 )
  {
    *((_WORD *)v5 + 2) = v10;
    *(_DWORD *)v5 = v11;
    *((_WORD *)v5 + 3) = (unsigned __int8)(v12 - v13);
    return -2;
  }
  if ( v11 >= 0xD800 && v11 <= 0xDFFF )
    return __crt_mbstring::return_illegal_sequence((__crt_mbstring *)v5, a5);
  if ( v11 > 0x10FFFF )
    return __crt_mbstring::return_illegal_sequence((__crt_mbstring *)v5, a5);
  v22 = 128;
  v23 = 2048;
  v24 = 0x10000;
  if ( v11 < (unsigned int)*(&v19 + v10) )
    return __crt_mbstring::return_illegal_sequence((__crt_mbstring *)v5, a5);
  if ( v19 != nullptr )
    *(_DWORD *)v19 = v11;
  return (unsigned int)__crt_mbstring::reset_and_return(v11 != 0 ? (__crt_mbstring *)v17 : nullptr, v5);
}

