// busybox.exe @ 0x463250 size=23

int __usercall sub_463250@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ecx
  int v3; // esi
  char v4; // bl

  v2 = 0;
  do
  {
    v3 = a1 + v2;
    v4 = *(_BYTE *)(a2 + v2);
    *(_BYTE *)(a1 + v2++) = v4;
  }
  while ( v4 != 0 );
  return v3;
}

