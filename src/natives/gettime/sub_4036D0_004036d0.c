// gettime.exe @ 0x4036d0 size=40

_Cnd_internal_imp_t *__thiscall sub_4036D0(_Cnd_internal_imp_t *this)
{
  _Cnd_internal_imp_t *result; // eax
  int v2; // [esp-4h] [ebp-8h]

  result = this;
  if ( *(_DWORD *)this != 0 )
  {
    v2 = *(_DWORD *)this;
    _Cnd_internal_imp_t::_get_cv(this);
    return (_Cnd_internal_imp_t *)sub_404050(v2);
  }
  return result;
}

