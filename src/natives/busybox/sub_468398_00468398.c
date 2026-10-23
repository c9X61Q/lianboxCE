// busybox.exe @ 0x468398 size=62

int sub_468398()
{
  int v0; // ebx
  int v1; // edx
  int result; // eax

  v0 = dword_486010;
  v1 = *(_DWORD *)(dword_486010 + 5004);
  if ( v1 > 0 )
  {
    result = sub_4681D0(dword_486010 - v1 + 5268, v1, *(_BYTE *)(dword_486010 + 5000) | 0x20);
    *(_BYTE *)(v0 + 5000) = 64;
    *(_DWORD *)(v0 + 5004) = 0;
  }
  return result;
}

