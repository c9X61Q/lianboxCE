// gettime.exe @ 0x4267a0 size=192

int __cdecl _wcsnicoll_l(const wchar_t *String1, const wchar_t *String2, size_t MaxCount, _locale_t Locale)
{
  int v5; // esi
  wchar_t *v6; // eax
  int v7; // eax
  _DWORD v8[3]; // [esp+4h] [ebp-10h] BYREF
  char v9; // [esp+10h] [ebp-4h]

  if ( MaxCount == 0 )
    return 0;
  if ( String1 != nullptr && String2 != nullptr )
  {
    v5 = 0x7FFFFFFF;
    if ( MaxCount <= 0x7FFFFFFF )
    {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v8, Locale);
      v6 = *(wchar_t **)(v8[1] + 164);
      if ( v6 != nullptr )
      {
        v7 = __acrt_CompareStringW(v6, 0x1001u, (wchar_t *)String1, MaxCount, String2, MaxCount);
        if ( v7 != 0 )
          v5 = v7 - 2;
        else
          *_errno() = 22;
      }
      else
      {
        v5 = sub_426B47(String1, String2, MaxCount);
      }
      if ( v9 != 0 )
        *(_DWORD *)(v8[0] + 848) &= ~2u;
    }
    else
    {
      *_errno() = 22;
      _invalid_parameter_noinfo();
    }
    return v5;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0x7FFFFFFF;
  }
}

