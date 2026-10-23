// busybox.exe @ 0x4456f4 size=62

__int64 sub_4456F4()
{
  _DWORD v1[4]; // [esp+8h] [ebp-10h] BYREF

  sub_436500(v1);
  return 1000LL * v1[0] + v1[1] / 1000;
}

