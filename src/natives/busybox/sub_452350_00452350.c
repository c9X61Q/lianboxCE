// busybox.exe @ 0x452350 size=85

int __usercall sub_452350@<eax>(int *a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>)
{
  int v6; // ecx
  signed int v7; // edx
  int i; // eax

  sub_4526C8();
  if ( a3 > 0x4000 )
  {
    a2 = a2 + a3 - 0x4000;
    a3 = 0x4000;
  }
  v7 = (a3 + 3) >> 2;
  *a1 = v7;
  if ( v7 > a1[1] )
    sub_451814((int)a1, v7, v6);
  for ( i = a1[3]; --a3 != -1; *(_BYTE *)(i + a3) = *(_BYTE *)(a2 - 1) )
    ++a2;
  sub_45100C(a1);
  return 0;
}

