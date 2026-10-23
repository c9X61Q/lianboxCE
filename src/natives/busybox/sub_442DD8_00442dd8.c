// busybox.exe @ 0x442dd8 size=48

int __cdecl sub_442DD8(int FileHandle, struct sockaddr *name, int namelen)
{
  SOCKET osfhandle; // eax

  osfhandle = _get_osfhandle(FileHandle);
  return bind(osfhandle, name, namelen);
}

