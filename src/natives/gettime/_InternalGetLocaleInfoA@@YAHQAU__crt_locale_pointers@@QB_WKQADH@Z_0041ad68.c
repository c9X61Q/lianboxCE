// gettime.exe @ 0x41ad68 size=223

int __cdecl InternalGetLocaleInfoA(
        struct __crt_locale_pointers *const a1,
        wchar_t *a2,
        LCTYPE LCType,
        char *const a4,
        int cbMultiByte)
{
  int v5; // edi
  int LocaleInfo; // eax
  int v7; // ebx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  void *v10; // esp
  WCHAR *v11; // esi
  WCHAR *v12; // eax
  _DWORD v14[3]; // [esp+0h] [ebp-24h] BYREF
  _DWORD v15[3]; // [esp+Ch] [ebp-18h] BYREF
  char v16; // [esp+18h] [ebp-Ch]
  unsigned int v17; // [esp+1Ch] [ebp-8h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v15, a1);
  v5 = 0;
  v17 = *(_DWORD *)(v15[1] + 8);
  LocaleInfo = __acrt_GetLocaleInfoEx(a2, LCType, nullptr, 0);
  v7 = LocaleInfo;
  if ( LocaleInfo != 0 )
  {
    v8 = 2 * LocaleInfo + 8;
    v9 = 2 * LocaleInfo < v8 ? v8 : 0;
    if ( (2 * v7 < v8 ? v8 : 0) != 0 )
    {
      if ( v9 > 0x400 )
      {
        v12 = (WCHAR *)_malloc_base(2 * v7 < v8 ? v8 : 0);
        v11 = v12;
        if ( v12 != nullptr )
        {
          *(_DWORD *)v12 = 56797;
          goto LABEL_8;
        }
      }
      else
      {
        v10 = alloca(v9);
        v11 = (WCHAR *)v14;
        if ( v14 != nullptr )
        {
          v14[0] = 52428;
LABEL_8:
          v11 += 4;
          if ( v11 != nullptr && __acrt_GetLocaleInfoEx(a2, LCType, v11, v7) != 0 )
            v5 = __acrt_WideCharToMultiByte(v17, 0, v11, -1, cbMultiByte != 0 ? a4 : nullptr, cbMultiByte, 0, 0);
        }
      }
    }
    else
    {
      v11 = nullptr;
    }
    _freea_crt((int)v11);
  }
  if ( v16 != 0 )
    *(_DWORD *)(v15[0] + 848) &= ~2u;
  return v5;
}

