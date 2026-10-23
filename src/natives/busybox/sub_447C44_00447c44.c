// busybox.exe @ 0x447c44 size=784

int __usercall sub_447C44@<eax>(_DWORD *a1@<eax>)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  const char *Str1; // ebx
  int v6; // eax
  _BYTE *v7; // ebx
  char v8; // dl
  int v9; // ecx
  char v10; // dl
  int v12; // esi
  int v13; // edx
  int v14; // edx
  const char *v15; // edx
  int v16; // ebp
  int v17; // eax
  int v18; // ecx
  char *v19; // edx
  char v20; // al
  const char *v21; // ecx
  char *v22; // edx
  int v23; // edx
  char *v24; // ecx
  const char *v25; // [esp+Ch] [ebp-14h]

  if ( a1 != nullptr )
  {
    v2 = dword_485FF0;
    *(_DWORD *)(dword_485FF0 + 24) = 0;
    *(_DWORD *)(v2 + 28) = 0;
    *(_DWORD *)(v2 + 32) = 0;
  }
LABEL_16:
  v6 = dword_47310C;
  v7 = *(_BYTE **)dword_47310C;
  if ( *(_DWORD *)dword_47310C != 0 )
  {
    v8 = *v7;
    if ( ((*v7 - 43) & 0xFD) == 0 )
    {
      v9 = dword_47310C + 4;
      dword_47310C += 4;
      if ( v8 != 45 )
      {
        v12 = 0;
LABEL_28:
        Str1 = v7 + 1;
        while ( 1 )
        {
          while ( 1 )
          {
            v4 = *(unsigned __int8 *)Str1;
            if ( *Str1 == 0 )
              goto LABEL_16;
            ++Str1;
            if ( a1 != nullptr )
              break;
LABEL_40:
            if ( v4 != 111 )
            {
              v23 = 0;
              goto LABEL_58;
            }
            v15 = *(const char **)dword_47310C;
            v16 = 0;
            if ( *(_DWORD *)dword_47310C != 0 )
            {
              do
              {
                v25 = v15;
                v17 = strcmp(v15, off_480780[v16] + 1);
                v15 = v25;
                if ( v17 == 0 )
                {
                  v9 = v12;
                  *(_BYTE *)(dword_485FF0 + v16 + 63) = v12;
                  goto LABEL_54;
                }
                ++v16;
              }
              while ( v16 != 19 );
              sub_415B10(v18, (int)"illegal option %co %s", v12 == 0 ? 43 : 45, v25);
              return 1;
            }
            do
            {
              v22 = off_480780[v16];
              if ( v22[1] != 0 )
              {
                v19 = v22 + 1;
                v20 = *(_BYTE *)(dword_485FF0 + v16 + 63);
                if ( v12 != 0 )
                {
                  v21 = "on";
                  if ( v20 == 0 )
                    v21 = "off";
                  sub_4480E8("%-16s%s\n", v19, v21);
                }
                else
                {
                  sub_4480E8("set %co %s\n", v20 == 0 ? 43 : 45, v19);
                }
              }
              ++v16;
            }
            while ( v16 != 19 );
LABEL_54:
            if ( *(_DWORD *)dword_47310C != 0 )
              dword_47310C += 4;
          }
          if ( v4 == 99 )
          {
            v3 = dword_485FF0;
            *(_DWORD *)(dword_485FF0 + 24) = Str1;
            *(_BYTE *)(v3 + 70) = 1;
          }
          else if ( v4 == 100 )
          {
            if ( v12 == 1 )
            {
              v13 = *(_DWORD *)dword_47310C;
              if ( *(_DWORD *)dword_47310C == 0 )
                sub_415B40(v9, "%s requires an argument", "-d");
              dword_47310C += 4;
              *(_DWORD *)(dword_485FF0 + 28) = v13;
            }
            else
            {
              v23 = v12;
LABEL_58:
              while ( 1 )
              {
                v24 = off_480780[v23];
                if ( v4 == (unsigned __int8)*v24 && v24[1] != 0 )
                  break;
                if ( ++v23 == 19 )
                  sub_415B40((int)v24, "illegal option %c%c", v12 == 0 ? 43 : 45, v4);
              }
              v9 = v12;
              *(_BYTE *)(dword_485FF0 + v23 + 63) = v12;
            }
          }
          else if ( v4 == 116 && v12 != 0 )
          {
            v14 = *(_DWORD *)dword_47310C;
            if ( *(_DWORD *)dword_47310C == 0 )
              sub_415B40(v9, "%s requires an argument", "-t");
            dword_47310C += 4;
            *(_DWORD *)(dword_485FF0 + 32) = v14;
          }
          else
          {
            switch ( v4 )
            {
              case 's':
                *(_BYTE *)(dword_485FF0 + 69) = 1;
                break;
              case 'i':
                *(_BYTE *)(dword_485FF0 + 66) = 1;
                break;
              case 'l':
                *a1 = 1;
                break;
              default:
                if ( v4 == 45 && v12 != 0 )
                {
                  if ( strcmp(Str1, "login") == 0 )
                    *a1 = 1;
                  goto LABEL_16;
                }
                goto LABEL_40;
            }
          }
        }
      }
      v10 = v7[1];
      if ( v10 != 0 )
      {
        if ( v10 != 45 || v7[2] != 0 )
        {
          v12 = 1;
          goto LABEL_28;
        }
        if ( a1 == nullptr && *(_DWORD *)(v6 + 4) == 0 )
          sub_45E850();
      }
      else if ( a1 == nullptr )
      {
        *(_WORD *)(dword_485FF0 + 71) = 0;
      }
    }
  }
  return 0;
}

