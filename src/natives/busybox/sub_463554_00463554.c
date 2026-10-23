// busybox.exe @ 0x463554 size=60

const char *__usercall sub_463554@<eax>(const char *a1@<eax>, const char *Str@<edx>)
{
  size_t MaxCount; // edi

  MaxCount = strlen(Str);
  while ( *a1 != 0 )
  {
    if ( strnicmp(a1, Str, MaxCount) == 0 )
      return a1;
    ++a1;
  }
  return nullptr;
}

