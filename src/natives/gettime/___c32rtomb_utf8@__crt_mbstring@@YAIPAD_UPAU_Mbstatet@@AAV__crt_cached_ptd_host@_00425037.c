// gettime.exe @ 0x425037 size=176

unsigned int __usercall __crt_mbstring::__c32rtomb_utf8@<eax>(
        struct _Mbstatet *a1@<edi>,
        struct __crt_cached_ptd_host *a2@<esi>,
        __crt_mbstring *this,
        unsigned int a4,
        __crt_mbstring *a5,
        struct _Mbstatet *a6)
{
  unsigned int v7; // ecx
  char v8; // bl
  int v9; // esi
  int i; // edi
  char v11; // al
  int v12; // [esp-Ch] [ebp-Ch]

  if ( this == nullptr )
    goto LABEL_2;
  v7 = a4;
  if ( a4 == 0 )
  {
    *(_BYTE *)this = 0;
LABEL_2:
    *(_DWORD *)a5 = 0;
    *((_DWORD *)a5 + 1) = 0;
    return 1;
  }
  if ( (a4 & 0xFFFFFF80) == 0 )
  {
    *(_BYTE *)this = a4;
    return 1;
  }
  if ( (a4 & 0xFFFFF800) == 0 )
  {
    v8 = -64;
    v9 = 1;
    goto LABEL_18;
  }
  if ( (a4 & 0xFFFF0000) != 0 )
  {
    if ( (a4 & 0xFFE00000) == 0 && a4 <= 0x10FFFF )
    {
      v12 = 3;
      v8 = -16;
      goto LABEL_17;
    }
    return __crt_mbstring::return_illegal_sequence(a5, a6, a2);
  }
  if ( a4 >= 0xD800 && a4 <= 0xDFFF )
    return __crt_mbstring::return_illegal_sequence(a5, a6, a2);
  v12 = 2;
  v8 = -32;
LABEL_17:
  v9 = v12;
LABEL_18:
  for ( i = v9; i != 0; --i )
  {
    v11 = v7;
    v7 >>= 6;
    *((_BYTE *)this + i) = v11 & 0x3F | 0x80;
  }
  *(_BYTE *)this = v8 | v7;
  return __crt_mbstring::reset_and_return((__crt_mbstring *)(v9 + 1), (unsigned int)a5, a1);
}

