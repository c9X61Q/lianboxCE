// lian86.exe @ 0x0040a82a  size=145  name=sub_40A82A
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void *__stdcall sub_40A82A(int a1, int a2, int a3)
{
  void *v3; // eax
  void *v4; // esi
  int v5; // ebp
  _DWORD *v6; // eax

  if ( a3 == 1 && (v3 = (void *)sub_40A976(a1, a2), v4 = v3, v3 != nullptr) )
  {
    if ( *(_DWORD *)(a1 + 16) != 0 )
      sub_41242A(v3, *(_DWORD *)(a1 + 16));
  }
  else
  {
    v5 = a2 % *(_DWORD *)(a1 + 36);
    v6 = (_DWORD *)sub_40DBFF(*(_DWORD *)(a1 + 56));
    v4 = v6;
    if ( v6 == nullptr )
      return v4;
    v6[1] = a2;
    *v6 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v5);
    *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v5) = v6;
    *(_DWORD *)(a1 + 8) = 0;
    ++*(_DWORD *)(a1 + 40);
    *(_DWORD *)a1 = v6;
    v4 = v6 + 2;
    *(_DWORD *)(a1 + 20) = v5;
  }
  if ( v4 != nullptr )
  {
    memset(v4, 0, *(_DWORD *)(a1 + 28));
    if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
      sub_41252F(v4, *(_DWORD *)(a1 + 16));
  }
  return v4;
}

