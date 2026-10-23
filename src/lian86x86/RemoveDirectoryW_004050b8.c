// lian86.exe @ 0x004050b8  size=6  name=RemoveDirectoryW
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
BOOL __stdcall RemoveDirectoryW(LPCWSTR lpPathName)
{
  return __imp_RemoveDirectoryW(lpPathName);
}

