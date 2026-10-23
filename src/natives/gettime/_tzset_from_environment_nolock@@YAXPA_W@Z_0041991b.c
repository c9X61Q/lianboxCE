// gettime.exe @ 0x41991b size=657

void __cdecl tzset_from_environment_nolock(wchar_t *Source)
{
  void **v1; // ebx
  wchar_t *v2; // edi
  int v3; // eax
  void *v4; // esi
  int i; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  wchar_t v9; // ax
  wchar_t v10; // dx
  wchar_t v11; // cx
  int v12; // eax
  wchar_t v13; // ax
  wchar_t v14; // cx
  wchar_t v15; // cx
  int v16; // esi
  wchar_t v17; // [esp+Ch] [ebp-1Ch]
  void **v18; // [esp+14h] [ebp-14h]
  char v19[4]; // [esp+1Ch] [ebp-Ch] BYREF
  BOOL v20; // [esp+20h] [ebp-8h] BYREF
  int v21; // [esp+24h] [ebp-4h] BYREF

  v1 = (void **)sub_4191AB();
  v18 = (void **)sub_4191B1();
  v21 = 0;
  v20 = false;
  if ( sub_41920F(&v21) != 0 || sub_4191B7(&v20) != 0 )
    goto LABEL_36;
  v2 = Source;
  if ( Block == nullptr )
    goto LABEL_7;
  v3 = wcscmp(Source, (const unsigned __int16 *)Block);
  if ( v3 != 0 )
    v3 = v3 < 0 ? -1 : 1;
  if ( v3 != 0 )
  {
LABEL_7:
    v4 = _malloc_base(2 * wcslen(Source) + 2);
    if ( v4 == nullptr )
    {
LABEL_8:
      _free_base(nullptr);
      return;
    }
    _free_base(Block);
    Block = v4;
    if ( wcscpy_s((wchar_t *)v4, wcslen(Source) + 1, Source) == 0 )
    {
      memset(*v18, 0, 0x80u);
      memset(v18[1], 0, 0x80u);
      memset(*v1, 0, 0x40u);
      memset(v1[1], 0, 0x40u);
      tzset_env_copy_to_tzname(Source, (wchar_t *const)*v18, (LPSTR)*v1, 3u);
      for ( i = 3; i != 0; --i )
      {
        if ( *v2 != 0 )
          ++v2;
      }
      v17 = *v2;
      if ( *v2 == 45 )
        ++v2;
      v6 = 3600 * sub_4252B4(v2, v19, 10);
      v21 = v6;
      while ( 1 )
      {
        v7 = *v2;
        if ( v7 != 43 && (unsigned __int16)(v7 - 48) > 9u )
          break;
        ++v2;
      }
      if ( (_WORD)v7 == 58 )
      {
        v8 = sub_4252B4(++v2, v19, 10);
        v6 = 60 * v8 + v21;
        v9 = *v2;
        v21 = v6;
        v10 = v9;
        if ( v9 >= 0x30u )
        {
          v11 = v9;
          do
          {
            v10 = v11;
            if ( v11 > 0x39u )
              break;
            v11 = *++v2;
            v10 = *v2;
          }
          while ( *v2 >= 0x30u );
        }
        if ( v10 == 58 )
        {
          v12 = sub_4252B4(++v2, v19, 10);
          v6 = v12 + v21;
          v13 = *v2;
          v21 = v6;
          if ( v13 >= 0x30u )
          {
            v14 = v13;
            do
            {
              if ( v14 > 0x39u )
                break;
              v14 = *++v2;
            }
            while ( *v2 >= 0x30u );
          }
        }
      }
      if ( v17 == 45 )
      {
        v6 = -v6;
        v21 = v6;
      }
      v15 = *v2;
      v20 = *v2 != 0;
      if ( v15 != 0 )
      {
        tzset_env_copy_to_tzname(v2, (wchar_t *const)v18[1], (LPSTR)v1[1], 3u);
        v6 = v21;
      }
      *sub_4191A5() = v6;
      v16 = v20;
      *sub_419199() = v16;
      goto LABEL_8;
    }
LABEL_36:
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  }
}

