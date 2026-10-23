// busybox.exe @ 0x467e18 size=175

int sub_467E18()
{
  int i; // esi
  int **v1; // ebx
  int *v2; // edi
  int *v3; // eax
  int v4; // ebx
  const char **v5; // esi
  const char *v6; // ebx
  FILE *v7; // eax

  if ( sub_446AFC("a") != 0 )
  {
    ++*(_DWORD *)(dword_485FF0 + 56);
    for ( i = 0; i != 156; i += 4 )
    {
      v1 = (int **)(i + dword_473110);
      while ( 1 )
      {
        v2 = *v1;
        if ( *v1 == nullptr )
          break;
        v3 = sub_431E98(*v1);
        *v1 = v3;
        if ( v3 == v2 )
          v1 = (int **)v2;
      }
    }
    sub_43B8DC();
    return 0;
  }
  else
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = (const char **)dword_47310C;
      if ( *(_DWORD *)dword_47310C == 0 )
        break;
      if ( sub_467DE4(*(const char **)dword_47310C) != 0 )
      {
        v6 = *v5;
        v7 = off_4730E8(2);
        sub_46EEFC(v7, "%s: %s not found\n", "unalias", v6);
        v4 = 1;
      }
      dword_47310C += 4;
    }
  }
  return v4;
}

