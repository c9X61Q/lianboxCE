// busybox.exe @ 0x444718 size=40

_DWORD *sub_444718()
{
  _DWORD *v0; // ebx

  v0 = malloc(0x190u);
  if ( v0 != nullptr )
  {
    *v0 = GetLogicalDrives();
    v0[1] = -1;
  }
  return v0;
}

