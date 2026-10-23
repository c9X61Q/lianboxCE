// lian86.exe @ 0x0040d8a0  size=102  name=sub_40D8A0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40D8A0(_DWORD *a1, int a2)
{
  int v2; // esi
  _WORD *v3; // ecx
  unsigned __int8 *v4; // edx
  int v5; // eax

  v2 = 0;
  if ( a1 != nullptr )
    v2 = *a1 / 8;
  v3 = (_WORD *)sub_40E900(2 * v2, a2);
  if ( v2 > 0 )
  {
    v4 = (unsigned __int8 *)(a1 + 1);
    do
    {
      v3 += 2;
      v5 = *v4++ >> 4;
      *(v3 - 2) = byte_4136F8[v5];
      *(v3 - 1) = byte_4136F8[*(v4 - 1) & 0xF];
      --v2;
    }
    while ( v2 != 0 );
  }
  *v3 = 0;
  return 0;
}

