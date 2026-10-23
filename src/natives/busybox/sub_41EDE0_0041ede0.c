// busybox.exe @ 0x41ede0 size=25

int __usercall sub_41EDE0@<eax>(char *a1@<eax>, int *a2@<edx>)
{
  int result; // eax
  int v4; // edx

  if ( *a1 == 43 )
    ++a1;
  result = sub_418328(a1, nullptr, 0);
  *a2 = result;
  a2[1] = v4;
  return result;
}

