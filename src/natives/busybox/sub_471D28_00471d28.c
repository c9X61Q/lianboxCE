// busybox.exe @ 0x471d28 size=76

unsigned int __usercall sub_471D28@<eax>(int a1@<eax>, unsigned int a2@<edx>)
{
  int v4; // edx
  __int16 v5; // ax

  if ( (*(_BYTE *)a1 & 0x20) != 0 )
    return sub_471D74(22, a2);
  v4 = *(_DWORD *)(a1 + 32);
  *(_WORD *)(v4 + 19) = 790;
  *(_BYTE *)(v4 + 21) = 3;
  LOBYTE(v5) = BYTE1(a2);
  HIBYTE(v5) = a2;
  *(_WORD *)(v4 + 22) = v5;
  sub_471D00(a2 + 5, (char *)(v4 + 19));
  return sub_442554(*(_DWORD *)(a1 + 56), (char *)(*(_DWORD *)(a1 + 32) + 24), a2);
}

