// lian86.exe @ 0x0040ce8a  size=102  name=sub_40CE8A
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void *__cdecl sub_40CE8A(int a1, _DWORD *a2)
{
  unsigned int v2; // ecx
  int v3; // eax
  _BYTE v5[8]; // [esp+8h] [ebp-8h] BYREF

  sub_40CE4F((int)v5, (int)(a2 + 4), 8);
  v2 = (a2[4] >> 3) & 0x3F;
  v3 = 56;
  if ( v2 >= 0x38 )
    v3 = 120;
  sub_40D632(a2, &unk_417128, v3 - v2);
  sub_40D632(a2, v5, 8);
  sub_40CE4F(a1, (int)a2, 16);
  return memset(a2, 0, 0x58u);
}

