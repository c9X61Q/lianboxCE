// busybox.exe @ 0x444740 size=64

int __cdecl sub_444740(int FileHandle, int level, int optname, char *optval, int optlen)
{
  SOCKET osfhandle; // eax

  osfhandle = _get_osfhandle(FileHandle);
  return setsockopt(osfhandle, level, optname, optval, optlen);
}

