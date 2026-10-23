// gettime.exe @ 0x41a9b8 size=679

int __cdecl _wcstombs_l_helper(
        LPSTR lpMultiByteStr,
        const wchar_t *lpWideCharStr,
        const wchar_t **cchWideChar,
        struct _Mbstatet *a4)
{
  __crt_mbstring *v4; // edx
  LPCWCH v5; // ecx
  int v6; // esi
  int result; // eax
  _DWORD *v8; // eax
  int v9; // ebx
  WCHAR v10; // ax
  _WORD *v11; // eax
  const WCHAR *v12; // eax
  int v13; // edx
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // edx
  unsigned int v17; // ecx
  const wchar_t **v18; // eax
  char *v19; // edx
  CHAR v20; // al
  WCHAR v21; // dx
  struct __crt_cached_ptd_host *v22; // [esp+0h] [ebp-34h]
  unsigned int v23; // [esp+Ch] [ebp-28h] BYREF
  signed int v24; // [esp+10h] [ebp-24h]
  char *v25; // [esp+14h] [ebp-20h]
  const wchar_t **v26; // [esp+18h] [ebp-1Ch]
  LPCWCH v27; // [esp+1Ch] [ebp-18h] BYREF
  unsigned int v28; // [esp+20h] [ebp-14h]
  int v29; // [esp+24h] [ebp-10h] BYREF
  CHAR MultiByteStr[8]; // [esp+28h] [ebp-Ch] BYREF

  v4 = (__crt_mbstring *)lpMultiByteStr;
  v5 = lpWideCharStr;
  v6 = 0;
  v25 = lpMultiByteStr;
  v27 = lpWideCharStr;
  v29 = 0;
  if ( lpMultiByteStr != nullptr && cchWideChar == nullptr )
    return 0;
  if ( lpWideCharStr == nullptr )
  {
    LOBYTE(a4[3]._Byte) = 1;
    a4[3]._Wchar = 22;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a4);
    return -1;
  }
  if ( LOBYTE(a4[2]._Byte) == 0 )
  {
    __crt_cached_ptd_host::update_locale_slow((__crt_cached_ptd_host *)a4);
    v5 = v27;
    v4 = (__crt_mbstring *)v25;
  }
  v8 = *(_DWORD **)&a4[1]._Byte;
  v28 = v8[2];
  if ( v28 == 65001 )
  {
    v23 = 0;
    v24 = 0;
    return __crt_mbstring::__wcsrtombs_utf8(v4, (char *)&v27, cchWideChar, (unsigned int)&v23, a4, v22);
  }
  v24 = v8[42];
  v9 = (int)cchWideChar;
  if ( v4 == nullptr )
  {
    if ( v24 == 0 )
    {
      if ( *v5 != 0 )
      {
        v21 = *v5;
        while ( v21 <= 0xFFu )
        {
          ++v5;
          ++v6;
          v21 = *v5;
          if ( *v5 == 0 )
            return v6;
        }
        goto LABEL_55;
      }
      return v6;
    }
    result = __acrt_WideCharToMultiByte(v28, 0, v5, -1, nullptr, 0, 0, (int)&v29);
    if ( result != 0 && v29 == 0 )
      return --result;
LABEL_55:
    a4[3]._Wchar = 42;
    LOBYTE(a4[3]._Byte) = 1;
    return -1;
  }
  if ( v8[42] == 0 )
  {
    if ( cchWideChar != nullptr )
    {
      while ( *v5 <= 0xFFu )
      {
        *((_BYTE *)v4 + v6) = *(_BYTE *)v5;
        v10 = *v5++;
        v27 = v5;
        if ( v10 != 0 && ++v6 < (unsigned int)cchWideChar )
          continue;
        return v6;
      }
      goto LABEL_55;
    }
    return v6;
  }
  if ( v8[1] == 1 )
  {
    if ( cchWideChar != nullptr )
    {
      v11 = v5;
      v26 = cchWideChar;
      while ( *v11 != 0 )
      {
        ++v11;
        v26 = (const wchar_t **)((char *)v26 - 1);
        if ( v26 == nullptr )
          goto LABEL_24;
      }
      v9 = v11 - v5 + 1;
    }
LABEL_24:
    result = __acrt_WideCharToMultiByte(v28, 0, v5, v9, (LPSTR)v4, v9, 0, (int)&v29);
    if ( result == 0 || v29 != 0 )
      goto LABEL_55;
    if ( v25[result - 1] != 0 )
      return result;
    return --result;
  }
  result = __acrt_WideCharToMultiByte(v28, 0, v5, -1, (LPSTR)v4, (int)cchWideChar, 0, (int)&v29);
  v28 = result;
  if ( v29 != 0 )
    goto LABEL_55;
  if ( result != 0 )
    return --result;
  if ( GetLastError() != 122 )
    goto LABEL_55;
  if ( cchWideChar != nullptr )
  {
    v12 = v27;
    while ( 1 )
    {
      v13 = *(_DWORD *)&a4[1]._Byte;
      v14 = *(_DWORD *)(v13 + 4);
      if ( v14 > 5 )
        v14 = 5;
      v15 = __acrt_WideCharToMultiByte(*(_DWORD *)(v13 + 8), 0, v12, 1, MultiByteStr, v14, 0, (int)&v29);
      v16 = v15;
      v24 = v15;
      if ( v15 == 0 || v29 != 0 || v15 > 5 )
        goto LABEL_55;
      v17 = v28;
      if ( v15 + v28 > (unsigned int)cchWideChar )
        return v17;
      v18 = nullptr;
      v26 = nullptr;
      if ( v16 > 0 )
      {
        v19 = v25;
        do
        {
          v20 = MultiByteStr[(_DWORD)v18];
          v19[v17] = v20;
          if ( v20 == 0 )
            return v17;
          v18 = (const wchar_t **)((char *)v26 + 1);
          ++v17;
          v26 = v18;
          v28 = v17;
        }
        while ( (int)v18 < v24 );
      }
      v12 = ++v27;
      if ( v17 >= (unsigned int)cchWideChar )
        return v17;
    }
  }
  return v28;
}

