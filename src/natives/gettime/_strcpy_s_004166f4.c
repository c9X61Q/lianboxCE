// gettime.exe @ 0x4166f4 size=90

errno_t __cdecl strcpy_s(char *Destination, rsize_t SizeInBytes, const char *Source)
{
  rsize_t v3; // ecx
  int *v4; // eax
  errno_t v5; // esi
  char *v7; // edi
  char v8; // al
  int v9; // [esp-4h] [ebp-Ch]

  if ( Destination == nullptr || (v3 = SizeInBytes, SizeInBytes == 0) )
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
    v8 = v7[Source - Destination];
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

