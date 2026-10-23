// busybox.exe @ 0x44f634 size=1250

char *__usercall sub_44F634@<eax>(char *a1@<eax>)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  char v4; // al
  CHAR *v5; // ebx
  char *v6; // eax
  int v7; // eax
  char *v8; // esi
  char v9; // dl
  int v10; // ebp
  int v11; // edx
  unsigned int v12; // ebx
  char *v13; // eax
  HANDLE v14; // eax
  WORD v15; // dx
  int v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // ebx
  int v20; // edx
  HANDLE v21; // eax
  DWORD v22; // eax
  HANDLE v23; // eax
  HANDLE v24; // esi
  HANDLE v25; // ebx
  char *String; // [esp+14h] [ebp-38h] BYREF
  SECURITY_ATTRIBUTES SecurityAttributes; // [esp+18h] [ebp-34h] BYREF
  struct _CONSOLE_SCREEN_BUFFER_INFO ConsoleScreenBufferInfo; // [esp+26h] [ebp-26h] BYREF

  LOWORD(v2) = sub_433628();
  v3 = v2;
  v4 = a1[1];
  if ( v4 == 91 )
  {
    String = a1 + 2;
    v7 = strspn(a1 + 2, "0123456789;");
    v8 = &a1[v7 + 2];
    v9 = *v8;
    if ( (unsigned __int8)*v8 > 0x4Bu )
    {
      if ( v9 != 109 )
        return a1;
      v10 = 0;
      while ( 2 )
      {
        switch ( strtol(String, &String, 10) )
        {
          case 0:
            LOWORD(v3) = word_4734F8;
            goto LABEL_20;
          case 1:
            v3 |= 8u;
            goto LABEL_40;
          case 2:
          case 22:
            v3 &= ~8u;
            goto LABEL_40;
          case 3:
          case 4:
          case 8:
          case 21:
          case 24:
          case 28:
          case 38:
          case 48:
            goto LABEL_40;
          case 5:
          case 6:
            LOBYTE(v3) = v3 | 0x80;
            goto LABEL_40;
          case 7:
            v10 = dword_47339C == 0;
            dword_47339C = 1;
            goto LABEL_40;
          case 25:
            LOBYTE(v3) = v3 & 0x7F;
            goto LABEL_40;
          case 27:
            v10 = dword_47339C;
LABEL_20:
            dword_47339C = 0;
            goto LABEL_40;
          case 30:
            v3 &= 0xFFFFFFF8;
            goto LABEL_40;
          case 31:
            v3 = v3 & 0xFFFFFFF8 | 4;
            goto LABEL_40;
          case 32:
            v3 = v3 & 0xFFFFFFF8 | 2;
            goto LABEL_40;
          case 33:
            v3 = v3 & 0xFFFFFFF8 | 6;
            goto LABEL_40;
          case 34:
            v3 = v3 & 0xFFFFFFF8 | 1;
            goto LABEL_40;
          case 35:
            v3 = v3 & 0xFFFFFFF8 | 5;
            goto LABEL_40;
          case 36:
            v3 = v3 & 0xFFFFFFF8 | 3;
            goto LABEL_40;
          case 37:
            v3 |= 7u;
            goto LABEL_40;
          case 39:
            v11 = word_4734F8 & 7;
            v12 = v3 & 0xFFFFFFF8;
            goto LABEL_39;
          case 40:
            v3 &= 0xFFFFFF8F;
            goto LABEL_40;
          case 41:
            v3 = v3 & 0xFFFFFF8F | 0x40;
            goto LABEL_40;
          case 42:
            v3 = v3 & 0xFFFFFF8F | 0x20;
            goto LABEL_40;
          case 43:
            v3 = v3 & 0xFFFFFF8F | 0x60;
            goto LABEL_40;
          case 44:
            v3 = v3 & 0xFFFFFF8F | 0x10;
            goto LABEL_40;
          case 45:
            v3 = v3 & 0xFFFFFF8F | 0x50;
            goto LABEL_40;
          case 46:
            v3 = v3 & 0xFFFFFF8F | 0x30;
            goto LABEL_40;
          case 47:
            v3 |= 0x70u;
            goto LABEL_40;
          case 49:
            v11 = word_4734F8 & 0x70;
            v12 = v3 & 0xFFFFFF8F;
LABEL_39:
            v3 = v11 | v12;
LABEL_40:
            v13 = String++;
            if ( *v13 == 59 )
              continue;
            v14 = sub_433614();
            v15 = v3;
            if ( v10 != 0 )
            {
              v15 = v3 & 0xFF88;
              if ( (v3 & 4) != 0 )
                v15 |= 0x40u;
              if ( (v3 & 2) != 0 )
                v15 |= 0x20u;
              if ( (v3 & 1) != 0 )
                v15 |= 0x10u;
              if ( (v3 & 0x40) != 0 )
                v15 |= 4u;
              if ( (v3 & 0x20) != 0 )
                v15 |= 2u;
              if ( (v3 & 0x10) != 0 )
                v15 |= 1u;
            }
            SetConsoleTextAttribute(v14, v15);
            break;
          default:
            return a1;
        }
        break;
      }
    }
    else
    {
      switch ( v9 )
      {
        case '?':
          if ( strncmp(a1 + 3, "1049", 4u) != 0 || (a1[7] & 0xFB) != 0x68 )
            return a1;
          if ( a1[7] == 104 )
          {
            if ( dword_4731A8 == -1 )
            {
              v24 = sub_433614();
              dword_4731A8 = sub_4293A4(v24);
              SecurityAttributes.lpSecurityDescriptor = nullptr;
              SecurityAttributes.nLength = 12;
              SecurityAttributes.bInheritHandle = true;
              v25 = CreateConsoleScreenBuffer(0xC0000000, 3u, &SecurityAttributes, 1u, nullptr);
              if ( v25 != (HANDLE)-1 )
              {
                if ( GetConsoleScreenBufferInfo(v24, &ConsoleScreenBufferInfo) )
                  SetConsoleScreenBufferSize(v25, ConsoleScreenBufferInfo.dwSize);
                goto LABEL_84;
              }
            }
          }
          else if ( dword_4731A8 != -1 )
          {
            v25 = (HANDLE)sub_4293A4((void *)dword_4731A8);
            dword_4731A8 = -1;
            if ( v25 != (HANDLE)-1 )
            {
LABEL_84:
              SetConsoleActiveScreenBuffer(v25);
              sub_442EA4(1);
              open_osfhandle((intptr_t)v25, 32770);
            }
          }
          v8 = String + 5;
          break;
        case 'A':
          v16 = -strtol(a1 + 2, &String, 10);
          goto LABEL_57;
        case 'B':
          LOWORD(v16) = strtol(a1 + 2, &String, 10);
LABEL_57:
          sub_445804(v16);
          return v8 + 1;
        case 'C':
          LOWORD(v17) = strtol(a1 + 2, &String, 10);
          goto LABEL_60;
        case 'D':
          v17 = -strtol(a1 + 2, &String, 10);
LABEL_60:
          sub_4457C0(v17);
          return v8 + 1;
        case 'H':
          v18 = 0;
          if ( v7 != 0 )
          {
            v19 = strtol(a1 + 2, &String, 10);
            v7 = 1;
            if ( *String == 59 )
              v7 = strtol(String + 1, &String, 10);
            v20 = v19;
            if ( v19 <= 0 )
              v20 = 1;
            v18 = v20 - 1;
            if ( v7 <= 0 )
              LOWORD(v7) = 1;
            LOWORD(v7) = v7 - 1;
          }
          sub_44576C(v7, v18);
          return v8 + 1;
        case 'J':
          v21 = sub_433614();
          if ( !GetConsoleScreenBufferInfo(v21, &ConsoleScreenBufferInfo) )
            return v8 + 1;
          v22 = ConsoleScreenBufferInfo.dwSize.X
              * (ConsoleScreenBufferInfo.srWindow.Bottom - ConsoleScreenBufferInfo.dwCursorPosition.Y)
              + ConsoleScreenBufferInfo.dwSize.X
              - ConsoleScreenBufferInfo.dwCursorPosition.X;
          goto LABEL_74;
        case 'K':
          v23 = sub_433614();
          if ( !GetConsoleScreenBufferInfo(v23, &ConsoleScreenBufferInfo) )
            return v8 + 1;
          v22 = ConsoleScreenBufferInfo.dwSize.X - ConsoleScreenBufferInfo.dwCursorPosition.X;
LABEL_74:
          sub_41C9D4(v22, ConsoleScreenBufferInfo.dwCursorPosition);
          return v8 + 1;
        default:
          return a1;
      }
    }
    return v8 + 1;
  }
  if ( v4 == 93 && (a1[2] & 0xFD) == 0x30 && a1[3] == 59 )
  {
    v5 = a1 + 4;
    v6 = strchr(a1 + 4, 7);
    if ( v6 != nullptr && v6 - a1 <= 259 )
    {
      a1 = v6 + 1;
      *v6 = 0;
      CharToOemA(v5, v5);
      SetConsoleTitleA(v5);
    }
  }
  return a1;
}

