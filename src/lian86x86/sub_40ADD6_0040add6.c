// lian86.exe @ 0x0040add6  size=99  name=sub_40ADD6
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40ADD6(int a1)
{
  WCHAR *v1; // edi
  DWORD TempPathW; // ebx
  HMODULE LibraryW; // eax
  HMODULE v4; // ebp
  DWORD (__stdcall *GetLongPathNameW)(LPCWSTR, LPWSTR, DWORD); // eax

  v1 = (WCHAR *)sub_40E900(260, a1);
  TempPathW = GetTempPathW(0x104u, v1);
  LibraryW = LoadLibraryW(L"Kernel32.DLL");
  v4 = LibraryW;
  if ( LibraryW != nullptr )
  {
    GetLongPathNameW = (DWORD (__stdcall *)(LPCWSTR, LPWSTR, DWORD))GetProcAddress(LibraryW, "GetLongPathNameW");
    if ( GetLongPathNameW != nullptr )
      TempPathW = GetLongPathNameW(v1, v1, 260);
    FreeLibrary(v4);
  }
  sub_40EA90(260 - TempPathW);
  v1[TempPathW] = 0;
  return 0;
}

