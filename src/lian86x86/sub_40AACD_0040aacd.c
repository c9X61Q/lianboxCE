// lian86.exe @ 0x0040aacd  size=21  name=sub_40AACD
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_DWORD *__stdcall sub_40AACD(int a1)
{
  _DWORD *result; // eax

  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 48) = 1;
  result = *(_DWORD **)(a1 + 12);
  *result = 0;
  return result;
}

