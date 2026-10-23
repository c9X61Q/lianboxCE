// busybox.exe @ 0x44dd50 size=71

int __usercall sub_44DD50@<eax>(unsigned __int64 a1@<edx:eax>, const char *a2@<ecx>)
{
  const char *v3; // eax

  if ( MultiByteStr != 0 )
    a1 += (MultiByteStr - 1) >> 10;
  v3 = sub_441B54(a1, 0x200u, MultiByteStr);
  return sub_46F088("%s\t%s\n", v3, a2);
}

