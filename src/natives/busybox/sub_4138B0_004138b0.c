// busybox.exe @ 0x4138b0 size=42

int sub_4138B0()
{
  int v0; // ebx
  int result; // eax

  v0 = sub_463A54();
  *(_DWORD *)(v0 + 4) = sub_462B40();
  result = dword_473330;
  *(_DWORD *)dword_473330 = v0;
  dword_473330 = v0;
  return result;
}

