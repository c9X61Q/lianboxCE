// lian86.exe @ 0x00410950  size=175  name=sub_410950
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __cdecl sub_410950(_DWORD *a1, int a2)
{
  void (__cdecl *v2)(_DWORD, _DWORD); // ecx
  _DWORD *v3; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // ebp

  if ( a1 == nullptr )
    return -2;
  if ( a1[8] == 0 )
    return -2;
  v2 = (void (__cdecl *)(_DWORD, _DWORD))a1[9];
  if ( v2 == nullptr )
    return -2;
  v3 = (_DWORD *)a1[7];
  if ( v3 == nullptr )
    return -2;
  if ( (_DWORD *)*v3 != a1 )
    return -2;
  v4 = v3[1];
  if ( v4 < 16180 || v4 > 16211 )
    return -2;
  v5 = a2;
  if ( a2 >= 0 )
  {
    v6 = (a2 >> 4) + 5;
    if ( a2 < 48 )
      v5 = a2 & 0xF;
  }
  else
  {
    v6 = 0;
    v5 = -a2;
  }
  if ( v5 != 0 && (v5 < 8 || v5 > 15) )
    return -2;
  if ( v3[14] != 0 && v3[10] != v5 )
  {
    v2(a1[10], v3[14]);
    v3[14] = 0;
  }
  v3[3] = v6;
  v3[10] = v5;
  return sub_4108F0(a1);
}

