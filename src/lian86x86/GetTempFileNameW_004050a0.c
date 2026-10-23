// lian86.exe @ 0x004050a0  size=6  name=GetTempFileNameW
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
UINT __stdcall GetTempFileNameW(LPCWSTR lpPathName, LPCWSTR lpPrefixString, UINT uUnique, LPWSTR lpTempFileName)
{
  return __imp_GetTempFileNameW(lpPathName, lpPrefixString, uUnique, lpTempFileName);
}

