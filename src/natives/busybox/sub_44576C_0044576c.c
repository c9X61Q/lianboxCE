// busybox.exe @ 0x44576c size=81

BOOL __usercall sub_44576C@<eax>(__int16 a1@<ax>, int a2@<edx>)
{
  HANDLE hConsoleOutput; // edi
  BOOL result; // eax
  struct _CONSOLE_SCREEN_BUFFER_INFO ConsoleScreenBufferInfo; // [esp+Ah] [ebp-22h] BYREF

  hConsoleOutput = sub_433614();
  result = GetConsoleScreenBufferInfo(hConsoleOutput, &ConsoleScreenBufferInfo);
  if ( result )
  {
    LOWORD(a2) = ConsoleScreenBufferInfo.srWindow.Top + a2;
    return SetConsoleCursorPosition(
             hConsoleOutput,
             (COORD)((a2 << 16) | (unsigned __int16)(ConsoleScreenBufferInfo.srWindow.Left + a1)));
  }
  return result;
}

