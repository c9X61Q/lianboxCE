// busybox.exe @ 0x4447a8 size=161

int __cdecl sub_4447A8(int a1, int type, int protocol)
{
  SOCKET OSFileHandle; // eax
  int *v4; // ebx
  SOCKET v5; // ebx
  int result; // eax
  int *v7; // eax
  char *v8; // eax

  sub_43AD2C();
  OSFileHandle = WSASocketA(a1, type, protocol, nullptr, 0, 0);
  if ( OSFileHandle == -1 )
  {
    v4 = _errno();
    *v4 = WSAGetLastError();
  }
  else
  {
    v5 = OSFileHandle;
    result = open_osfhandle(OSFileHandle, 32770);
    if ( result >= 0 )
      return result;
    closesocket(v5);
    v7 = _errno();
    v8 = strerror(*v7);
    sub_41783C("unable to make a socket file descriptor: %s", v8);
  }
  return -1;
}

