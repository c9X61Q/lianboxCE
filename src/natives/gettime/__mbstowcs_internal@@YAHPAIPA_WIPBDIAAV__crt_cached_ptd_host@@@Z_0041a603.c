// gettime.exe @ 0x41a603 size=220

unsigned int __cdecl _mbstowcs_internal(
        unsigned int *a1,
        wchar_t *lpWideCharStr,
        unsigned int cchWideChar,
        const char *lpMultiByteStr,
        unsigned int a5,
        struct _Mbstatet *a6)
{
  unsigned int v6; // eax
  int v7; // esi
  unsigned int v9; // eax
  unsigned int v10; // ecx
  int v11; // ebx
  int v12; // [esp-8h] [ebp-10h]

  v6 = cchWideChar;
  v7 = 0;
  if ( lpWideCharStr != nullptr )
  {
    if ( cchWideChar == 0 )
    {
LABEL_5:
      LOBYTE(a6[3]._Byte) = 1;
      a6[3]._Wchar = 22;
      _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a6);
      return 22;
    }
    *lpWideCharStr = 0;
  }
  else if ( cchWideChar != 0 )
  {
    goto LABEL_5;
  }
  if ( a1 != nullptr )
    *a1 = 0;
  if ( a5 <= cchWideChar )
    v6 = a5;
  if ( v6 > 0x7FFFFFFF )
  {
    v12 = 22;
LABEL_22:
    v11 = v12;
    a6[3]._Wchar = v12;
    LOBYTE(a6[3]._Byte) = 1;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a6);
    return v11;
  }
  v9 = _mbstowcs_l_helper(lpWideCharStr, lpMultiByteStr, v6, a6);
  if ( v9 == -1 )
  {
    if ( lpWideCharStr != nullptr )
      *lpWideCharStr = 0;
    if ( LOBYTE(a6[3]._Byte) != 0 )
      return a6[3]._Wchar;
  }
  else
  {
    v10 = v9 + 1;
    if ( lpWideCharStr != nullptr )
    {
      if ( v10 > cchWideChar )
      {
        if ( a5 != -1 )
        {
          *lpWideCharStr = 0;
          v12 = 34;
          goto LABEL_22;
        }
        v10 = cchWideChar;
        v7 = 80;
      }
      lpWideCharStr[v10 - 1] = 0;
    }
    if ( a1 != nullptr )
      *a1 = v10;
  }
  return v7;
}

