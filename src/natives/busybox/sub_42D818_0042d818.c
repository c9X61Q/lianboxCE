// busybox.exe @ 0x42d818 size=750

void __cdecl __noreturn sub_42D818(int a1, int a2)
{
  const char **v2; // eax
  int v3; // eax
  void *Block; // ebx
  int v5; // edx
  char *v6; // esi
  char *i; // edi
  char v8; // cl
  FILE *v9; // eax
  int k; // ebp
  const char *v11; // edi
  char v12; // al
  unsigned int v13; // ebx
  const char *v14; // ecx
  unsigned int j; // ebx
  int v16; // eax
  int m; // esi
  size_t v18; // esi
  FILE *v19; // eax
  const char **v20; // [esp+14h] [ebp-30h]
  unsigned int v21; // [esp+18h] [ebp-2Ch]
  FILE *Stream; // [esp+1Ch] [ebp-28h]
  char v23; // [esp+20h] [ebp-24h]
  char *v24; // [esp+24h] [ebp-20h]

  if ( *dword_485AD0 == 101 )
  {
    v23 = sub_435D60(a2, &unk_47977C, "initial");
  }
  else
  {
    v23 = sub_435D60(a2, "^ft:a", "first-only");
    if ( (v23 & 1) != 0 )
      v23 &= ~4u;
  }
  v21 = sub_470928(-1, 1);
  v2 = (const char **)(a2 + 4 * dword_473090);
  v20 = v2;
  if ( *v2 == nullptr )
  {
    *(v2 - 1) = "standard input";
    v20 = v2 - 1;
  }
  while ( 1 )
  {
    Stream = (FILE *)sub_431518();
    if ( Stream != nullptr )
    {
      if ( *dword_485AD0 == 101 )
      {
        while ( 1 )
        {
          v3 = sub_470EE8();
          Block = (void *)v3;
          if ( v3 == 0 )
            break;
          v6 = (char *)v3;
          for ( i = (char *)v3; ; ++i )
          {
            v8 = *i;
            if ( *i == 0 || v8 != 9 && v8 != 32 && (v23 & 1) != 0 )
              break;
            if ( v8 == 9 )
            {
              *i = 0;
              sub_46F088("%s%*s", v6, v21 - (i - v6) % v21, (const char *)&unk_4797A4);
              v6 = i + 1;
            }
          }
          v9 = off_4730E8(1);
          sub_46EF20(v6, v9);
          free(Block);
        }
      }
      else
      {
        while ( 1 )
        {
          v24 = (char *)sub_470EE8();
          if ( v24 == nullptr )
            break;
          v14 = v24;
          for ( j = 0; ; j = (v18 + v13) % v21 )
          {
            while ( 1 )
            {
              if ( *v14 == 0 )
                goto LABEL_27;
              for ( k = 0; ; ++k )
              {
                v11 = &v14[k];
                v12 = v14[k];
                if ( v12 != 32 )
                  break;
              }
              v13 = k + j;
              if ( v12 != 9 )
                break;
              j = v21 + v13 - v13 % v21;
              v14 = v11 + 1;
            }
            if ( v21 <= v13 )
            {
              v16 = v13 / v21;
              v13 %= v21;
              for ( m = v16; m != 0; --m )
                sub_46F0B8(9);
              k = v13;
            }
            if ( (v23 & 4) == 0 && v24 != v11 )
              break;
            v18 = strcspn(v11, "\t ");
            sub_46F088("%*s%.*s", k, (const char *)&unk_4797A4, v18, v11);
            v14 = &v11[v18];
          }
          sub_46F088("%*s%s", k, (const char *)&unk_4797A4, v11);
LABEL_27:
          free(v24);
        }
      }
      if ( sub_42EE00() != 0 )
        sub_418224(*v20, v5);
      if ( Stream == off_4730E8(0) )
        clearerr(Stream);
    }
    if ( *++v20 == nullptr )
    {
      v19 = off_4730E8(0);
      if ( fclose(v19) != 0 )
        sub_41823C("standard input");
      sub_42F138();
    }
  }
}

