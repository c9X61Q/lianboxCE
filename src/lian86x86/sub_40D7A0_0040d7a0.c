// lian86.exe @ 0x0040d7a0  size=78  name=sub_40D7A0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40D7A0(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int result; // eax

  v4 = 0;
  v5 = sub_40D7F0(a3);
  v6 = v5;
  if ( v5 != 0 )
  {
    v7 = (*(int (__stdcall **)(_DWORD, int))(v5 + 4))(0, 1);
    v4 = v7;
    if ( v7 != 0 )
    {
      (*(void (__stdcall **)(int, int, int))(v6 + 8))(v7, a1, a2);
      (*(void (__stdcall **)(int))(v6 + 12))(v4);
    }
  }
  result = sub_40D8A0(v4, a4);
  if ( v4 != 0 )
    return (*(int (__stdcall **)(int))(v6 + 16))(v4);
  return result;
}

