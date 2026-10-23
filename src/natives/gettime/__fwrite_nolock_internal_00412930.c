// gettime.exe @ 0x412930 size=423

unsigned int __cdecl _fwrite_nolock_internal(
        char *Src,
        unsigned int a2,
        unsigned int a3,
        FILE *Stream,
        __crt_cached_ptd_host *a5)
{
  FILE *v5; // ecx
  int bufsiz; // edx
  unsigned int v8; // edi
  volatile signed __int32 *p_flag; // ebx
  int base; // eax
  size_t v11; // ebx
  unsigned int v12; // eax
  int v13; // eax
  int v14; // [esp-8h] [ebp-20h]
  unsigned int v15; // [esp+10h] [ebp-8h]
  unsigned int v16; // [esp+14h] [ebp-4h]

  if ( a2 == 0 || a3 == 0 )
    return 0;
  v5 = Stream;
  if ( Stream == nullptr || Src == nullptr || a3 > 0xFFFFFFFF / a2 )
  {
    *((_BYTE *)a5 + 28) = 1;
    *((_DWORD *)a5 + 6) = 22;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a5);
    return 0;
  }
  if ( (Stream->_flag & 0x4C0) != 0 )
    bufsiz = Stream->_bufsiz;
  else
    bufsiz = 4096;
  v16 = bufsiz;
  v8 = a3 * a2;
  if ( a3 * a2 == 0 )
    return a3;
  while ( 1 )
  {
    p_flag = &v5->_flag;
    if ( (v5->_flag & 0xC0) != 0 )
    {
      base = (int)v5->_base;
      if ( base != 0 )
      {
        if ( base < 0 )
        {
          _InterlockedOr(p_flag, 0x10u);
          return (a3 * a2 - v8) / a2;
        }
        if ( (*p_flag & 1) != 0 )
          return (a3 * a2 - v8) / a2;
        v11 = (size_t)v5->_base;
        if ( v8 < v11 )
          v11 = v8;
        memmove(v5->_ptr, Src, v11);
        v5 = Stream;
        v8 -= v11;
        Stream->_base -= v11;
        Stream->_ptr += v11;
LABEL_33:
        bufsiz = v16;
        goto LABEL_38;
      }
    }
    if ( v8 >= bufsiz )
      break;
    if ( sub_41CC9B(*Src, v5, a5) == -1 )
      return (a3 * a2 - v8) / a2;
    v5 = Stream;
    --v8;
    bufsiz = Stream->_bufsiz;
    v16 = bufsiz;
    if ( bufsiz <= 0 )
    {
      bufsiz = 1;
      v16 = 1;
    }
    v11 = 1;
LABEL_38:
    Src += v11;
    if ( v8 == 0 )
      return a3;
  }
  if ( (*p_flag & 0xC0) != 0 )
  {
    if ( __acrt_stdio_flush_nolock(v5, a5) != 0 )
      return (a3 * a2 - v8) / a2;
    v5 = Stream;
    bufsiz = v16;
  }
  v12 = v8;
  if ( bufsiz != 0 )
  {
    v12 = v8 - v8 % v16;
    v15 = v12;
  }
  else
  {
    v15 = v8;
  }
  if ( v12 >= 0xFFFFFFFE )
  {
    v12 = -2;
    v15 = -2;
  }
  v14 = v12;
  v13 = _fileno(v5);
  v11 = _write_internal(v13, (int)Src, v14, a5);
  if ( v11 != -1 )
  {
    if ( v11 <= v15 )
    {
      v8 -= v11;
      if ( v11 < v15 )
        goto LABEL_42;
    }
    else
    {
      v11 = v15;
      v8 -= v15;
    }
    v5 = Stream;
    goto LABEL_33;
  }
LABEL_42:
  _InterlockedOr(&Stream->_flag, 0x10u);
  return (a3 * a2 - v8) / a2;
}

