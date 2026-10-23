// busybox.exe @ 0x4314f0 size=40

int __usercall sub_4314F0@<eax>(char *FileName@<eax>, char *Mode@<edx>)
{
  int v3; // edx
  int v4; // ebx

  v4 = sub_442F94(FileName, Mode);
  if ( v4 == 0 )
    sub_418224(FileName, v3);
  return v4;
}

