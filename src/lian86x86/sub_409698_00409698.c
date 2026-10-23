// lian86.exe @ 0x00409698  size=97  name=sub_409698
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_409698(int a1)
{
  WCHAR *v1; // edi
  DWORD ModuleFileNameW; // esi

  v1 = (WCHAR *)sub_40E900(260, a1);
  ModuleFileNameW = GetModuleFileNameW(hInstance, v1, 0x104u);
  if ( wcscmp(v1, L"\\\\?\\") == 0 )
  {
    memmove(v1, v1 + 4, 2 * ModuleFileNameW - 8);
    ModuleFileNameW -= 4;
  }
  sub_40EA90(260 - ModuleFileNameW);
  v1[ModuleFileNameW] = 0;
  return 0;
}

