// gettime.exe @ 0x407d00 size=513

_DWORD *__thiscall std::stringbuf::seekoff(int this, _DWORD *a2, __int64 a3, int a4, char a5)
{
  int v6; // eax
  __int64 v7; // [esp+14h] [ebp-2Ch]
  int v8; // [esp+20h] [ebp-20h]
  int v9; // [esp+24h] [ebp-1Ch]
  unsigned int v10; // [esp+28h] [ebp-18h]
  int v11; // [esp+30h] [ebp-10h]
  int v12; // [esp+38h] [ebp-8h]
  __int64 v14; // [esp+4Ch] [ebp+Ch]

  v11 = unknown_libname_36((_DWORD **)this);
  if ( (*(_DWORD *)(this + 60) & 2) != 0 )
    v10 = 0;
  else
    v10 = unknown_libname_39((_DWORD **)this);
  if ( v10 != 0 && *(_DWORD *)(this + 56) < v10 )
    *(_DWORD *)(this + 56) = v10;
  v12 = unknown_libname_32((_DWORD **)this);
  v9 = *(_DWORD *)(this + 56) - v12;
  if ( a4 != 0 )
  {
    if ( a4 == 1 )
    {
      if ( (a5 & 3) == 3 )
        goto LABEL_30;
      if ( (a5 & 1) != 0 )
      {
        if ( v11 == 0 && v12 != 0 )
          goto LABEL_30;
        v7 = v11 - v12;
      }
      else
      {
        if ( (a5 & 2) == 0 || v10 == 0 && v12 != 0 )
          goto LABEL_30;
        v7 = (int)(v10 - v12);
      }
    }
    else
    {
      if ( a4 != 2 )
      {
LABEL_30:
        std::fpos<_Mbstatet>::fpos<_Mbstatet>(a2, -1, -1);
        return a2;
      }
      v7 = v9;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( v7 + a3 > (unsigned __int64)v9 )
    goto LABEL_30;
  v14 = v7 + a3;
  if ( v14 != 0 && ((a5 & 1) != 0 && v11 == 0 || (a5 & 2) != 0 && v10 == 0) )
    goto LABEL_30;
  v8 = v12 + v14;
  if ( (a5 & 1) != 0 && v11 != 0 )
    std::streambuf::setg(v12, v8, *(_DWORD *)(this + 56));
  if ( (a5 & 2) != 0 && v10 != 0 )
  {
    v6 = std::streambuf::epptr((_DWORD **)this);
    std::streambuf::setp(v12, v8, v6);
  }
  std::fpos<_Mbstatet>::fpos<_Mbstatet>(a2, v14, SHIDWORD(v14));
  return a2;
}

