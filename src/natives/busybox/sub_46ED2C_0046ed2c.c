// busybox.exe @ 0x46ed2c size=54

int __usercall sub_46ED2C@<eax>(const char *Str@<eax>, CHAR *a2@<edx>)
{
  size_t v2; // eax

  if ( Str == nullptr )
    return 0;
  if ( a2 == nullptr )
    return 0;
  v2 = strlen(Str);
  return sub_46ED64(v2 + 1, a2);
}

