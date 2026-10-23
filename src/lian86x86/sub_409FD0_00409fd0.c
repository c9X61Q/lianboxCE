// lian86.exe @ 0x00409fd0  size=23  name=sub_409FD0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

LPTOP_LEVEL_EXCEPTION_FILTER sub_409FD0()
{
  LPTOP_LEVEL_EXCEPTION_FILTER result; // eax

  result = SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
  lpTopLevelExceptionFilter = nullptr;
  return result;
}

