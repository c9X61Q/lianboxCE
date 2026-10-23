// gettime.exe @ 0x405a40 size=59

int __thiscall sub_405A40(_Cnd_internal_imp_t *this, _Cnd_internal_imp_t *a2, int a3)
{
  struct Concurrency::details::stl_condition_variable_win7 *v3; // eax
  struct Concurrency::details::stl_condition_variable_win7 *v5; // [esp-4h] [ebp-8h]

  sub_405F30(this);
  v5 = sub_404E00(a2);
  v3 = sub_404E00(this);
  sub_401D80((int)v3, (int)v5);
  return sub_405CD0(a2);
}

