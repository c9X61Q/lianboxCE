// gettime.exe @ 0x407f30 size=331

_DWORD *__thiscall std::stringbuf::seekpos(int this, _DWORD *a2, __int64 a3, int a4, int a5, int a6, int a7, char a8)
{
  int v9; // eax
  unsigned __int64 v10; // [esp+8h] [ebp-24h]
  int v11; // [esp+14h] [ebp-18h]
  int v12; // [esp+18h] [ebp-14h]
  unsigned int v13; // [esp+1Ch] [ebp-10h]
  int v14; // [esp+20h] [ebp-Ch]

  v10 = std::fpos<_Mbstatet>::operator __int64(&a3);
  v12 = unknown_libname_36((_DWORD **)this);
  if ( (*(_DWORD *)(this + 60) & 2) != 0 )
    v13 = 0;
  else
    v13 = unknown_libname_39((_DWORD **)this);
  if ( v13 != 0 && *(_DWORD *)(this + 56) < v13 )
    *(_DWORD *)(this + 56) = v13;
  v14 = unknown_libname_32((_DWORD **)this);
  if ( v10 > *(_DWORD *)(this + 56) - v14 || v10 != 0 && ((a8 & 1) != 0 && v12 == 0 || (a8 & 2) != 0 && v13 == 0) )
  {
    std::fpos<_Mbstatet>::fpos<_Mbstatet>(a2, -1, -1);
    return a2;
  }
  else
  {
    v11 = v14 + v10;
    if ( (a8 & 1) != 0 && v12 != 0 )
      std::streambuf::setg(v14, v11, *(_DWORD *)(this + 56));
    if ( (a8 & 2) != 0 && v13 != 0 )
    {
      v9 = std::streambuf::epptr((_DWORD **)this);
      std::streambuf::setp(v14, v11, v9);
    }
    std::fpos<_Mbstatet>::fpos<_Mbstatet>(a2, v10, SHIDWORD(v10));
    return a2;
  }
}

