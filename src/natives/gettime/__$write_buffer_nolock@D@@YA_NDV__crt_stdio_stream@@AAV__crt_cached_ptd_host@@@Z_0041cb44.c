// gettime.exe @ 0x41cb44 size=210

char __cdecl write_buffer_nolock<char>(char a1, FILE *Stream, __crt_cached_ptd_host *a3)
{
  int v3; // edx
  int v4; // edi
  int cnt; // eax
  char *v6; // esi
  _BYTE *v8; // eax
  __int64 v9; // rax

  v3 = _fileno(Stream);
  if ( (Stream->_flag & 0xC0) == 0 )
    return _write_internal(v3, (int)&a1, 1, a3) == 1;
  v4 = 0;
  cnt = Stream->_cnt;
  v6 = &Stream->_ptr[-cnt];
  Stream->_ptr = (char *)(cnt + 1);
  Stream->_base = (char *)(Stream->_bufsiz - 1);
  if ( (int)v6 > 0 )
  {
    v4 = _write_internal(v3, Stream->_cnt, (int)v6, a3);
LABEL_4:
    *(_BYTE *)Stream->_cnt = a1;
    return v4 == (_DWORD)v6;
  }
  if ( v3 == -1 || v3 == -2 )
    v8 = &unk_437278;
  else
    v8 = (_BYTE *)(dword_438A48[v3 >> 6] + 56 * (v3 & 0x3F));
  if ( (v8[40] & 0x20) == 0 )
    goto LABEL_4;
  v9 = _lseeki64(v3, 0, 2);
  if ( (HIDWORD(v9) & (unsigned int)v9) != 0xFFFFFFFF )
    goto LABEL_4;
  _InterlockedOr(&Stream->_flag, 0x10u);
  return 1;
}

