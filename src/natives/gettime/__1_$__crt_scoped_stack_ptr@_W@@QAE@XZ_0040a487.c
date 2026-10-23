// gettime.exe @ 0x40a487 size=25

void __thiscall __crt_scoped_stack_ptr<wchar_t>::~__crt_scoped_stack_ptr<wchar_t>(_DWORD *this)
{
  _DWORD *v1; // eax

  if ( *this != 0 )
  {
    v1 = (_DWORD *)(*this - 8);
    if ( *v1 == 56797 )
      free(v1);
  }
}

