// lian86.exe @ 0x00405331  size=6  name=wcscmp
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
int __cdecl wcscmp(const wchar_t *String1, const wchar_t *String2)
{
  return __imp_wcscmp(String1, String2);
}

