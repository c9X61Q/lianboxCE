// busybox.exe @ 0x459e60 size=85

unsigned int __cdecl sub_459E60(unsigned int a1, int a2, char *a3, unsigned int a4)
{
  const char *Str; // esi
  unsigned int result; // eax

  if ( a1 > 0x10 )
    abort();
  Str = &aSuccess[dword_47D620[a1]];
  result = strlen(Str) + 1;
  if ( a4 != 0 )
  {
    if ( result <= a4 )
    {
      qmemcpy(a3, Str, result);
    }
    else
    {
      qmemcpy(a3, Str, a4 - 1);
      a3[a4 - 1] = 0;
    }
  }
  return result;
}

