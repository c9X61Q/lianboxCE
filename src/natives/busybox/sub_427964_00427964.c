// busybox.exe @ 0x427964 size=25

int sub_427964()
{
  int v0; // ebx
  int result; // eax

  sub_468398();
  v0 = dword_486010;
  result = sub_446708();
  *(_DWORD *)(v0 + 8) = result;
  return result;
}

