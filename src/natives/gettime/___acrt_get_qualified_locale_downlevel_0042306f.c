// gettime.exe @ 0x42306f size=496

int __cdecl __acrt_get_qualified_locale_downlevel(int a1, UINT *a2, LPWSTR lpLCData)
{
  _WORD **v3; // eax
  _DWORD *v4; // edi
  _WORD *v5; // eax
  UINT v6; // eax
  UINT v7; // esi
  char *v9; // [esp+10h] [ebp-14h]
  int v10; // [esp+14h] [ebp-10h] BYREF
  LCID Locale; // [esp+18h] [ebp-Ch]
  LCID UserDefaultLCID; // [esp+1Ch] [ebp-8h]

  v9 = (char *)__acrt_getptd() + 80;
  v10 = 0;
  Locale = 0;
  UserDefaultLCID = 0;
  *((_DWORD *)__acrt_getptd() + 211) = &v10;
  v3 = (_WORD **)v9;
  *(_DWORD *)v9 = a1;
  v4 = v9 + 4;
  *((_DWORD *)v9 + 1) = a1 + 128;
  if ( a1 != -128 && *(_WORD *)(a1 + 128) != 0 )
  {
    TranslateName_0((int)&off_42DA50, 22, (const wchar_t **)v9 + 1);
    v3 = (_WORD **)v9;
  }
  v10 = 0;
  v5 = *v3;
  if ( v5 != nullptr && *v5 != 0 )
  {
    if ( *v4 != 0 && *(_WORD *)*v4 != 0 )
      GetLcidFromLangCountry(&v10);
    else
      GetLcidFromLanguage(&v10);
    if ( v10 == 0 && TranslateName_0((int)&off_42D740, 64, (const wchar_t **)v9) != 0 )
    {
      if ( *v4 != 0 && *(_WORD *)*v4 != 0 )
        GetLcidFromLangCountry(&v10);
      else
        GetLcidFromLanguage(&v10);
    }
  }
  else if ( *v4 != 0 && *(_WORD *)*v4 != 0 )
  {
    GetLcidFromCountry(&v10);
  }
  else
  {
    v10 = 260;
    UserDefaultLCID = GetUserDefaultLCID();
    Locale = UserDefaultLCID;
  }
  if ( v10 != 0 )
  {
    v6 = ProcessCodePage_0(a1 != 0 ? (unsigned __int16 *)(a1 + 256) : nullptr, (int)&v10);
    v7 = v6;
    if ( v6 != 0 && IsValidCodePage((unsigned __int16)v6) && IsValidLocale(Locale, 1u) )
    {
      if ( a2 != nullptr )
        *a2 = v7;
      __acrt_LCIDToLocaleName(Locale, (wchar_t *)v9 + 296, 0x55u, 0);
      if ( lpLCData == nullptr )
        return 1;
      __acrt_LCIDToLocaleName(Locale, lpLCData + 144, 0x55u, 0);
      if ( GetLocaleInfoW(Locale, 0x1001u, lpLCData, 64) != 0
        && GetLocaleInfoW(UserDefaultLCID, 0x1002u, lpLCData + 64, 64) != 0 )
      {
        unknown_libname_103(v7, lpLCData + 128, 16, 10);
        return 1;
      }
    }
  }
  return 0;
}

