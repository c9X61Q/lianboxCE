// gettime.exe @ 0x415468 size=64

void __cdecl _wcscats(wchar_t *Destination, rsize_t SizeInWords, int a3)
{
  int v3; // esi
  const wchar_t **v4; // edi

  v3 = 0;
  if ( a3 > 0 )
  {
    v4 = (const wchar_t **)&a3;
    do
    {
      if ( wcscat_s(Destination, SizeInWords, *++v4) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      ++v3;
    }
    while ( v3 < a3 );
  }
}

