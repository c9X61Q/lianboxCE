// busybox.exe @ 0x45c5ac size=38

char *__usercall sub_45C5AC@<eax>(char *result@<eax>, const char *Source@<edx>, int a3@<ecx>)
{
  if ( a3 != 0 )
  {
    result[a3 - 1] = 0;
    return strncpy(result, Source, a3 - 1);
  }
  return result;
}

