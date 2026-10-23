// lian86.exe @ 0x0040e7d0  size=176  name=sub_40E7D0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

size_t __stdcall sub_40E7D0(LPVOID *a1, wchar_t *String)
{
  LPVOID v2; // eax
  size_t v4; // [esp+0h] [ebp-4h]

  v4 = 0;
  if ( String != nullptr )
  {
    v4 = wcslen(String);
    if ( *a1 != nullptr )
      v2 = HeapReAlloc(dword_418788, 0, *a1, 2 * v4 + 10);
    else
      v2 = HeapAlloc(dword_418788, 0, 2 * v4 + 10);
    *a1 = v2;
    sub_40EA40(*a1, String, v4);
  }
  else if ( *a1 != nullptr )
  {
    HeapFree(dword_418788, 0, *a1);
    *a1 = nullptr;
  }
  return 2 * v4 + 2;
}

