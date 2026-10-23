// lian86.exe @ 0x00402033  size=53  name=enum_types_cb
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL __stdcall enum_types_cb(HMODULE hModule, LPWSTR lpType, LONG_PTR lParam)
{
  mutex_enter();
  if ( lpType == (LPWSTR)10 )
    EnumResourceNamesW(hModule, (LPCWSTR)0xA, enum_names_cb, 0);
  return true;
}

