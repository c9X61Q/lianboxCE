// gettime.exe @ 0x426889 size=200

int __cdecl _strnicoll_l(const char *String1, const char *String2, size_t MaxCount, _locale_t Locale)
{
  int v4; // esi
  wchar_t *v5; // ebx
  int v6; // eax
  int v8; // [esp+Ch] [ebp-10h] BYREF
  __crt_locale_pointers v9; // [esp+10h] [ebp-Ch] BYREF
  char v10; // [esp+18h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v8, Locale);
  if ( MaxCount != 0 )
  {
    if ( String1 != nullptr && String2 != nullptr )
    {
      v4 = 0x7FFFFFFF;
      if ( MaxCount <= 0x7FFFFFFF )
      {
        v5 = *((wchar_t **)v9.locinfo + 41);
        if ( v5 != nullptr )
        {
          v6 = __acrt_CompareStringA(
                 &v9,
                 v5,
                 0x1001u,
                 (char *)String1,
                 MaxCount,
                 (char *)String2,
                 MaxCount,
                 *((_DWORD *)v9.locinfo + 4));
          if ( v6 != 0 )
            v4 = v6 - 2;
          else
            *_errno() = 22;
        }
        else
        {
          v4 = _strnicmp_l(String1, String2, MaxCount, &v9);
        }
      }
      else
      {
        *_errno() = 22;
        _invalid_parameter_noinfo();
      }
    }
    else
    {
      *_errno() = 22;
      _invalid_parameter_noinfo();
      v4 = 0x7FFFFFFF;
    }
  }
  else
  {
    v4 = 0;
  }
  if ( v10 != 0 )
    *(_DWORD *)(v8 + 848) &= ~2u;
  return v4;
}

