// gettime.exe @ 0x41f31b size=184

int __cdecl _wcsicmp_l(const wchar_t *String1, const wchar_t *String2, _locale_t Locale)
{
  const wchar_t *v3; // esi
  const wchar_t *v5; // edi
  int v6; // ecx
  int v7; // ebx
  wchar_t v8; // ax
  unsigned __int16 v9; // ax
  wchar_t v10; // [esp-10h] [ebp-24h]
  int v11; // [esp+4h] [ebp-10h] BYREF
  struct __crt_locale_pointers v12; // [esp+8h] [ebp-Ch] BYREF
  char v13; // [esp+10h] [ebp-4h]

  v3 = String1;
  if ( String1 != nullptr && (v5 = String2, String2 != nullptr) )
  {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v11, Locale);
    if ( *((_DWORD *)v12.locinfo + 42) != 0 )
    {
      do
      {
        v10 = *v3++;
        v7 = (unsigned __int16)_towlower_internal(v10, &v12);
        v8 = *v5++;
        v9 = _towlower_internal(v8, &v12);
        v6 = v7 - v9;
      }
      while ( v7 == v9 && v7 != 0 );
    }
    else
    {
      v6 = __ascii_wcsicmp((unsigned __int16 *)String1, (unsigned __int16 *)String2);
    }
    if ( v13 != 0 )
      *(_DWORD *)(v11 + 848) &= ~2u;
    return v6;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0x7FFFFFFF;
  }
}

