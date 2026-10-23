// gettime.exe @ 0x415da6 size=474

char __cdecl parse_bcp47(void *a1, wchar_t *a2)
{
  char v2; // bl
  const unsigned __int16 *v3; // edx
  unsigned int v4; // edi
  int i; // eax
  size_t v6; // eax
  unsigned int v7; // ecx
  unsigned int *v8; // eax
  unsigned int *v9; // esi
  const unsigned __int16 *v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  char *v17; // eax
  int v19; // [esp+10h] [ebp-40h]
  wchar_t *String; // [esp+14h] [ebp-3Ch]
  unsigned int *v21; // [esp+18h] [ebp-38h]
  int v22; // [esp+1Ch] [ebp-34h] BYREF
  char v23; // [esp+20h] [ebp-30h] BYREF
  _BYTE v24[12]; // [esp+28h] [ebp-28h] BYREF
  _BYTE v25[12]; // [esp+34h] [ebp-1Ch] BYREF
  char v26; // [esp+40h] [ebp-10h] BYREF

  v2 = 0;
  String = a2;
  memset(a1, 0, 0x1CAu);
  v3 = a2;
  v21 = (unsigned int *)&v23;
  v4 = 0;
LABEL_2:
  while ( 2 )
  {
    for ( i = 0; ; i = 2 )
    {
      v19 = i;
      if ( v4 >= 4 )
        return 0;
      if ( i == 2 )
      {
        v7 = wcslen(v3);
      }
      else
      {
        v6 = wcscspn(v3, L"-_.");
        v3 = String;
        v7 = v6;
      }
      v8 = v21;
      ++v4;
      v9 = v21;
      v21 += 3;
      *(v8 - 1) = (unsigned int)v3;
      v10 = &v3[v7];
      *v8 = v7;
      v9[1] = v19;
      v11 = *v10;
      v3 = v10 + 1;
      String = (wchar_t *)v3;
      if ( v11 == 0 )
        goto LABEL_11;
      v12 = v11 - 45;
      if ( v12 == 0 )
        goto LABEL_2;
      v13 = v12 - 1;
      if ( v13 != 0 )
        break;
    }
    if ( v13 == 49 )
      continue;
    break;
  }
LABEL_11:
  v14 = v4 - 1;
  if ( v14 == 0 )
    return parse_bcp47_language((wchar_t *)a1, (int)&v22);
  v15 = v14 - 1;
  if ( v15 == 0 )
  {
    if ( (unsigned __int8)parse_bcp47_language((wchar_t *)a1, (int)&v22) == 0 )
      return v2;
    if ( (unsigned __int8)parse_bcp47_script(a1, v24) != 0 || (unsigned __int8)parse_bcp47_region(a1, v24) != 0 )
      return 1;
    v17 = v24;
    goto LABEL_30;
  }
  v16 = v15 - 1;
  if ( v16 == 0 )
  {
    if ( (unsigned __int8)parse_bcp47_language((wchar_t *)a1, (int)&v22) == 0 )
      return v2;
    if ( (unsigned __int8)parse_bcp47_script(a1, v24) != 0
      && ((unsigned __int8)parse_bcp47_region(a1, v25) != 0 || (unsigned __int8)parse_bcp47_code_page(a1, v25) != 0) )
    {
      return 1;
    }
    if ( (unsigned __int8)parse_bcp47_region(a1, v24) == 0 )
      return v2;
    v17 = v25;
LABEL_30:
    if ( (unsigned __int8)parse_bcp47_code_page(a1, v17) != 0 )
      return 1;
    return v2;
  }
  if ( v16 == 1 )
  {
    if ( (unsigned __int8)parse_bcp47_language((wchar_t *)a1, (int)&v22) == 0
      || (unsigned __int8)parse_bcp47_script(a1, v24) == 0
      || (unsigned __int8)parse_bcp47_region(a1, v25) == 0 )
    {
      return v2;
    }
    v17 = &v26;
    goto LABEL_30;
  }
  return 0;
}

