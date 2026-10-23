// lian86.exe @ 0x0040ae39  size=46  name=sub_40AE39
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL __stdcall sub_40AE39(LPCWSTR lpFileName, char a2)
{
  if ( lpFileName == nullptr )
    return false;
  if ( (a2 & 2) != 0 )
    SetFileAttributesW(lpFileName, 0x80u);
  return DeleteFileW(lpFileName);
}

