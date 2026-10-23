// busybox.exe @ 0x44eb10 size=891

void __userpurge sub_44EB10(char *a1@<eax>, unsigned __int8 a2@<dl>, const char *a3@<ecx>, int a4)
{
  const char *v6; // edx
  const char *v8; // eax
  char *Block; // ebx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  const char *v13; // eax
  __int16 v14; // ax
  int *v15; // eax
  int v16; // eax

  if ( a2 == 110 )
  {
    v6 = a3;
LABEL_65:
    sub_44F5C0(a3, v6);
    return;
  }
  if ( a2 != 78 )
  {
    switch ( a2 )
    {
      case 'd':
        strcat(a1, "llu");
LABEL_12:
        sub_46F088(a1, *(_DWORD *)a4, 0);
        return;
      case 'D':
        strcat(a1, "llx");
        goto LABEL_12;
      case 'i':
        strcat(a1, "llu");
        v10 = *(_DWORD *)(a4 + 8);
        v11 = *(_DWORD *)(a4 + 12);
LABEL_51:
        sub_46F088(a1, v10, v11);
        return;
      case 'a':
        strcat(a1, "lo");
        v12 = *(_DWORD *)(a4 + 16) & 0xFFF;
        goto LABEL_68;
      case 'A':
        v13 = sub_417DC8(*(_WORD *)(a4 + 16));
        goto LABEL_64;
      case 'f':
        strcat(a1, "lx");
        v12 = *(unsigned __int16 *)(a4 + 16);
        goto LABEL_68;
      case 'F':
        v14 = *(_DWORD *)(a4 + 16) & 0xF000;
        if ( v14 == (__int16)0x8000 )
        {
          v6 = "regular empty file";
          if ( *(_QWORD *)(a4 + 40) != 0 )
            v6 = "regular file";
        }
        else
        {
          v6 = "directory";
          if ( v14 != 0x4000 )
          {
            v6 = "block special file";
            if ( v14 != 12288 )
            {
              v6 = "character special file";
              if ( v14 != 0x2000 )
              {
                v6 = "fifo";
                if ( v14 != 4096 )
                {
                  v6 = "weird file";
                  if ( v14 == -24576 )
                    v6 = "symbolic link";
                }
              }
            }
          }
        }
        goto LABEL_65;
      case 'h':
        strcat(a1, "lu");
        v12 = *(_DWORD *)(a4 + 20);
        goto LABEL_68;
      case 'u':
        strcat(a1, "lu");
        v12 = *(_DWORD *)(a4 + 24);
        goto LABEL_68;
      case 'U':
        v15 = sub_436354(*(_DWORD *)(a4 + 24));
        break;
      case 'g':
        strcat(a1, "lu");
        v12 = *(_DWORD *)(a4 + 28);
        goto LABEL_68;
      case 'G':
        v15 = sub_435A28(*(_DWORD *)(a4 + 28));
        break;
      default:
        if ( (a2 & 0xDF) == 0x54 )
        {
          strcat(a1, "lx");
          sub_46F088(a1, 0);
          return;
        }
        switch ( a2 )
        {
          case 's':
            strcat(a1, "llu");
            v10 = *(_DWORD *)(a4 + 40);
            v11 = *(_DWORD *)(a4 + 44);
            goto LABEL_51;
          case 'B':
            strcat(a1, "lu");
            sub_46F088(a1, 512);
            return;
          case 'b':
            strcat(a1, "llu");
            v10 = *(_DWORD *)(a4 + 80);
            v11 = *(_DWORD *)(a4 + 84);
            goto LABEL_51;
          case 'o':
            strcat(a1, "lu");
            v12 = *(_DWORD *)(a4 + 72);
            goto LABEL_68;
          default:
            break;
        }
        v16 = a4 + 48;
        if ( a2 != 120 )
        {
          if ( a2 == 88 )
          {
            strcat(a1, "ld");
            v12 = *(_DWORD *)(a4 + 48);
            goto LABEL_68;
          }
          v16 = a4 + 56;
          if ( a2 != 121 )
          {
            if ( a2 == 89 )
            {
              strcat(a1, "ld");
              v12 = *(_DWORD *)(a4 + 56);
              goto LABEL_68;
            }
            if ( a2 != 122 )
            {
              if ( a2 != 90 )
              {
                sub_463590(a3, 99);
                sub_46F088(a1, a2);
                return;
              }
              strcat(a1, "ld");
              v12 = *(_DWORD *)(a4 + 64);
LABEL_68:
              sub_46F088(a1, v12);
              return;
            }
            v16 = a4 + 64;
          }
        }
        v13 = (const char *)sub_439448(v16, (int)a3);
LABEL_64:
        v6 = v13;
        goto LABEL_65;
    }
    v6 = "UNKNOWN";
    if ( v15 != nullptr )
      v6 = (const char *)*v15;
    goto LABEL_65;
  }
  sub_463590(a3, 115);
  if ( (*(_DWORD *)(a4 + 16) & 0xF000) == 0xA000 )
  {
    v8 = (const char *)sub_471264();
    Block = (char *)v8;
    if ( v8 != nullptr )
    {
      sub_46F088("'%s' -> '%s'", a3, v8);
      free(Block);
    }
  }
  else
  {
    sub_46F088(a1, a3);
  }
}

