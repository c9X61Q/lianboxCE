// gettime.exe @ 0x41380e size=26

// Microsoft VisualC universal runtime
void __thiscall unknown_libname_84(int this)
{
  if ( *(_BYTE *)(this + 20) != 0 )
  {
    _free_base(*(void **)(this + 8));
    *(_BYTE *)(this + 20) = 0;
  }
}

