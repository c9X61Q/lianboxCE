// lian86.exe @ 0x00405088  size=6  name=SetConsoleCtrlHandler
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
BOOL __stdcall SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine, BOOL Add)
{
  return __imp_SetConsoleCtrlHandler(HandlerRoutine, Add);
}

