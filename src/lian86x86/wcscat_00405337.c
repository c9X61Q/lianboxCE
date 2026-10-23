// lian86.exe @ 0x00405337  size=6  name=wcscat
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
wchar_t *__cdecl wcscat(wchar_t *Destination, const wchar_t *Source)
{
  return __imp_wcscat(Destination, Source);
}

