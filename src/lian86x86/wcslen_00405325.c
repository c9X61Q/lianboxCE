// lian86.exe @ 0x00405325  size=6  name=wcslen
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
size_t __cdecl wcslen(const wchar_t *String)
{
  return __imp_wcslen(String);
}

