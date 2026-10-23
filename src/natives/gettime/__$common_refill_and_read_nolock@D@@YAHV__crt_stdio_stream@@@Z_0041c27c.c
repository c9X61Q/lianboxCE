// gettime.exe @ 0x41c27c size=399

int __cdecl common_refill_and_read_nolock<char>(FILE *Stream)
{
  unsigned int bufsiz; // esi
  void *cnt; // edi
  int v4; // eax
  char *base; // edx
  int v6; // esi
  _BYTE *v7; // eax
  FILE *v8; // eax
  char *ptr; // ecx
  unsigned __int8 v10; // dl

  if ( Stream == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  if ( (Stream->_flag & 0x2000) == 0 || (Stream->_flag & 0x1000) != 0 )
    return -1;
  if ( (Stream->_flag & 2) != 0 )
  {
    _InterlockedOr(&Stream->_flag, 0x10u);
    return -1;
  }
  _InterlockedOr(&Stream->_flag, 1u);
  if ( (Stream->_flag & 0x4C0) == 0 )
    __acrt_stdio_allocate_buffer_nolock(Stream);
  Stream->_ptr = (char *)Stream->_cnt;
  bufsiz = Stream->_bufsiz;
  cnt = (void *)Stream->_cnt;
  v4 = _fileno(Stream);
  Stream->_base = (char *)_read(v4, cnt, bufsiz);
  base = Stream->_base;
  if ( base == nullptr || base == (char *)-1 )
  {
    _InterlockedOr(&Stream->_flag, 8 * (base != nullptr) + 8);
    Stream->_base = nullptr;
    return -1;
  }
  if ( (Stream->_flag & 6) == 0 )
  {
    if ( _fileno(Stream) == -1 || _fileno(Stream) == -2 )
    {
      v7 = &unk_437278;
    }
    else
    {
      v6 = _fileno(Stream) >> 6;
      v7 = (_BYTE *)(56 * (_fileno(Stream) & 0x3F) + dword_438A48[v6]);
    }
    if ( (v7[40] & 0x82) == 0x82 )
      _InterlockedOr(&Stream->_flag, 0x20u);
  }
  v8 = Stream;
  if ( Stream->_bufsiz == 512 )
  {
    if ( (Stream->_flag & 0x40) != 0 && (Stream->_flag & 0x100) == 0 )
      Stream->_bufsiz = 4096;
    v8 = Stream;
  }
  ptr = v8->_ptr;
  --v8->_base;
  v10 = *ptr;
  v8->_ptr = ptr + 1;
  return v10;
}

