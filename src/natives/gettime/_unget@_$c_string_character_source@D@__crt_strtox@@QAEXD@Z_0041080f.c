// gettime.exe @ 0x41080f size=41

void __thiscall __crt_strtox::c_string_character_source<char>::unget(_DWORD *this, char a2)
{
  _BYTE *v2; // eax

  v2 = (_BYTE *)(*this - 1);
  *this = v2;
  if ( a2 != 0 && *v2 != a2 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
  }
}

