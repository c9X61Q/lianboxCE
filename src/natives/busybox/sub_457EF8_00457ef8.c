// busybox.exe @ 0x457ef8 size=167

unsigned int __usercall sub_457EF8@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v3; // ebx
  int v4; // eax
  BOOL v5; // edx
  int v6; // eax

  v3 = a2;
  BYTE1(v3) = BYTE1(a2) | 2;
  while ( (v3 & 0x800) == 0 )
  {
    v4 = fgetc(*(FILE **)a1);
    v5 = true;
    if ( v4 != -1 )
    {
      ++*(_QWORD *)(a1 + 8);
      v5 = (unsigned __int8)(v4 - 9) <= 4u || (_BYTE)v4 == 32;
    }
    v3 |= v4 & 0xC00;
    if ( v4 == 10 )
      BYTE1(v3) |= 8u;
    if ( (dword_486008 & 8) != 0 && (unsigned int)(v4 - 65) <= 0x19 )
      LOWORD(v4) = v4 + 32;
    if ( (dword_486008 & 0x2000) == 0 || !v5 )
    {
      v6 = v4 & 0x1FF;
      if ( (dword_486008 & 2) == 0 )
        return v6 | v3 & 0xFFFFFC00;
      if ( (v3 & 0x1000) == 0 )
      {
        if ( v5 )
          v6 = 4128;
        return v6 | v3 & 0xFFFFFC00;
      }
      if ( !v5 )
      {
        BYTE1(v3) &= ~0x10u;
        return v6 | v3 & 0xFFFFFC00;
      }
    }
  }
  return v3;
}

