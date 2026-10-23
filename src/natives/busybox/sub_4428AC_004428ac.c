// busybox.exe @ 0x4428ac size=521

int __cdecl sub_4428AC(int a1, int a2)
{
  char v2; // al
  const char **v3; // esi
  int v4; // ebp
  int v5; // ebx
  const char *v6; // eax
  char *v7; // edi
  char *v8; // eax
  const char *v9; // eax
  int v10; // edx
  int v11; // eax
  char *v12; // ebx
  char *Str; // [esp+0h] [ebp-38h]
  char *SubStr; // [esp+4h] [ebp-34h]
  char v16; // [esp+Ch] [ebp-2Ch]
  int i; // [esp+10h] [ebp-28h]
  const char *v18; // [esp+14h] [ebp-24h]
  char *Block; // [esp+18h] [ebp-20h]
  FILE *v20; // [esp+1Ch] [ebp-1Ch]

  if ( dword_485AD0[3] == 51 )
    v2 = sub_435D44(a2, (int)"^scwbta:+");
  else
    v2 = sub_435D44(a2, (int)"^scwbt");
  v16 = v2;
  v3 = (const char **)(a2 + 4 * dword_473090);
  if ( *v3 == nullptr )
    *--v3 = "-";
  v4 = 0;
  do
  {
    if ( (v16 & 2) != 0 )
    {
      v20 = (FILE *)sub_470D10(Str, SubStr);
      v5 = 0;
      for ( i = 0; ; ++i )
      {
        v6 = (const char *)sub_470E94();
        v7 = (char *)v6;
        if ( v6 == nullptr )
          break;
        v8 = strstr(v6, "  ");
        if ( v8 != nullptr || (v8 = strstr(v7, " *")) != nullptr )
        {
          *v8 = 0;
          v18 = v8 + 2;
          v9 = sub_437E28(v8 + 2, 0xE0u);
          Block = (char *)v9;
          v10 = v16 & 1;
          if ( v9 == nullptr || (v11 = strcmp(v9, v7), v10 = v16 & 1, v11 != 0) )
          {
            if ( v10 == 0 )
              sub_46F088("%s: FAILED\n", v18);
            ++v5;
            v4 = 1;
          }
          else if ( (v16 & 1) == 0 )
          {
            sub_46F088("%s: OK\n", v18);
          }
          free(Block);
          free(v7);
        }
        else
        {
          if ( (v16 & 4) != 0 )
            sub_4181F8("invalid format");
          ++v5;
          free(v7);
          v4 = 1;
        }
      }
      if ( v5 != 0 && (v16 & 1) == 0 )
        sub_41783C("WARNING: %d of %d computed checksums did NOT match", v5, i);
      if ( i == 0 )
      {
        sub_41783C("%s: no checksum lines found", *v3);
        v4 = 1;
      }
      sub_42EE00(v20);
    }
    else
    {
      v12 = sub_437E28(*v3, 0xE0u);
      if ( v12 != nullptr )
      {
        sub_46F088("%s  %s\n", v12, *v3);
        free(v12);
      }
      else
      {
        v4 = 1;
      }
    }
    ++v3;
  }
  while ( *v3 != nullptr );
  return v4;
}

