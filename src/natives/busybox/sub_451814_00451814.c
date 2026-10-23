// busybox.exe @ 0x451814 size=58

int __usercall sub_451814@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v5; // eax
  int v6; // edx

  if ( *(_DWORD *)(a1 + 4) >= a2 )
    return 0;
  v5 = sub_471600(a3, 4 * a2);
  *(_DWORD *)(a1 + 12) = v5;
  v6 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = a2;
  while ( *(_DWORD *)(a1 + 4) > v6 )
    *(_DWORD *)(v5 + 4 * v6++) = 0;
  return 0;
}

