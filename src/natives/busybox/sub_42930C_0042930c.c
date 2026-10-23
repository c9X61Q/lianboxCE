// busybox.exe @ 0x42930c size=69

int __usercall sub_42930C@<eax>(int a1@<eax>, int a2@<edx>)
{
  int result; // eax
  int *v4; // eax
  char *v5; // eax
  int v6; // ecx

  result = a2;
  if ( a1 != a2 )
    result = sub_442F08(a1, a2);
  if ( result < 0 )
  {
    v4 = _errno();
    v5 = strerror(*v4);
    sub_415B40(v6, "%d: %s", a1, v5);
  }
  return result;
}

