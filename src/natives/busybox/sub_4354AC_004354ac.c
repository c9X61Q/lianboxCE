// busybox.exe @ 0x4354ac size=102

unsigned int __usercall sub_4354AC@<eax>(const char *a1@<eax>)
{
  const char *String1; // esi
  unsigned int result; // eax
  int i; // ebx

  String1 = a1;
  result = sub_418398(10, a1, nullptr);
  if ( result > 0x16 )
  {
    if ( strnicmp(String1, off_47C608, 3u) == 0 )
      String1 += 3;
    for ( i = 0; i != 23; ++i )
    {
      if ( stricmp(String1, &aExit[7 * i]) == 0 )
        return i;
    }
    return -1;
  }
  return result;
}

