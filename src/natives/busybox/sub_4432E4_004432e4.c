// busybox.exe @ 0x4432e4 size=44

struct hostent *__cdecl sub_4432E4(char *addr, int len, int type)
{
  sub_43AD2C();
  return gethostbyaddr(addr, len, type);
}

