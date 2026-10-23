// gettime.exe @ 0x402a10 size=96

void *__thiscall sub_402A10(void *this, int a2)
{
  int v2; // eax
  unsigned __int8 v5; // [esp+9h] [ebp-3h]
  char v6; // [esp+Ah] [ebp-2h] BYREF
  char v7; // [esp+Bh] [ebp-1h] BYREF

  sub_404E00(a2);
  v2 = unknown_libname_1((int)&v6);
  sub_401440(this, v5, v2);
  std::_Fake_proxy_ptr_impl::_Fake_proxy_ptr_impl(
    (std::_Fake_proxy_ptr_impl *)&v7,
    (const struct std::_Fake_allocator *)&unk_4291C0,
    (const struct std::_Container_base0 *)this);
  sub_404630(a2);
  unknown_libname_10(&v7);
  return this;
}

