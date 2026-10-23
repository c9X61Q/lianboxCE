// busybox.exe @ 0x4541d4 size=60

unsigned int __usercall sub_4541D4@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ecx
  unsigned int v3; // ecx
  int v4; // esi
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int v7; // ecx

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 <= 0 )
    return 0;
  v3 = v2 - 1;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = 0;
  while ( v5 < v3 )
  {
    v6 = (v5 + v3) >> 1;
    if ( *(_DWORD *)(v4 + 4 * v6) >= a2 )
      v3 = (v5 + v3) >> 1;
    else
      v5 = v6 + 1;
  }
  v7 = 0;
  if ( *(_DWORD *)(v4 + 4 * v5) == a2 )
    return v5 + 1;
  return v7;
}

