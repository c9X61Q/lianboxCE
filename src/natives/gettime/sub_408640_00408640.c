// gettime.exe @ 0x408640 size=283

__int64 __thiscall sub_408640(_DWORD **this, char *a2, __int64 a3)
{
  __int64 v3; // rax
  void *v4; // eax
  __int64 v6; // [esp+0h] [ebp-1Ch]
  __int64 Size; // [esp+8h] [ebp-14h]
  int v8; // [esp+10h] [ebp-Ch] BYREF
  int v9; // [esp+14h] [ebp-8h] BYREF
  _DWORD **v10; // [esp+18h] [ebp-4h]

  v10 = this;
  v6 = a3;
  while ( a3 > 0 )
  {
    v3 = unknown_libname_15(v10);
    Size = v3;
    if ( v3 <= 0 )
    {
      v9 = ((int (__thiscall *)(_DWORD **))(*v10)[7])(v10);
      v8 = std::numeric_limits<unsigned int>::max();
      if ( unknown_libname_34(&v8, &v9) )
        return v6 - a3;
      *a2++ = std::_Narrow_char_traits<char,int>::to_char_type((int)&v9);
      --a3;
    }
    else
    {
      if ( a3 < v3 )
        Size = a3;
      v4 = (void *)unknown_libname_36(v10);
      unknown_libname_25(a2, v4, Size);
      a2 += Size;
      a3 -= Size;
      std::streambuf::gbump((int)v10, Size);
    }
  }
  return v6 - a3;
}

