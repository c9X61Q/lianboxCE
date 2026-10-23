// busybox.exe @ 0x441f5c size=32

int sub_441F5C()
{
  int result; // eax

  result = sub_463A54();
  *(_BYTE *)result = 15;
  *(_DWORD *)(result + 8) = dword_4735D0;
  *(_DWORD *)(result + 12) = dword_473114;
  return result;
}

