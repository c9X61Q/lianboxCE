// lian86.exe @ 0x00409fb0  size=22  name=sub_409FB0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

LPTOP_LEVEL_EXCEPTION_FILTER __stdcall sub_409FB0(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)
{
  LPTOP_LEVEL_EXCEPTION_FILTER result; // eax

  dword_418150 = (int)lpTopLevelExceptionFilter;
  if ( sub_409F70 != nullptr )
  {
    if ( ::lpTopLevelExceptionFilter != nullptr )
    {
      return SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)sub_409F70);
    }
    else
    {
      result = SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)sub_409F70);
      ::lpTopLevelExceptionFilter = result;
    }
  }
  else
  {
    result = SetUnhandledExceptionFilter(::lpTopLevelExceptionFilter);
    ::lpTopLevelExceptionFilter = nullptr;
  }
  return result;
}

