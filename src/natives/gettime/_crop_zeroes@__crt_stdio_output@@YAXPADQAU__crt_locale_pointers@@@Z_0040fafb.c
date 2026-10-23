// gettime.exe @ 0x40fafb size=96

void __cdecl __crt_stdio_output::crop_zeroes(__crt_stdio_output *this, char *a2)
{
  __crt_stdio_output *v2; // ecx
  char v3; // bl
  char v4; // al
  char v5; // dl
  char *v6; // ecx
  char v7; // al
  char *v8; // edx
  char v9; // al

  v2 = this;
  v3 = ***(_BYTE ***)(*(_DWORD *)a2 + 136);
  v4 = *(_BYTE *)this;
  if ( *(_BYTE *)this != 0 )
  {
    v5 = *(_BYTE *)this;
    do
    {
      v4 = v5;
      if ( v5 == v3 )
        break;
      v2 = (__crt_stdio_output *)((char *)v2 + 1);
      v4 = *(_BYTE *)v2;
      v5 = *(_BYTE *)v2;
    }
    while ( *(_BYTE *)v2 != 0 );
  }
  v6 = (char *)v2 + 1;
  if ( v4 != 0 )
  {
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 == 0 || v7 == 101 || v7 == 69 )
        break;
      ++v6;
    }
    v8 = v6;
    do
      --v6;
    while ( *v6 == 48 );
    if ( *v6 == v3 )
      --v6;
    do
    {
      v9 = *v8++;
      *++v6 = v9;
    }
    while ( v9 != 0 );
  }
}

