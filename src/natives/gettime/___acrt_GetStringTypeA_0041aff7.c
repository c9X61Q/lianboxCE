// gettime.exe @ 0x41aff7 size=257

BOOL __cdecl __acrt_GetStringTypeA(
        struct __crt_locale_pointers *a1,
        DWORD dwInfoType,
        LPCCH lpMultiByteStr,
        int cbMultiByte,
        LPWORD lpCharType,
        UINT CodePage,
        int a7)
{
  UINT v7; // ebx
  BOOL StringTypeW; // edi
  int v9; // eax
  unsigned int v10; // eax
  void *v11; // esp
  _DWORD *v12; // esi
  _DWORD *v13; // eax
  int v14; // eax
  _DWORD v16[3]; // [esp+0h] [ebp-28h] BYREF
  _DWORD v17[3]; // [esp+Ch] [ebp-1Ch] BYREF
  char v18; // [esp+18h] [ebp-10h]
  int cchWideChar; // [esp+1Ch] [ebp-Ch]
  size_t Size; // [esp+20h] [ebp-8h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v17, a1);
  v7 = CodePage;
  if ( CodePage == 0 )
    v7 = *(_DWORD *)(v17[1] + 8);
  StringTypeW = false;
  v9 = __acrt_MultiByteToWideChar(v7, 8 * (a7 != 0) + 1, lpMultiByteStr, cbMultiByte, nullptr, 0);
  cchWideChar = v9;
  if ( v9 != 0 )
  {
    Size = 2 * v9;
    v10 = 2 * v9 < (unsigned int)(2 * v9 + 8) ? 2 * v9 + 8 : 0;
    if ( v10 != 0 )
    {
      if ( v10 > 0x400 )
      {
        v13 = _malloc_base(v10);
        v12 = v13;
        if ( v13 != nullptr )
        {
          *v13 = 56797;
          goto LABEL_10;
        }
      }
      else
      {
        v11 = alloca(v10);
        v12 = v16;
        if ( v16 != nullptr )
        {
          v16[0] = 52428;
LABEL_10:
          v12 += 2;
          if ( v12 != nullptr )
          {
            memset(v12, 0, Size);
            v14 = __acrt_MultiByteToWideChar(v7, 1u, lpMultiByteStr, cbMultiByte, (LPWSTR)v12, cchWideChar);
            if ( v14 != 0 )
              StringTypeW = GetStringTypeW(dwInfoType, (LPCWCH)v12, v14, lpCharType);
          }
        }
      }
    }
    else
    {
      v12 = nullptr;
    }
    _freea_crt((int)v12);
  }
  if ( v18 != 0 )
    *(_DWORD *)(v17[0] + 848) &= ~2u;
  return StringTypeW;
}

