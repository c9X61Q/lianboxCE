// busybox.exe @ 0x470c64 size=37

int __usercall sub_470C64@<eax>(int a1@<eax>, int a2@<edx>)
{
  int result; // eax

  result = sub_442F08(a1, a2);
  if ( result != a2 )
    sub_41823C("can't duplicate file descriptor");
  return result;
}

