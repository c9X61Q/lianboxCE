// gettime.exe @ 0x405a80 size=54

// Microsoft VisualC 14/net runtime
int *__thiscall unknown_libname_18(int *this)
{
  int *v2; // [esp+0h] [ebp-8h]

  v2 = this;
  if ( std::_String_val<std::_Simple_types<char>>::_Large_string_engaged(this) )
    return (int *)unknown_libname_1(*this);
  return v2;
}

