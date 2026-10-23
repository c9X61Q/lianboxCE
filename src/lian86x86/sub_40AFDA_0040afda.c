// lian86.exe @ 0x0040afda  size=18  name=sub_40AFDA
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL __stdcall sub_40AFDA(const WCHAR *a1)
{
  return a1 != nullptr && SetCurrentDirectoryW(a1);
}

