// busybox.exe @ 0x42790c size=25

unsigned int sub_42790C()
{
  int v0; // ebx
  unsigned int result; // eax

  sub_468398();
  v0 = dword_486010;
  result = sub_418A48(*(_DWORD *)(dword_486010 + 8));
  *(_DWORD *)(v0 + 8) = result;
  return result;
}

