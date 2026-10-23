// busybox.exe @ 0x43c594 size=28

int __usercall sub_43C594@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ecx
  int v3; // esi
  char v4; // bl

  v2 = 0;
  while ( 1 )
  {
    v3 = a1 + v2;
    v4 = *(_BYTE *)(a2 + v2);
    if ( v4 == 0 )
      break;
    ++v2;
    if ( *(_BYTE *)(a1 + v2 - 1) != v4 )
      return 0;
  }
  return v3;
}

