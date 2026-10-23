// lian86.exe @ 0x00405301  size=6  name=wcsncpy
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
wchar_t *__cdecl wcsncpy(wchar_t *Destination, const wchar_t *Source, size_t Count)
{
  return __imp_wcsncpy(Destination, Source, Count);
}

