// busybox.exe @ 0x43cbb8 size=23

int __usercall sub_43CBB8@<eax>(int a1@<eax>, _BYTE *a2@<edx>, int a3@<ecx>)
{
  if ( a3 == 0 )
    return (int)a2;
  if ( a1 < 0 )
  {
    *a2 = 45;
    --a3;
  }
  return sub_46C550(a3);
}

