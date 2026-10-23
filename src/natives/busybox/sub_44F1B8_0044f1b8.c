// busybox.exe @ 0x44f1b8 size=1011

int __cdecl sub_44F1B8(int a1, int a2)
{
  int v2; // ebx
  _BYTE *v3; // eax
  void *v5; // eax
  char *v6; // ebx
  _BYTE *v7; // edx
  char v8; // al
  _BYTE *v9; // esi
  char v10; // al
  char *v11; // ebx
  char *Block; // esi
  char *v13; // ebp
  char v14; // al
  _BYTE *v15; // edx
  char v16; // al
  int v17; // ebx
  int v18; // ebx
  char *v19; // eax
  _BYTE *v20; // eax
  char *v21; // eax
  char *v22; // eax
  int v23; // edx
  void *v24; // ebp
  const char *v25; // eax
  char v26; // al
  int v27; // [esp+8h] [ebp-38h]
  char **v28; // [esp+8h] [ebp-38h]
  char *v29; // [esp+Ch] [ebp-34h]
  char **v30; // [esp+10h] [ebp-30h]
  const char *v31; // [esp+14h] [ebp-2Ch]
  const char *v32; // [esp+18h] [ebp-28h]
  _BYTE *v33; // [esp+1Ch] [ebp-24h]
  int v34; // [esp+20h] [ebp-20h]
  char v35; // [esp+24h] [ebp-1Ch]
  _BYTE *v36; // [esp+28h] [ebp-18h] BYREF
  _BYTE *v37; // [esp+2Ch] [ebp-14h] BYREF

  v2 = a2;
  if ( sub_42EE40(1, 3, v27) == -1 )
    return 1;
  v3 = *(_BYTE **)(a2 + 4);
  if ( v3 != nullptr && *v3 == 45 && v3[1] == 45 && v3[2] == 0 )
    v2 = a2 + 4;
  v33 = *(_BYTE **)(v2 + 4);
  if ( v33 == nullptr )
  {
    if ( *dword_485AD0 == 112 )
      sub_418164();
    sub_4181F8("usage: printf FORMAT [ARGUMENT...]");
    return 2;
  }
  v30 = (char **)(v2 + 8);
  v34 = 0;
  while ( 2 )
  {
    v36 = v33;
    v5 = (void *)sub_47188C();
    v29 = (char *)sub_415D34(v5);
    v6 = v29;
    v28 = v30;
    while ( 1 )
    {
      v7 = v36;
      v8 = *v36;
      if ( *v36 == 0 )
      {
        *v6 = 0;
        sub_431B9C(v29);
        goto LABEL_72;
      }
      if ( v8 == 37 )
        break;
      if ( v8 == 92 )
      {
        ++v36;
        if ( v7[1] == 99 )
        {
          *v6 = 0;
          sub_431B9C(v29);
          goto LABEL_75;
        }
        v26 = sub_418050(&v36);
        *v6 = v26;
        if ( v26 != 0 )
        {
          ++v6;
        }
        else
        {
          sub_431B9C(v29);
          sub_418130((unsigned __int8)*v6);
          v6 = v29;
        }
        --v36;
      }
      else
      {
        *v6++ = v8;
      }
LABEL_70:
      ++v36;
    }
    *v6 = 0;
    sub_431B9C(v29);
    v9 = v36++;
    v10 = *v36;
    if ( *v36 == 37 )
    {
      sub_418130(37);
      goto LABEL_69;
    }
    if ( v10 != 98 )
    {
      v18 = 1;
      if ( v10 != 0 && strchr("-+ #", (unsigned __int8)*v36) != nullptr )
      {
        v36 = v9 + 2;
        v18 = 2;
      }
      if ( *v36 == 42 )
      {
        ++v36;
        ++v18;
        v19 = *v28;
        v31 = nullptr;
        if ( *v28 != nullptr )
        {
          ++v28;
          v31 = (const char *)sub_435950(v19);
        }
      }
      else
      {
        while ( (unsigned __int8)(*v36 - 48) <= 9u )
        {
          ++v36;
          ++v18;
        }
        v31 = nullptr;
      }
      v20 = v36;
      v32 = nullptr;
      if ( *v36 == 46 )
      {
        ++v36;
        if ( v20[1] == 42 )
        {
          v36 = v20 + 2;
          v18 += 2;
          v21 = *v28;
          if ( *v28 != nullptr )
          {
            ++v28;
            v32 = (const char *)sub_435950(v21);
          }
        }
        else
        {
          while ( 1 )
          {
            ++v18;
            if ( (unsigned __int8)(*v36 - 48) > 9u )
              break;
            ++v36;
          }
          v32 = nullptr;
        }
      }
      while ( *v36 == 122 || *v36 == 104 || (*v36 | 0x20) == 0x6C )
        sub_448258((int)v36, (int)(v36 + 1));
      v35 = *v36;
      v22 = strchr("diouxXfeEgGcs", (unsigned __int8)*v36);
      if ( v22 != nullptr && v35 != 0 )
      {
        v23 = v18 + 1;
        v24 = nullptr;
        if ( v22 - "diouxXfeEgGcs" <= 5 )
        {
          v24 = (void *)sub_470E78();
          qmemcpy(v24, v9, v18 + 1);
          *((_BYTE *)v24 + v18 + 2) = *((_BYTE *)v24 + v18);
          *((_BYTE *)v24 + v18) = 108;
          *((_BYTE *)v24 + v18 + 1) = 108;
          v23 = v18 + 3;
          v9 = v24;
        }
        v25 = *v28;
        if ( *v28 != nullptr )
        {
          ++v28;
          sub_44E1F8(v9, v23, v31, v32, v25);
        }
        else
        {
          sub_44E1F8(v9, v23, v31, v32, (const char *)&unk_47A113);
        }
        v34 |= *_errno();
        free(v24);
LABEL_69:
        v6 = v29;
        goto LABEL_70;
      }
      sub_41783C("%s: invalid format", v9);
      v28 = v30 - 1;
LABEL_72:
      if ( v30 >= v28 || *v28 == nullptr )
        return v30 > v28 || v34 != 0;
      v30 = v28;
      continue;
    }
    break;
  }
  v11 = *v28;
  if ( *v28 == nullptr )
    goto LABEL_69;
  Block = (char *)sub_47188C();
  v13 = Block;
  while ( 2 )
  {
    v14 = *v11;
    if ( *v11 == 0 )
    {
      v17 = 0;
      goto LABEL_32;
    }
    v15 = v11 + 1;
    if ( v14 != 92 )
      goto LABEL_29;
    v16 = v11[1];
    if ( v16 == 48 )
    {
      if ( (unsigned __int8)(v11[2] - 48) <= 7u )
        v15 = v11 + 2;
LABEL_28:
      v37 = v15;
      v14 = sub_418050(&v37);
      v15 = v37;
LABEL_29:
      *v13++ = v14;
      v11 = v15;
      continue;
    }
    break;
  }
  if ( v16 != 99 )
    goto LABEL_28;
  v17 = 1;
LABEL_32:
  *v13 = 0;
  sub_431B9C(Block);
  free(Block);
  if ( v17 == 0 )
  {
    ++v28;
    goto LABEL_69;
  }
LABEL_75:
  v28 = v30;
  return v30 > v28 || v34 != 0;
}

