// busybox.exe @ 0x4368e0 size=1234

BOOL __usercall sub_4368E0@<eax>(_DWORD *a1@<ebp>)
{
  _DWORD *i; // esi
  const char *Str; // ebx
  char *v3; // eax
  char *v4; // edi
  bool v5; // zf
  char v6; // al
  char v7; // al
  int v8; // eax
  char *v9; // edi
  int j; // eax
  int v11; // eax
  char v12; // al
  int v13; // eax
  char v14; // bl
  char v15; // si
  BOOL result; // eax
  int v17; // eax
  int v18; // edi
  int v19; // esi
  int v20; // ebx
  int v21; // eax
  int v22; // ebx
  int v23; // edi
  int v24; // edx
  char *v25; // [esp+14h] [ebp-2Ch]
  int v26; // [esp+18h] [ebp-28h]
  int v27; // [esp+1Ch] [ebp-24h]
  signed int v28; // [esp+20h] [ebp-20h]
  char *v29; // [esp+24h] [ebp-1Ch]
  char v30; // [esp+2Bh] [ebp-15h]

  v26 = 0;
  v29 = nullptr;
  v28 = 0;
  v27 = 0;
  while ( 1 )
  {
    v25 = (char *)sub_470E94();
    if ( v25 == nullptr )
      break;
    for ( i = (_DWORD *)*(&qword_485BF8 + 1); i != nullptr; i = (_DWORD *)*i )
    {
      a1 = (_DWORD *)i[1];
      if ( (dword_486008 & 0x40) != 0 )
      {
        for ( Str = v25; ; Str = v4 + 1 )
        {
          v3 = (dword_486008 & 0x80u) == 0 ? strstr(Str, (const char *)*a1) : (char *)sub_463554();
          v4 = v3;
          if ( v3 == nullptr )
            break;
          if ( (dword_486008 & 0x40000) != 0 )
          {
            if ( Str != v3 )
              break;
            v5 = Str[strlen((const char *)*a1)] == 0;
            goto LABEL_32;
          }
          if ( (dword_486008 & 0x20000) == 0 )
            goto LABEL_48;
          if ( v3 != v25 )
          {
            v6 = *(v3 - 1);
            if ( (unsigned __int8)(v6 - 48) <= 9u || (unsigned __int8)((*(v4 - 1) | 0x20) - 97) <= 0x19u || v6 == 95 )
              continue;
          }
          v7 = v4[strlen((const char *)*a1)];
          if ( v7 == 0 || (unsigned __int8)(v7 - 48) > 9u && (unsigned __int8)((v7 | 0x20) - 97) > 0x19u && v7 != 95 )
            goto LABEL_48;
        }
      }
      else
      {
        v8 = a1[11];
        if ( (v8 & 2) == 0 )
        {
          a1[11] = v8 | 2;
          sub_4716D4(*(&MultiByteStr + 1), *a1);
        }
        a1[9] = 0;
        a1[10] = 0;
        v9 = v25;
        for ( j = 0; sub_459FE8((int)(a1 + 1), v9, 1, (int)(a1 + 9), j) == 0; j = 1 )
        {
          if ( (dword_486008 & 0x40000) != 0 )
          {
            if ( a1[9] == 0 )
            {
              v5 = v9[a1[10]] == 0;
LABEL_32:
              if ( v5 )
              {
LABEL_48:
                v14 = 1;
                goto LABEL_49;
              }
            }
            break;
          }
          if ( (dword_486008 & 0x20000) == 0 )
            goto LABEL_48;
          v11 = a1[9];
          if ( v9 <= v25 && v11 == 0
            || (unsigned __int8)((v12 = v9[v11 - 1]) - 48) > 9u
            && (unsigned __int8)((v12 | 0x20) - 97) > 0x19u
            && v12 != 95 )
          {
            v12 = v9[a1[10]];
          }
          if ( (unsigned __int8)(v12 - 48) > 9u && (unsigned __int8)((v12 | 0x20) - 97) > 0x19u && v12 != 95 )
            goto LABEL_48;
          v13 = a1[10];
          if ( v13 == 0 )
            break;
          v9 += v13;
        }
      }
    }
    v14 = 0;
LABEL_49:
    ++v27;
    if ( (_BYTE)NumOfElements == v14 )
    {
      if ( v29 != nullptr )
      {
        sub_44E6B8(45, v27);
        --v29;
      }
      else if ( *(&NumOfElements + 1) != 0 )
      {
        free(*(void **)&(*(&qword_485BF0 + 1))[4 * v26]);
        *(_DWORD *)&(*(&qword_485BF0 + 1))[4 * v26] = v25;
        v26 = (v26 + 1) % *(&NumOfElements + 1);
        v25 = nullptr;
      }
      goto LABEL_83;
    }
    v15 = dword_486008;
    if ( (dword_486008 & 0x1005) != 0 )
    {
      free(v25);
      if ( (v15 & 4) != 0 )
        exit(0);
      result = false;
      if ( (v15 & 1) != 0 )
      {
LABEL_92:
        sub_46F108((char *)lpHandles);
        return true;
      }
      return result;
    }
    ++v28;
    if ( (dword_486008 & 0x10000) != 0 && (int)MultiByteStr < v28 )
      break;
    if ( (dword_486008 & 0x20) == 0 )
    {
      v17 = v26 - 1;
      if ( v26 == 0 )
        v17 = *(&NumOfElements + 1) - 1;
      if ( *(&NumOfElements + 1) != 0 && *(_DWORD *)&(*(&qword_485BF0 + 1))[4 * v17] != 0 )
      {
        v18 = v27 - *(&NumOfElements + 1);
        v19 = v26;
        while ( *(_DWORD *)&(*(&qword_485BF0 + 1))[4 * v19] == 0 )
        {
          v19 = (v19 + 1) % *(&NumOfElements + 1);
          ++v18;
        }
        while ( *(_DWORD *)&(*(&qword_485BF0 + 1))[4 * v19] != 0 )
        {
          sub_44E6B8(45, v18);
          free(*(void **)&(*(&qword_485BF0 + 1))[4 * v19]);
          *(_DWORD *)&(*(&qword_485BF0 + 1))[4 * v19] = 0;
          v19 = (v19 + 1) % *(&NumOfElements + 1);
          ++v18;
        }
      }
      v29 = qword_485BF0;
      if ( (dword_486008 & 0x2000) == 0 )
      {
        v24 = v27;
LABEL_78:
        sub_44E6B8(58, v24);
        goto LABEL_83;
      }
      if ( (dword_486008 & 0x40) == 0 )
      {
        while ( 1 )
        {
          v21 = a1[9];
          v22 = a1[10];
          v30 = v25[v22];
          v25[v22] = 0;
          v23 = v22 - v21;
          if ( v22 != v21 )
            sub_44E6B8(58, v27);
          if ( v30 == 0 )
            break;
          v25[v22] = v30;
          v20 = (v23 == 0) + v22;
          if ( sub_459FE8((int)(a1 + 1), &v25[v20], 1, (int)(a1 + 9), 1) != 0 )
            break;
          a1[9] += v20;
          a1[10] += v20;
        }
        goto LABEL_83;
      }
      if ( v14 != 0 )
      {
        v24 = v27;
        goto LABEL_78;
      }
    }
LABEL_83:
    free(v25);
    if ( (dword_486008 & 0x10000) != 0 && v29 == nullptr )
    {
      if ( MultiByteStr == v28 )
        break;
      v29 = nullptr;
    }
  }
  if ( (dword_486008 & 0x20) != 0 )
  {
    if ( BYTE1(NumOfElements) != 0 )
      sub_46F088("%s:", (const char *)lpHandles);
    sub_46F088("%d\n", v28);
  }
  if ( (dword_486008 & 0x1000) != 0 )
    goto LABEL_92;
  return v28 != 0;
}

