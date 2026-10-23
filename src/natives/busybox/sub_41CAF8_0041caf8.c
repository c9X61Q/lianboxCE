// busybox.exe @ 0x41caf8 size=120

int sub_41CAF8()
{
  const char **v0; // eax
  void *v2; // ebx

  v0 = (const char **)environ;
  if ( environ == nullptr )
    return 0;
  do
  {
    if ( *v0 == nullptr )
      break;
    if ( strchr(*v0, 61) == nullptr )
      return -1;
    v2 = (void *)sub_4718A8();
    if ( putenv((const char *)v2) == -1 )
    {
      free(v2);
      return -1;
    }
    free(v2);
    v0 = (const char **)environ;
  }
  while ( environ != nullptr );
  return 0;
}

