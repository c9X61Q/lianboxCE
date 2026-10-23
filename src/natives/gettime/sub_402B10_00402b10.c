// gettime.exe @ 0x402b10 size=82

_Cnd_internal_imp_t *__thiscall sub_402B10(_Cnd_internal_imp_t *this, char *Str)
{
  unsigned __int8 v4; // [esp+Ah] [ebp-2h]
  char v5; // [esp+Bh] [ebp-1h] BYREF

  sub_4013F0(this, v4);
  std::_Fake_proxy_ptr_impl::_Fake_proxy_ptr_impl(
    (std::_Fake_proxy_ptr_impl *)&v5,
    (const struct std::_Fake_allocator *)&unk_4291C0,
    this);
  sub_405FC0(this);
  std::string::assign(Str);
  unknown_libname_10(&v5);
  return this;
}

