// lian86.exe @ 0x0040b0c0  size=67  name=sub_40B0C0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

DWORD __stdcall sub_40B0C0(int a1)
{
  DWORD NumberOfBytesWritten; // [esp+4h] [ebp-4h] BYREF

  NumberOfBytesWritten = 0;
  if ( *(_DWORD *)(a1 + 20) != 0 )
    return 0;
  WriteFile(
    *(HANDLE *)a1,
    *(LPCVOID *)(a1 + 4),
    *(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 12),
    &NumberOfBytesWritten,
    nullptr);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 8);
  return NumberOfBytesWritten;
}

