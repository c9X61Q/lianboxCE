// busybox.exe @ 0x438ad0 size=122

FARPROC sub_438AD0()
{
  FARPROC result; // eax
  __int64 (__stdcall *v1)(_DWORD, _DWORD); // esi
  int (__stdcall *v2)(_DWORD, _DWORD); // ebx
  HWND ConsoleWindow; // eax
  _BYTE v4[12]; // [esp+14h] [ebp-Ch] BYREF

  result = sub_435244("kernel32.dll", "GetConsoleProcessList", dword_473528);
  if ( result != nullptr )
  {
    v1 = (__int64 (__stdcall *)(_DWORD, _DWORD))result;
    result = sub_435244("user32.dll", "ShowWindow", dword_473560);
    v2 = (int (__stdcall *)(_DWORD, _DWORD))result;
    if ( result != nullptr )
    {
      result = (FARPROC)(v1(v4, 1) - 1);
      if ( result == nullptr )
      {
        ConsoleWindow = GetConsoleWindow();
        return (FARPROC)v2(ConsoleWindow, 0);
      }
    }
  }
  return result;
}

