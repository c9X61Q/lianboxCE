// busybox.exe @ 0x403740 size=861

int __usercall sub_403740@<eax>(int a1@<eax>, _BYTE *a2@<edx>, const char **a3@<ecx>, int *a4, int a5)
{
  char *v6; // ebx
  char *v7; // eax
  size_t MaxCount; // esi
  const char *Str; // ebp
  int v10; // ebx
  const char **v11; // eax
  int v12; // edx
  int result; // eax
  bool v14; // zf
  int v15; // eax
  const char **v16; // edi
  int v17; // ebp
  int *v18; // edx
  int v19; // eax
  char *Str1; // [esp+1Ch] [ebp-40h]
  int v21; // [esp+20h] [ebp-3Ch]
  _BYTE v22[5]; // [esp+27h] [ebp-35h]
  char *v23; // [esp+2Ch] [ebp-30h]
  int v25; // [esp+34h] [ebp-28h]
  int v26; // [esp+38h] [ebp-24h]

  v6 = ::Str;
  v26 = dword_473090;
  Str1 = ::Str;
  v25 = ++dword_473090;
  v7 = strchr(::Str, 61);
  v23 = v7;
  if ( v7 != nullptr )
  {
    v23 = v7 + 1;
    MaxCount = v7 - v6;
  }
  else
  {
    MaxCount = strlen(Str1);
  }
  Str = *a3;
  if ( *a3 == nullptr )
  {
LABEL_16:
    if ( a5 != 0 )
    {
      dword_473090 = v26;
      return -1;
    }
    if ( dword_473094 != 0 && *a2 != 58 )
      sub_4036C0("unknown option -- %s", Str1);
LABEL_20:
    dword_47308C = 0;
    return 63;
  }
  v21 = -1;
  v10 = 0;
  v22[4] = 0;
  *(_DWORD *)v22 = a5 & 1;
  do
  {
    while ( 1 )
    {
      if ( strncmp(Str1, Str, MaxCount) == 0 )
      {
        if ( strlen(Str) == MaxCount )
          goto LABEL_26;
        if ( MaxCount != 1 || v22[0] == 0 )
          break;
      }
LABEL_7:
      ++v10;
      Str = a3[4 * v10];
      if ( Str == nullptr )
        goto LABEL_14;
    }
    if ( v21 != -1 )
    {
      v11 = &a3[4 * v21];
      v12 = 4 * v10;
      if ( a3[4 * v10 + 1] == v11[1] && a3[v12 + 2] == v11[2] )
      {
        v14 = a3[v12 + 3] == v11[3];
        v15 = 1;
        if ( v14 )
          v15 = *(_DWORD *)&v22[1];
        *(_DWORD *)&v22[1] = v15;
      }
      else
      {
        *(_DWORD *)&v22[1] = 1;
      }
      goto LABEL_7;
    }
    v21 = v10++;
    Str = a3[4 * v10];
  }
  while ( Str != nullptr );
LABEL_14:
  if ( *(_DWORD *)&v22[1] != 0 )
  {
    if ( dword_473094 != 0 && *a2 != 58 )
      sub_4036C0("ambiguous option -- %.*s", MaxCount, Str1);
    goto LABEL_20;
  }
  if ( v21 == -1 )
    goto LABEL_16;
  v10 = v21;
LABEL_26:
  v16 = &a3[4 * v10];
  v17 = (int)v16[1];
  if ( v17 != 0 )
  {
    if ( (unsigned int)(v17 - 1) <= 1 )
    {
      if ( v23 != nullptr )
      {
        dword_48601C = v23;
      }
      else if ( v17 == 1 )
      {
        dword_473090 = v26 + 2;
        dword_48601C = *(char **)(a1 + 4 * v25);
        if ( dword_48601C == nullptr )
        {
          if ( dword_473094 != 0 && *a2 != 58 )
          {
            sub_4036C0("option requires an argument -- %s", Str1);
            v25 = dword_473090 - 1;
          }
          v19 = 0;
          if ( v16[2] == nullptr )
            v19 = (int)v16[3];
          dword_47308C = v19;
          dword_473090 = v25;
          if ( *a2 != 58 )
            return 63;
          return 58;
        }
      }
    }
  }
  else if ( v23 != nullptr )
  {
    if ( dword_473094 != 0 && *a2 != 58 )
      sub_4036C0("option doesn't take an argument -- %.*s", MaxCount, Str1);
    if ( v16[2] == nullptr )
      v17 = (int)v16[3];
    dword_47308C = v17;
    if ( *a2 != 58 )
      return 63;
    return 58;
  }
  if ( a4 != nullptr )
    *a4 = v10;
  v18 = (int *)v16[2];
  result = (int)v16[3];
  if ( v18 != nullptr )
  {
    *v18 = result;
    return 0;
  }
  return result;
}

