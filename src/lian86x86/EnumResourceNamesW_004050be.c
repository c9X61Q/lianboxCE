// lian86.exe @ 0x004050be  size=6  name=EnumResourceNamesW
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
BOOL __stdcall EnumResourceNamesW(HMODULE hModule, LPCWSTR lpType, ENUMRESNAMEPROCW lpEnumFunc, LONG_PTR lParam)
{
  return __imp_EnumResourceNamesW(hModule, lpType, lpEnumFunc, lParam);
}

