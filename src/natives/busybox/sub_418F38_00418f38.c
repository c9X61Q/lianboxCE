// busybox.exe @ 0x418f38 size=758

int sub_418F38()
{
  int v0; // ebx
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // esi
  int v4; // edx
  const char *v5; // eax
  int v6; // eax
  void *v7; // esp
  char *v8; // edi
  char *i; // esi
  size_t v10; // eax
  size_t v11; // ecx
  char *v12; // esi
  int j; // eax
  const char *v14; // edx
  char *v15; // edi
  const char *v16; // eax
  void *v17; // esp
  size_t v18; // eax
  char *v19; // edi
  size_t v20; // eax
  char *v21; // edi
  char *v22; // edx
  int v23; // ecx
  int v24; // ecx
  char *Str; // [esp+0h] [ebp-40h] BYREF
  char Destination[4]; // [esp+18h] [ebp-28h] BYREF
  int v28; // [esp+1Ch] [ebp-24h]
  unsigned int v29; // [esp+20h] [ebp-20h]
  char *v30; // [esp+24h] [ebp-1Ch]
  char *Source; // [esp+28h] [ebp-18h]
  int v32; // [esp+2Ch] [ebp-14h] BYREF
  int v33; // [esp+30h] [ebp-10h]

  sub_46F088("\x1B[%u;%uH", 0, 0);
  v29 = 0;
  while ( 1 )
  {
    v0 = dword_486010;
    v1 = *(_DWORD *)(dword_486010 + 28);
    if ( v1 < v29 )
      break;
    sub_46F088("\x1B[%u;%uH", ++v29, 0);
    sub_46F088("\x1B[K");
    v3 = 4 * v29;
    if ( (dword_486008 & 8) != 0 )
    {
      v4 = *(_DWORD *)(*(_DWORD *)(v0 + 48) + v3 - 4);
      v5 = "        ";
      if ( v4 != *(_DWORD *)(v0 + 56) )
      {
        v28 = *(_DWORD *)(v4 - 4) + 1;
        v5 = "%7u ";
      }
      sub_46F088(v5, v28);
    }
    Source = *(char **)(*(_DWORD *)(v0 + 48) + v3 - 4);
    v6 = *(_DWORD *)(v0 + 32);
    if ( *(_BYTE *)(v0 + 252) != 0 )
    {
      *(_DWORD *)Destination = &Str;
      v7 = alloca(sub_4115D8(4 * ((unsigned int)(v6 + 4) >> 2), v2, (char)Str));
      v30 = Destination;
      v8 = Destination;
      for ( i = Source; *i != 0; i += v11 )
      {
        v10 = strcspn(i, &byte_47E300);
        if ( v10 != 0 )
        {
          if ( i[v10] == 0 )
            break;
          qmemcpy(v8, i, v10);
          i += v10;
          v8 += v10;
        }
        v11 = strspn(i, &byte_47E300);
        memset(v8, 46, v11);
        v8 += v11;
      }
      strcpy(v8, i);
      v12 = nullptr;
      for ( j = 0; sub_459FE8(v0 + 220, Source, 1, (int)&v32, j) == 0 && v32 < v33; j = 1 )
      {
        v14 = v12;
        if ( v12 == nullptr )
          v14 = (const char *)&unk_474D7A;
        v15 = (char *)sub_4708BC("%s%.*s\x1B[7m%.*s\x1B[m", v14, v32, v30, v33 - v32, &v30[v32]);
        free(v12);
        v30 += v33;
        Source += v33;
        v12 = v15;
      }
      v16 = v12;
      if ( v12 == nullptr )
        v16 = (const char *)&unk_474D7A;
      sub_46F088("%s%s", v16, v30);
      free(v12);
    }
    else
    {
      v17 = alloca(sub_4115D8(4 * ((unsigned int)(v6 + 4) >> 2), v2, (char)Str));
      while ( *Source != 0 )
      {
        v18 = strcspn(Source, &byte_47E300);
        if ( v18 != 0 )
        {
          v19 = &Source[v18];
          if ( Source[v18] == 0 )
            break;
          sub_46F088("%.*s", v18, Source);
          Source = v19;
        }
        v20 = strspn(Source, &byte_47E300);
        v21 = &Source[v20];
        v22 = Destination;
        do
        {
          v23 = (unsigned __int8)*Source;
          if ( (_BYTE)v23 == 127 )
          {
            *v22 = 63;
          }
          else if ( (_BYTE)v23 == 0x9B )
          {
            *v22 = 123;
          }
          else
          {
            *v22 = byte_47F60C[v23];
          }
          ++v22;
          ++Source;
        }
        while ( v21 != Source );
        Destination[v20] = 0;
        sub_46F088("\x1B[7m%s\x1B[m", Destination);
      }
      sub_46F088("%s", Source);
    }
  }
  if ( (dword_486008 & 0x41) != 0 && *(int *)(dword_486010 + 36) <= 0 )
  {
    v24 = 0;
    if ( (dword_486008 & 0x40) == 0 )
      v24 = *(_DWORD *)dword_486010;
    if ( v1 >= *(_DWORD *)(dword_486010 + 20) - v24 )
      sub_43D470();
  }
  return sub_463120();
}

