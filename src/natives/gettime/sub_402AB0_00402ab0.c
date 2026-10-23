// gettime.exe @ 0x402ab0 size=87

_Cnd_internal_imp_t *__thiscall sub_402AB0(_Cnd_internal_imp_t *this, size_t Size, char a3)
{
  unsigned __int8 v5; // [esp+Ah] [ebp-2h]
  char v6; // [esp+Bh] [ebp-1h] BYREF

  sub_4013F0(this, v5);
  std::_Fake_proxy_ptr_impl::_Fake_proxy_ptr_impl(
    (std::_Fake_proxy_ptr_impl *)&v6,
    (const struct std::_Fake_allocator *)&unk_4291C0,
    this);
  sub_405FC0(this);
  std::string::assign(Size, a3);
  unknown_libname_10(&v6);
  return this;
}

