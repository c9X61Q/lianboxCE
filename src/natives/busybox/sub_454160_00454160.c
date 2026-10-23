// busybox.exe @ 0x454160 size=57

int __usercall sub_454160@<eax>(int *a1@<eax>, int a2@<edx>)
{
  int result; // eax
  void *v4; // eax

  result = a2;
  if ( a2 != 0 )
  {
    *a1 = a2;
    a1[1] = 0;
    v4 = malloc(4 * a2);
    a1[2] = (int)v4;
    return v4 == nullptr ? 0xC : 0;
  }
  else
  {
    memset(a1, 0, 0xCu);
  }
  return result;
}

