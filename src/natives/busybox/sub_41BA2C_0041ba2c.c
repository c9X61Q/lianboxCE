// busybox.exe @ 0x41ba2c size=146

int sub_41BA2C()
{
  FILE *(__cdecl *v0)(int); // ebx
  FILE *v1; // esi
  FILE *v2; // edx
  const char *v3; // eax
  FILE *Stream; // eax
  int result; // eax

  v0 = off_4730E8;
  if ( ::Stream != nullptr )
  {
    if ( ferror(::Stream) != 0 )
    {
      v1 = ::Stream;
      v2 = v0(0);
      v3 = "standard input";
      if ( v1 != v2 )
        v3 = *(const char **)(dword_485C04 - 4);
      sub_41783C("%s: read error", v3);
      LOBYTE(MultiByteStr) = 1;
    }
    sub_42EE00();
    ::Stream = nullptr;
  }
  Stream = v0(1);
  result = ferror(Stream);
  if ( result != 0 )
    sub_418210("write error");
  return result;
}

