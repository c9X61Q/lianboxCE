// lian86.exe @ 0x00405700  size=84  name=w2a
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

CHAR *__stdcall w2a(LPCWCH lpWideCharStr)
{
  const WCHAR *v1; // esi
  int v2; // ebp
  CHAR *v3; // eax
  CHAR *v4; // edi

  v1 = lpWideCharStr;
  if ( lpWideCharStr == nullptr )
    v1 = (const WCHAR *)&unk_413024;
  v2 = WideCharToMultiByte(0xFDE9u, 0, v1, -1, nullptr, 0, nullptr, nullptr);
  v3 = (CHAR *)xmalloc(v2);
  v4 = v3;
  if ( v3 != nullptr )
    WideCharToMultiByte(0xFDE9u, 0, v1, -1, v3, v2, nullptr, nullptr);
  return v4;
}

