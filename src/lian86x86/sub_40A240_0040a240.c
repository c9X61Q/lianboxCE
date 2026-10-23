// lian86.exe @ 0x0040a240  size=75  name=sub_40A240
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40A240(const unsigned __int16 *Src, int a2)
{
  unsigned int v2; // esi
  _WORD *v3; // eax
  _WORD *v4; // edi

  v2 = 0;
  if ( Src != nullptr )
    v2 = wcslen(Src);
  v3 = (_WORD *)sub_40E900(v2, a2);
  v4 = v3;
  if ( v2 != 0 )
    memcpy(v3, Src, 2 * v2);
  v4[v2] = 0;
  return 0;
}

