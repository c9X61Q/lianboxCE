// gettime.exe @ 0x4117eb size=19

unsigned int *__cdecl __doserrno()
{
  int v0; // eax

  v0 = unknown_libname_96();
  if ( v0 != 0 )
    return (unsigned int *)(v0 + 20);
  else
    return (unsigned int *)&unk_4370D8;
}

