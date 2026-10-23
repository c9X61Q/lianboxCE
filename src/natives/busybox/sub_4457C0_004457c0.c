// busybox.exe @ 0x4457c0 size=67

BOOL __usercall sub_4457C0@<eax>(__int16 a1@<ax>)
{
  HANDLE hConsoleOutput; // ebx
  BOOL result; // eax
  struct _CONSOLE_SCREEN_BUFFER_INFO ConsoleScreenBufferInfo; // [esp+Ah] [ebp-1Eh] BYREF

  hConsoleOutput = sub_433614();
  result = GetConsoleScreenBufferInfo(hConsoleOutput, &ConsoleScreenBufferInfo);
  if ( result )
  {
    ConsoleScreenBufferInfo.dwCursorPosition.X += a1;
    return SetConsoleCursorPosition(hConsoleOutput, ConsoleScreenBufferInfo.dwCursorPosition);
  }
  return result;
}

