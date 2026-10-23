// gettime.exe @ 0x41faac size=37

// Microsoft VisualC universal runtime
void __thiscall unknown_libname_100(void ***this)
{
  void **i; // esi

  for ( i = *this; i != *(this + 1); ++i )
    _free_base(*i);
  _free_base(*this);
}

