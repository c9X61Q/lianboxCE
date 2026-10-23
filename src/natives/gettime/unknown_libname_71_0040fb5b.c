// gettime.exe @ 0x40fb5b size=61

// Microsoft VisualC universal runtime
char __stdcall unknown_libname_71(char a1, char a2)
{
  char v2; // al

  if ( (unsigned __int8)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_42B0B1[2 * ((a1 - 32) & 0x7F)];
  return byte_42B0B0[2 * ((a2 + 9 * v2) & 0x7F)];
}

