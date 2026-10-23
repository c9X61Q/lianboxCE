// lian86.exe @ 0x0040552c  size=71  name=sub_40552C
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL __cdecl sub_40552C(_DWORD *a1)
{
  HMODULE ModuleHandleW; // eax
  FARPROC RtlGetVersion; // eax

  memset(a1, 0, 0x11Cu);
  *a1 = 284;
  ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
  return ModuleHandleW != nullptr
      && (RtlGetVersion = GetProcAddress(ModuleHandleW, "RtlGetVersion")) != nullptr
      && ((int (__stdcall *)(_DWORD *))RtlGetVersion)(a1) == 0;
}

