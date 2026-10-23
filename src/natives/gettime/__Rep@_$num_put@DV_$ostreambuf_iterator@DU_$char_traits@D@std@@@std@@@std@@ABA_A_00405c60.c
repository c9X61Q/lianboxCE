// gettime.exe @ 0x405c60 size=69

_DWORD *__cdecl std::num_put<char,std::ostreambuf_iterator<char>>::_Rep(
        int a1,
        _DWORD *a2,
        int a3,
        int a4,
        char a5,
        int a6)
{
  struct Concurrency::details::stl_condition_variable_win7 *cv; // eax
  int v7; // ecx
  char v9; // [esp-4h] [ebp-4h]

  while ( a6 != 0 )
  {
    v9 = a5;
    cv = _Cnd_internal_imp_t::_get_cv((_Cnd_internal_imp_t *)&a3);
    std::ostreambuf_iterator<char>::operator=(cv, v9);
    --a6;
    _Cnd_internal_imp_t::_get_cv((_Cnd_internal_imp_t *)&a3);
  }
  v7 = a4;
  *a2 = a3;
  a2[1] = v7;
  return a2;
}

