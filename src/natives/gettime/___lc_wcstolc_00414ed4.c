// gettime.exe @ 0x414ed4 size=316

int __cdecl __lc_wcstolc(wchar_t *Destination, wchar_t *Source)
{
  const wchar_t *v2; // esi
  rsize_t v4; // eax
  int v5; // ebx
  int v6; // eax
  errno_t v7; // eax
  const wchar_t *v8; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  memset(Destination, 0, 0x1CAu);
  v2 = Source;
  if ( *Source == 0 )
    return 0;
  if ( *Source == 46 && Source[1] != 0 )
  {
    if ( wcsncpy_s(Destination + 128, 0x10u, Source + 1, 0xFu) != 0 )
LABEL_29:
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    Destination[143] = 0;
    return 0;
  }
  for ( i = 0; ; i = v6 + 1 )
  {
    v4 = wcscspn(v2, L"_.,");
    if ( v4 == 0 )
      break;
    v5 = v2[v4];
    v8 = &v2[v4];
    if ( i != 0 )
    {
      if ( i == 1 )
      {
        if ( v4 >= 0x40 || v5 == 95 )
          return -1;
        v7 = wcsncpy_s(Destination + 64, 0x40u, v2, v4);
      }
      else
      {
        if ( i != 2 || v4 >= 0x10 || (_WORD)v5 != 0 && (_WORD)v5 != 44 )
          return -1;
        v7 = wcsncpy_s(Destination + 128, 0x10u, v2, v4);
      }
      if ( v7 != 0 )
        goto LABEL_29;
    }
    else
    {
      if ( v4 >= 0x40 )
        return -1;
      if ( wcsncpy_s(Destination, 0x40u, v2, v4) != 0 )
        goto LABEL_29;
      if ( (_WORD)v5 == 46 )
      {
        v6 = 1;
        goto LABEL_27;
      }
    }
    if ( (_WORD)v5 == 44 || (_WORD)v5 == 0 )
      return 0;
    v6 = i;
LABEL_27:
    v2 = v8 + 1;
  }
  return -1;
}

