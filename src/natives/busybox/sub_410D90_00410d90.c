// busybox.exe @ 0x410d90 size=98

int __cdecl sub_410D90(int a1, int a2)
{
  int v2; // esi
  unsigned int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // ecx

  v2 = *(_DWORD *)(a1 + 16);
  v3 = a1 + 20;
  if ( v2 < a2 >> 5 )
  {
    v4 = (_DWORD *)(v3 + 4 * v2);
    goto LABEL_4;
  }
  v4 = (_DWORD *)(v3 + 4 * (a2 >> 5));
  if ( v2 > a2 >> 5 && (a2 & 0x1F) != 0 )
  {
    v6 = 1;
    if ( *v4 != *v4 >> (a2 & 0x1F) << (a2 & 0x1F) )
      return v6;
  }
  do
  {
LABEL_4:
    if ( (unsigned int)v4 <= v3 )
      return 0;
    v5 = *--v4;
  }
  while ( v5 == 0 );
  return 1;
}

