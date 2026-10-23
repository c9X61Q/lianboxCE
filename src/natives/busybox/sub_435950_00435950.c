// busybox.exe @ 0x435950 size=58

int __usercall sub_435950@<eax>(char *a1@<eax>)
{
  int v2; // ebx

  v2 = sub_4182BC(10, a1, nullptr);
  if ( *_errno() != 0 )
  {
    sub_41783C("invalid number '%s'", a1);
    return 0;
  }
  return v2;
}

