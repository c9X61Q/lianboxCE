// gettime.exe @ 0x409396 size=32

char __cdecl std::_Fgetc<char>(_BYTE *a1, FILE *Stream)
{
  int v2; // eax

  v2 = fgetc(Stream);
  if ( v2 == -1 )
    return 0;
  *a1 = v2;
  return 1;
}

