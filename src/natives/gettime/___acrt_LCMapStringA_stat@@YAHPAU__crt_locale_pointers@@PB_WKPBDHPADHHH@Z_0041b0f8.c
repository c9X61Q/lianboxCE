// gettime.exe @ 0x41b0f8 size=495

int __cdecl __acrt_LCMapStringA_stat(
        struct __crt_locale_pointers *a1,
        wchar_t *a2,
        DWORD dwMapFlags,
        char *String,
        int Count,
        LPWSTR lpDestStr,
        int cchDest,
        UINT CodePage,
        int a9)
{
  int v9; // edi
  signed int v10; // eax
  UINT v11; // ebx
  int result; // eax
  unsigned int v13; // eax
  void *v14; // esp
  WCHAR *v15; // esi
  WCHAR *v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // ebx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  void *v22; // esp
  WCHAR *v23; // edi
  WCHAR *v24; // eax
  int v25; // eax
  _DWORD v26[3]; // [esp+0h] [ebp-14h] BYREF
  int cchWideChar; // [esp+Ch] [ebp-8h]

  v9 = Count;
  if ( Count > 0 )
  {
    v10 = __strncnt(String, Count);
    v9 = v10 + 1;
    if ( v10 >= Count )
      v9 = v10;
  }
  v11 = CodePage;
  if ( CodePage == 0 )
  {
    v11 = *((_DWORD *)a1->locinfo + 2);
    CodePage = v11;
  }
  result = __acrt_MultiByteToWideChar(v11, 8 * (a9 != 0) + 1, String, v9, nullptr, 0);
  cchWideChar = result;
  if ( result != 0 )
  {
    v13 = 2 * result < (unsigned int)(2 * result + 8) ? 2 * result + 8 : 0;
    if ( v13 == 0 )
    {
      v15 = nullptr;
      goto LABEL_37;
    }
    if ( v13 > 0x400 )
    {
      v16 = (WCHAR *)_malloc_base(v13);
      v15 = v16;
      if ( v16 != nullptr )
      {
        *(_DWORD *)v16 = 56797;
        goto LABEL_13;
      }
    }
    else
    {
      v14 = alloca(v13);
      v15 = (WCHAR *)v26;
      if ( v26 != nullptr )
      {
        v26[0] = 52428;
LABEL_13:
        v15 += 4;
        if ( v15 == nullptr )
          goto LABEL_37;
        if ( __acrt_MultiByteToWideChar(v11, 1u, String, v9, v15, cchWideChar) == 0 )
          goto LABEL_37;
        v17 = cchWideChar;
        v18 = sub_41A4E9(a2, dwMapFlags, v15, cchWideChar, nullptr, 0, 0, 0, 0);
        v19 = v18;
        if ( v18 == 0 )
          goto LABEL_37;
        if ( (dwMapFlags & 0x400) != 0 )
        {
          if ( cchDest == 0 )
            goto LABEL_38;
          if ( v18 <= cchDest )
          {
            v19 = sub_41A4E9(a2, dwMapFlags, v15, v17, lpDestStr, cchDest, 0, 0, 0);
            if ( v19 != 0 )
              goto LABEL_38;
          }
          goto LABEL_37;
        }
        v20 = 2 * v18 + 8;
        v21 = 2 * v18 < v20 ? v20 : 0;
        if ( (2 * v19 < v20 ? v20 : 0) != 0 )
        {
          if ( v21 > 0x400 )
          {
            v24 = (WCHAR *)_malloc_base(2 * v19 < v20 ? v20 : 0);
            v23 = v24;
            if ( v24 != nullptr )
            {
              *(_DWORD *)v24 = 56797;
LABEL_27:
              v23 += 4;
              if ( v23 != nullptr && sub_41A4E9(a2, dwMapFlags, v15, cchWideChar, v23, v19, 0, 0, 0) != 0 )
              {
                v25 = cchDest != 0
                    ? __acrt_WideCharToMultiByte(CodePage, 0, v23, v19, (LPSTR)lpDestStr, cchDest, 0, 0)
                    : __acrt_WideCharToMultiByte(CodePage, 0, v23, v19, nullptr, 0, 0, 0);
                v19 = v25;
                if ( v25 != 0 )
                {
                  _freea_crt((int)v23);
LABEL_38:
                  _freea_crt((int)v15);
                  return v19;
                }
              }
            }
          }
          else
          {
            v22 = alloca(v21);
            v23 = (WCHAR *)v26;
            if ( v26 != nullptr )
            {
              v26[0] = 52428;
              goto LABEL_27;
            }
          }
        }
        else
        {
          v23 = nullptr;
        }
        _freea_crt((int)v23);
      }
    }
LABEL_37:
    v19 = 0;
    goto LABEL_38;
  }
  return result;
}

