// lian86.exe @ 0x0040d7f0  size=66  name=sub_40D7F0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int *__stdcall sub_40D7F0(int a1)
{
  int *v1; // edx
  int v3; // ecx
  int *v4; // eax

  v1 = nullptr;
  if ( a1 == -1 )
  {
    if ( dword_418168 != 0 )
      return &dword_418170;
  }
  else
  {
    v3 = dword_418168;
    if ( dword_418168 > 0 )
    {
      v4 = &dword_418170;
      do
      {
        if ( *v4 == a1 )
          v1 = v4;
        v4 += 5;
        --v3;
      }
      while ( v3 != 0 );
    }
  }
  return v1;
}

