// busybox.exe @ 0x4357ec size=47

int __usercall sub_4357EC@<eax>(const char *a1@<eax>, int (*a2)(void)@<edx>)
{
  int v3; // esi

  v3 = sub_418398(10, a1, nullptr);
  if ( *_errno() != 0 )
    return a2();
  else
    return v3;
}

