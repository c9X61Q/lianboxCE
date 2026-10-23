// lian86.exe @ 0x004059e0  size=318  name=sub_4059E0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_4059E0(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // edi
  int v2; // ecx
  unsigned int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ebp
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // esi
  int v10; // ecx
  unsigned int v11; // eax
  unsigned __int16 *i; // edi
  int v13; // kr00_4
  int v14; // eax

  v1 = a1;
  v2 = 0;
  v3 = 0;
  if ( a1 == nullptr )
    return v2;
  while ( 1 )
  {
    v4 = *v1;
    if ( v4 != 32 && v4 != 9 )
      break;
    ++v1;
  }
  v5 = *v1;
  if ( v5 == 45 )
  {
    v6 = 1;
LABEL_8:
    ++v1;
    goto LABEL_9;
  }
  v6 = 0;
  if ( v5 == 43 )
    goto LABEL_8;
LABEL_9:
  v7 = *v1;
  if ( v7 == 36 )
  {
    while ( 1 )
    {
      v8 = v1[1];
      ++v1;
      if ( (v8 < 0x30 || v8 > 0x39) && (v8 < 0x41 || v8 > 0x46) && (v8 < 0x61 || v8 > 0x66) )
        break;
      if ( v8 > 0x39 )
      {
        v9 = __PAIR64__(v3, v2) >> 28;
        v10 = 16 * v2;
        if ( v8 < 0x61 )
        {
          v3 = ((int)v8 + __PAIR64__(v9, v10) - 55) >> 32;
          v2 = v8 + v10 - 55;
        }
        else
        {
          v3 = ((int)v8 + __PAIR64__(v9, v10) - 87) >> 32;
          v2 = v8 + v10 - 87;
        }
      }
      else
      {
        v3 = ((int)v8 + 16 * (__PAIR64__(v3, v2) - 3)) >> 32;
        v2 = v8 + 16 * (v2 - 3);
      }
    }
  }
  else if ( v7 == 37 )
  {
    v11 = v1[1];
    for ( i = v1 + 1; v11 >= 0x30; ++i )
    {
      if ( (unsigned __int16)v11 > 0x31u )
        break;
      v13 = (unsigned __int16)v11;
      v11 = i[1];
      v2 = v13 + 2 * (v2 - 24);
    }
  }
  else
  {
    for ( ; v7 >= 0x30; ++v1 )
    {
      if ( (unsigned __int16)v7 > 0x39u )
        break;
      v14 = (unsigned __int16)v7;
      v7 = v1[1];
      v2 = v14 + 10 * v2 - 48;
    }
  }
  if ( v6 != 0 )
    return -v2;
  return v2;
}

