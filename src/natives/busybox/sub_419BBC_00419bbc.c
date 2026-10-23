// busybox.exe @ 0x419bbc size=136

_BYTE *__usercall sub_419BBC@<eax>(void *a1@<eax>, int a2@<edx>)
{
  _BYTE *v2; // edi
  int i; // esi
  unsigned int v4; // ecx
  _BYTE *v5; // ebx
  unsigned int v6; // eax

  memset(a1, 32, 7 * dword_486008 + 21);
  v2 = a1;
  for ( i = 0; i != 7; ++i )
  {
    v4 = *(_DWORD *)(a2 + 4 * i);
    if ( v4 == -1 )
    {
      v2 += dword_486008 + 3;
    }
    else
    {
      v5 = v2;
      if ( dword_486008 != 0 )
      {
        v5 = v2 + 1;
        if ( v4 > 0x63 )
        {
          v2[1] = 48;
          v6 = v4 / 0x64;
          v4 %= 0x64u;
          *v2 = v6 + 48;
        }
      }
      if ( v4 > 9 )
        *v5 = v4 / 0xA + 48;
      v5[1] = v4 % 0xA + 48;
      v2 = v5 + 3;
    }
  }
  return v2;
}

