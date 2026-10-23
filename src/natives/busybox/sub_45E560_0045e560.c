// busybox.exe @ 0x45e560 size=31

LPCSTR __cdecl sub_45E560(LPCSTR a1)
{
  const CHAR *v1; // ecx
  int v2; // edx
  LPCSTR lpConsoleTitle; // [esp+0h] [ebp-4h]

  lpConsoleTitle = v1;
  if ( sub_43C480(1) != 0 )
  {
    SetConsoleTitleA(a1);
    return (LPCSTR)v2;
  }
  return lpConsoleTitle;
}

