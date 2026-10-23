// gettime.exe @ 0x408760 size=281

__int64 __thiscall sub_408760(_DWORD **this, unsigned __int8 *Src, __int64 a3)
{
  __int64 v3; // rax
  void *v4; // eax
  int v5; // eax
  __int64 v7; // [esp+0h] [ebp-1Ch]
  __int64 Size; // [esp+8h] [ebp-14h]
  int v9; // [esp+10h] [ebp-Ch] BYREF
  int v10; // [esp+14h] [ebp-8h] BYREF
  _DWORD **v11; // [esp+18h] [ebp-4h]

  v11 = this;
  v7 = a3;
  while ( a3 > 0 )
  {
    v3 = unknown_libname_19(v11);
    Size = v3;
    if ( v3 <= 0 )
    {
      v5 = std::_Narrow_char_traits<char,int>::to_char_type(Src);
      v10 = ((int (__thiscall *)(_DWORD **, int))(*v11)[3])(v11, v5);
      v9 = std::numeric_limits<unsigned int>::max();
      if ( unknown_libname_34(&v9, &v10) )
        return v7 - a3;
      ++Src;
      --a3;
    }
    else
    {
      if ( a3 < v3 )
        Size = a3;
      v4 = (void *)unknown_libname_39(v11);
      unknown_libname_25(v4, Src, Size);
      Src += Size;
      a3 -= Size;
      std::streambuf::pbump((int)v11, Size);
    }
  }
  return v7 - a3;
}

