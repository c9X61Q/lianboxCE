// busybox.exe @ 0x443334 size=75

int __cdecl sub_443334(int FileHandle, struct sockaddr *name, int *namelen)
{
  SOCKET osfhandle; // eax

  sub_43AD2C();
  osfhandle = _get_osfhandle(FileHandle);
  if ( osfhandle != -1 )
    return getpeername(osfhandle, name, namelen);
  *_errno() = 9;
  return -1;
}

