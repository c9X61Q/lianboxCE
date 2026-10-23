// busybox.exe @ 0x460d08 size=210

int __cdecl sub_460D08(int a1)
{
  char *v1; // eax
  int v2; // eax
  HANDLE hConsoleHandle; // ebx
  DWORD v4; // eax
  DWORD Mode[2]; // [esp+8h] [ebp-8h] BYREF

  if ( dword_473598 < 0 || a1 != 0 )
  {
    v1 = sub_44328C("BB_SKIP_ANSI_EMULATION");
    dword_473598 = v1 != nullptr;
    if ( v1 != nullptr )
    {
      v2 = sub_470920();
      if ( v2 != 1 )
      {
        if ( v2 == 2 )
          dword_473598 = 2;
        else
          dword_473598 = 0;
      }
    }
    if ( sub_43C480(1) != 0 )
    {
      hConsoleHandle = sub_433614();
      if ( GetConsoleMode(hConsoleHandle, Mode) )
      {
        v4 = Mode[0] & 0xFFFFFFFB;
        if ( dword_473598 != 0 )
          v4 = Mode[0] | 4;
        Mode[0] = v4 & 0xFFFFFFF7;
        if ( !SetConsoleMode(hConsoleHandle, v4 & 0xFFFFFFF7) && dword_473598 == 2 )
          dword_473598 = 0;
      }
    }
  }
  return dword_473598;
}

