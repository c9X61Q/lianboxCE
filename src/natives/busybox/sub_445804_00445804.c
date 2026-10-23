// busybox.exe @ 0x445804 size=67

BOOL __cdecl sub_445804(__int16 a1)
{
  HANDLE hConsoleOutput; // ebx
  BOOL result; // eax
  struct _CONSOLE_SCREEN_BUFFER_INFO ConsoleScreenBufferInfo; // [esp+Ah] [ebp-1Ah] BYREF

  hConsoleOutput = sub_433614();
  result = GetConsoleScreenBufferInfo(hConsoleOutput, &ConsoleScreenBufferInfo);
  if ( result )
  {
    ConsoleScreenBufferInfo.dwCursorPosition.Y += a1;
    return SetConsoleCursorPosition(hConsoleOutput, ConsoleScreenBufferInfo.dwCursorPosition);
  }
  return result;
}

