// lian86.exe @ 0x004050e8  size=6  name=GetShortPathNameW
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
DWORD __stdcall GetShortPathNameW(LPCWSTR lpszLongPath, LPWSTR lpszShortPath, DWORD cchBuffer)
{
  return __imp_GetShortPathNameW(lpszLongPath, lpszShortPath, cchBuffer);
}

