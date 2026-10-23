// gettime.exe @ 0x4117fe size=19

int *__cdecl _errno()
{
  int v0; // eax

  v0 = unknown_libname_96();
  if ( v0 != 0 )
    return (int *)(v0 + 16);
  else
    return (int *)&unk_4370D4;
}

