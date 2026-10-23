// busybox.exe @ 0x442ed8 size=48

int __cdecl sub_442ED8(int FileHandle, struct sockaddr *name, int namelen)
{
  SOCKET osfhandle; // eax

  osfhandle = _get_osfhandle(FileHandle);
  return connect(osfhandle, name, namelen);
}

