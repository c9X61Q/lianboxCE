// gettime.exe @ 0x41fb0d size=135

// Microsoft VisualC universal runtime
int __thiscall unknown_libname_101(void **this)
{
  _BYTE *v2; // edi
  char *v4; // eax
  unsigned int v5; // edi
  char *v6; // eax
  int v7; // esi

  v2 = *(this + 2);
  if ( *(this + 1) != v2 )
    return 0;
  if ( *this == nullptr )
  {
    *this = _calloc_base(4u, 4u);
    _free_base(nullptr);
    v4 = (char *)*this;
    if ( *this != nullptr )
    {
      *(this + 1) = v4;
      *(this + 2) = v4 + 16;
      return 0;
    }
    return 12;
  }
  v5 = (v2 - (_BYTE *)*this) >> 2;
  if ( v5 > 0x7FFFFFFF )
    return 12;
  v6 = (char *)_recalloc_base(*this, 2 * v5, 4u);
  if ( v6 != nullptr )
  {
    *this = v6;
    *(this + 1) = &v6[4 * v5];
    *(this + 2) = &v6[8 * v5];
    v7 = 0;
  }
  else
  {
    v7 = 12;
  }
  _free_base(nullptr);
  return v7;
}

