// lian86.exe @ 0x004050f4  size=6  name=GetSystemDirectoryW
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
UINT __stdcall GetSystemDirectoryW(LPWSTR lpBuffer, UINT uSize)
{
  return __imp_GetSystemDirectoryW(lpBuffer, uSize);
}

