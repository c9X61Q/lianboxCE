// busybox.exe @ 0x45a914 size=78

BOOL sub_45A914()
{
  HANDLE hConsoleOutput; // ebx
  BOOL result; // eax
  struct _CONSOLE_SCREEN_BUFFER_INFO ConsoleScreenBufferInfo; // [esp+Ah] [ebp-1Ah] BYREF

  hConsoleOutput = sub_433614();
  result = GetConsoleScreenBufferInfo(hConsoleOutput, &ConsoleScreenBufferInfo);
  if ( result )
  {
    SetConsoleCursorPosition(hConsoleOutput, 0);
    return sub_41C9D4(ConsoleScreenBufferInfo.dwSize.Y * ConsoleScreenBufferInfo.dwSize.X, 0);
  }
  return result;
}

