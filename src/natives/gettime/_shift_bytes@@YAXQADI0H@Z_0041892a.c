// gettime.exe @ 0x41892a size=52

void __cdecl shift_bytes(char *const a1, unsigned int a2, char *const Src, int a4)
{
  if ( a4 != 0 )
    memmove(&Src[a4], Src, strlen(Src) + 1);
}

