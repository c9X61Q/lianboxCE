// busybox.exe @ 0x435d7c size=689

int __cdecl sub_435D7C(int a1, _DWORD *a2)
{
  int v2; // eax
  const char *Str; // ebx
  const char **v5; // edi
  int v6; // eax
  const char *v7; // eax
  char *v8; // ecx
  char *v9; // eax
  char *v10; // ebx
  int v11; // ebp
  size_t v12; // eax
  size_t v13; // edx
  int *v14; // edx
  char *v15; // ebx
  int v16; // edx
  int v17; // [esp+1Ch] [ebp-28h]
  char v18; // [esp+20h] [ebp-24h]
  char *v19; // [esp+24h] [ebp-20h] BYREF
  int v20; // [esp+28h] [ebp-1Ch] BYREF
  char *Str1; // [esp+2Ch] [ebp-18h] BYREF
  _DWORD v22[5]; // [esp+30h] [ebp-14h] BYREF

  v19 = nullptr;
  v20 = 0;
  v22[0] = 0;
  v2 = sub_44328C("GETOPT_COMPATIBLE");
  Str = (const char *)a2[1];
  if ( Str == nullptr )
  {
    if ( v2 != 0 )
    {
      sub_46F108(" --");
      return 0;
    }
LABEL_12:
    v7 = "missing optstring argument";
    goto LABEL_21;
  }
  if ( *Str != 45 || v2 != 0 )
  {
    dword_486008 |= 0x40u;
    strspn(Str, "-+");
    v8 = (char *)sub_47188C();
    a2[1] = *a2;
    return sub_432DD0(v8, (int)(a2 + 1), a1 - 1, nullptr);
  }
  else
  {
    v18 = sub_435D60((int)a2, (int)"+o:n:qQs:Tual:*", (int)"options", &v19, &v20, &Str1, v22);
    v5 = nullptr;
LABEL_7:
    if ( v22[0] != 0 )
    {
      v9 = (char *)sub_43E400();
      v10 = strtok(v9, ", \t\n");
      v11 = 0;
      if ( v5 != nullptr )
      {
        while ( v5[4 * v11] != nullptr )
          ++v11;
      }
      while ( 1 )
      {
        if ( v10 == nullptr )
          goto LABEL_7;
        v12 = strlen(v10);
        if ( v12 != 0 )
        {
          v13 = v12 - 1;
          if ( v10[v12 - 1] == 58 )
          {
            v17 = 1;
            if ( v12 != 1 && v10[v12 - 2] == 58 )
            {
              v13 = v12 - 2;
              v17 = 2;
            }
            v10[v13] = 0;
            if ( v13 == 0 )
            {
              v7 = "empty long option specified";
LABEL_21:
              sub_418210(v7);
            }
          }
          else
          {
            v17 = 0;
          }
          v5 = (const char **)sub_47168C(v11, 4100);
          v14 = (int *)&v5[4 * v11];
          v14[1] = v17;
          v14[3] = 2;
          *v14 = sub_47188C();
          ++v11;
        }
        v10 = strtok(nullptr, ", \t\n");
      }
    }
    if ( (v18 & 0x10) != 0 )
    {
      v15 = Str1;
      if ( strcmp(Str1, "bash") != 0 && strcmp(v15, "sh") != 0 )
      {
        if ( strcmp(v15, "tcsh") == 0 || strcmp(v15, "csh") == 0 )
          dword_486008 |= 0x8000u;
        else
          sub_41783C("unknown shell '%s', assuming bash", v15);
      }
    }
    if ( (v18 & 0x20) != 0 )
    {
      return 4;
    }
    else
    {
      v6 = dword_473090;
      if ( v19 != nullptr )
      {
        v6 = dword_473090 - 1;
      }
      else
      {
        v19 = (char *)a2[dword_473090];
        if ( v19 == nullptr )
          goto LABEL_12;
      }
      v16 = v20;
      if ( v20 == 0 )
        v16 = *a2;
      a2[v6] = v16;
      return sub_432DD0(v19, (int)&a2[v6], a1 - v6, v5);
    }
  }
}

