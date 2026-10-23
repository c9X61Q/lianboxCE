// busybox.exe @ 0x448c10 size=136

int __usercall sub_448C10@<eax>(int *a1@<eax>, const char *Str@<edx>)
{
  char *v4; // eax
  int result; // eax

  a1[1] = -1;
  *a1 = -1;
  v4 = strchr(Str, 46);
  if ( v4 != nullptr )
  {
    *v4 = 58;
  }
  else
  {
    v4 = strchr(Str, 58);
    if ( v4 == nullptr )
    {
      result = sub_4357EC(Str, sub_471CCC);
      *a1 = result;
      return result;
    }
  }
  if ( Str == v4 )
  {
    result = sub_4357EC(Str + 1, (int (*)(void))sub_470DE8);
    a1[1] = result;
  }
  else
  {
    if ( v4[1] == 0 )
      *v4 = 0;
    return sub_470D60();
  }
  return result;
}

