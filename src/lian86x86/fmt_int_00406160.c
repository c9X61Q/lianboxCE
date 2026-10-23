// lian86.exe @ 0x00406160  size=113  name=fmt_int
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall fmt_int(__int64 a1, int a2)
{
  __int16 *v3; // esi
  _WORD *v4; // ecx
  __int16 v5; // ax

  if ( (unsigned __int64)(a1 + 0x80000000LL) >> 32 == 0 )
    return sub_4061E0(a1, a2);
  v3 = (__int16 *)sub_40E900(64, a2);
  sub_41206C(v3, a1, HIDWORD(a1));
  v4 = v3 + 1;
  do
    v5 = *v3++;
  while ( v5 != 0 );
  return sub_40EA90(64 - (v3 - v4));
}

