// lian86.exe @ 0x0040d6cd  size=30  name=sub_40D6CD
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

char __cdecl sub_40D6CD(_BYTE *a1, int a2, int a3)
{
  int v3; // edx
  _BYTE *v4; // ecx
  char result; // al

  v3 = a3;
  if ( a3 != 0 )
  {
    v4 = a1;
    do
    {
      result = v4[a2 - (_DWORD)a1];
      *v4++ = result;
      --v3;
    }
    while ( v3 != 0 );
  }
  return result;
}

