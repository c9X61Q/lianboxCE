// lian86.exe @ 0x00409f4c  size=32  name=sub_409F4C
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

DWORD __stdcall sub_409F4C(HANDLE *a1)
{
  DWORD ExitCode; // [esp+0h] [ebp-4h] BYREF

  ExitCode = 0;
  GetExitCodeProcess(*a1, &ExitCode);
  return ExitCode;
}

