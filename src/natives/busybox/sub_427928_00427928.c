// busybox.exe @ 0x427928 size=25

int sub_427928()
{
  int v0; // ebx
  int result; // eax

  sub_468398();
  v0 = dword_486010;
  result = sub_4298C0();
  *(_DWORD *)(v0 + 8) = result;
  return result;
}

