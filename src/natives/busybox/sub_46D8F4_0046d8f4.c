// busybox.exe @ 0x46d8f4 size=492

int sub_46D8F4()
{
  int v0; // ecx
  char v1; // si
  char **v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // ebp
  char *v6; // esi
  int v7; // eax
  int i; // ebx
  int v9; // eax
  const char *v10; // edx
  char *v11; // ebp
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // eax
  int (__cdecl *v16)(_DWORD, char *); // [esp+8h] [ebp-1Ch]
  int v17; // [esp+Ch] [ebp-18h]
  const char *v18; // [esp+10h] [ebp-14h]

  v1 = sub_446AFC("n");
  v2 = (char **)dword_47310C;
  if ( *(_DWORD *)dword_47310C != 0 )
  {
    v5 = 127;
    while ( 1 )
    {
      v6 = *v2;
      if ( **v2 != 37 )
      {
        v7 = sub_446FE4(*v2);
        for ( i = dword_4732C4; i != 0; i = *(_DWORD *)(i + 28) )
        {
          v0 = *(_DWORD *)(i + 20);
          if ( *(_DWORD *)(*(_DWORD *)(i + 16) + 16 * (v0 + 0xFFFFFFF)) == v7 )
            goto LABEL_42;
        }
        goto LABEL_43;
      }
      i = dword_4732C4;
      v9 = (unsigned __int8)v6[1];
      if ( v6[1] == 0 )
        break;
      if ( v6[2] == 0 )
      {
        if ( v9 == 37 || v9 == 43 )
          break;
        if ( v9 == 45 )
        {
          if ( dword_4732C4 == 0 )
          {
            v10 = "No previous job";
LABEL_41:
            sub_415B40(v0, v10, v6);
          }
          i = *(_DWORD *)(dword_4732C4 + 28);
          v10 = "No previous job";
          goto LABEL_38;
        }
      }
      v11 = v6 + 1;
      if ( sub_43C578(v6 + 1) == 0 || (v12 = atoi(v6 + 1)) == 0 || v12 > dword_4734B4 )
      {
        v16 = (int (__cdecl *)(_DWORD, char *))sub_44DBB0;
        if ( v6[1] == 63 )
        {
          v11 = v6 + 2;
          v16 = (int (__cdecl *)(_DWORD, char *))strstr;
        }
        v0 = i;
        v10 = "%s: no such job";
        i = 0;
        while ( v0 != 0 )
        {
          v18 = v10;
          v17 = v0;
          v14 = v16(*(_DWORD *)(*(_DWORD *)(v0 + 16) + 12), v11);
          v0 = v17;
          v10 = v18;
          if ( v14 != 0 )
          {
            if ( i != 0 )
              goto LABEL_41;
            i = v17;
            v10 = "%s: ambiguous";
          }
          v0 = *(_DWORD *)(v17 + 28);
        }
LABEL_38:
        if ( i == 0 )
          goto LABEL_41;
        goto LABEL_42;
      }
      i = dword_473440 + 32 * (v12 + 0x7FFFFFF);
      if ( (*(_BYTE *)(i + 25) & 2) == 0 )
        sub_415B40(v13, "%s: no such job", v6);
LABEL_42:
      sub_427BB4(2, 0);
      *(_BYTE *)(i + 25) |= 1u;
      v5 = sub_4364BC(i);
LABEL_43:
      if ( *++v2 == nullptr )
        return v5;
    }
    v10 = "No current job";
    goto LABEL_38;
  }
  while ( 1 )
  {
    v3 = dword_4732C4;
    if ( dword_4732C4 == 0 )
      break;
    while ( *(_BYTE *)(v3 + 24) != 0 )
    {
      *(_BYTE *)(v3 + 25) |= 1u;
      v3 = *(_DWORD *)(v3 + 28);
LABEL_4:
      if ( v3 == 0 )
        return 0;
    }
    v4 = sub_427BB4(18, 0);
    if ( v4 != -1 && v1 != 0 )
    {
      v5 = (v4 & 0x7F) + 128;
      if ( __OFSUB__((v4 & 0x7F) + 1, 1) || (v4 & 0x7F) == 0 )
        return BYTE1(v4);
      return v5;
    }
  }
  if ( v1 == 0 )
    goto LABEL_4;
  return 127;
}

