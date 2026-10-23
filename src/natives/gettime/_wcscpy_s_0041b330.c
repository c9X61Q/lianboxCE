// gettime.exe @ 0x41b330 size=100

errno_t __cdecl wcscpy_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  rsize_t v3; // ecx
  int *v4; // eax
  errno_t v5; // esi
  wchar_t *v7; // edi
  wchar_t v8; // ax
  int v9; // [esp-4h] [ebp-Ch]

  if ( Destination == nullptr || (v3 = SizeInWords, SizeInWords == 0) )
  {
LABEL_5:
    v4 = _errno();
    v9 = 22;
LABEL_6:
    v5 = v9;
    *v4 = v9;
    _invalid_parameter_noinfo();
    return v5;
  }
  if ( Source == nullptr )
  {
    *Destination = 0;
    goto LABEL_5;
  }
  v7 = Destination;
  while ( 1 )
  {
    v8 = *(wchar_t *)((char *)v7 + (char *)Source - (char *)Destination);
    *v7++ = v8;
    if ( v8 == 0 )
      return 0;
    if ( --v3 == 0 )
    {
      *Destination = 0;
      v4 = _errno();
      v9 = 34;
      goto LABEL_6;
    }
  }
}

