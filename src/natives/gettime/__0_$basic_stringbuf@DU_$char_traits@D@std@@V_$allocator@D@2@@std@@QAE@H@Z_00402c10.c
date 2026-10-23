// gettime.exe @ 0x402c10 size=72

_DWORD *__thiscall std::stringbuf::stringbuf(_DWORD *this, int a2)
{
  sub_402960(this);
  *this = &std::stringbuf::`vftable';
  *(this + 14) = 0;
  *(this + 15) = std::stringbuf::_Getstate(a2);
  _Cnd_internal_imp_t::_get_cv((_Cnd_internal_imp_t *)(this + 16));
  return this;
}

