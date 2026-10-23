// busybox.exe @ 0x4523a8 size=75

int *__usercall sub_4523A8@<eax>(int *a1@<eax>, int a2@<edx>)
{
  int v2; // esi
  int i; // ecx

  if ( *a1 <= a2 )
    return (int *)sub_4526C8();
  v2 = 4 * a2;
  for ( i = 0; *a1 - a2 > i; ++i )
  {
    *(_DWORD *)(a1[3] + 4 * i) = *(_DWORD *)(a1[3] + v2);
    v2 += 4;
  }
  while ( *a1 > i )
    *(_DWORD *)(a1[3] + 4 * i++) = 0;
  *a1 -= a2;
  return sub_45100C(a1);
}

