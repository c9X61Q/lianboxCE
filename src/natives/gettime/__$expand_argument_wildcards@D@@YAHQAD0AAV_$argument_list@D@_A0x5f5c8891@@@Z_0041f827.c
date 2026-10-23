// gettime.exe @ 0x41f827 size=645

rsize_t __cdecl expand_argument_wildcards<char>(unsigned __int8 *Start, unsigned __int8 *Pos, int a3)
{
  unsigned __int8 *v3; // ecx
  int v4; // edx
  unsigned __int8 v5; // al
  unsigned __int8 v6; // al
  bool v8; // zf
  char v9; // al
  UINT utf8_acp_compatibility_codepage; // eax
  int v11; // eax
  HANDLE FirstFile; // esi
  rsize_t v13; // esi
  unsigned int v14; // eax
  int v15; // eax
  char *v16; // eax
  char v17; // cl
  int v18; // eax
  rsize_t v19; // [esp+8h] [ebp-298h]
  int v20; // [esp+Ch] [ebp-294h]
  int MaxCount; // [esp+10h] [ebp-290h]
  _DWORD v22[2]; // [esp+14h] [ebp-28Ch] BYREF
  void *Block; // [esp+1Ch] [ebp-284h]
  int v24; // [esp+20h] [ebp-280h]
  int v25; // [esp+24h] [ebp-27Ch]
  char v26; // [esp+28h] [ebp-278h]
  _DWORD v27[2]; // [esp+2Ch] [ebp-274h] BYREF
  void *v28; // [esp+34h] [ebp-26Ch]
  int v29; // [esp+38h] [ebp-268h]
  int v30; // [esp+3Ch] [ebp-264h]
  char v31; // [esp+40h] [ebp-260h]
  int v32; // [esp+44h] [ebp-25Ch]
  unsigned __int8 v33; // [esp+4Bh] [ebp-255h] BYREF
  struct _WIN32_FIND_DATAW v34; // [esp+4Ch] [ebp-254h] BYREF

  v3 = Pos;
  v4 = a3;
  v32 = a3;
  if ( Pos != Start )
  {
    do
    {
      v5 = *v3;
      if ( *v3 == 47 )
        break;
      if ( v5 == 92 )
        break;
      if ( v5 == 58 )
        break;
      v3 = _mbsdec(Start, v3);
    }
    while ( v3 != Start );
    v4 = v32;
  }
  v6 = *v3;
  v33 = v6;
  if ( v6 == 58 )
  {
    if ( v3 != Start + 1 )
      return copy_and_add_argument_to_buffer<char>((char *)Start, nullptr, 0, v4);
    v6 = v33;
  }
  if ( v6 == 47 || v6 == 92 || (v8 = v6 == 58, v9 = 0, v8) )
    v9 = 1;
  v22[0] = 0;
  v22[1] = 0;
  Block = nullptr;
  v24 = 0;
  MaxCount = v9 != 0 ? v3 - Start + 1 : 0;
  v25 = 0;
  v26 = 0;
  utf8_acp_compatibility_codepage = __acrt_get_utf8_acp_compatibility_codepage();
  v11 = sub_4137CD((LPCCH)Start, (struct __crt_win32_buffer_empty_debug_info *)v22, utf8_acp_compatibility_codepage);
  FirstFile = FindFirstFileExW(
                v11 == 0 ? (LPCWSTR)Block : nullptr,
                FindExInfoStandard,
                &v34,
                FindExSearchNameMatch,
                nullptr,
                0);
  if ( FirstFile == (HANDLE)-1 )
  {
    v13 = copy_and_add_argument_to_buffer<char>((char *)Start, nullptr, 0, v32);
    if ( v26 != 0 )
      _free_base(Block);
    return v13;
  }
  else
  {
    v20 = (*(_DWORD *)(v32 + 4) - *(_DWORD *)v32) >> 2;
    while ( 1 )
    {
      v27[0] = 0;
      v27[1] = 0;
      v28 = nullptr;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v14 = __acrt_get_utf8_acp_compatibility_codepage();
      v15 = sub_41F533(v34.cFileName, (struct __crt_win32_buffer_empty_debug_info *)v27, (int)&v33, v14);
      v16 = v15 == 0 ? (char *)v28 : nullptr;
      if ( *v16 != 46 || (v17 = v16[1]) != 0 && (v17 != 46 || v16[2] != 0) )
      {
        v19 = copy_and_add_argument_to_buffer<char>(v16, (char *)Start, MaxCount, v32);
        if ( v19 != 0 )
          break;
      }
      if ( v31 != 0 )
        _free_base(v28);
      if ( !FindNextFileW(FirstFile, &v34) )
      {
        v18 = (*(_DWORD *)(v32 + 4) - *(_DWORD *)v32) >> 2;
        if ( v20 != v18 )
          qsort((void *)(*(_DWORD *)v32 + 4 * v20), v18 - v20, 4u, CompareFunction);
        FindClose(FirstFile);
        if ( v26 != 0 )
          _free_base(Block);
        return 0;
      }
    }
    if ( v31 != 0 )
      _free_base(v28);
    FindClose(FirstFile);
    if ( v26 != 0 )
      _free_base(Block);
    return v19;
  }
}

