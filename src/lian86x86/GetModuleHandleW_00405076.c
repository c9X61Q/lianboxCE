// lian86.exe @ 0x00405076  size=6  name=GetModuleHandleW
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
HMODULE __stdcall GetModuleHandleW(LPCWSTR lpModuleName)
{
  return __imp_GetModuleHandleW(lpModuleName);
}

