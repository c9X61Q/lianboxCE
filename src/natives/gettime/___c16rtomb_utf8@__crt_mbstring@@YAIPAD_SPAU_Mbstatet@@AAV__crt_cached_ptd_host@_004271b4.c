// gettime.exe @ 0x4271b4 size=170

__crt_mbstring *__usercall __crt_mbstring::__c16rtomb_utf8@<eax>(
        struct _Mbstatet *a1@<edi>,
        struct _Mbstatet *this,
        char *a3,
        char32_t a4,
        struct _Mbstatet *a5)
{
  __crt_mbstring *v5; // esi
  unsigned __int16 v6; // ax
  __crt_mbstring *v8; // eax
  struct _Mbstatet *v9; // [esp-4h] [ebp-14h]
  char32_t v10[2]; // [esp+8h] [ebp-8h] BYREF

  v5 = (__crt_mbstring *)a4;
  if ( a4 == 0 )
    v5 = (__crt_mbstring *)&unk_438E44;
  v6 = (_WORD)a3 + 9216;
  if ( *(_DWORD *)v5 != 0 )
  {
    v9 = a5;
    if ( v6 > 0x3FFu )
      return (__crt_mbstring *)__crt_mbstring::return_illegal_sequence(v5, v9);
    v10[0] = 0;
    v10[1] = 0;
    v8 = (__crt_mbstring *)__crt_mbstring::__c32rtomb_utf8(
                             a1,
                             v5,
                             (__crt_mbstring *)this,
                             *(_DWORD *)v5 + ((unsigned __int16)a3 & 0x23FF),
                             (__crt_mbstring *)v10,
                             a5);
    return __crt_mbstring::reset_and_return(v8, v5);
  }
  else
  {
    if ( v6 <= 0x3FFu )
    {
      v9 = a5;
      return (__crt_mbstring *)__crt_mbstring::return_illegal_sequence(v5, v9);
    }
    if ( (unsigned __int16)((_WORD)a3 + 10240) > 0x3FFu )
    {
      return (__crt_mbstring *)__crt_mbstring::__c32rtomb_utf8(
                                 (struct _Mbstatet *)0x3FF,
                                 v5,
                                 (__crt_mbstring *)this,
                                 (unsigned __int16)a3,
                                 v5,
                                 a5);
    }
    else
    {
      *(_DWORD *)v5 = (((unsigned __int16)a3 & 0x27FF) + 64) << 10;
      return nullptr;
    }
  }
}

