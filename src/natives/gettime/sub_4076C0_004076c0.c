// gettime.exe @ 0x4076c0 size=498

int __thiscall sub_4076C0(int this, int a2)
{
  char v3; // bl
  unsigned int v4; // eax
  int v5; // eax
  void *v6; // eax
  char v7; // bl
  _DWORD *v8; // [esp-4h] [ebp-2Ch]
  size_t v9; // [esp-4h] [ebp-2Ch]
  int v10; // [esp+4h] [ebp-24h] BYREF
  char *v11; // [esp+8h] [ebp-20h]
  unsigned int v12; // [esp+Ch] [ebp-1Ch]
  void *Src; // [esp+10h] [ebp-18h]
  int v14; // [esp+14h] [ebp-14h]
  unsigned int v15; // [esp+18h] [ebp-10h]
  size_t Size; // [esp+1Ch] [ebp-Ch]
  void *v17; // [esp+20h] [ebp-8h]
  _DWORD **v18; // [esp+24h] [ebp-4h]

  v18 = (_DWORD **)this;
  if ( (*(_DWORD *)(this + 60) & 2) != 0 )
    return std::numeric_limits<unsigned int>::max();
  v10 = std::numeric_limits<unsigned int>::max();
  if ( unknown_libname_34(&v10, &a2) )
    return sub_407620((int)&a2);
  v15 = unknown_libname_39(v18);
  v12 = std::streambuf::epptr(v18);
  if ( v15 != 0 && v15 < v12 )
  {
    v3 = std::_Narrow_char_traits<char,int>::to_char_type(&a2);
    *(_BYTE *)std::streambuf::_Pninc(v18) = v3;
    v18[14] = (_DWORD *)(v15 + 1);
    return a2;
  }
  Size = 0;
  Src = (void *)unknown_libname_32(v18);
  if ( v15 != 0 )
    Size = v12 - (_DWORD)Src;
  if ( Size >= 0x20 )
  {
    if ( Size >= 0x3FFFFFFF )
    {
      if ( Size >= 0x7FFFFFFF )
        return std::numeric_limits<unsigned int>::max();
      v14 = 0x7FFFFFFF;
    }
    else
    {
      v14 = 2 * Size;
    }
  }
  else
  {
    v14 = 32;
  }
  v4 = std::allocator<char>::allocate(v14);
  v17 = (void *)unknown_libname_1(v4);
  unknown_libname_25(v17, Src, Size);
  v11 = (char *)v17 + Size;
  v18[14] = (char *)v17 + Size + 1;
  std::streambuf::setp(v17, v11, (char *)v17 + v14);
  if ( ((unsigned int)v18[15] & 4) != 0 )
  {
    std::streambuf::setg(v17, 0, v17);
  }
  else
  {
    v8 = v18[14];
    v5 = unknown_libname_36(v18);
    std::streambuf::setg(v17, (char *)v17 + v5 - (_DWORD)Src, v8);
  }
  if ( ((unsigned int)v18[15] & 1) != 0 )
  {
    v9 = Size;
    v6 = (void *)sub_407A00(Src);
    std::allocator<char>::deallocate(v6, v9);
  }
  v18[15] = (_DWORD *)((unsigned int)v18[15] | 1);
  v7 = std::_Narrow_char_traits<char,int>::to_char_type(&a2);
  *(_BYTE *)std::streambuf::_Pninc(v18) = v7;
  return a2;
}

