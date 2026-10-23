// gettime.exe @ 0x40fb98 size=92

void __cdecl __crt_stdio_output::force_decimal_point(__crt_stdio_output *this, char *a2)
{
  __crt_stdio_output *v2; // edx
  int v3; // ecx
  unsigned __int8 v4; // bl
  int v5; // edi
  unsigned __int8 *v6; // edx
  unsigned __int8 v7; // al
  unsigned __int8 v8; // cl

  v2 = this;
  v3 = *(_DWORD *)a2;
  v4 = *(_BYTE *)this;
  v5 = *(_DWORD *)(*(_DWORD *)a2 + 148);
  if ( *(_BYTE *)(*(unsigned __int8 *)this + v5) != 101 )
  {
    do
    {
      v2 = (__crt_stdio_output *)((char *)v2 + 1);
      v4 = *(_BYTE *)v2;
    }
    while ( (*(_BYTE *)(*(_DWORD *)v3 + 2 * *(unsigned __int8 *)v2) & 4) != 0 );
  }
  if ( *(_BYTE *)(v4 + v5) == 120 )
  {
    v2 = (__crt_stdio_output *)((char *)v2 + 2);
    v4 = *(_BYTE *)v2;
  }
  *(_BYTE *)v2 = ***(_BYTE ***)(v3 + 136);
  v6 = (unsigned __int8 *)v2 + 1;
  do
  {
    v7 = *v6;
    v8 = v4;
    *v6++ = v4;
    v4 = v7;
  }
  while ( v8 != 0 );
}

