// busybox.exe @ 0x45b408 size=10

int sub_45B408()
{
  int result; // eax

  result = dword_486010;
  *(_BYTE *)(dword_486010 - 7) = 1;
  return result;
}

