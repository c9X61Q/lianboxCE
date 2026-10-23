// lian86.exe @ 0x0040e780  size=77  name=sub_40E780
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall sub_40E780(LPVOID *a1, wchar_t *String)
{
  size_t v2; // [esp+0h] [ebp-4h]

  if ( String != nullptr )
  {
    v2 = wcslen(String);
    *a1 = HeapAlloc(dword_418788, 0, 2 * v2 + 10);
    sub_40EA40(*a1, String, v2);
  }
}

