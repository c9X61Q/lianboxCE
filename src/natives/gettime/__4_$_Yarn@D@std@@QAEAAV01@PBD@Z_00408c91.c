// gettime.exe @ 0x408c91 size=84

void **__thiscall std::_Yarn<char>::operator=(void **this, _BYTE *Src)
{
  _BYTE *i; // esi
  size_t v4; // esi
  void *v5; // eax

  if ( *this != Src )
  {
    if ( *this != nullptr )
      free(*this);
    *this = nullptr;
    if ( Src != nullptr )
    {
      for ( i = Src; *i != 0; ++i )
        ;
      v4 = i - Src + 1;
      v5 = malloc(v4);
      *this = v5;
      if ( v5 != nullptr )
        memmove(v5, Src, v4);
    }
  }
  return this;
}

