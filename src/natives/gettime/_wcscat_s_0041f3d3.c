// gettime.exe @ 0x41f3d3 size=111

errno_t __cdecl wcscat_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  rsize_t v3; // edi
  int *v4; // eax
  errno_t v5; // esi
  wchar_t *v7; // ecx
  char *v8; // ebx
  wchar_t v9; // ax
  int v10; // [esp-4h] [ebp-10h]

  if ( Destination == nullptr || (v3 = SizeInWords, SizeInWords == 0) )
  {
LABEL_5:
    v4 = _errno();
    v10 = 22;
LABEL_6:
    v5 = v10;
    *v4 = v10;
    _invalid_parameter_noinfo();
    return v5;
  }
  if ( Source == nullptr )
  {
LABEL_4:
    *Destination = 0;
    goto LABEL_5;
  }
  v7 = Destination;
  v5 = 0;
  while ( *v7 != 0 )
  {
    ++v7;
    if ( --v3 == 0 )
      goto LABEL_4;
  }
  v8 = (char *)((char *)Source - (char *)v7);
  while ( 1 )
  {
    v9 = *(wchar_t *)((char *)v7 + (_DWORD)v8);
    *v7++ = v9;
    if ( v9 == 0 )
      return v5;
    if ( --v3 == 0 )
    {
      *Destination = 0;
      v4 = _errno();
      v10 = 34;
      goto LABEL_6;
    }
  }
}

