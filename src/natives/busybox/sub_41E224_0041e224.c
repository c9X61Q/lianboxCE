// busybox.exe @ 0x41e224 size=1003

size_t __usercall sub_41E224@<eax>(const char *Str@<eax>, int a2@<edx>)
{
  char *v2; // eax
  char *v3; // edi
  int v4; // ebx
  const char *v5; // ebx
  const char *v6; // eax
  int i; // esi
  char *v8; // eax
  const char *v9; // eax
  int j; // ebx
  char *v11; // eax
  char *v12; // eax
  int v13; // ecx
  int v14; // esi
  const char *v15; // esi
  __int64 v16; // rax
  int k; // esi
  const char *v18; // eax
  __int64 v19; // rax
  void *v20; // eax
  _BYTE *v21; // eax
  char v22; // dl
  const char *v23; // esi
  int v24; // ecx
  char *v25; // ebx
  int v26; // ecx
  void *v27; // edx
  size_t v29; // [esp+Ch] [ebp-13Ch]
  char **v30; // [esp+10h] [ebp-138h]
  const CHAR *v31; // [esp+14h] [ebp-134h]
  size_t MaxCount; // [esp+18h] [ebp-130h]
  char *v33; // [esp+1Ch] [ebp-12Ch]
  char **v34; // [esp+20h] [ebp-128h]
  void **Block; // [esp+28h] [ebp-120h]
  char *String1; // [esp+2Ch] [ebp-11Ch]
  const char *v38; // [esp+30h] [ebp-118h] BYREF
  CHAR v39[16]; // [esp+34h] [ebp-114h] BYREF
  int v40; // [esp+44h] [ebp-104h]

  String1 = (char *)Str;
  v38 = ".";
  v2 = strrchr(Str, 47);
  v3 = v2;
  if ( v2 != nullptr )
  {
    v4 = (int)(v2 + 1);
    v12 = (char *)sub_4718A8();
    v3 = v12;
    if ( *v12 == 126 && v12[1] == 47 && *((_DWORD *)dword_48600C + 12) != 0 )
    {
      v14 = sub_41E9A4(v13, v12 + 1);
      free(v3);
      v3 = (char *)v14;
    }
    goto LABEL_27;
  }
  if ( (unsigned __int8)((*String1 | 0x20) - 97) <= 0x19u && String1[1] == 58 && String1[2] != 0 )
  {
    v4 = sub_4336F0((int)String1, v39, 0x104u);
    if ( v4 == 0 )
    {
LABEL_28:
      String1 = (char *)v4;
      goto LABEL_29;
    }
    v4 = (int)(String1 + 2);
    v3 = (char *)sub_47188C();
LABEL_27:
    v38 = v3;
    goto LABEL_28;
  }
  if ( a2 == 0 )
  {
    v5 = (**(_BYTE **)dword_48600C & 0x10) != 0
       ? *(const char **)(*(_DWORD *)dword_48600C + 8)
       : (const char *)sub_44328C("PATH");
    if ( v5 != nullptr && *v5 != 0 && (*v5 != 58 || v5[1] != 0) )
    {
      v6 = v5;
      for ( i = 1; ; ++i )
      {
        v8 = strchr(v6, 59);
        if ( v8 == nullptr || v8[1] == 0 )
          break;
        v6 = v8 + 1;
      }
      Block = (void **)sub_470E78();
      v9 = (const char *)sub_47188C();
      *Block = (void *)v9;
      for ( j = 1; ; Block[j - 1] = (void *)v9 )
      {
        v11 = strchr(v9, 59);
        if ( v11 == nullptr )
          break;
        *v11 = 0;
        if ( v11[1] == 0 )
          goto LABEL_31;
        v9 = v11 + 1;
        ++j;
      }
      v3 = nullptr;
      goto LABEL_31;
    }
  }
LABEL_29:
  Block = (void **)&v38;
  j = 1;
LABEL_31:
  MaxCount = strlen(String1);
  if ( ((unsigned int)v3 | a2) == 0 )
  {
    v15 = "[";
    while ( *v15 != 0 )
    {
      if ( strnicmp(String1, v15, MaxCount) == 0 )
      {
        v16 = sub_47188C();
        sub_413328((unsigned __int8 *)v16, (void *)HIDWORD(v16));
      }
      do
        ++v15;
      while ( *(v15 - 1) != 0 );
    }
    if ( *(_DWORD *)(*(_DWORD *)dword_48600C + 12) != 0 )
    {
      for ( k = 0; ; ++k )
      {
        v18 = (const char *)(*(int (**)(void))(*(_DWORD *)dword_48600C + 12))();
        if ( v18 == nullptr )
          break;
        if ( strnicmp(String1, v18, MaxCount) == 0 )
        {
          v19 = sub_47188C();
          sub_413328((unsigned __int8 *)v19, (void *)HIDWORD(v19));
        }
      }
    }
  }
  v34 = (char **)Block;
  v30 = (char **)&Block[j];
  do
  {
    v20 = (void *)sub_41422C(*v34);
    v31 = (const CHAR *)sub_415D34(v20);
    v33 = sub_402D50(v31);
    if ( v33 == nullptr )
      goto LABEL_68;
    while ( 1 )
    {
      v21 = (_BYTE *)sub_402F30((int)v33);
      if ( v21 == nullptr )
        break;
      if ( *String1 == 0 && v21[8] == 46 )
      {
        v22 = v21[9];
        if ( v22 == 0 || v22 == 46 && v21[10] == 0 )
          continue;
      }
      v23 = v21 + 8;
      if ( sub_43C5B0() != 0 )
      {
        v25 = (char *)sub_41E9A4(v24, v23);
        if ( sub_444C28(v25, v39) != 0 && sub_443484(v25, v39) != 0
          || a2 == 0 && (v40 & 0xF000) != 0x4000 && sub_42F668() == 0 )
        {
          goto LABEL_66;
        }
        v29 = strlen(v23);
        v25 = (char *)sub_471600(v26, v29 + 2);
        strcpy(v25, v23);
        if ( (v40 & 0xF000) == 0x4000 )
        {
          v25[v29] = 47;
          v25[v29 + 1] = 0;
          goto LABEL_65;
        }
        if ( a2 == 1 )
LABEL_66:
          free(v25);
        else
LABEL_65:
          sub_413328((unsigned __int8 *)v25, v27);
      }
    }
    sub_403050(v33);
LABEL_68:
    ++v34;
  }
  while ( v30 != v34 );
  if ( Block != (void **)&v38 )
  {
    free(*Block);
    free(Block);
  }
  free(v3);
  return MaxCount;
}

