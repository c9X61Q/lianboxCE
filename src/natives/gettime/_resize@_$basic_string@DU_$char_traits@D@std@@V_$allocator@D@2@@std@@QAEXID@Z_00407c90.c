// gettime.exe @ 0x407c90 size=68

size_t *__thiscall std::string::resize(size_t *this, unsigned int a2, char a3)
{
  unsigned int v4; // [esp+0h] [ebp-8h]

  v4 = unknown_libname_45(this);
  if ( a2 > v4 )
    return std::string::append(this, a2 - v4, a3);
  else
    return (size_t *)sub_404760(this, a2);
}

