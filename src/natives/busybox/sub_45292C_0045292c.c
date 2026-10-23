// busybox.exe @ 0x45292c size=97

int __usercall sub_45292C@<eax>(int a1@<eax>, int a2@<ecx>)
{
  int v2; // ebx
  unsigned int v3; // edx
  _BYTE *v4; // ecx
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // edx

  v2 = dword_486010;
  v3 = *(_DWORD *)(dword_486010 - 16);
  v4 = (_BYTE *)(v3 + *(_DWORD *)(dword_486010 - 80));
  if ( v3 > 0x3FFD )
  {
    *v4 = a1;
    v5 = v3 + 1;
    *(_DWORD *)(v2 - 16) = v5;
    if ( v5 == 0x4000 )
    {
      a2 = a1;
      sub_431150();
      BYTE1(a1) = BYTE1(a2);
    }
    v6 = *(_DWORD *)(v2 - 80);
    v7 = *(_DWORD *)(v2 - 16);
    *(_DWORD *)(v2 - 16) = v7 + 1;
    *(_BYTE *)(v6 + v7) = BYTE1(a1);
    if ( *(_DWORD *)(v2 - 16) == 0x4000 )
      return sub_431150();
  }
  else
  {
    *(_WORD *)v4 = a1;
    *(_DWORD *)(v2 - 16) = v3 + 2;
  }
  return a2;
}

