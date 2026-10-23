// gettime.exe @ 0x418cdc size=307

int __cdecl _mbtowc_internal(__crt_mbstring *lpWideCharStr, CHAR *lpMultiByteStr, char *a3, struct _Mbstatet *a4)
{
  _DWORD *v4; // eax
  int result; // eax
  int v6; // ecx
  struct __crt_cached_ptd_host *v7; // [esp+0h] [ebp-10h]
  UINT CodePage; // [esp+Ch] [ebp-4h]

  if ( lpMultiByteStr != nullptr && a3 != nullptr )
  {
    if ( *lpMultiByteStr == 0 )
    {
      if ( lpWideCharStr != nullptr )
        *(_WORD *)lpWideCharStr = 0;
      return 0;
    }
    if ( LOBYTE(a4[2]._Byte) == 0 )
      __crt_cached_ptd_host::update_locale_slow((__crt_cached_ptd_host *)a4);
    v4 = *(_DWORD **)&a4[1]._Byte;
    CodePage = v4[2];
    if ( CodePage == 65001 )
    {
      result = __crt_mbstring::__mbrtowc_utf8(
                 lpWideCharStr,
                 (wchar_t *)lpMultiByteStr,
                 a3,
                 (unsigned int)&dword_438A34,
                 a4,
                 v7);
      if ( result >= 0 )
        return result;
      return -1;
    }
    if ( v4[42] == 0 )
    {
      if ( lpWideCharStr != nullptr )
        *(_WORD *)lpWideCharStr = (unsigned __int8)*lpMultiByteStr;
      return 1;
    }
    if ( *(__int16 *)(*v4 + 2 * (unsigned __int8)*lpMultiByteStr) >= 0 )
    {
      if ( __acrt_MultiByteToWideChar(CodePage, 9u, lpMultiByteStr, 1, (LPWSTR)lpWideCharStr, lpWideCharStr != nullptr) != 0 )
        return 1;
    }
    else
    {
      v6 = *(_DWORD *)(*(_DWORD *)&a4[1]._Byte + 4);
      if ( v6 > 1
        && (int)a3 >= v6
        && __acrt_MultiByteToWideChar(CodePage, 9u, lpMultiByteStr, v6, (LPWSTR)lpWideCharStr, lpWideCharStr != nullptr) != 0
        || (unsigned int)a3 >= *(_DWORD *)(*(_DWORD *)&a4[1]._Byte + 4) && lpMultiByteStr[1] != 0 )
      {
        return *(_DWORD *)(*(_DWORD *)&a4[1]._Byte + 4);
      }
    }
    LOBYTE(a4[3]._Byte) = 1;
    a4[3]._Wchar = 42;
    return -1;
  }
  dword_438A34 = 0;
  dword_438A38 = 0;
  return 0;
}

