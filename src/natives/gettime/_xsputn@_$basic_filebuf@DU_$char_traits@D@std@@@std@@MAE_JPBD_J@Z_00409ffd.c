// gettime.exe @ 0x409ffd size=212

__int64 __thiscall std::filebuf::xsputn(int this, unsigned __int8 *Src, __int64 a3)
{
  unsigned int v5; // edi
  size_t v6; // esi
  signed int v7; // eax
  int v8; // ecx
  __int64 v9; // kr10_8
  unsigned __int8 *v10; // eax
  unsigned __int64 v11; // kr20_8
  void *v12; // [esp+Ch] [ebp-Ch]

  if ( *(_DWORD *)(this + 56) != 0 )
    return sub_408760((_DWORD **)this, Src, a3);
  v5 = HIDWORD(a3);
  v6 = a3;
  v12 = **(void ***)(this + 32);
  if ( v12 != nullptr )
    v7 = **(_DWORD **)(this + 48);
  else
    v7 = 0;
  v8 = v7 >> 31;
  v9 = v7;
  if ( a3 > 0 )
  {
    if ( v8 >= 0 && (v8 > 0 || v7 != 0) )
    {
      if ( a3 < v7 )
      {
        v7 = a3;
        v9 = a3;
      }
      memmove(v12, Src, v7);
      v5 = (unsigned __int64)(a3 - v9) >> 32;
      v6 = a3 - v9;
      **(_DWORD **)(this + 48) -= v9;
      **(_DWORD **)(this + 32) += v9;
      v10 = &Src[v9];
      if ( a3 - v9 <= 0 )
        return a3 - __PAIR64__(v5, v6);
    }
    else
    {
      v10 = Src;
    }
    if ( *(_DWORD *)(this + 76) != 0 )
    {
      v11 = __PAIR64__(v5, v6) - fwrite(v10, 1u, v6, *(FILE **)(this + 76));
      v5 = HIDWORD(v11);
      v6 = v11;
    }
  }
  return a3 - __PAIR64__(v5, v6);
}

