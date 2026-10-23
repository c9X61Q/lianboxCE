// lian86.exe @ 0x00412840  size=136  name=sub_412840
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

CHAR *__stdcall sub_412840(LPCWCH lpWideCharStr)
{
  int v1; // ebp
  int v2; // eax
  int v3; // ebx
  CHAR *v4; // eax
  CHAR *v5; // edi
  CHAR *result; // eax

  if ( lpWideCharStr != nullptr
    && (v1 = wcslen(lpWideCharStr) + 1,
        v2 = WideCharToMultiByte(0xFDE9u, 0, lpWideCharStr, v1, nullptr, 0, nullptr, nullptr),
        v3 = v2,
        v2 != 0)
    && (v4 = (CHAR *)malloc(v2 + 1), v5 = v4, v4 != nullptr) )
  {
    v4[WideCharToMultiByte(0xFDE9u, 0, lpWideCharStr, v1, v4, v3, nullptr, nullptr)] = 0;
    return v5;
  }
  else
  {
    result = (CHAR *)malloc(1u);
    *result = 0;
  }
  return result;
}

