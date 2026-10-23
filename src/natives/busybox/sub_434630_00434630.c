// busybox.exe @ 0x434630 size=497

const char *__usercall sub_434630@<eax>(const char *Str@<eax>, _DWORD *a2@<edx>, int a3@<ecx>, int a4@<esi>)
{
  const char *v4; // ebx
  int v7; // edx
  signed int v8; // ecx
  char v9; // dl
  char v10; // al
  signed int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  char *v15; // edi
  int v16; // edx
  char v17; // al
  const char *v18; // ecx
  int v19; // edx
  unsigned __int8 v20; // al
  char *v21; // edi
  char *v22; // edx
  char v23; // al
  int i; // [esp+4h] [ebp-24h]
  signed int v26; // [esp+8h] [ebp-20h]
  char v27; // [esp+Eh] [ebp-1Ah]
  unsigned int v28; // [esp+10h] [ebp-18h]
  unsigned int v29; // [esp+14h] [ebp-14h]

  v4 = Str;
  if ( a2[1] == 1 && a2[2] == 0 && a2[3] == 0 && (a2[4] | a3 & 0x80001D00) == 0 )
    return v4;
  v26 = strlen(Str);
  for ( i = 0; ; i = 1 )
  {
    v7 = a2[2 * i + 1];
    if ( v7 == 0 )
    {
      v8 = v26;
      goto LABEL_25;
    }
    v27 = 0;
    v28 = 1;
    v8 = 0;
    v29 = v7 + i;
    while ( v29 > v28 )
    {
      if ( byte_473448 != 0 )
      {
        do
        {
          v27 = v4[v8];
          if ( v27 == 0 )
            break;
          ++v8;
        }
        while ( byte_473448 != v27 );
      }
      else
      {
        while ( (unsigned __int8)(v4[v8] - 9) <= 4u || v4[v8] == 32 )
          ++v8;
        while ( 1 )
        {
          v9 = v4[v8];
          if ( (v9 & 0xDF) == 0 || (unsigned __int8)(v9 - 9) <= 4u )
            break;
          ++v8;
        }
      }
      ++v28;
    }
    if ( v27 != 0 && i != 0 )
      break;
LABEL_25:
    if ( i != 0 )
      goto LABEL_27;
    a4 = v8;
  }
  --v8;
LABEL_27:
  if ( (a3 & 0x100) != 0 )
  {
    while ( (unsigned __int8)(v4[a4] - 9) <= 4u || v4[a4] == 32 )
      ++a4;
  }
  if ( a3 < 0 )
  {
    while ( a4 < v8 )
    {
      v10 = v4[v8 - 1];
      if ( v10 != 32 && (unsigned __int8)(v10 - 9) > 4u )
        break;
      --v8;
    }
  }
  v11 = a2[4];
  if ( v11 != 0 )
  {
    v8 = a2[4];
    if ( v11 > v26 )
      v8 = v26;
  }
  v12 = a2[2];
  if ( v12 != 0 )
  {
    a4 = v12 + a4 - 1;
    if ( a4 > v26 )
      a4 = v26;
  }
  v13 = a4;
  if ( a4 < v8 )
    v13 = v8;
  v14 = sub_4718A8(v8, v13 - a4);
  v4 = (const char *)v14;
  if ( (a3 & 0x400) != 0 )
  {
    v15 = (char *)v14;
    v16 = 0;
    while ( 1 )
    {
      v17 = *v15;
      if ( *v15 == 0 )
        break;
      if ( v17 == 32
        || (unsigned __int8)(v17 - 9) <= 4u
        || (unsigned __int8)(v17 - 48) <= 9u
        || (unsigned __int8)((v17 | 0x20) - 97) <= 0x19u )
      {
        v4[v16++] = v17;
      }
      ++v15;
    }
    v4[v16] = 0;
  }
  if ( (a3 & 0x1000) != 0 )
  {
    v18 = v4;
    v19 = 0;
    while ( 1 )
    {
      v20 = *v18;
      v21 = (char *)&v4[v19];
      if ( *v18 == 0 )
        break;
      if ( (unsigned int)v20 - 32 <= 0x5E )
      {
        ++v19;
        *v21 = v20;
      }
      ++v18;
    }
    *v21 = 0;
  }
  v22 = (char *)v4;
  if ( (a3 & 0x800) != 0 )
  {
    while ( 1 )
    {
      v23 = *v22;
      if ( *v22 == 0 )
        break;
      if ( (unsigned __int8)(v23 - 97) <= 0x19u )
        v23 -= 32;
      *v22++ = v23;
    }
  }
  return v4;
}

