// gettime.exe @ 0x41c646 size=459

int __cdecl common_ftell_read_mode_nolock(
        FILE *Stream,
        LARGE_INTEGER liDistanceToMove,
        __int64 a3,
        __crt_cached_ptd_host *a4)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rax
  __int64 bufsiz; // rax
  unsigned int v11; // ecx
  unsigned __int64 v12; // kr18_8
  int v13; // eax
  int v14; // edx
  bool v15; // cc
  int FileHandle; // [esp+10h] [ebp-20h]
  int v18; // [esp+14h] [ebp-1Ch]
  int v19; // [esp+18h] [ebp-18h]
  char v20; // [esp+1Ch] [ebp-14h]
  char *base; // [esp+20h] [ebp-10h]
  unsigned int v22; // [esp+20h] [ebp-10h]
  int v23; // [esp+28h] [ebp-8h]
  int v24; // [esp+2Ch] [ebp-4h]
  int v25; // [esp+2Ch] [ebp-4h]

  FileHandle = _fileno(Stream);
  v4 = 1;
  v18 = dword_438A48[FileHandle >> 6];
  v19 = 56 * (FileHandle & 0x3F);
  v20 = *(_BYTE *)(v18 + v19 + 41);
  if ( v20 == 1 )
    v23 = 2;
  else
    v23 = 1;
  base = Stream->_base;
  if ( base != nullptr )
  {
    v6 = (int)base;
    v22 = (unsigned int)&base[(unsigned int)&Stream->_ptr[-Stream->_cnt]];
    v24 = (unsigned int)&Stream->_ptr[__PAIR64__(HIDWORD(v6), Stream->_base) - Stream->_cnt] >> 32;
    if ( *(char *)(v18 + v19 + 40) >= 0 )
    {
      v7 = (__int64)&Stream->_ptr[__PAIR64__(HIDWORD(v6), Stream->_base) - Stream->_cnt] / (unsigned int)v23;
      v8 = v23;
      return liDistanceToMove.QuadPart + a3 / (unsigned int)v8 - v7;
    }
    LODWORD(v9) = _lseeki64_internal(FileHandle, 0, 2u, a4);
    if ( v9 == liDistanceToMove.QuadPart )
    {
      v12 = __PAIR64__(v24, v22) + count_newline_bytes(Stream->_cnt, Stream->_cnt + v22, v20);
      HIDWORD(bufsiz) = HIDWORD(v12);
      v11 = v12;
      if ( (Stream->_flag & 0x20) == 0 )
      {
LABEL_29:
        v8 = v23;
        v7 = __SPAIR64__(HIDWORD(bufsiz), v11) / (unsigned int)v23;
        return liDistanceToMove.QuadPart + a3 / (unsigned int)v8 - v7;
      }
      if ( v20 == 1 || v20 == 2 )
        v4 = 2;
    }
    else
    {
      v13 = _lseeki64_internal(FileHandle, liDistanceToMove, 0, a4);
      if ( (v14 & v13) == 0xFFFFFFFF )
      {
        LODWORD(v5) = -1;
        return v5;
      }
      v15 = v24 < 0;
      if ( v24 <= 0 && ((v25 = 512, v15) || v22 <= 0x200) && (Stream->_flag & 0x40) != 0 && (Stream->_flag & 0x100) == 0 )
      {
        HIDWORD(bufsiz) = 0;
      }
      else
      {
        bufsiz = Stream->_bufsiz;
        v25 = Stream->_bufsiz;
      }
      if ( (*(_BYTE *)(v19 + dword_438A48[FileHandle >> 6] + 40) & 4) == 0 )
      {
        v11 = v25;
        goto LABEL_29;
      }
      if ( v20 == 1 || v20 == 2 )
        v4 = 2;
      v11 = v25;
    }
    HIDWORD(bufsiz) = ((unsigned int)v4 + __PAIR64__(HIDWORD(bufsiz), v11)) >> 32;
    v11 += v4;
    goto LABEL_29;
  }
  LODWORD(v5) = liDistanceToMove.LowPart;
  return v5;
}

