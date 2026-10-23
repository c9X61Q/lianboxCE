// gettime.exe @ 0x4156c7 size=751

char *__cdecl _wsetlocale_nolock(int a1, int a2, wchar_t *String2)
{
  const wchar_t *v3; // esi
  int v4; // edi
  char *result; // eax
  int v6; // ebx
  wchar_t *v7; // eax
  const wchar_t **v8; // ebx
  const wchar_t *v9; // ecx
  __int16 v10; // ax
  const wchar_t *v11; // ebx
  rsize_t v12; // esi
  int v13; // eax
  wchar_t **v14; // ecx
  wchar_t v15; // dx
  wchar_t **v16; // edx
  int v17; // esi
  wchar_t *v18; // ecx
  wchar_t *v19; // eax
  bool v20; // cf
  wchar_t v21; // dx
  bool v22; // zf
  int v23; // eax
  int v24; // eax
  size_t v25; // eax
  int v26; // [esp+10h] [ebp-1CCh] BYREF
  int v27; // [esp+14h] [ebp-1C8h]
  size_t MaxCount; // [esp+18h] [ebp-1C4h]
  int v29; // [esp+1Ch] [ebp-1C0h]
  wchar_t **v30; // [esp+20h] [ebp-1BCh]
  wchar_t v31[86]; // [esp+24h] [ebp-1B8h] BYREF
  wchar_t Destination[132]; // [esp+D0h] [ebp-10Ch] BYREF

  v3 = String2;
  v4 = a1;
  v27 = a1;
  if ( a2 != 0 )
  {
    if ( String2 != nullptr )
      return (char *)_wsetlocale_set_cat(a1, a2, String2);
    else
      return *(char **)(a1 + 16 * (a2 + 2));
  }
  MaxCount = 1;
  v6 = 0;
  v30 = nullptr;
  if ( String2 == nullptr )
    return _wsetlocale_get_all(v4);
  if ( *String2 == 76 && String2[1] == 67 && String2[2] == 95 )
  {
    while ( 1 )
    {
      v7 = wcspbrk(v3, L"=;");
      v26 = (int)v7;
      if ( v7 == nullptr )
        break;
      MaxCount = v7 - v3;
      if ( MaxCount == 0 || *v7 == 59 )
        break;
      v8 = (const wchar_t **)&off_42C664;
      v29 = 1;
      do
      {
        if ( wcsncmp(*v8, v3, MaxCount) == 0 )
        {
          v9 = *v8;
          do
            v10 = *v9++;
          while ( v10 != 0 );
          if ( MaxCount == v9 - (*v8 + 1) )
            break;
        }
        ++v29;
        v8 += 3;
      }
      while ( (int)v8 <= (int)&off_42C694 );
      v11 = (const wchar_t *)(v26 + 2);
      v4 = v27;
      v12 = wcscspn((const wchar_t *)(v26 + 2), L";");
      if ( v12 == 0 && *v11 != 59 )
        break;
      if ( v29 > 5 )
      {
        v14 = v30;
      }
      else
      {
        if ( wcsncpy_s(Destination, 0x83u, v11, v12) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        if ( 2 * v12 >= 0x106 )
          __report_rangecheckfailure();
        Destination[v12] = 0;
        v13 = _wsetlocale_set_cat(v4, v29, Destination);
        v14 = v30;
        if ( v13 != 0 )
        {
          v14 = (wchar_t **)((char *)v30 + 1);
          v30 = (wchar_t **)((char *)v30 + 1);
        }
      }
      v3 = &v11[v12];
      v15 = *v3;
      if ( *v3 != 0 )
        v15 = *++v3;
      if ( v15 == 0 )
      {
        if ( v14 != nullptr )
          return _wsetlocale_get_all(v4);
        return nullptr;
      }
    }
    return nullptr;
  }
  result = (char *)_expandlocale(String2, Destination, 0x83u, v31, 0x55u, &v26);
  if ( result == nullptr )
    return result;
  v16 = (wchar_t **)(a1 + 32);
  v17 = 0;
  v30 = (wchar_t **)(a1 + 32);
  do
  {
    if ( v17 != 0 )
    {
      v18 = *v16;
      v19 = Destination;
      while ( 1 )
      {
        v20 = *v19 < *v18;
        v4 = v27;
        if ( *v19 != *v18 )
          break;
        if ( *v19 == 0 )
          goto LABEL_39;
        v21 = v19[1];
        v20 = v21 < v18[1];
        v22 = v21 == v18[1];
        HIWORD(v29) = v21;
        v16 = v30;
        if ( !v22 )
          break;
        v19 += 2;
        v18 += 2;
        if ( HIWORD(v29) == 0 )
        {
LABEL_39:
          v23 = 0;
          goto LABEL_41;
        }
      }
      v23 = v20 ? -1 : 1;
LABEL_41:
      if ( v23 != 0 )
      {
        v24 = _wsetlocale_set_cat(v27, v17, Destination);
        v16 = v30;
        if ( v24 == 0 )
        {
          v25 = 0;
          MaxCount = 0;
          goto LABEL_47;
        }
        ++v6;
      }
      else
      {
        ++v6;
      }
    }
    v25 = MaxCount;
LABEL_47:
    ++v17;
    v16 += 4;
    v30 = v16;
  }
  while ( v17 <= 5 );
  if ( v25 == 0 && v6 == 0 )
    return nullptr;
  return _wsetlocale_get_all(v4);
}

