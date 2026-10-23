// gettime.exe @ 0x4121a0 size=473

size_t __cdecl _fread_nolock_s(void *Buffer, size_t BufferSize, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  FILE *v6; // ecx
  rsize_t v7; // edx
  size_t v8; // ebx
  bool i; // zf
  rsize_t base; // eax
  int nolock; // eax
  unsigned int v12; // eax
  char *cnt; // eax
  int v14; // eax
  int narrow_nolock; // eax
  unsigned int v16; // [esp-4h] [ebp-24h]
  volatile signed __int32 *p_flag; // [esp+Ch] [ebp-14h]
  _BYTE *Destination; // [esp+10h] [ebp-10h]
  unsigned int bufsiz; // [esp+14h] [ebp-Ch]
  DWORD nNumberOfBytesToRead; // [esp+18h] [ebp-8h]
  DWORD nNumberOfBytesToReada; // [esp+18h] [ebp-8h]
  DWORD nNumberOfBytesToReadb; // [esp+18h] [ebp-8h]
  rsize_t v23; // [esp+1Ch] [ebp-4h]

  if ( ElementSize == 0 || ElementCount == 0 )
    return 0;
  if ( Buffer != nullptr )
  {
    v6 = Stream;
    if ( Stream != nullptr && ElementCount <= 0xFFFFFFFF / ElementSize )
      goto LABEL_13;
    if ( BufferSize != -1 )
    {
      memset(Buffer, 0, BufferSize);
      v6 = Stream;
    }
    if ( v6 != nullptr && ElementCount <= 0xFFFFFFFF / ElementSize )
    {
LABEL_13:
      p_flag = &v6->_flag;
      if ( (v6->_flag & 0x4C0) != 0 )
        bufsiz = v6->_bufsiz;
      else
        bufsiz = 4096;
      v7 = BufferSize;
      Destination = Buffer;
      v8 = ElementCount * ElementSize;
      for ( i = ElementCount * ElementSize == 0; ; i = v8 == 0 )
      {
        v23 = v7;
        if ( i )
          return ElementCount;
        if ( (v6->_flag & 0x4C0) != 0 )
        {
          base = (rsize_t)v6->_base;
          nNumberOfBytesToRead = base;
          if ( base != 0 )
          {
            if ( (base & 0x80000000) != 0 )
              goto LABEL_43;
            if ( v8 < base )
            {
              base = v8;
              nNumberOfBytesToRead = v8;
            }
            if ( base > v7 )
              goto LABEL_40;
            memcpy_s(Destination, v7, v6->_ptr, base);
            v6 = Stream;
            nolock = nNumberOfBytesToRead;
            v8 -= nNumberOfBytesToRead;
            Stream->_base -= nNumberOfBytesToRead;
            Stream->_ptr += nNumberOfBytesToRead;
            v7 = v23 - nNumberOfBytesToRead;
            goto LABEL_37;
          }
        }
        if ( v8 < bufsiz )
          break;
        v12 = 0x7FFFFFFF;
        if ( v8 <= 0x7FFFFFFF )
        {
          v12 = v8;
          nNumberOfBytesToReada = v8;
        }
        else
        {
          nNumberOfBytesToReada = 0x7FFFFFFF;
        }
        if ( bufsiz != 0 )
          v12 = nNumberOfBytesToReada - v12 % bufsiz;
        nNumberOfBytesToReadb = v12;
        if ( v12 > v7 )
          goto LABEL_40;
        cnt = (char *)v6->_cnt;
        v6->_base = nullptr;
        v6->_ptr = cnt;
        v14 = _fileno(v6);
        nolock = _read_nolock(v14, (LPWSTR)Destination, nNumberOfBytesToReadb);
        if ( nolock == 0 )
        {
          v16 = 8;
          goto LABEL_44;
        }
        if ( nolock < 0 )
        {
LABEL_43:
          v16 = 16;
LABEL_44:
          _InterlockedOr(p_flag, v16);
          return (ElementCount * ElementSize - v8) / ElementSize;
        }
        v8 -= nolock;
        v6 = Stream;
        v7 = v23 - nolock;
LABEL_37:
        Destination += nolock;
      }
      narrow_nolock = __acrt_stdio_refill_and_read_narrow_nolock(v6);
      if ( narrow_nolock == -1 )
        return (ElementCount * ElementSize - v8) / ElementSize;
      if ( v23 != 0 )
      {
        --v8;
        v7 = v23 - 1;
        *Destination = narrow_nolock;
        v6 = Stream;
        bufsiz = Stream->_bufsiz;
        nolock = 1;
        goto LABEL_37;
      }
LABEL_40:
      if ( BufferSize != -1 )
        memset(Buffer, 0, BufferSize);
      *_errno() = 34;
LABEL_5:
      _invalid_parameter_noinfo();
      return 0;
    }
  }
  *_errno() = 22;
  goto LABEL_5;
}

