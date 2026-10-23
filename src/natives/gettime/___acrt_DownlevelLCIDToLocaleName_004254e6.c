// gettime.exe @ 0x4254e6 size=162

int __cdecl __acrt_DownlevelLCIDToLocaleName(int a1, wchar_t *Destination, int SizeInWords)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  const wchar_t *v7; // ebx
  signed int v8; // eax
  signed int v9; // edi

  if ( a1 == 0 || a1 == 1024 || a1 == 2048 || Destination == nullptr && SizeInWords > 0 || SizeInWords < 0 )
    return 0;
  v3 = 0;
  v4 = 227;
  while ( 1 )
  {
    v5 = (v4 + v3) / 2;
    if ( a1 == dword_42E5A0[2 * v5] )
      break;
    if ( a1 - dword_42E5A0[2 * v5] >= 0 )
      v3 = v5 + 1;
    else
      v4 = v5 - 1;
    if ( v3 > v4 )
      return 0;
  }
  if ( v5 < 0 )
    return 0;
  v7 = (&Source)[2 * v5];
  v8 = wcsnlen(v7, 0x55u);
  v9 = v8;
  if ( SizeInWords > 0 )
  {
    if ( v8 < SizeInWords )
    {
      if ( wcscpy_s(Destination, SizeInWords, v7) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      return v9 + 1;
    }
    return 0;
  }
  return v9 + 1;
}

