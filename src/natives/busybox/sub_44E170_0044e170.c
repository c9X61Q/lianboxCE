// busybox.exe @ 0x44e170 size=136

int __usercall sub_44E170@<eax>(int a1@<eax>, int a2@<edx>, const char *a3@<ecx>)
{
  if ( a3 != nullptr )
    sub_46F088("%s", a3);
  if ( (dword_486008 & 2) == 0 || a2 == 0 )
    sub_46F088("%u", a1);
  if ( dword_486008 == 0 )
  {
    if ( a2 != 0 )
      sub_46F088("(%s)", a2);
    return 0;
  }
  if ( (dword_486008 & 2) == 0 )
    return 0;
  if ( a2 != 0 )
  {
    sub_46F088("%s", a2);
    return 0;
  }
  sub_41783C("unknown ID %u", a1);
  return 1;
}

