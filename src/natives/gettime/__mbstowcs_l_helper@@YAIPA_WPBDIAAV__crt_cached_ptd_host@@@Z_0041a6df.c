// gettime.exe @ 0x41a6df size=450

int __cdecl _mbstowcs_l_helper(
        __crt_mbstring *lpWideCharStr,
        LPCCH lpMultiByteStr,
        const char **cchWideChar,
        struct _Mbstatet *a4)
{
  __crt_mbstring *v4; // ebx
  unsigned int v5; // esi
  const char **v6; // ecx
  int result; // eax
  const char *v8; // edx
  struct _Mbstatet *v9; // eax
  struct _Mbstatet *v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ecx
  LPCCH v15; // eax
  bool i; // zf
  unsigned __int8 v17; // cl
  LPCCH v18; // eax
  struct __acrt_ptd **v19; // [esp-4h] [ebp-2Ch]
  struct __crt_cached_ptd_host *v20; // [esp+0h] [ebp-28h]
  unsigned int v21; // [esp+10h] [ebp-18h] BYREF
  unsigned int v22; // [esp+14h] [ebp-14h]
  LPCCH v23; // [esp+18h] [ebp-10h]

  v4 = lpWideCharStr;
  v5 = 0;
  v6 = cchWideChar;
  if ( lpWideCharStr != nullptr )
  {
    result = 0;
    if ( cchWideChar == nullptr )
      return result;
    *(_WORD *)lpWideCharStr = 0;
  }
  v8 = lpMultiByteStr;
  if ( lpMultiByteStr == nullptr )
  {
    v9 = a4;
    v19 = (struct __acrt_ptd **)a4;
    LOBYTE(a4[3]._Byte) = 1;
    v9[3]._Wchar = 22;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, v19);
    return -1;
  }
  v10 = a4;
  if ( LOBYTE(a4[2]._Byte) == 0 )
  {
    __crt_cached_ptd_host::update_locale_slow((__crt_cached_ptd_host *)a4);
    v8 = lpMultiByteStr;
    v6 = cchWideChar;
  }
  v11 = *(_DWORD *)&v10[1]._Byte;
  if ( *(_DWORD *)(v11 + 8) == 65001 )
  {
    v21 = 0;
    v22 = 0;
    return __crt_mbstring::__mbsrtowcs_utf8(lpWideCharStr, (wchar_t *)&lpMultiByteStr, v6, (unsigned int)&v21, v10, v20);
  }
  v12 = *(_DWORD *)(v11 + 168);
  if ( lpWideCharStr == nullptr )
  {
    if ( v12 == 0 )
      return strlen(v8);
    v13 = __acrt_MultiByteToWideChar(*(_DWORD *)(*(_DWORD *)&v10[1]._Byte + 8), 9u, v8, -1, nullptr, 0);
    if ( v13 == 0 )
    {
      LOBYTE(v10[3]._Byte) = 1;
      v10[3]._Wchar = 42;
      return -1;
    }
    return v13 - 1;
  }
  if ( v12 == 0 )
  {
    if ( v6 != nullptr )
    {
      do
      {
        *(_WORD *)v4 = (unsigned __int8)v8[v5];
        if ( v8[v5] == 0 )
          break;
        ++v5;
        v4 = (__crt_mbstring *)((char *)v4 + 2);
      }
      while ( v5 < (unsigned int)v6 );
    }
    return v5;
  }
  v13 = __acrt_MultiByteToWideChar(
          *(_DWORD *)(*(_DWORD *)&v10[1]._Byte + 8),
          9u,
          v8,
          -1,
          (LPWSTR)lpWideCharStr,
          (int)v6);
  if ( v13 != 0 )
    return v13 - 1;
  if ( GetLastError() != 122 )
    goto LABEL_19;
  v14 = (unsigned int)cchWideChar;
  v15 = lpMultiByteStr;
  for ( i = cchWideChar == nullptr; ; i = v22 == 0 )
  {
    v23 = v15;
    if ( i )
      break;
    v22 = v14 - 1;
    v17 = *v15;
    if ( *v15 == 0 )
      break;
    v18 = v23;
    if ( *(__int16 *)(**(_DWORD **)&v10[1]._Byte + 2 * v17) < 0 )
    {
      v18 = v23 + 1;
      if ( v23[1] == 0 )
        goto LABEL_19;
    }
    v14 = v22;
    v15 = v18 + 1;
  }
  result = __acrt_MultiByteToWideChar(
             *(_DWORD *)(*(_DWORD *)&v10[1]._Byte + 8),
             1u,
             lpMultiByteStr,
             v15 - lpMultiByteStr,
             (LPWSTR)lpWideCharStr,
             (int)cchWideChar);
  if ( result == 0 )
  {
LABEL_19:
    LOBYTE(v10[3]._Byte) = 1;
    v10[3]._Wchar = 42;
    *(_WORD *)lpWideCharStr = 0;
    return -1;
  }
  return result;
}

