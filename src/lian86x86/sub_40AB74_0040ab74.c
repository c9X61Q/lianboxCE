// lian86.exe @ 0x0040ab74  size=158  name=sub_40AB74
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_DWORD *__stdcall sub_40AB74(int *a1)
{
  _DWORD *result; // eax
  _DWORD *v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // ecx

  result = (_DWORD *)sub_40DBFF(a1[7]);
  v2 = result;
  if ( result != nullptr )
  {
    memset(result, 0, a1[10]);
    if ( *((_BYTE *)a1 + 49) != 0 )
      sub_41252F(v2 + 2, a1[6]);
    ++a1[4];
    v3 = a1[2];
    if ( v3 != 0 )
    {
      v2[1] = v3;
      *v2 = *(_DWORD *)a1[2];
      v5 = *(_DWORD *)a1[2];
      if ( v5 != 0 )
        *(_DWORD *)(v5 + 4) = v2;
      *(_DWORD *)a1[2] = v2;
      ++a1[5];
      a1[2] = (int)v2;
    }
    else
    {
      if ( *a1 != 0 )
        *(_DWORD *)(*a1 + 4) = v2;
      v4 = *a1;
      a1[2] = (int)v2;
      *v2 = v4;
      v2[1] = 0;
      a1[5] = 0;
      *((_BYTE *)a1 + 48) = 0;
    }
    v6 = (_DWORD *)a1[2];
    if ( v6[1] == 0 )
      *a1 = (int)v6;
    if ( *v6 == 0 )
      a1[1] = (int)v6;
    *(_DWORD *)a1[3] = v6;
    return v2 + 2;
  }
  return result;
}

