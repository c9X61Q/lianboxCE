// busybox.exe @ 0x44611c size=47

u_long sub_44611C()
{
  u_long v0; // edx

  MultiByteStr = sub_47168C(*(&MultiByteStr + 1), 5122);
  v0 = (*(&MultiByteStr + 1))++;
  return 20 * v0 + MultiByteStr;
}

