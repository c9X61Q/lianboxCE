// busybox.exe @ 0x456700 size=37

u_long sub_456700()
{
  u_long netlong; // [esp+4h] [ebp-4h] BYREF

  sub_4715C8(4, &netlong);
  return ntohl(netlong);
}

