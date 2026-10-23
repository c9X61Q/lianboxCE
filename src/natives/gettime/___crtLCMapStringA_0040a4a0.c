// gettime.exe @ 0x40a4a0 size=460

int __cdecl __crtLCMapStringA(
        LPCWSTR lpLocaleName,
        DWORD dwMapFlags,
        LPCCH lpMultiByteStr,
        int cbMultiByte,
        LPWSTR lpDestStr,
        int cchDest,
        UINT CodePage,
        int a8)
{
  int v8; // esi
  signed int v9; // eax
  int result; // eax
  int v11; // edi
  unsigned int v12; // ecx
  unsigned int v13; // eax
  void *v14; // esp
  WCHAR *v15; // ebx
  WCHAR *v16; // eax
  int v17; // eax
  int v18; // esi
  unsigned int v19; // ecx
  unsigned int v20; // eax
  void *v21; // esp
  WCHAR *v22; // edi
  WCHAR *v23; // eax
  int v24; // eax
  _DWORD v25[3]; // [esp+0h] [ebp-1Ch] BYREF
  int cchSrc; // [esp+Ch] [ebp-10h]
  WCHAR *v27; // [esp+10h] [ebp-Ch] BYREF
  WCHAR *v28; // [esp+14h] [ebp-8h] BYREF

  v8 = cbMultiByte;
  if ( cbMultiByte > 0 )
  {
    v9 = __strncnt(lpMultiByteStr, cbMultiByte);
    v8 = v9 + 1;
    if ( v9 >= cbMultiByte )
      v8 = v9;
  }
  result = MultiByteToWideChar(CodePage, 8 * (a8 != 0) + 1, lpMultiByteStr, v8, nullptr, 0);
  v11 = result;
  cchSrc = result;
  if ( result != 0 )
  {
    v12 = 2 * result + 8;
    v13 = 2 * result < v12 ? v12 : 0;
    if ( (2 * v11 < v12 ? v12 : 0) == 0 )
    {
      v27 = nullptr;
      goto LABEL_35;
    }
    if ( v13 > 0x400 )
    {
      v16 = (WCHAR *)malloc(2 * v11 < v12 ? v12 : 0);
      v15 = v16;
      if ( v16 != nullptr )
      {
        *(_DWORD *)v16 = 56797;
        goto LABEL_11;
      }
    }
    else
    {
      v14 = alloca(v13);
      v15 = (WCHAR *)v25;
      if ( v25 != nullptr )
      {
        v25[0] = 52428;
LABEL_11:
        v15 += 4;
      }
    }
    v27 = v15;
    if ( v15 != nullptr && MultiByteToWideChar(CodePage, 1u, lpMultiByteStr, v8, v15, v11) != 0 )
    {
      v17 = LCMapStringEx(lpLocaleName, dwMapFlags, v15, v11, nullptr, 0, nullptr, nullptr, 0);
      v18 = v17;
      if ( v17 != 0 )
      {
        if ( (dwMapFlags & 0x400) != 0 )
        {
          if ( cchDest != 0 && v17 <= cchDest )
            LCMapStringEx(lpLocaleName, dwMapFlags, v15, v11, lpDestStr, cchDest, nullptr, nullptr, 0);
          goto LABEL_36;
        }
        v19 = 2 * v17 + 8;
        v20 = 2 * v17 < v19 ? v19 : 0;
        if ( (2 * v18 < v19 ? v19 : 0) == 0 )
        {
          v28 = nullptr;
LABEL_33:
          __crt_scoped_stack_ptr<wchar_t>::~__crt_scoped_stack_ptr<wchar_t>(&v28);
LABEL_36:
          __crt_scoped_stack_ptr<wchar_t>::~__crt_scoped_stack_ptr<wchar_t>(&v27);
          return v18;
        }
        if ( v20 > 0x400 )
        {
          v23 = (WCHAR *)malloc(2 * v18 < v19 ? v19 : 0);
          v22 = v23;
          if ( v23 != nullptr )
          {
            *(_DWORD *)v23 = 56797;
            goto LABEL_25;
          }
        }
        else
        {
          v21 = alloca(v20);
          v22 = (WCHAR *)v25;
          if ( v25 != nullptr )
          {
            v25[0] = 52428;
LABEL_25:
            v22 += 4;
          }
        }
        v28 = v22;
        if ( v22 != nullptr && LCMapStringEx(lpLocaleName, dwMapFlags, v15, cchSrc, v22, v18, nullptr, nullptr, 0) != 0 )
        {
          if ( cchDest != 0 )
            v24 = WideCharToMultiByte(CodePage, 0, v22, v18, (LPSTR)lpDestStr, cchDest, nullptr, nullptr);
          else
            v24 = WideCharToMultiByte(CodePage, 0, v22, v18, nullptr, 0, nullptr, nullptr);
          v18 = v24;
        }
        goto LABEL_33;
      }
    }
LABEL_35:
    v18 = 0;
    goto LABEL_36;
  }
  return result;
}

