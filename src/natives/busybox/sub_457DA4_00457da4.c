// busybox.exe @ 0x457da4 size=338

int __fastcall sub_457DA4(int a1, FILE *a2)
{
  char *Str1; // ebx
  int i; // eax
  char v4; // dl
  int result; // eax
  char *j; // ecx
  int v7; // eax
  const char *v8; // eax
  unsigned __int8 *v9; // ecx
  char *v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // [esp+10h] [ebp-1Ch]
  int v15[5]; // [esp+18h] [ebp-14h] BYREF

  while ( 1 )
  {
    v15[0] = 0x10000;
    Str1 = (char *)sub_470FC4(v15, "\n");
    if ( Str1 == nullptr )
    {
LABEL_24:
      v8 = "short file";
LABEL_25:
      sub_418210(v8);
    }
    for ( i = v15[0]; ; Str1[i] = 0 )
    {
      if ( --i >= 0 )
      {
        v4 = Str1[i];
        if ( v4 == 13 || v4 == 10 )
          continue;
      }
      break;
    }
    result = strcmp(Str1, "end");
    if ( result == 0 )
      return result;
    for ( j = Str1; *j != 0; ++j )
      *j = (*j - 32) & 0x3F;
    v7 = 4 * (unsigned __int8)*Str1 / 3;
    v13 = v7;
    if ( j - Str1 <= v7 )
      goto LABEL_24;
    if ( 4 * (unsigned int)(unsigned __int8)*Str1 > 2 )
    {
      if ( 4 * (unsigned int)(unsigned __int8)*Str1 > 0xB6 )
      {
        v8 = "line too long";
        goto LABEL_25;
      }
      v9 = (unsigned __int8 *)(Str1 + 1);
      v10 = Str1;
      while ( 1 )
      {
        LOBYTE(v7) = v9[1] >> 4;
        v11 = (4 * *v9) | v7;
        *v10 = v11;
        if ( v13 == 1 )
          break;
        LOBYTE(v11) = v9[2] >> 2;
        v12 = (16 * v9[1]) | v11;
        v10[1] = v12;
        if ( v13 == 2 )
        {
          v10 += 2;
          goto LABEL_22;
        }
        v10 += 3;
        LOBYTE(v12) = v9[3];
        v7 = v12 | (v9[2] << 6);
        *(v10 - 1) = v7;
        v9 += 4;
        v13 -= 4;
        if ( v13 <= 0 )
          goto LABEL_22;
      }
      ++v10;
LABEL_22:
      sub_46EF84(Str1, 1u, v10 - Str1, a2);
    }
    free(Str1);
  }
}

