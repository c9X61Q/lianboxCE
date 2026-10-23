// gettime.exe @ 0x427418 size=203

int __cdecl _strnicmp_l(const char *String1, const char *String2, size_t MaxCount, _locale_t Locale)
{
  const char *v4; // edi
  const char *v5; // ebx
  size_t v7; // esi
  int v8; // ecx
  unsigned __int8 v9; // al
  int v10; // ecx
  unsigned __int8 v11; // al
  int v12; // eax
  int v13; // edx
  _DWORD v14[3]; // [esp+4h] [ebp-14h] BYREF
  char v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  v4 = String1;
  if ( String1 != nullptr && (v5 = String2, String2 != nullptr) && (v7 = MaxCount, MaxCount <= 0x7FFFFFFF) )
  {
    if ( MaxCount != 0 )
    {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v14, Locale);
      v8 = *(_DWORD *)(v14[1] + 148);
      v16 = v8;
      do
      {
        v9 = *v4++;
        v10 = *(unsigned __int8 *)(v9 + v8);
        v11 = *v5++;
        v12 = *(unsigned __int8 *)(v11 + v16);
        v13 = v10 - v12;
        if ( v10 != v12 )
          break;
        if ( v10 == 0 )
          break;
        v8 = v16;
        --v7;
      }
      while ( v7 != 0 );
      if ( v15 != 0 )
        *(_DWORD *)(v14[0] + 848) &= ~2u;
      return v13;
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

