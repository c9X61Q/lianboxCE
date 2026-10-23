// gettime.exe @ 0x4221b0 size=736

BOOL __stdcall LangCountryEnumProcEx(wchar_t *Source, int a2, int a3)
{
  struct __acrt_ptd *v3; // esi
  int v5; // eax
  int v6; // ecx
  wchar_t *v7; // ecx
  wchar_t *v8; // edx
  __int16 v9; // ax
  __int16 v10; // ax
  __int16 v11; // ax
  int v12; // ecx
  wchar_t *v13; // edx
  wchar_t *v14; // ecx
  wchar_t *v15; // ebx
  __int16 v16; // ax
  __int16 *v17; // edx
  _WORD *v18; // ebx
  __int16 v19; // ax
  __int16 *v20; // ebx
  _WORD *v21; // ecx
  __int16 v22; // ax
  __int16 v23; // ax
  __int16 v24; // ax
  wchar_t String2[64]; // [esp+Ch] [ebp-84h] BYREF

  v3 = __acrt_getptd();
  if ( __acrt_GetLocaleInfoEx(Source, *((_DWORD *)v3 + 25) != 0 ? 7 : 4098, String2, 64) == 0 )
  {
    *((_DWORD *)v3 + 22) = 0;
    return 1;
  }
  if ( _wcsicmp(*((const wchar_t **)v3 + 21), String2) != 0 )
    goto LABEL_21;
  if ( __acrt_GetLocaleInfoEx(Source, *((_DWORD *)v3 + 24) != 0 ? 3 : 4097, String2, 64) == 0 )
  {
    *((_DWORD *)v3 + 22) = 0;
    return 1;
  }
  v5 = _wcsicmp(*((const wchar_t **)v3 + 20), String2);
  v6 = *((_DWORD *)v3 + 22);
  if ( v5 != 0 )
  {
    if ( (v6 & 2) != 0 )
      goto LABEL_21;
    if ( *((_DWORD *)v3 + 23) == 0 || _wcsnicmp(*((const wchar_t **)v3 + 20), String2, *((_DWORD *)v3 + 23)) != 0 )
    {
      if ( (*((_BYTE *)v3 + 88) & 1) != 0 || TestDefaultCountry(Source) == 0 )
        goto LABEL_21;
      *((_DWORD *)v3 + 22) |= 1u;
      v7 = Source;
      v8 = Source + 1;
      do
        v11 = *v7++;
      while ( v11 != 0 );
    }
    else
    {
      *((_DWORD *)v3 + 22) |= 2u;
      v7 = Source;
      v8 = Source + 1;
      do
        v10 = *v7++;
      while ( v10 != 0 );
    }
  }
  else
  {
    *((_DWORD *)v3 + 22) = v6 | 0x304;
    v7 = Source;
    v8 = Source + 1;
    do
      v9 = *v7++;
    while ( v9 != 0 );
  }
  if ( wcsncpy_s((wchar_t *)v3 + 336, 0x55u, Source, v7 - v8 + 1) != 0 )
    goto LABEL_48;
LABEL_21:
  if ( (*((_DWORD *)v3 + 22) & 0x300) != 0x300 )
  {
    if ( __acrt_GetLocaleInfoEx(Source, *((_DWORD *)v3 + 24) != 0 ? 3 : 4097, String2, 64) == 0 )
    {
      *((_DWORD *)v3 + 22) = 0;
      return 1;
    }
    if ( _wcsicmp(*((const wchar_t **)v3 + 20), String2) == 0 )
    {
      v12 = *((_DWORD *)v3 + 22) | 0x200;
      *((_DWORD *)v3 + 22) = v12;
      if ( *((_DWORD *)v3 + 24) == 0 )
      {
        if ( *((_DWORD *)v3 + 23) == 0 )
          goto LABEL_44;
        v17 = *((__int16 **)v3 + 20);
        v18 = v17 + 1;
        do
          v19 = *v17++;
        while ( v19 != 0 );
        if ( v17 - v18 == *((_DWORD *)v3 + 23) )
        {
          if ( TestDefaultCountry(Source) == 0 )
          {
            v20 = *((__int16 **)v3 + 20);
            v21 = v20 + 1;
            do
              v22 = *v20++;
            while ( v22 != 0 );
            if ( GetPrimaryLen(*((unsigned __int16 **)v3 + 20)) == v20 - v21 )
              return (*((_DWORD *)v3 + 22) & 4) == 0;
          }
          *((_DWORD *)v3 + 22) |= 0x100u;
          v13 = (wchar_t *)((char *)v3 + 672);
          if ( *((_WORD *)v3 + 336) != 0 )
            return (*((_DWORD *)v3 + 22) & 4) == 0;
          v14 = Source;
          v15 = Source + 1;
          do
            v23 = *v14++;
          while ( v23 != 0 );
        }
        else
        {
LABEL_44:
          v13 = (wchar_t *)((char *)v3 + 672);
          *((_DWORD *)v3 + 22) = v12 | 0x100;
          if ( *((_WORD *)v3 + 336) != 0 )
            return (*((_DWORD *)v3 + 22) & 4) == 0;
          v14 = Source;
          v15 = Source + 1;
          do
            v24 = *v14++;
          while ( v24 != 0 );
        }
LABEL_42:
        if ( wcsncpy_s(v13, 0x55u, Source, v14 - v15 + 1) == 0 )
          return (*((_DWORD *)v3 + 22) & 4) == 0;
LABEL_48:
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
      v13 = (wchar_t *)((char *)v3 + 672);
      *((_DWORD *)v3 + 22) = v12 | 0x100;
      if ( *((_WORD *)v3 + 336) == 0 )
      {
        v14 = Source;
        v15 = Source + 1;
        do
          v16 = *v14++;
        while ( v16 != 0 );
        goto LABEL_42;
      }
    }
  }
  return (*((_DWORD *)v3 + 22) & 4) == 0;
}

