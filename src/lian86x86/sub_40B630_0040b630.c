// lian86.exe @ 0x0040b630  size=108  name=sub_40B630
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

DWORD __stdcall sub_40B630(int a1, void *lpBuffer, DWORD nNumberOfBytesToWrite)
{
  int v3; // eax
  DWORD NumberOfBytesWritten; // [esp+4h] [ebp-4h] BYREF

  NumberOfBytesWritten = 0;
  if ( lpBuffer == nullptr )
    return 0;
  if ( nNumberOfBytesToWrite == 0 )
    return 0;
  v3 = sub_40DAD9(dword_418784, a1);
  if ( v3 != 0 )
  {
    if ( *(_DWORD *)(v3 + 4) != 0 )
      return sub_40B6A0(v3, lpBuffer, nNumberOfBytesToWrite);
    WriteFile(*(HANDLE *)v3, lpBuffer, nNumberOfBytesToWrite, &NumberOfBytesWritten, nullptr);
  }
  return NumberOfBytesWritten;
}

