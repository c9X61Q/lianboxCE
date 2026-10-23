// lian86.exe @ 0x004108f0  size=86  name=sub_4108F0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __cdecl sub_4108F0(_DWORD *a1)
{
  _DWORD *v1; // ecx
  int v2; // edx
  _DWORD *v4; // ecx
  int v5; // edx

  if ( a1 == nullptr )
    return -2;
  if ( a1[8] == 0 )
    return -2;
  if ( a1[9] == 0 )
    return -2;
  v1 = (_DWORD *)a1[7];
  if ( v1 == nullptr )
    return -2;
  if ( (_DWORD *)*v1 != a1 )
    return -2;
  v2 = v1[1];
  if ( v2 < 16180 || v2 > 16211 )
    return -2;
  v1[11] = 0;
  v1[12] = 0;
  v1[13] = 0;
  if ( a1[8] == 0 )
    return -2;
  if ( a1[9] == 0 )
    return -2;
  v4 = (_DWORD *)a1[7];
  if ( v4 == nullptr )
    return -2;
  if ( (_DWORD *)*v4 != a1 )
    return -2;
  v5 = v4[1];
  if ( v5 < 16180 || v5 > 16211 )
    return -2;
  v4[8] = 0;
  a1[5] = 0;
  a1[2] = 0;
  a1[6] = 0;
  if ( v4[3] != 0 )
    a1[12] = v4[3] & 1;
  v4[1] = 16180;
  v4[28] = v4 + 333;
  v4[21] = v4 + 333;
  v4[20] = v4 + 333;
  v4[2] = 0;
  v4[4] = 0;
  v4[6] = 0x8000;
  v4[9] = 0;
  v4[15] = 0;
  v4[16] = 0;
  v4[1777] = 1;
  v4[1778] = -1;
  return 0;
}

