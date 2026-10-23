// busybox.exe @ 0x46765c size=246

int sub_46765C()
{
  int v0; // edi
  const char **v1; // esi
  _BYTE *v2; // ebp
  unsigned int i; // ebx
  _BYTE *v4; // ebp
  char *v5; // esi
  int v6; // ecx
  const char *v7; // eax
  int v8; // ebp
  _BYTE *v9; // ebx
  signed int v10; // edx
  int v11; // ecx
  signed int v13; // [esp+Ch] [ebp-14h]
  int v14; // [esp+Ch] [ebp-14h]

  v0 = dword_485FF0;
  sub_446AFC((_BYTE *)(dword_485FF0 + 62));
  v1 = (const char **)dword_47310C;
  v2 = *(_BYTE **)dword_47310C;
  if ( *(_DWORD *)dword_47310C != 0 )
  {
    v9 = *(_BYTE **)(dword_47310C + 4);
    if ( v9 != nullptr )
    {
      v9 = nullptr;
      if ( sub_43C578(*(_BYTE **)dword_47310C) == 0 )
      {
        ++v1;
        v9 = v2;
      }
    }
    v8 = 0;
    while ( *v1 != nullptr )
    {
      v10 = sub_4354AC(*v1);
      if ( v10 >= 0 )
      {
        ++*(_DWORD *)(v0 + 56);
        if ( v9 != nullptr )
        {
          if ( *v9 == 45 && v9[1] == 0 )
          {
            v9 = nullptr;
          }
          else
          {
            v13 = v10;
            v9 = (_BYTE *)sub_47188C();
            v10 = v13;
          }
        }
        v14 = v0 + 4 * v10;
        sub_4631A8(*(void **)(v14 + 84));
        *(_DWORD *)(v14 + 84) = v9;
        sub_43B8DC();
      }
      else
      {
        sub_415B10(v11, (int)"%s: invalid signal specification", *v1);
        v8 = 1;
      }
      ++v1;
    }
  }
  else
  {
    for ( i = 0; i != 23; ++i )
    {
      v4 = *(_BYTE **)(v0 + 4 * i + 84);
      if ( v4 != nullptr )
      {
        v5 = sub_43548C(i);
        v7 = (const char *)sub_460B38(v4, v6);
        sub_4480E8("trap -- %s %s\n", v7, v5);
      }
    }
    return 0;
  }
  return v8;
}

