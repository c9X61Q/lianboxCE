// busybox.exe @ 0x442cf4 size=120

int __cdecl sub_442CF4(int FileHandle, struct sockaddr *addr, int *addrlen)
{
  SOCKET osfhandle; // eax
  SOCKET v4; // ebx
  int result; // eax
  int v6; // esi
  char *v7; // eax

  osfhandle = _get_osfhandle(FileHandle);
  v4 = accept(osfhandle, addr, addrlen);
  result = open_osfhandle(v4, 32770);
  if ( result < 0 )
  {
    v6 = *_errno();
    closesocket(v4);
    v7 = strerror(v6);
    sub_41783C("unable to make a socket file descriptor: %s", v7);
    return -1;
  }
  return result;
}

