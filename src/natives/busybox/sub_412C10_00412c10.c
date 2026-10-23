// busybox.exe @ 0x412c10 size=82

int __usercall sub_412C10@<eax>(int a1@<eax>, int a2@<ecx>)
{
  if ( dword_485AD0[1] != 103 )
    return sub_43CDF4(a1, a2);
  if ( (dword_486008 & 6) != 0 )
    return sub_46F088("%u %s\n", a1);
  return sub_46F088("%u\n", a1);
}

