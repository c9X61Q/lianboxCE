// gettime.exe @ 0x407520 size=96

int __thiscall std::string::max_size(_Cnd_internal_imp_t *this)
{
  int v2; // [esp+0h] [ebp-18h] BYREF
  int v3; // [esp+4h] [ebp-14h] BYREF
  int v4; // [esp+8h] [ebp-10h]
  int v5; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD v6[2]; // [esp+10h] [ebp-8h] BYREF

  v6[1] = this;
  sub_404E00(this);
  v5 = std::numeric_limits<unsigned int>::max();
  v6[0] = 16;
  v4 = *unknown_libname_5(&v5, v6);
  v3 = v4 - 1;
  v2 = unknown_libname_37();
  return *unknown_libname_6(&v2, &v3);
}

