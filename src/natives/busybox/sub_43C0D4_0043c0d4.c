// busybox.exe @ 0x43c0d4 size=161

int __cdecl sub_43C0D4(int a1, int a2, int a3)
{
  void *osfhandle; // eax
  void *v4; // eax
  struct _CONSOLE_SCREEN_BUFFER_INFO ConsoleScreenBufferInfo; // [esp+Ah] [ebp-1Eh] BYREF

  if ( a2 == 21523 )
  {
    *(_DWORD *)a3 = 0;
    osfhandle = (void *)_get_osfhandle(1);
    if ( osfhandle != (void *)-1 && GetConsoleScreenBufferInfo(osfhandle, &ConsoleScreenBufferInfo)
      || (v4 = (void *)_get_osfhandle(2)) != (void *)-1 && GetConsoleScreenBufferInfo(v4, &ConsoleScreenBufferInfo) )
    {
      *(_WORD *)a3 = ConsoleScreenBufferInfo.srWindow.Bottom + 1 - ConsoleScreenBufferInfo.srWindow.Top;
      *(_WORD *)(a3 + 2) = ConsoleScreenBufferInfo.srWindow.Right + 1 - ConsoleScreenBufferInfo.srWindow.Left;
      return 0;
    }
  }
  else
  {
    *_errno() = 22;
  }
  return -1;
}

