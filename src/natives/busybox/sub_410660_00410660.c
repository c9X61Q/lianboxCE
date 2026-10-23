// busybox.exe @ 0x410660 size=74

int __cdecl sub_410660(int a1, int a2)
{
  int v2; // eax
  int v3; // ebx
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // edx

  v2 = *(_DWORD *)(a2 + 16);
  v3 = *(_DWORD *)(a1 + 16) - v2;
  if ( v3 == 0 )
  {
    v4 = 4 * v2;
    v5 = (_DWORD *)(a1 + 20 + 4 * v2);
    v6 = (_DWORD *)(a2 + v4 + 20);
    while ( *--v5 == *--v6 )
    {
      if ( a1 + 20 >= (unsigned int)v5 )
        return v3;
    }
    return *v5 < *v6 ? -1 : 1;
  }
  return v3;
}

