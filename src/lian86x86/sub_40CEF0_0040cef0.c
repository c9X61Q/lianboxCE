// lian86.exe @ 0x0040cef0  size=40  name=sub_40CEF0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_DWORD *__cdecl sub_40CEF0(_DWORD *a1)
{
  a1[5] = 0;
  a1[4] = 0;
  *a1 = 1732584193;
  a1[1] = -271733879;
  a1[2] = -1732584194;
  a1[3] = 271733878;
  return a1;
}

