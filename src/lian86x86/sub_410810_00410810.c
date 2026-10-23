// lian86.exe @ 0x00410810  size=187  name=sub_410810
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __cdecl sub_410810(_DWORD *a1, int a2, _BYTE *a3, int a4)
{
  bool v5; // zf
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  int v8; // ebx

  if ( a3 == nullptr || *a3 != 49 || a4 != 56 )
    return -6;
  if ( a1 == nullptr )
    return -2;
  v5 = a1[8] == 0;
  a1[6] = 0;
  if ( v5 )
  {
    a1[8] = sub_412040;
    a1[10] = 0;
  }
  if ( a1[9] == 0 )
    a1[9] = sub_412060;
  v6 = (_DWORD *)((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[10], 1, 7120);
  v7 = v6;
  if ( v6 == nullptr )
    return -4;
  a1[7] = v6;
  *v6 = a1;
  v6[14] = 0;
  v6[1] = 16180;
  v8 = sub_410950(a1, a2);
  if ( v8 != 0 )
  {
    ((void (__cdecl *)(_DWORD, _DWORD *))a1[9])(a1[10], v7);
    a1[7] = 0;
  }
  return v8;
}

