// lian86.exe @ 0x0040532b  size=6  name=wcscpy
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
wchar_t *__cdecl wcscpy(wchar_t *Destination, const wchar_t *Source)
{
  return __imp_wcscpy(Destination, Source);
}

