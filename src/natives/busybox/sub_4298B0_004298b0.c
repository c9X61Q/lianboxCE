// busybox.exe @ 0x4298b0 size=14

int sub_4298B0()
{
  int result; // eax

  result = dword_486010;
  *(_BYTE *)(dword_486010 + 120) = 26;
  *(_BYTE *)(result + 88) = 0;
  return result;
}

