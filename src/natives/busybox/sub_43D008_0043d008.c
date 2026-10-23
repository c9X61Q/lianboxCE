// busybox.exe @ 0x43d008 size=631

int __cdecl sub_43D008(int a1, int a2)
{
  char v2; // bl
  _DWORD *v3; // edi
  int v4; // esi
  char v5; // al
  const char *v6; // ebx
  const char **v7; // ebp
  char v8; // si
  char *v9; // eax
  signed int v10; // eax
  int v11; // ebp
  const char *v12; // edx
  char v13; // cl
  const char *v14; // eax
  bool v15; // zf
  int *i; // esi
  int v17; // eax
  int v18; // edx
  int v19; // edx
  int v20; // ebp
  signed int v22; // [esp+8h] [ebp-1Ch]
  const char *Block; // [esp+Ch] [ebp-18h]
  int *Blocka; // [esp+Ch] [ebp-18h]
  int v25; // [esp+10h] [ebp-14h]

  v2 = *(_BYTE *)(*(_DWORD *)a2 + strlen(*(const char **)a2) - 3);
  v3 = (_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 == 0 || *(_BYTE *)v4 != 45 )
  {
    v11 = 0;
    goto LABEL_35;
  }
  v5 = *(_BYTE *)(v4 + 1);
  if ( v5 != 108 )
  {
    if ( v5 != 113 || v2 != 97 || *(_BYTE *)(v4 + 2) != 0 )
      goto LABEL_23;
    v4 = *(_DWORD *)(a2 + 8);
    if ( v4 == 0 )
      sub_418164();
    v3 = (_DWORD *)(a2 + 8);
    v11 = 1;
    if ( *(_BYTE *)v4 == 45 )
      goto LABEL_24;
LABEL_35:
    v22 = 15;
LABEL_36:
    v25 = getpid();
    if ( v4 == 0 )
    {
      sub_4181F8("you need to specify whom to kill");
      return 1;
    }
    v15 = v2 == 97;
    v6 = nullptr;
    if ( v15 )
    {
      do
      {
        Blocka = (int *)sub_430A5C((const char *)v4);
        if ( *Blocka != 0 )
        {
          for ( i = Blocka; ; ++i )
          {
            v17 = *i;
            if ( *i == 0 )
              break;
            if ( v17 != v25 && sub_43CDF4(v17, v22) != 0 )
            {
              ++v6;
              if ( v11 == 0 )
                sub_417FE4(v18, "can't kill pid %d", *i);
            }
          }
        }
        else
        {
          ++v6;
          if ( v11 == 0 )
            sub_41783C("%s: no process killed", (const char *)v4);
        }
        free(Blocka);
        v4 = *++v3;
      }
      while ( *v3 != 0 );
      return (int)v6;
    }
    while ( 1 )
    {
      v20 = sub_4182BC(10, (char *)v4, nullptr);
      if ( *_errno() != 0 )
        break;
      if ( sub_43CDF4(v20, v22) != 0 )
      {
        sub_417FE4(v19, "can't kill pid %d", v20);
        goto LABEL_57;
      }
LABEL_53:
      v4 = *++v3;
      if ( *v3 == 0 )
        return (int)v6;
    }
    sub_41783C("invalid number '%s'", (const char *)v4);
LABEL_57:
    ++v6;
    goto LABEL_53;
  }
  if ( *(_BYTE *)(v4 + 2) != 0 )
  {
LABEL_23:
    v11 = 0;
LABEL_24:
    v12 = (const char *)(v4 + 1);
    v13 = *(_BYTE *)(v4 + 1);
    if ( v13 == 45 && *(_BYTE *)(v4 + 2) == 0 )
    {
      v22 = 15;
    }
    else
    {
      v14 = (const char *)v3[1];
      if ( v13 == 115 && v14 != nullptr && *(_BYTE *)(v4 + 2) == 0 )
      {
        ++v3;
        v12 = v14;
      }
      Block = v12;
      v22 = sub_4354AC(v12);
      if ( v22 < 0 )
      {
        sub_41783C("bad signal name '%s'", Block);
        return 1;
      }
    }
    v4 = v3[1];
    ++v3;
    goto LABEL_36;
  }
  v6 = *(const char **)(a2 + 8);
  if ( v6 != nullptr )
  {
    v7 = (const char **)(a2 + 8);
    while ( 1 )
    {
      if ( (unsigned __int8)(*v6 - 48) > 9u )
      {
        v10 = sub_4354AC(v6);
        if ( v10 < 0 )
        {
LABEL_12:
          sub_41783C("unknown signal '%s'", v6);
          return 1;
        }
        sub_46F088("%d\n", v10);
      }
      else
      {
        v8 = sub_418398(10, v6, nullptr);
        if ( *_errno() != 0 )
          goto LABEL_12;
        v9 = sub_43548C(v8 & 0x7F);
        sub_46F108(v9);
      }
      v6 = *++v7;
      if ( *v7 == nullptr )
        return (int)v6;
    }
  }
  sub_44EAAC();
  return (int)v6;
}

