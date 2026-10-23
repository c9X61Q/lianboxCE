// lian86.exe @ 0x00405760  size=137  name=sub_405760
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_405760(_WORD *a1, _WORD *a2)
{
  _WORD *v2; // eax
  int v3; // edi
  _WORD *v4; // edx
  __int16 v5; // cx
  _WORD *v6; // ecx
  _WORD *v7; // ebx
  __int16 v8; // dx

  v2 = a1;
  v3 = 0;
  if ( a1 == nullptr )
    return 0;
  v4 = a2;
  if ( a2 == nullptr )
    return 0;
  if ( *a2 != 0 )
  {
    v5 = *a1;
    if ( *a1 != 0 )
    {
      while ( 1 )
      {
        ++v2;
        if ( v5 == *a2 )
          break;
LABEL_14:
        v5 = *v2;
        if ( *v2 == 0 )
          return v3;
      }
      v6 = v4 + 1;
      v7 = v2;
      v8 = *v2;
      if ( *v2 != 0 )
      {
        while ( *v6 != 0 )
        {
          if ( v8 == *v6 )
          {
            v8 = v2[1];
            ++v2;
            ++v6;
            if ( v8 != 0 )
              continue;
          }
          goto LABEL_10;
        }
      }
      else
      {
LABEL_10:
        if ( *v6 != 0 )
        {
          v2 = v7;
          goto LABEL_13;
        }
      }
      ++v3;
LABEL_13:
      v4 = a2;
      goto LABEL_14;
    }
  }
  return 0;
}

