// lian86.exe @ 0x0040e6c0  size=91  name=str_append_w
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

size_t __stdcall str_append_w(wchar_t *String)
{
  int v2; // [esp+0h] [ebp-8h]
  size_t v3; // [esp+4h] [ebp-4h]

  v3 = 0;
  if ( String != nullptr )
    v3 = wcslen(String);
  v2 = sub_40E900(v3, -1);
  if ( String != nullptr )
    return sub_40EA40(v2, String, v3);
  *(_WORD *)(v2 + 2 * v3) = 0;
  return v3;
}

