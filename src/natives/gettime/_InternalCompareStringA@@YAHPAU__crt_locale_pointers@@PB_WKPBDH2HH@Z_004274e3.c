// gettime.exe @ 0x4274e3 size=671

int __cdecl InternalCompareStringA(
        struct __crt_locale_pointers *a1,
        wchar_t *a2,
        DWORD dwCmpFlags,
        char *String,
        int Count,
        const char *a6,
        int a7,
        UINT CodePage)
{
  const char *v8; // ecx
  int v9; // esi
  size_t v10; // eax
  signed int v11; // edi
  UINT v12; // ebx
  BYTE *LeadByte; // eax
  unsigned __int8 v14; // cl
  BYTE *i; // eax
  unsigned __int8 v17; // cl
  int v18; // eax
  unsigned int v19; // eax
  void *v20; // esp
  _DWORD *v21; // ebx
  _DWORD *v22; // eax
  WCHAR *v23; // ebx
  const CHAR *v24; // eax
  unsigned int v25; // eax
  void *v26; // esp
  _DWORD *v27; // edi
  _DWORD *v28; // eax
  WCHAR *v29; // edi
  int v30; // esi
  _DWORD v32[3]; // [esp+0h] [ebp-34h] BYREF
  wchar_t *v33; // [esp+Ch] [ebp-28h]
  int cchWideChar; // [esp+10h] [ebp-24h]
  LPCCH v35; // [esp+14h] [ebp-20h]
  LPCCH lpMultiByteStr; // [esp+18h] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+1Ch] [ebp-18h] BYREF

  v8 = a6;
  cchWideChar = (int)a1;
  v9 = Count;
  v33 = a2;
  lpMultiByteStr = String;
  v35 = a6;
  if ( Count <= 0 )
  {
    if ( Count < -1 )
      return 0;
  }
  else
  {
    v10 = __strncnt(String, Count);
    v8 = v35;
    v9 = v10;
  }
  v11 = a7;
  if ( a7 <= 0 )
  {
    if ( a7 < -1 )
      return 0;
  }
  else
  {
    v11 = __strncnt(v8, a7);
    a7 = v11;
  }
  v12 = CodePage;
  if ( CodePage == 0 )
  {
    v12 = *(_DWORD *)(*(_DWORD *)cchWideChar + 8);
    CodePage = v12;
  }
  if ( v9 == 0 || v11 == 0 )
  {
    if ( v9 == v11 )
      return 2;
    if ( v11 > 1 )
      return 1;
    if ( v9 > 1 )
      return 3;
    if ( !GetCPInfo(v12, &CPInfo) )
      return 0;
    if ( v9 > 0 )
    {
      if ( CPInfo.MaxCharSize >= 2 )
      {
        LeadByte = CPInfo.LeadByte;
        if ( CPInfo.LeadByte[0] != 0 )
        {
          while ( 1 )
          {
            v14 = LeadByte[1];
            if ( v14 == 0 )
              break;
            if ( (unsigned int)*lpMultiByteStr >= *LeadByte && (unsigned int)*lpMultiByteStr <= v14 )
              return 2;
            LeadByte += 2;
            if ( *LeadByte == 0 )
              return 3;
          }
        }
      }
      return 3;
    }
    if ( v11 > 0 )
    {
      if ( CPInfo.MaxCharSize >= 2 )
      {
        for ( i = CPInfo.LeadByte; *i != 0; i += 2 )
        {
          v17 = i[1];
          if ( v17 == 0 )
            break;
          if ( (unsigned int)*v35 >= *i && (unsigned int)*v35 <= v17 )
            return 2;
        }
      }
      return 1;
    }
  }
  v18 = __acrt_MultiByteToWideChar(v12, 9u, lpMultiByteStr, v9, nullptr, 0);
  cchWideChar = v18;
  if ( v18 == 0 )
    return 0;
  v19 = 2 * v18 < (unsigned int)(2 * v18 + 8) ? 2 * v18 + 8 : 0;
  if ( v19 == 0 )
    goto LABEL_56;
  if ( v19 <= 0x400 )
  {
    v20 = alloca(v19);
    v21 = v32;
    if ( v32 != nullptr )
    {
      v32[0] = 52428;
      goto LABEL_39;
    }
LABEL_56:
    _freea_crt(0);
    return 0;
  }
  v22 = _malloc_base(v19);
  v21 = v22;
  if ( v22 == nullptr )
    goto LABEL_56;
  *v22 = 56797;
LABEL_39:
  v23 = (WCHAR *)(v21 + 2);
  if ( v23 == nullptr )
    goto LABEL_56;
  if ( __acrt_MultiByteToWideChar(CodePage, 1u, lpMultiByteStr, v9, v23, cchWideChar) == 0
    || (v24 = (const CHAR *)__acrt_MultiByteToWideChar(CodePage, 9u, v35, v11, nullptr, 0),
        lpMultiByteStr = v24,
        v24 == nullptr) )
  {
    _freea_crt((int)v23);
    return 0;
  }
  v25 = 2 * (int)v24 < (unsigned int)(2 * (_DWORD)v24 + 8) ? 2 * (_DWORD)v24 + 8 : 0;
  if ( v25 == 0 )
    goto LABEL_54;
  if ( v25 <= 0x400 )
  {
    v26 = alloca(v25);
    v27 = v32;
    if ( v32 != nullptr )
    {
      v32[0] = 52428;
      goto LABEL_48;
    }
LABEL_54:
    _freea_crt(0);
    goto LABEL_51;
  }
  v28 = _malloc_base(v25);
  v27 = v28;
  if ( v28 == nullptr )
    goto LABEL_54;
  *v28 = 56797;
LABEL_48:
  v29 = (WCHAR *)(v27 + 2);
  if ( v29 == nullptr )
    goto LABEL_54;
  if ( __acrt_MultiByteToWideChar(CodePage, 1u, v35, a7, v29, (int)lpMultiByteStr) == 0 )
  {
    _freea_crt((int)v29);
LABEL_51:
    _freea_crt((int)v23);
    return 0;
  }
  v30 = __acrt_CompareStringEx(v33, dwCmpFlags, v23, cchWideChar, v29, (int)lpMultiByteStr, 0, 0, 0);
  _freea_crt((int)v29);
  _freea_crt((int)v23);
  return v30;
}

