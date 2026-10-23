// busybox.exe @ 0x44e1f8 size=570

char __usercall sub_44E1F8@<al>(
        const char *Str@<eax>,
        int a2@<edx>,
        const char *a3@<ecx>,
        const char *a4,
        const char *a5)
{
  char *v6; // edi
  char v7; // al
  const char *v8; // eax
  void (*v9)(void); // ecx
  const char *v10; // eax
  const char *SubStr_4; // [esp+8h] [ebp-38h]
  char v13; // [esp+1Bh] [ebp-25h]
  char *v15; // [esp+20h] [ebp-20h]
  char *v16; // [esp+24h] [ebp-1Ch]
  __int64 v18; // [esp+2Ch] [ebp-14h]

  v15 = (char *)&Str[a2];
  v13 = Str[a2];
  Str[a2] = 0;
  v6 = strstr(Str, ".*");
  v16 = strchr(Str, 42);
  if ( v6 == v16 - 1 )
    v16 = nullptr;
  *_errno() = 0;
  v7 = Str[a2 - 1];
  if ( (unsigned __int8)v7 <= 0x78u )
  {
    if ( (unsigned __int8)v7 <= 0x62u )
    {
      if ( v7 == 88 )
      {
LABEL_21:
        v8 = (const char *)sub_460FB8();
        v9 = (void (*)(void))sub_41EDFC;
LABEL_12:
        if ( sub_445950(v8, v9) != 0 )
          v18 = 0;
        if ( v16 == nullptr )
        {
          if ( v6 == nullptr )
          {
            sub_46F088(Str, v18);
            goto LABEL_38;
          }
LABEL_17:
          sub_46F088(Str, a4, v18);
          goto LABEL_38;
        }
        if ( v6 == nullptr )
        {
          sub_46F088(Str, a3, v18);
          goto LABEL_38;
        }
      }
      else
      {
        if ( (unsigned __int8)v7 > 0x58u || (v7 & 0xFD) != 0x45 )
          goto LABEL_38;
LABEL_31:
        sub_445950(a5, (void (*)(void))sub_41ED98);
        if ( v16 == nullptr )
        {
          if ( v6 == nullptr )
          {
            sub_46F088(Str);
            goto LABEL_38;
          }
          goto LABEL_17;
        }
        if ( v6 == nullptr )
        {
          sub_46F088(Str, a3);
          goto LABEL_38;
        }
      }
      sub_46F088(Str, a3, a4, v18);
      goto LABEL_38;
    }
    switch ( v7 )
    {
      case 'c':
        sub_46F088(Str, *(unsigned __int8 *)a5);
        break;
      case 'd':
      case 'i':
        v8 = (const char *)sub_460FB8();
        v9 = (void (*)(void))sub_41EDE0;
        goto LABEL_12;
      case 'e':
      case 'f':
      case 'g':
        goto LABEL_31;
      case 'o':
      case 'u':
      case 'x':
        goto LABEL_21;
      case 's':
        if ( v16 != nullptr )
        {
          if ( v6 != nullptr )
            SubStr_4 = a4;
          else
            SubStr_4 = a5;
          v10 = a3;
        }
        else
        {
          SubStr_4 = a5;
          if ( v6 == nullptr )
          {
            sub_46F088(Str, a5, a5, a5);
            break;
          }
          v10 = a4;
        }
        sub_46F088(Str, v10, SubStr_4, a5);
        break;
      default:
        break;
    }
  }
LABEL_38:
  *v15 = v13;
  return v13;
}

