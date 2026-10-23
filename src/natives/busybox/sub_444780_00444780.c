// busybox.exe @ 0x444780 size=39

int __cdecl sub_444780(int FileHandle, int how)
{
  SOCKET osfhandle; // eax

  osfhandle = _get_osfhandle(FileHandle);
  return shutdown(osfhandle, how);
}

