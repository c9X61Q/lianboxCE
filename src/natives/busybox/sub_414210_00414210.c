// busybox.exe @ 0x414210 size=26

int sub_414210()
{
  int result; // eax

  result = sub_4728CC();
  *(_DWORD *)(result + 8) = -1;
  *(_BYTE *)(result + 12) = 2;
  *(_BYTE *)(result + 62) = 1;
  return result;
}

