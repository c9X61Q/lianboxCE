// busybox.exe @ 0x431150 size=36

int sub_431150()
{
  int v0; // ebx
  int v1; // ecx
  int result; // eax

  v0 = dword_486010;
  v1 = *(_DWORD *)(dword_486010 - 16);
  if ( v1 != 0 )
  {
    result = sub_471D00(v1, *(_DWORD *)(dword_486010 - 80));
    *(_DWORD *)(v0 - 16) = 0;
  }
  return result;
}

