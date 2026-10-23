// lian86.exe @ 0x004052f5  size=6  name=wcsncmp
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
int __cdecl wcsncmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  return __imp_wcsncmp(String1, String2, MaxCount);
}

