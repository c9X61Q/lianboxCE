// busybox.exe @ 0x452f24 size=54

BOOL sub_452F24()
{
  int v0; // ebx
  BOOL result; // eax

  v0 = dword_486010;
  result = sub_43572C(0, (int *)(dword_486010 + 40), (int *)(dword_486010 + 36));
  if ( *(_DWORD *)(v0 + 36) > 0x1000u )
    *(_DWORD *)(v0 + 36) = 4096;
  if ( *(_DWORD *)(v0 + 40) > 0x1000u )
    *(_DWORD *)(v0 + 40) = 4096;
  return result;
}

