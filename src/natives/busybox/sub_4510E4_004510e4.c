// busybox.exe @ 0x4510e4 size=84

int __cdecl sub_4510E4(_DWORD *a1, _DWORD *a2)
{
  int v2; // ecx
  int v3; // edx
  int i; // eax

  if ( a1 != a2 )
  {
    if ( a2[1] < *a1 )
      sub_451814();
    v2 = a1[3];
    v3 = a2[3];
    for ( i = 0; *a1 > i; ++i )
    {
      v3 += 4;
      *(_DWORD *)(v3 - 4) = *(_DWORD *)(v2 + 4 * i);
    }
    while ( *a2 > i )
    {
      v3 += 4;
      *(_DWORD *)(v3 - 4) = 0;
      ++i;
    }
    *a2 = *a1;
    a2[2] = a1[2];
  }
  return 0;
}

