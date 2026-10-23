// lian86.exe @ 0x004050ac  size=6  name=EnumResourceTypesW
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
BOOL __stdcall EnumResourceTypesW(HMODULE hModule, ENUMRESTYPEPROCW lpEnumFunc, LONG_PTR lParam)
{
  return __imp_EnumResourceTypesW(hModule, lpEnumFunc, lParam);
}

