// busybox.exe @ 0x44b680 size=416

char *__fastcall sub_44B680(int a1, int a2)
{
  const char *v3; // esi
  char *v4; // eax
  char *v5; // edi
  const char *v6; // ebp
  char *v7; // edi
  char *v8; // eax
  char *v9; // esi
  char *v10; // eax
  char *result; // eax
  char *v12; // esi

  free(*(void **)a2);
  v3 = (const char *)sub_47188C();
  *(_DWORD *)a2 = v3;
  *(_DWORD *)(a2 + 12) = "ftp";
  v4 = strstr(v3, "://");
  if ( v4 == nullptr )
  {
    *(_DWORD *)(a2 + 16) = v3;
    goto LABEL_9;
  }
  v5 = v4;
  *v4 = 0;
  *(_DWORD *)(a2 + 16) = v4 + 3;
  if ( strcmp(v3, "ftp") != 0 )
  {
    if ( strcmp(v3, "ftps") == 0 )
    {
      *(_DWORD *)(a2 + 20) = 990;
      *(_DWORD *)(a2 + 12) = "ftps";
      goto LABEL_12;
    }
    if ( strcmp(v3, "https") == 0 )
    {
      *(_DWORD *)(a2 + 20) = 443;
      *(_DWORD *)(a2 + 12) = "https";
      goto LABEL_12;
    }
    if ( strcmp(v3, "http") != 0 )
    {
      *v5 = 58;
      sub_41784C("not an http or ftp url: %s", v3);
    }
LABEL_9:
    *(_DWORD *)(a2 + 20) = 80;
    *(_DWORD *)(a2 + 12) = "http";
    goto LABEL_12;
  }
  *(_DWORD *)(a2 + 20) = 21;
LABEL_12:
  v6 = *(const char **)(a2 + 16);
  v7 = strchr(v6, 47);
  v8 = strchr(v6, 63);
  v9 = v8;
  if ( v7 != nullptr && (v8 == nullptr || v7 <= v8) )
    v9 = v7;
  v10 = strchr(v6, 35);
  if ( v9 != nullptr )
  {
    if ( v10 == nullptr || v9 <= v10 )
      v10 = v9;
  }
  else if ( v10 == nullptr )
  {
    *(_DWORD *)(a2 + 4) = &unk_475C97;
    goto LABEL_24;
  }
  *v10 = 0;
  *(_DWORD *)(a2 + 4) = v10 + 1;
LABEL_24:
  result = strrchr(*(const char **)(a2 + 16), 64);
  v12 = result;
  if ( result != nullptr )
  {
    *result = 0;
    free(*(void **)(a2 + 8));
    sub_44C994();
    result = (char *)sub_47188C();
    *(_DWORD *)(a2 + 8) = result;
    *(_DWORD *)(a2 + 16) = v12 + 1;
  }
  return result;
}

