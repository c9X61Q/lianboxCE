// lian86.exe @ 0x00408e58  size=66  name=sub_408E58
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

wchar_t *__cdecl sub_408E58(wchar_t *String)
{
  size_t v1; // eax
  wchar_t *v2; // eax
  wchar_t *v3; // edi

  if ( String == nullptr )
    return nullptr;
  v1 = wcslen(String);
  v2 = (wchar_t *)HeapAlloc(hHeap, 0, 2 * v1 + 2);
  v3 = v2;
  if ( v2 == nullptr )
    return nullptr;
  wcscpy(v2, String);
  return v3;
}

