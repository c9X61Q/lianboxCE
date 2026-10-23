// gettime.exe @ 0x41c4a5 size=417

unsigned int __cdecl common_ftell_nolock<__int64>(FILE *Stream, __crt_cached_ptd_host *a2)
{
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  unsigned int v7; // ebx
  FILE *v8; // esi
  int v9; // ecx
  unsigned __int64 v10; // kr08_8
  int v11; // edx
  int v12; // [esp+4h] [ebp-18h]
  int v13; // [esp+8h] [ebp-14h]
  int v14; // [esp+Ch] [ebp-10h]
  int v15; // [esp+10h] [ebp-Ch]
  char v16; // [esp+14h] [ebp-8h]
  int v17; // [esp+18h] [ebp-4h]

  if ( Stream == nullptr )
  {
    *((_BYTE *)a2 + 28) = 1;
    *((_DWORD *)a2 + 6) = 22;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a2);
    return -1;
  }
  v3 = _fileno(Stream);
  v4 = v3;
  if ( (int)Stream->_base < 0 )
    Stream->_base = nullptr;
  v5 = _lseeki64_internal(v3, 0, 1u, a2);
  v17 = v6;
  v12 = v5;
  if ( v6 < 0 )
    return -1;
  if ( (Stream->_flag & 0xC0) == 0 )
    return v5 - (unsigned int)Stream->_base;
  v15 = v4 >> 6;
  v14 = 56 * (v4 & 0x3F);
  v16 = *(_BYTE *)(v14 + dword_438A48[v4 >> 6] + 41);
  v7 = (unsigned int)&Stream->_ptr[-Stream->_cnt];
  if ( (Stream->_flag & 3) == 0 )
  {
    if ( (Stream->_flag & 4) != 0 )
      goto LABEL_17;
    *((_BYTE *)a2 + 28) = 1;
    *((_DWORD *)a2 + 6) = 22;
    return -1;
  }
  if ( v16 == 1 && (*(_BYTE *)(v14 + dword_438A48[v15] + 45) & 2) != 0 )
    return common_ftell_translated_utf8_nolock(Stream, v5, v6, a2);
  if ( *(char *)(v14 + dword_438A48[v15] + 40) < 0 )
  {
    v8 = Stream;
    v13 = (int)&Stream->_ptr[-Stream->_cnt] >> 31;
    v10 = count_newline_bytes(Stream->_cnt, Stream->_ptr, v16) + __PAIR64__(v13, v7);
    v9 = HIDWORD(v10);
    v7 = v10;
    goto LABEL_18;
  }
LABEL_17:
  v8 = Stream;
  v9 = (int)&Stream->_ptr[-Stream->_cnt] >> 31;
LABEL_18:
  v11 = v12;
  if ( (v17 | v12) != 0 )
  {
    if ( (v8->_flag & 1) != 0 )
      return common_ftell_read_mode_nolock(Stream, v12, v17, v7, v9, a2);
    if ( v16 == 1 )
    {
      v7 = __SPAIR64__(v9, v7) / 2;
      v11 = v12;
    }
    v7 += v11;
  }
  return v7;
}

