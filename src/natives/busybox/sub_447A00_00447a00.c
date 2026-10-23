// busybox.exe @ 0x447a00 size=95

void sub_447A00()
{
  char **v0; // eax
  FILE *Stream; // eax

  v0 = (char **)dword_485C04;
  if ( *(_DWORD *)dword_485C04 != 0 )
  {
    while ( 1 )
    {
      dword_485C04 = (int)(v0 + 1);
      Stream = sub_431518(*v0);
      ::Stream = Stream;
      if ( Stream != nullptr )
        break;
      LOBYTE(MultiByteStr) = 1;
      v0 = (char **)dword_485C04;
      if ( *(_DWORD *)dword_485C04 == 0 )
        return;
    }
    if ( (dword_486008 & 0x10002) == 2 )
      setbuf(Stream, nullptr);
  }
}

