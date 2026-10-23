// gettime.exe @ 0x405390 size=55

wchar_t *__thiscall std::ctype<char>::_Init(_DWORD *this, std::_Locinfo *a2)
{
  struct _Ctypevec *v2; // eax
  _DWORD *v3; // ecx
  wchar_t *result; // eax
  struct _Ctypevec v5; // [esp+0h] [ebp-14h] BYREF
  _DWORD *v6; // [esp+10h] [ebp-4h]

  v6 = this;
  v2 = std::_Locinfo::_Getctype(a2, &v5);
  v3 = v6 + 2;
  v6[2] = v2->_Page;
  v3[1] = v2->_Table;
  v3[2] = v2->_Delfl;
  result = v2->_LocaleName;
  v3[3] = result;
  return result;
}

