// busybox.exe @ 0x465964 size=837

void __cdecl __noreturn sub_465964(int a1, int a2)
{
  char *v2; // eax
  const char *Str; // ebx
  char v4; // al
  int v5; // ecx
  int v6; // ebp
  int v7; // esi
  const char **v8; // ebp
  void *v9; // edi
  int v10; // eax
  int v11; // edx
  size_t v12; // eax
  size_t v13; // esi
  const char *v14; // esi
  char v15; // al
  unsigned int v16; // edi
  unsigned int v17; // ebp
  unsigned int v18; // eax
  unsigned int v19; // edx
  int v20; // ecx
  int v21; // eax
  char v22; // cl
  unsigned int v23; // [esp+Ch] [ebp-34h]
  int v24; // [esp+Ch] [ebp-34h]
  char v25; // [esp+10h] [ebp-30h]
  unsigned int v26; // [esp+10h] [ebp-30h]
  int v27; // [esp+14h] [ebp-2Ch] BYREF
  int v28; // [esp+18h] [ebp-28h] BYREF
  int v29; // [esp+1Ch] [ebp-24h] BYREF
  int v30; // [esp+20h] [ebp-20h]
  int v31; // [esp+24h] [ebp-1Ch]
  int v32; // [esp+28h] [ebp-18h]
  unsigned int v33; // [esp+2Ch] [ebp-14h]

  v2 = sub_44328C("TIME");
  Str = "real\t%E\nuser\t%u\nsys\t%T";
  if ( v2 != nullptr )
    Str = v2;
  v4 = sub_435D44(a2, (int)"^+pao:", &v27);
  if ( (v4 & 1) != 0 )
    Str = "real %e\nuser %U\nsys %S";
  v6 = dword_473090;
  if ( (v4 & 4) != 0 )
  {
    v7 = sub_47154C(v5, (v4 & 2) == 0 ? 769 : 265);
    sub_41CB70(v7);
  }
  v8 = (const char **)(a2 + 4 * v6);
  v33 = sub_4456F4();
  v9 = sub_44484C(v8);
  if ( v9 == (void *)-1 )
    sub_418014((int)*v8, "can't execute %s", *v8);
  while ( 1 )
  {
    v10 = sub_444EF4((int)v9, &v28, 0, &v29);
    if ( v9 == (void *)v10 )
      break;
    if ( v10 == -1 && *_errno() != 4 )
    {
      sub_418224("wait", v11);
      goto LABEL_14;
    }
  }
  v33 = sub_4456F4() - v33;
LABEL_14:
  sub_470C64();
  if ( __OFSUB__((v28 & 0x7F) + 1, 1) || (v28 & 0x7F) == 0 )
  {
    if ( (v28 & 0x7F) == 0 && BYTE1(v28) != 0 )
      sub_46F088("Command exited with non-zero status %u\n", BYTE1(v28));
  }
  else
  {
    sub_46F088("Command terminated by signal %u\n", v28 & 0x7F);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *Str == 0 )
      {
        sub_418130(10);
        v22 = v28 & 0x7F;
        if ( __OFSUB__((v28 & 0x7F) + 1, 1) || (v28 & 0x7F) == 0 )
          v22 = BYTE1(v28);
        sub_42F138(v22);
      }
      v25 = *Str;
      v12 = strcspn(Str, "%\\");
      v13 = v12;
      if ( v12 == 0 )
        break;
      sub_46F088("%.*s", v12, Str);
      Str += v13;
    }
    v14 = Str + 1;
    if ( v25 == 37 )
    {
      v15 = Str[1];
      if ( v15 == 117 )
      {
        v20 = v29;
        v16 = v29 % 60;
        v17 = v29 / 60;
        if ( v29 > 3599 )
        {
LABEL_39:
          v23 = v16;
          v18 = v20 / 3600;
          v19 = v20 % 3600;
          goto LABEL_40;
        }
        v21 = v30;
LABEL_45:
        v24 = v21 / 10000;
LABEL_46:
        sub_46F088("%um %u.%02us", v17, v16, v24);
        goto LABEL_49;
      }
      if ( (unsigned __int8)v15 > 0x75u )
        goto LABEL_49;
      if ( v15 == 101 )
      {
        sub_46F088("%u.%02u", v33 / 0x3E8, v33 / 0xA % 0x64);
      }
      else
      {
        if ( (unsigned __int8)v15 > 0x65u )
          goto LABEL_49;
        if ( v15 == 85 )
        {
          sub_46F088("%u.%02u", v29, v30 / 10000);
          goto LABEL_49;
        }
        if ( (unsigned __int8)v15 > 0x55u )
          goto LABEL_49;
        switch ( v15 )
        {
          case 'T':
            v20 = v31;
            v16 = v31 % 60;
            v17 = v31 / 60;
            if ( v31 > 3599 )
              goto LABEL_39;
            v21 = v32;
            goto LABEL_45;
          case 'E':
            v26 = v33 / 0x3E8;
            v16 = v33 / 0x3E8 % 0x3C;
            v17 = v33 / 0x3E8 / 0x3C;
            if ( v33 > 0x36EE7F )
            {
              v23 = v33 / 0x3E8 % 0x3C;
              v18 = v26 / 0xE10;
              v19 = v26 % 0xE10;
LABEL_40:
              sub_46F088("%uh %um %02us", v18, v19 / 0x3C, v23);
              break;
            }
            v24 = v33 / 0xA % 0x64;
            goto LABEL_46;
          case 'S':
            sub_46F088("%u.%02u", v31, v32 / 10000);
            break;
          default:
            break;
        }
      }
    }
    else
    {
      v14 = Str;
    }
LABEL_49:
    Str = v14 + 1;
  }
}

