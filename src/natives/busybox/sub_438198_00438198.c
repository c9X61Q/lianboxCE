// busybox.exe @ 0x438198 size=311

int sub_438198()
{
  int v0; // esi
  int **v1; // edi
  int *i; // ebx
  int v3; // ebp
  char *v4; // ebp
  const char *v5; // eax
  int v6; // eax
  char *v7; // ebx
  char v8; // dl
  int v10[6]; // [esp+Ch] [ebp-18h] BYREF

  if ( sub_446AFC() != 0 )
  {
    sub_41CA98();
    return 0;
  }
  else
  {
    v0 = 0;
    v1 = (int **)dword_4731A4;
    if ( *(_DWORD *)dword_47310C != 0 )
    {
      while ( 1 )
      {
        v7 = *(char **)dword_47310C;
        if ( *(_DWORD *)dword_47310C == 0 )
          break;
        v6 = sub_41CBF8(*(const char **)dword_47310C, 0);
        if ( v6 != 0 )
        {
          v8 = *(_BYTE *)(v6 + 8);
          if ( v8 == 0 || v8 == 2 && (***(_BYTE ***)(v6 + 4) & 2) == 0 && dword_473194 > 0 )
            sub_423094();
        }
        sub_4300CC(v7, (int)v10, 1, *(_DWORD *)(dword_485FEC + 208) + 5);
        if ( LOBYTE(v10[0]) == 0xFF )
          v0 = 1;
        dword_47310C += 4;
      }
    }
    else
    {
      while ( (unsigned int)v1 < dword_4731A4 + 124 )
      {
        for ( i = *v1; i != nullptr; i = (int *)*i )
        {
          if ( *((_BYTE *)i + 8) == 0 )
          {
            v3 = i[1];
            v10[0] = *(_DWORD *)(dword_485FEC + 208) + 5;
            do
            {
              sub_448618();
              --v3;
            }
            while ( v3 >= 0 );
            v4 = *(char **)(dword_485FF4 + 4);
            sub_413848(v4);
            v5 = "*";
            if ( *((_BYTE *)i + 9) == 0 )
              v5 = (const char *)(dword_485FF0 + 62);
            sub_4480E8("%s%s\n", v4, v5);
          }
        }
        ++v1;
      }
    }
  }
  return v0;
}

