// gettime.exe @ 0x425156 size=264

unsigned int __cdecl __crt_mbstring::__mbsrtowcs_utf8(
        __crt_mbstring *this,
        wchar_t *a2,
        const char **a3,
        unsigned int a4,
        struct _Mbstatet *a5)
{
  char32_t *v5; // edi
  const char **v6; // ebx
  __crt_mbstring *v7; // esi
  const char *v8; // eax
  unsigned int v9; // eax
  __int16 v10; // cx
  unsigned int v11; // ecx
  int v12; // esi
  unsigned int result; // eax
  const char *i; // eax
  struct __crt_cached_ptd_host *v15; // [esp+0h] [ebp-14h]
  unsigned int v16; // [esp+Ch] [ebp-8h] BYREF

  v5 = *(char32_t **)a2;
  if ( this != nullptr )
  {
    v6 = a3;
    v7 = this;
    if ( a3 != nullptr )
    {
      while ( 1 )
      {
        v8 = (const char *)_lambda_0f007d4f94c691a9a85cf1869a09f0c3_::operator()(v5);
        v9 = __crt_mbstring::__mbrtoc32_utf8((__crt_mbstring *)&v16, v5, v8, a4, a5, v15);
        if ( v9 == -1 )
          break;
        if ( v9 == 0 )
        {
          v5 = nullptr;
          *(_WORD *)v7 = 0;
          goto LABEL_9;
        }
        v10 = v16;
        if ( v16 > 0xFFFF )
        {
          if ( (unsigned int)v6 <= 1 )
            goto LABEL_9;
          v11 = v16 - 0x10000;
          v6 = (const char **)((char *)v6 - 1);
          v16 = v11;
          *(_WORD *)v7 = (v11 >> 10) | 0xD800;
          v7 = (__crt_mbstring *)((char *)v7 + 2);
          v10 = v11 & 0x3FF | 0xDC00;
        }
        *(_WORD *)v7 = v10;
        v5 = (char32_t *)((char *)v5 + v9);
        v7 = (__crt_mbstring *)((char *)v7 + 2);
        v6 = (const char **)((char *)v6 - 1);
        if ( v6 == nullptr )
          goto LABEL_9;
      }
      *(_DWORD *)a2 = v5;
      LOBYTE(a5[3]._Byte) = 1;
      a5[3]._Wchar = 42;
      return -1;
    }
    else
    {
LABEL_9:
      v12 = (v7 - this) >> 1;
      *(_DWORD *)a2 = v5;
      return v12;
    }
  }
  else
  {
    v12 = 0;
    for ( i = (const char *)_lambda_0f007d4f94c691a9a85cf1869a09f0c3_::operator()(v5);
          ;
          i = (const char *)_lambda_0f007d4f94c691a9a85cf1869a09f0c3_::operator()(v5) )
    {
      result = __crt_mbstring::__mbrtoc32_utf8(nullptr, v5, i, a4, a5, v15);
      if ( result == -1 )
        break;
      if ( result == 0 )
        return v12;
      if ( result == 4 )
        ++v12;
      v5 = (char32_t *)((char *)v5 + result);
      ++v12;
    }
    LOBYTE(a5[3]._Byte) = 1;
    a5[3]._Wchar = 42;
  }
  return result;
}

