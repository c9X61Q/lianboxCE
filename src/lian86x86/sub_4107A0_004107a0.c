// lian86.exe @ 0x004107a0  size=100  name=sub_4107A0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __cdecl sub_4107A0(_DWORD *a1)
{
  void (__cdecl *v1)(_DWORD, int); // ecx
  _DWORD *v2; // eax
  int v3; // edx
  int v4; // eax

  if ( a1 == nullptr )
    return -2;
  if ( a1[8] == 0 )
    return -2;
  v1 = (void (__cdecl *)(_DWORD, int))a1[9];
  if ( v1 == nullptr )
    return -2;
  v2 = (_DWORD *)a1[7];
  if ( v2 == nullptr )
    return -2;
  if ( (_DWORD *)*v2 != a1 )
    return -2;
  v3 = v2[1];
  if ( v3 < 16180 || v3 > 16211 )
    return -2;
  v4 = v2[14];
  if ( v4 != 0 )
    v1(a1[10], v4);
  ((void (__cdecl *)(_DWORD, _DWORD))a1[9])(a1[10], a1[7]);
  a1[7] = 0;
  return 0;
}

