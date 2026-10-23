// busybox.exe @ 0x411bbc size=92

int __usercall sub_411BBC@<eax>(_DWORD *a1@<eax>, int a2@<esi>)
{
  int v3; // edx
  int i; // eax

  v3 = a1[13];
  if ( v3 <= 9999 || (a1[5] = a1[8] + v3 + ((v3 & 1) != 0) + 34, a1[6] = 9 * v3, sub_44139C(), (int)a1[6] < 0) )
    sub_42E820();
  for ( i = 0; a1[13] != i; ++i )
  {
    if ( *(_DWORD *)(a1[7] + 4 * i) == 0 )
      return i;
  }
  return a2;
}

