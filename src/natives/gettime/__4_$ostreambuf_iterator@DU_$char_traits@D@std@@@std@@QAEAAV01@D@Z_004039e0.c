// gettime.exe @ 0x4039e0 size=83

_BYTE *__thiscall std::ostreambuf_iterator<char>::operator=(_DWORD *this, char a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF
  _BYTE *v5; // [esp+8h] [ebp-4h]

  v5 = this;
  if ( *(this + 1) == 0
    || (v4 = sub_4081B0(a2),
        v3 = std::numeric_limits<unsigned int>::max(),
        (unsigned __int8)unknown_libname_34(&v3, &v4) != 0) )
  {
    *v5 = 1;
  }
  return v5;
}

