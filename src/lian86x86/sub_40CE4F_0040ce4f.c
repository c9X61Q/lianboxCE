// lian86.exe @ 0x0040ce4f  size=59  name=sub_40CE4F
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __cdecl sub_40CE4F(int a1, int a2, int a3)
{
  _BYTE *v3; // ecx
  char *v4; // edx
  unsigned int v5; // esi
  char v6; // al

  if ( a3 != 0 )
  {
    v3 = (_BYTE *)(a1 + 1);
    v4 = (char *)(a2 + 2);
    v5 = ((unsigned int)(a3 - 1) >> 2) + 1;
    do
    {
      *(v3 - 1) = *(v4 - 2);
      *v3 = *(v4 - 1);
      v3 += 4;
      v6 = *v4;
      v4 += 4;
      *(v3 - 3) = v6;
      *(v3 - 2) = *(v4 - 3);
      --v5;
    }
    while ( v5 != 0 );
  }
}

