// busybox.exe @ 0x433628 size=47

WORD sub_433628()
{
  HANDLE hConsoleOutput; // eax
  BOOL v1; // edx
  WORD result; // ax
  struct _CONSOLE_SCREEN_BUFFER_INFO ConsoleScreenBufferInfo; // [esp+Ah] [ebp-16h] BYREF

  hConsoleOutput = sub_433614();
  v1 = GetConsoleScreenBufferInfo(hConsoleOutput, &ConsoleScreenBufferInfo);
  result = 7;
  if ( v1 )
    return ConsoleScreenBufferInfo.wAttributes;
  return result;
}

