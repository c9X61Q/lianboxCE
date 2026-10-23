// busybox.exe @ 0x456bc0 size=524

__int64 __usercall sub_456BC0@<edx:eax>(BOOL a1@<eax>, signed int a2@<ecx>)
{
  HANDLE StdHandle; // eax
  void *v4; // esi
  __int64 result; // rax
  int v6; // eax
  int v7; // ebx
  CHAR MultiByteStr; // [esp+29h] [ebp-2Bh] BYREF
  WCHAR WideCharStr; // [esp+2Ah] [ebp-2Ah] BYREF
  DWORD NumberOfEventsRead; // [esp+2Ch] [ebp-28h] BYREF
  DWORD Mode; // [esp+30h] [ebp-24h] BYREF
  struct _INPUT_RECORD Buffer; // [esp+34h] [ebp-20h] BYREF

  StdHandle = GetStdHandle(0xFFFFFFF6);
  if ( a1 )
    sub_41784C("read_key only works on stdin");
  v4 = StdHandle;
  result = -1;
  if ( v4 == (void *)-1 )
    return result;
  GetConsoleMode(v4, &Mode);
  SetConsoleMode(v4, 0);
  while ( 1 )
  {
    do
    {
      do
      {
LABEL_5:
        if ( a2 <= 0 || WaitForSingleObject(v4, a2) == 0 )
        {
          v6 = ReadConsoleInputW(v4, &Buffer, 1u, &NumberOfEventsRead);
          if ( v6 != 0 )
            continue;
        }
        v7 = -1;
        goto LABEL_36;
      }
      while ( Buffer.EventType != 1 );
      if ( Buffer.Event.KeyEvent.bKeyDown )
      {
        a1 = (*(_BYTE *)(&Buffer.Event.FocusEvent + 3) & 2) != 0;
        goto LABEL_17;
      }
    }
    while ( !a1 || (*(_BYTE *)(&Buffer.Event.FocusEvent + 3) & 2) != 0 );
    a1 = false;
LABEL_17:
    if ( Buffer.Event.KeyEvent.uChar.UnicodeChar != 0 )
      break;
    LOWORD(v6) = Buffer.Event.KeyEvent.wVirtualKeyCode;
    if ( !a1
      || Buffer.Event.KeyEvent.wVirtualKeyCode != 12
      && ((unsigned __int16)(Buffer.Event.KeyEvent.wVirtualKeyCode - 18) > 0x1Bu
       || ((1 << (*((_BYTE *)&Buffer.Event.FocusEvent + 6) - 18)) & 0x87F8009) == 0) )
    {
      switch ( v6 )
      {
        case '!':
          v7 = -10;
          break;
        case '"':
          v7 = -11;
          break;
        case '#':
          v7 = -7;
          break;
        case '$':
          v7 = -6;
          break;
        case '%':
          v7 = (*(_BYTE *)(&Buffer.Event.FocusEvent + 3) & 0xC) == 0 ? -5 : -69;
          break;
        case '&':
          v7 = -2;
          break;
        case '\'':
          v7 = (*(_BYTE *)(&Buffer.Event.FocusEvent + 3) & 0xC) == 0 ? -4 : -68;
          break;
        case '(':
          v7 = -3;
          break;
        case '-':
          v7 = -8;
          break;
        case '.':
          v7 = -9;
          break;
        default:
          goto LABEL_5;
      }
      goto LABEL_36;
    }
  }
  WideCharStr = Buffer.Event.KeyEvent.uChar.UnicodeChar;
  MultiByteStr = Buffer.Event.KeyEvent.uChar.AsciiChar & 0x7F;
  if ( Buffer.Event.KeyEvent.uChar.UnicodeChar != (Buffer.Event.KeyEvent.uChar.AsciiChar & 0x7F) )
    WideCharToMultiByte(0, 0, &WideCharStr, 1, &MultiByteStr, 1, nullptr, nullptr);
  v7 = (unsigned __int8)MultiByteStr;
LABEL_36:
  SetConsoleMode(v4, Mode);
  return v7;
}

