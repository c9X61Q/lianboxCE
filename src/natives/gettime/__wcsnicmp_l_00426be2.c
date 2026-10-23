// gettime.exe @ 0x426be2 size=211

int __cdecl _wcsnicmp_l(const wchar_t *String1, const wchar_t *String2, size_t MaxCount, _locale_t Locale)
{
  const wchar_t *v4; // edi
  const wchar_t *v6; // ebx
  size_t v7; // esi
  int v8; // ecx
  wchar_t v9; // ax
  unsigned __int16 v10; // ax
  wchar_t v11; // [esp-10h] [ebp-28h]
  int v12; // [esp+4h] [ebp-14h] BYREF
  struct __crt_locale_pointers v13; // [esp+8h] [ebp-10h] BYREF
  char v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  v4 = String1;
  if ( String1 != nullptr && (v6 = String2, String2 != nullptr) )
  {
    v7 = MaxCount;
    if ( MaxCount != 0 )
    {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v12, Locale);
      if ( *((_DWORD *)v13.locinfo + 42) != 0 )
      {
        do
        {
          v11 = *v4++;
          v15 = (unsigned __int16)_towlower_internal(v11, &v13);
          v9 = *v6++;
          v10 = _towlower_internal(v9, &v13);
          v8 = v15 - v10;
          if ( v15 != v10 )
            break;
          if ( v15 == 0 )
            break;
          --v7;
        }
        while ( v7 != 0 );
      }
      else
      {
        v8 = sub_426B47((unsigned __int16 *)String1, (unsigned __int16 *)String2, MaxCount);
      }
      if ( v14 != 0 )
        *(_DWORD *)(v12 + 848) &= ~2u;
      return v8;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0x7FFFFFFF;
  }
}

