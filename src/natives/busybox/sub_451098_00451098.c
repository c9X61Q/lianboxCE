// busybox.exe @ 0x451098 size=75

int __usercall sub_451098@<eax>(int *a1@<eax>, int *a2@<edx>)
{
  int v2; // esi
  bool v3; // cc
  int result; // eax
  int v6; // ecx
  int v7; // ebx
  int v8; // ecx
  int i; // eax
  unsigned int v10; // edi

  v2 = *a1;
  v3 = *a1 < *a2;
  if ( *a1 > *a2 )
    return 1;
  result = -1;
  if ( !v3 )
  {
    v6 = 4 * v2 - 4;
    v7 = v6 + a1[3];
    v8 = a2[3] + v6;
    for ( i = 0; ; ++i )
    {
      if ( v2 <= i )
        return 0;
      v10 = *(_DWORD *)(v8 - 4 * i);
      if ( *(_DWORD *)(v7 - 4 * i) > v10 )
        return 1;
      if ( *(_DWORD *)(v7 - 4 * i) < v10 )
        break;
    }
    return -1;
  }
  return result;
}

