// lian86.exe @ 0x00406310  size=819  name=sub_406310
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall sub_406310(wchar_t *String, wchar_t *String2, wchar_t *Source, char a4, int a5, int a6, int a7)
{
  int v7; // ebp
  wchar_t *v8; // ebx
  int (__cdecl *v10)(const wchar_t *, const wchar_t *, size_t); // ecx
  unsigned int v11; // esi
  unsigned int v12; // edi
  int v13; // eax
  wchar_t *v14; // edi
  wchar_t *i; // ebx
  wchar_t *v16; // ecx
  wchar_t v17; // ax
  wchar_t *v18; // edi
  wchar_t *v19; // ebx
  wchar_t *v20; // eax
  wchar_t *v21; // edi
  wchar_t *v22; // ecx
  int v23; // edi
  wchar_t v24; // ax
  wchar_t j; // cx
  size_t Count; // [esp+10h] [ebp-20h]
  int v27; // [esp+14h] [ebp-1Ch]
  int v28; // [esp+24h] [ebp-Ch]
  int v29; // [esp+28h] [ebp-8h]
  int v30; // [esp+2Ch] [ebp-4h]
  int (__cdecl *v31)(const wchar_t *, const wchar_t *, size_t); // [esp+40h] [ebp+10h]

  v7 = 0;
  if ( String == nullptr )
    String = (wchar_t *)&unk_413024;
  v8 = String2;
  if ( String2 == nullptr )
  {
    v8 = (wchar_t *)&unk_413024;
    String2 = (wchar_t *)&unk_413024;
  }
  if ( Source == nullptr )
    Source = (wchar_t *)&unk_413024;
  v10 = wcsnicmp;
  v27 = a4 & 1;
  if ( (a4 & 1) == 0 )
    v10 = wcsncmp;
  v31 = v10;
  if ( a5 <= 0 )
    a5 = 1;
  v11 = wcslen(v8);
  v12 = wcslen(Source);
  Count = v12;
  if ( (a4 & 2) != 0 )
  {
    if ( v11 != 0 )
    {
      v13 = a6;
      if ( a6 != 0 )
      {
        v14 = &String[a5 - 1];
        for ( i = v14; *i != 0; v10 = v31 )
        {
          if ( v13 != -1 && v13 <= v7 )
            break;
          if ( v10(v14, String2, v11) != 0 )
          {
            ++v14;
            ++i;
          }
          else
          {
            wcsncpy(v14, Source, Count);
            i += v11;
            ++v7;
            v14 += Count;
          }
          v13 = a6;
        }
      }
    }
    return;
  }
  v28 = sub_40E880(String);
  if ( v28 != 0 )
    String = wcsdup(String);
  v29 = sub_40E880(v8);
  if ( v29 != 0 )
  {
    v8 = wcsdup(v8);
    String2 = v8;
  }
  v30 = sub_40E880(Source);
  if ( v30 != 0 )
    Source = wcsdup(Source);
  v16 = &String[a5 - 1];
  if ( a6 != 0 )
  {
    v17 = *v16;
    if ( *v16 != 0 )
    {
      v18 = &String[a5 - 1];
      while ( 1 )
      {
        if ( v27 != 0 )
        {
          if ( v31(v18, v8, v11) != 0 )
            goto LABEL_34;
        }
        else if ( v17 != *v8 || v31(v18, v8, v11) != 0 )
        {
LABEL_34:
          ++v18;
          goto LABEL_35;
        }
        v18 += v11;
        ++v7;
        if ( a6 != -1 && a6 <= v7 )
        {
LABEL_36:
          v12 = Count;
          break;
        }
LABEL_35:
        v17 = *v18;
        if ( *v18 == 0 )
          goto LABEL_36;
      }
    }
  }
  v19 = String;
  v20 = (wchar_t *)sub_40E900(wcslen(String) + v7 * (v12 - v11), a7);
  v21 = v20;
  if ( v7 == 0 )
  {
    v22 = String;
    v23 = (char *)v20 - (char *)String;
    do
    {
      v24 = *v22++;
      *(wchar_t *)((char *)v22 + v23 - 2) = v24;
    }
    while ( v24 != 0 );
    goto LABEL_55;
  }
  if ( a5 > 1 )
  {
    wcsncpy(v20, String, a5);
    v19 = &String[a5 - 1];
    v21 += a5 - 1;
  }
  for ( j = *v19; *v19 != 0; j = *v19 )
  {
    if ( v7 > 0 )
    {
      if ( v27 != 0 )
      {
        if ( v31(v19, String2, v11) == 0 )
          goto LABEL_63;
      }
      else if ( j == *String2 && v31(v19, String2, v11) == 0 )
      {
LABEL_63:
        wcsncpy(v21, Source, Count);
        v19 += v11;
        --v7;
        v21 += Count;
        continue;
      }
    }
    *v21++ = *v19++;
  }
  v19 = String;
  *v21 = 0;
LABEL_55:
  if ( v28 != 0 )
    free(v19);
  if ( v29 != 0 )
    free(String2);
  if ( v30 != 0 )
    free(Source);
}

