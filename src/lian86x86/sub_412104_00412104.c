// lian86.exe @ 0x00412104  size=80  name=sub_412104
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_412104(int *a1)
{
  int *v1; // esi
  int v2; // ecx
  int v3; // eax
  int v4; // eax

  v1 = a1;
  v2 = 0;
  if ( a1 != nullptr )
  {
    while ( 1 )
    {
      do
      {
        v4 = *v1;
        if ( *v1 == -1 )
          return v2;
        ++v1;
      }
      while ( v4 < -7 );
      if ( v4 <= -4 )
      {
        v2 = 1;
        goto LABEL_11;
      }
      if ( v4 == -3 )
        break;
      if ( v4 == -2 )
      {
        v3 = v1[3];
        v1 += 4;
LABEL_9:
        v2 = sub_412104(v3);
LABEL_11:
        if ( v2 != 0 )
          return v2;
      }
    }
    v3 = v1[2];
    v1 += 3;
    goto LABEL_9;
  }
  return v2;
}

