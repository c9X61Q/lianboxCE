// busybox.exe @ 0x41a06c size=1012

int __cdecl sub_41A06C(int a1, int *a2)
{
  int v2; // ecx
  int *v3; // ebx
  int v4; // ebx
  int v5; // esi
  const char *Str; // ebx
  size_t v7; // edi
  const char *v8; // edi
  int v9; // esi
  const char *v10; // edi
  char *v11; // ebx
  char *v12; // eax
  int v13; // eax
  const char *v14; // esi
  const char *v15; // ebp
  int i; // edi
  const char *v17; // ebp
  const char *v18; // eax
  int v19; // edx
  char *v20; // edi
  int v21; // edx
  const char *Str2; // eax
  int v23; // esi
  const char *v24; // eax
  const CHAR *v25; // eax
  int v26; // edx
  int v27; // eax
  int v29; // [esp+10h] [ebp-120h]
  unsigned int v30; // [esp+10h] [ebp-120h]
  char *Block; // [esp+14h] [ebp-11Ch]
  int v32; // [esp+18h] [ebp-118h]
  char Destination[276]; // [esp+1Ch] [ebp-114h] BYREF

  v3 = a2;
  if ( a2[1] == 0 )
    goto LABEL_2;
  if ( sub_43C594(v2, "--list") != 0 )
  {
    sub_442F08(1, 2);
    v8 = "[";
    v9 = 0;
    do
    {
      if ( *(_BYTE *)(a2[1] + 6) != 0 )
      {
        sub_4326F8();
        sub_4326F8();
      }
      sub_4326F8();
      sub_4326F8();
      ++v9;
      do
        ++v8;
      while ( *(v8 - 1) != 0 );
    }
    while ( *v8 != 0 );
    return 0;
  }
  v10 = (const char *)a2[1];
  v30 = strcmp(v10, "--install");
  if ( v30 == 0 )
  {
    v11 = (char *)a2[2];
    if ( v11 != nullptr )
    {
      if ( strcmp(v11, "-u") == 0 )
        v11 = nullptr;
    }
    else
    {
      sub_433530();
      v12 = (char *)sub_47188C();
      v11 = sub_403200(v12);
    }
    v32 = sub_433530();
    if ( v11 != nullptr )
    {
      sub_417C00(v11, 493, 4);
    }
    else
    {
      v13 = sub_4356C8();
      v14 = (const char *)v13;
      v15 = (const char *)&unk_47487D;
      if ( v13 != 0 )
        v15 = (const char *)v13;
      for ( i = 1; i != 5; ++i )
      {
        Block = (char *)sub_4708BC("%s%s", v15, (const char *)*(&off_4800E0 + i));
        sub_417C00(Block, 493, 4);
        free(Block);
      }
      if ( v14 != nullptr )
        goto LABEL_32;
    }
    v14 = (const char *)&unk_47487D;
LABEL_32:
    v17 = "[";
    do
    {
      v18 = v11;
      if ( v11 == nullptr )
      {
        v19 = byte_47D788[v30 >> 1] & 0xF;
        if ( (v30 & 1) != 0 )
          v19 = (unsigned __int8)byte_47D788[v30 >> 1] >> 4;
        v18 = (const char *)*(&off_4800E0 + v19);
      }
      v20 = (char *)sub_4708BC("%s%s/%s.exe", v14, v18, v17);
      if ( sub_43DEB8(v32, v20) != 0 )
      {
        if ( *_errno() != 17 || (Str2 = sub_416E24(v20), strcmp("busybox.exe", Str2) != 0) )
          sub_418224(v20, v21);
      }
      free(v20);
      do
        ++v17;
      while ( *(v17 - 1) != 0 );
      ++v30;
    }
    while ( v30 != 156 );
    return 0;
  }
  v23 = strcmp(v10, "--uninstall");
  if ( v23 != 0 )
  {
    if ( strcmp(v10, "--help") == 0 )
    {
      v27 = a2[2];
      if ( v27 == 0 )
      {
LABEL_2:
        v4 = sub_43571C();
        sub_442F08(1, 2);
        sub_4326F8();
        sub_4326F8();
        sub_4326F8();
        v29 = v4 - 1;
        v5 = 0;
        Str = "[";
        while ( 1 )
        {
          v7 = strlen(Str);
          if ( (int)(v29 - (v7 + 2)) > v5 )
          {
            if ( v5 != 0 )
            {
              sub_4326F8();
              goto LABEL_8;
            }
          }
          else
          {
            sub_4326F8();
          }
          sub_4326F8();
          v5 = 6;
LABEL_8:
          sub_4326F8();
          v5 += v7 + 2;
          Str += v7 + 1;
          if ( *Str == 0 )
          {
            sub_4326F8();
            return 0;
          }
        }
      }
      *a2 = v27;
      a2[2] = 0;
    }
    else
    {
      v3 = a2 + 1;
    }
    dword_485AD0 = (char *)sub_417A0C(*v3);
    sub_45BD78();
  }
  v24 = (const char *)a2[2];
  if ( v24 != nullptr && strcmp(v24, "-n") == 0 )
  {
    v3 = a2 + 1;
    v23 = 1;
  }
  v25 = (const CHAR *)v3[2];
  if ( v25 == nullptr )
    sub_41784C("%s requires an argument", "--uninstall");
  while ( sub_42997C(v25, Destination) != 0 )
  {
    if ( v23 != 0 )
    {
      sub_4326D4();
      sub_4326D4();
    }
    else if ( sub_444ECC(Destination) != 0 )
    {
      sub_418224(Destination, v26);
    }
    v25 = nullptr;
  }
  return 0;
}

