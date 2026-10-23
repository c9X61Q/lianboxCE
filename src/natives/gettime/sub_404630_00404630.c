// gettime.exe @ 0x404630 size=255

unsigned int __thiscall sub_404630(void *this, int a2)
{
  unsigned int result; // eax
  void *v3; // eax
  void *v4; // [esp-8h] [ebp-34h]
  size_t v5; // [esp-4h] [ebp-30h]
  int v6; // [esp+4h] [ebp-28h] BYREF
  int v7; // [esp+8h] [ebp-24h] BYREF
  unsigned int v8; // [esp+Ch] [ebp-20h]
  int v9; // [esp+10h] [ebp-1Ch] BYREF
  void *Src; // [esp+14h] [ebp-18h]
  int v11; // [esp+18h] [ebp-14h]
  void *v12; // [esp+1Ch] [ebp-10h]
  unsigned int v13; // [esp+20h] [ebp-Ch]
  void *v14; // [esp+24h] [ebp-8h]
  bool v15; // [esp+2Ah] [ebp-2h]
  bool v16; // [esp+2Bh] [ebp-1h]

  v12 = this;
  v11 = a2;
  v13 = *(_DWORD *)(a2 + 16);
  Src = (void *)unknown_libname_18(a2);
  v14 = v12;
  v16 = v13 < 0x10;
  v15 = v13 < 0x10;
  if ( v13 >= 0x10 )
  {
    sub_404E00(v12);
    v7 = std::string::max_size(v12);
    v6 = v13 | 0xF;
    v8 = *unknown_libname_6(&v6, &v7);
    v9 = std::allocator<char>::allocate(v8 + 1);
    sub_4018E0((int)v14, (int)&v9);
    v5 = v13 + 1;
    v4 = Src;
    v3 = (void *)unknown_libname_1(v9);
    unknown_libname_25(v3, v4, v5);
    *((_DWORD *)v14 + 4) = v13;
    result = v8;
    *((_DWORD *)v14 + 5) = v8;
  }
  else
  {
    unknown_libname_25(v14, Src, 0x10u);
    result = v13;
    *((_DWORD *)v14 + 4) = v13;
    *((_DWORD *)v14 + 5) = 15;
  }
  return result;
}

