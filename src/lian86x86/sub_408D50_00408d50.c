// lian86.exe @ 0x00408d50  size=91  name=sub_408D50
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_408D50(_WORD *a1, _WORD *a2)
{
  _WORD *v2; // eax
  _WORD *v3; // ecx
  bool v4; // cf
  unsigned __int16 v5; // dx

  v2 = a1;
  if ( a1 != nullptr )
  {
    v3 = a2;
    if ( a2 != nullptr )
    {
      while ( 1 )
      {
        v4 = *v2 < *v3;
        if ( *v2 != *v3 )
          break;
        if ( *v2 == 0 )
          return 0;
        v5 = v2[1];
        v4 = v5 < v3[1];
        if ( v5 != v3[1] )
          break;
        v2 += 2;
        v3 += 2;
        if ( v5 == 0 )
          return 0;
      }
      return v4 ? -1 : 1;
    }
    else
    {
      return 1;
    }
  }
  else if ( a2 != nullptr && *a2 != 0 )
  {
    return -1;
  }
  else
  {
    return 0;
  }
}

