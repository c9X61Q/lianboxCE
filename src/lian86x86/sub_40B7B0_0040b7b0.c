// lian86.exe @ 0x0040b7b0  size=100  name=sub_40B7B0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

CHAR *__stdcall sub_40B7B0(UINT CodePage, LPCWCH lpWideCharStr, int *a3)
{
  int v3; // eax
  CHAR *result; // eax
  CHAR *v5; // esi

  v3 = WideCharToMultiByte(CodePage, 0, lpWideCharStr, -1, nullptr, 0, nullptr, nullptr);
  *a3 = v3;
  if ( v3 == 0 )
    return nullptr;
  result = (CHAR *)HeapAlloc(hHeap, 0, v3 + 1);
  v5 = result;
  if ( result != nullptr )
  {
    WideCharToMultiByte(CodePage, 0, lpWideCharStr, -1, result, *a3, nullptr, nullptr);
    --*a3;
    return v5;
  }
  return result;
}

