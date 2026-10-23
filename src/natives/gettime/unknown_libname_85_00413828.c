// gettime.exe @ 0x413828 size=39

// Microsoft VisualC universal runtime
int __thiscall unknown_libname_85(int this, int a2)
{
  if ( *(_BYTE *)(this + 20) != 0 )
    *(_BYTE *)(this + 20) = 0;
  *_errno() = 34;
  *(_DWORD *)(this + 12) = 0;
  *(_BYTE *)(this + 20) = 0;
  return 34;
}

