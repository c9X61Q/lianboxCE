// lian86.exe @ 0x0040530d  size=6  name=_wcsnicmp
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
int __cdecl wcsnicmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  return _wcsnicmp(String1, String2, MaxCount);
}

