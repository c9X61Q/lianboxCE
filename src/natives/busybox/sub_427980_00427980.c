// busybox.exe @ 0x427980 size=25

int sub_427980()
{
  int v0; // ebx
  int result; // eax

  sub_468398();
  v0 = dword_486010;
  result = sub_44DC1C();
  *(_DWORD *)(v0 + 8) = result;
  return result;
}

