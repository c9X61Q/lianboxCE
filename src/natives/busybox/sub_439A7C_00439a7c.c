// busybox.exe @ 0x439a7c size=109

int __cdecl sub_439A7C(int a1, int a2)
{
  HANDLE StdHandle; // ebx
  const char *v4; // edx
  int v5; // ecx

  if ( (*(_BYTE *)(dword_486010 + 16) & 8) == 0 )
    return sub_46F964(a1, a2);
  ((void (*)(void))sub_46F964)();
  sub_459A78();
  StdHandle = GetStdHandle(0xFFFFFFF6);
  sub_42F128(v4);
  WaitForSingleObject(StdHandle, 0x64u);
  sub_46F964(v5, v5);
  return sub_459A78();
}

