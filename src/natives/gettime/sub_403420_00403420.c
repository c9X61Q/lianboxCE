// gettime.exe @ 0x403420 size=87

_DWORD *__thiscall sub_403420(_DWORD *this, int a2, int a3, char *Str)
{
  _BYTE v6[24]; // [esp+4h] [ebp-1Ch] BYREF

  sub_402B10((_Cnd_internal_imp_t *)v6, Str);
  sub_402EC0(this, a2, a3, (int)v6);
  sub_403600(v6);
  *this = &std::system_error::`vftable';
  return this;
}

