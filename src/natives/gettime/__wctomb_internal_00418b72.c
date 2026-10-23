// gettime.exe @ 0x418b72 size=362

int __cdecl _wctomb_internal(int *a1, LPSTR lpMultiByteStr, size_t Size, WCHAR WideCharStr, struct _Mbstatet *a5)
{
  LPSTR v5; // ecx
  size_t v6; // eax
  struct _Mbstatet *v7; // esi
  int v8; // edx
  int v9; // edi
  int v10; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // [esp-4h] [ebp-1Ch]
  struct __crt_cached_ptd_host *v15; // [esp+0h] [ebp-18h]
  char32_t v16; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h] BYREF

  v5 = lpMultiByteStr;
  v6 = Size;
  if ( lpMultiByteStr == nullptr && Size != 0 )
  {
    if ( a1 != nullptr )
      *a1 = 0;
    return 0;
  }
  if ( a1 != nullptr )
    *a1 = -1;
  v7 = a5;
  if ( Size > 0x7FFFFFFF )
  {
    v14 = 22;
LABEL_39:
    v13 = v14;
    v7[3]._Wchar = v14;
    LOBYTE(v7[3]._Byte) = 1;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)v7);
    return v13;
  }
  if ( LOBYTE(a5[2]._Byte) == 0 )
  {
    __crt_cached_ptd_host::update_locale_slow((__crt_cached_ptd_host *)a5);
    v5 = lpMultiByteStr;
    v6 = Size;
  }
  v8 = *(_DWORD *)&v7[1]._Byte;
  v17 = *(_DWORD *)(v8 + 8);
  if ( v17 != 65001 )
  {
    if ( *(_DWORD *)(v8 + 168) == 0 )
    {
      v18 = 255;
      if ( WideCharStr > 0xFFu )
      {
        if ( v5 != nullptr && v6 != 0 )
          memset(v5, 0, v6);
        goto LABEL_23;
      }
      if ( v5 == nullptr )
      {
LABEL_27:
        if ( a1 != nullptr )
          *a1 = 1;
        return 0;
      }
      if ( v6 != 0 )
      {
        *v5 = WideCharStr;
        goto LABEL_27;
      }
LABEL_38:
      v14 = 34;
      goto LABEL_39;
    }
    v18 = 0;
    v12 = __acrt_WideCharToMultiByte(v17, 0, &WideCharStr, 1, v5, v6, 0, (int)&v18);
    if ( v12 != 0 )
    {
      if ( v18 == 0 )
      {
        if ( a1 != nullptr )
          *a1 = v12;
        return 0;
      }
    }
    else if ( GetLastError() == 122 )
    {
      if ( lpMultiByteStr != nullptr && Size != 0 )
        memset(lpMultiByteStr, 0, Size);
      goto LABEL_38;
    }
LABEL_23:
    v7[3]._Wchar = 42;
    LOBYTE(v7[3]._Byte) = 1;
    return 42;
  }
  v9 = 0;
  v16 = 0;
  v17 = 0;
  v10 = __crt_mbstring::__c32rtomb_utf8((__crt_mbstring *)v5, (char *)WideCharStr, (char32_t)&v16, v7, v15);
  if ( a1 != nullptr )
    *a1 = v10;
  if ( v10 <= 4 )
    return 0;
  if ( LOBYTE(v7[3]._Byte) != 0 )
    return v7[3]._Wchar;
  return v9;
}

