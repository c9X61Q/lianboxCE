// gettime.exe @ 0x4126ec size=236

int __cdecl common_fseek_nolock(FILE *Stream, __int64 liDistanceToMove, DWORD dwMoveMethod, int a4)
{
  int result; // eax
  DWORD v5; // esi
  LARGE_INTEGER v6; // kr00_8
  char *cnt; // ecx
  int v8; // eax
  int v9; // edx

  if ( (Stream->_flag & 0x2000) != 0 )
  {
    _InterlockedAnd(&Stream->_flag, 0xFFFFFFF7);
    v5 = dwMoveMethod;
    v6.QuadPart = liDistanceToMove;
    if ( common_fseek_binary_mode_read_only_fast_track_nolock((int *)Stream, liDistanceToMove, dwMoveMethod) != 0 )
      return 0;
    if ( dwMoveMethod == 1 )
    {
      v6.QuadPart = _ftelli64_nolock_internal(Stream, a4) + liDistanceToMove;
      v5 = 0;
    }
    __acrt_stdio_flush_nolock(Stream, (__crt_cached_ptd_host *)a4);
    cnt = (char *)Stream->_cnt;
    Stream->_base = nullptr;
    Stream->_ptr = cnt;
    if ( (Stream->_flag & 4) != 0 )
    {
      _InterlockedAnd(&Stream->_flag, 0xFFFFFFFC);
    }
    else if ( (Stream->_flag & 0x41) == 0x41 && (Stream->_flag & 0x100) == 0 )
    {
      Stream->_bufsiz = 512;
    }
    v8 = _lseeki64_nolock_internal(Stream->_file, v6, v5, a4);
    result = v9 & v8;
    if ( result != -1 )
      return 0;
  }
  else
  {
    *(_BYTE *)(a4 + 28) = 1;
    *(_DWORD *)(a4 + 24) = 22;
    return -1;
  }
  return result;
}

