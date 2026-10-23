// busybox.exe @ 0x414030 size=298

int __fastcall sub_414030(int a1, int a2)
{
  int i; // ebx
  _DWORD *j; // esi
  int v4; // ebp
  const char **v5; // esi
  const char *v6; // ebx
  char *v7; // eax
  FILE *v8; // eax
  int *v9; // edx
  int v10; // edi
  int v11; // edi
  int *v13; // [esp+14h] [ebp-14h]

  if ( *(_DWORD *)(a2 + 4) != 0 )
  {
    v5 = (const char **)a2;
    v4 = 0;
    while ( 1 )
    {
      v6 = *++v5;
      if ( *v5 == nullptr )
        break;
      v7 = strchr(v6 + 1, 61);
      if ( v7 != nullptr )
      {
        *v7 = 0;
        v9 = sub_411EA4(v6);
        v10 = *v9;
        ++*(_DWORD *)(dword_485FF0 + 56);
        if ( v10 != 0 )
        {
          if ( (*(_BYTE *)(v10 + 12) & 1) == 0 )
            sub_4631A8();
          *(_DWORD *)(v10 + 8) = sub_47188C();
          *(_DWORD *)(v10 + 12) &= ~2u;
        }
        else
        {
          v13 = v9;
          v11 = sub_4728CC();
          *(_DWORD *)(v11 + 4) = sub_47188C();
          *(_DWORD *)(v11 + 8) = sub_47188C();
          *v13 = v11;
        }
        sub_43B8DC();
      }
      else if ( *sub_411EA4(v6) != 0 )
      {
        sub_44F12C();
      }
      else
      {
        v8 = off_4730E8(2);
        sub_46EEFC(v8, "%s: %s not found\n", "alias");
        v4 = 1;
      }
    }
  }
  else
  {
    for ( i = 0; i != 156; i += 4 )
    {
      for ( j = *(_DWORD **)(dword_473110 + i); j != nullptr; j = (_DWORD *)*j )
        sub_44F12C();
    }
    return 0;
  }
  return v4;
}

