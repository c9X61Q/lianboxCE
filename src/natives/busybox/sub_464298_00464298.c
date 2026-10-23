// busybox.exe @ 0x464298 size=129

BOOL __cdecl sub_464298(int a1, int a2)
{
  char v2; // al
  unsigned int v3; // edx
  int v4; // esi
  int v5; // edi
  unsigned int v6; // ebx

  v2 = sub_435D44(a2, (int)"sr");
  v3 = v2 & 1;
  if ( (v2 & 1) != 0 )
    v3 = 2;
  if ( (v2 & 2) != 0 )
    v3 = 0;
  v4 = a2 + 4 * dword_473090;
  if ( *(_DWORD *)v4 != 0 )
  {
    v6 = v3 + (v3 == 2 || *(_DWORD *)(v4 + 4) != 0);
    v5 = 1;
    do
    {
      v5 &= sub_464154(*(char **)v4, v6);
      v4 += 4;
    }
    while ( *(_DWORD *)v4 != 0 );
  }
  else
  {
    v5 = sub_464154("-", v3);
  }
  return v5 == 0;
}

