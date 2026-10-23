// busybox.exe @ 0x43ad2c size=95

void sub_43AD2C()
{
  int Error; // eax
  struct WSAData WSAData; // [esp+8h] [ebp-190h] BYREF

  if ( dword_473390 == 0 )
  {
    if ( WSAStartup(0x202u, &WSAData) != 0 )
    {
      Error = WSAGetLastError();
      sub_41784C("WSAStartup failed, error %d", Error);
    }
    sub_4014D0(WSACleanup);
    dword_473390 = 1;
  }
}

