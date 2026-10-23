// busybox.exe @ 0x4433d8 size=39

int __cdecl sub_4433D8(int FileHandle, int backlog)
{
  SOCKET osfhandle; // eax

  osfhandle = _get_osfhandle(FileHandle);
  return listen(osfhandle, backlog);
}

