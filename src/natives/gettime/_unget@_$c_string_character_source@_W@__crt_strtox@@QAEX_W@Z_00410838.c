// gettime.exe @ 0x410838 size=46

void __thiscall __crt_strtox::c_string_character_source<wchar_t>::unget(_DWORD *this, __int16 a2)
{
  _WORD *v2; // eax

  v2 = (_WORD *)(*this - 2);
  *this = v2;
  if ( a2 != 0 && *v2 != a2 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
  }
}

