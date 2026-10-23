// lian86.exe @ 0x004050a6  size=6  name=LoadLibraryExW
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
HMODULE __stdcall LoadLibraryExW(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)
{
  return __imp_LoadLibraryExW(lpLibFileName, hFile, dwFlags);
}

