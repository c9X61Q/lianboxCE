// lian86.exe @ 0x00405307  size=6  name=wcsstr
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
wchar_t *__cdecl wcsstr(const wchar_t *Str, const wchar_t *SubStr)
{
  return __imp_wcsstr(Str, SubStr);
}

