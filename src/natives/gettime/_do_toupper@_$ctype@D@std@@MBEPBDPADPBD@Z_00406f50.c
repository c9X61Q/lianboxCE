// gettime.exe @ 0x406f50 size=80

_BYTE *__thiscall std::ctype<char>::do_toupper(int this, _BYTE *a2, _BYTE *a3)
{
  sub_401820();
  while ( a2 != a3 )
  {
    *a2 = _Toupper((unsigned __int8)*a2, (const _Ctypevec *)(this + 8));
    ++a2;
  }
  return a2;
}

