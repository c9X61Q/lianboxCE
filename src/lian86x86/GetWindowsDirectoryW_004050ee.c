// lian86.exe @ 0x004050ee  size=6  name=GetWindowsDirectoryW
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
UINT __stdcall GetWindowsDirectoryW(LPWSTR lpBuffer, UINT uSize)
{
  return __imp_GetWindowsDirectoryW(lpBuffer, uSize);
}

