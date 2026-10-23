// gettime.exe @ 0x4255b5 size=271

unsigned int __cdecl __crt_mbstring::__wcsrtombs_utf8(
        __crt_mbstring *this,
        char *a2,
        const wchar_t **a3,
        char16_t a4,
        struct _Mbstatet *a5)
{
  struct _Mbstatet *v5; // edx
  char16_t v6; // bx
  unsigned __int16 *v7; // edi
  const wchar_t **v8; // eax
  __crt_mbstring *v9; // esi
  __crt_mbstring *v10; // ecx
  size_t v11; // ebx
  __crt_mbstring *v12; // ecx
  unsigned __int16 *v13; // eax
  unsigned int result; // eax
  int v15; // esi
  struct __crt_cached_ptd_host *v16; // [esp+0h] [ebp-30h]
  struct __crt_cached_ptd_host *v17; // [esp+0h] [ebp-30h]
  __crt_mbstring *Src; // [esp+1Ch] [ebp-14h]
  unsigned __int16 *v19; // [esp+20h] [ebp-10h]
  _BYTE v20[8]; // [esp+24h] [ebp-Ch] BYREF

  v5 = a5;
  v6 = a4;
  v7 = *(unsigned __int16 **)a2;
  if ( this != nullptr )
  {
    v8 = a3;
    v9 = this;
    v19 = *(unsigned __int16 **)a2;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= 4 )
      {
        v10 = v9;
        Src = v9;
      }
      else
      {
        v10 = (__crt_mbstring *)v20;
        Src = (__crt_mbstring *)v20;
      }
      v11 = __crt_mbstring::__c16rtomb_utf8(v10, (char *)*v7, v6, v5, v16);
      if ( v11 == -1 )
        break;
      if ( Src != v9 )
      {
        if ( (unsigned int)a3 < v11 )
        {
          v13 = v19;
          goto LABEL_13;
        }
        memmove(v9, Src, v11);
      }
      if ( v11 != 0 )
      {
        v12 = (__crt_mbstring *)((char *)v9 + v11 - 1);
        v9 = (__crt_mbstring *)((char *)v9 + v11);
        if ( *(_BYTE *)v12 == 0 )
        {
          v13 = nullptr;
          v9 = v12;
LABEL_13:
          *(_DWORD *)a2 = v13;
          return v9 - this;
        }
      }
      ++v7;
      if ( v11 != 0 )
        v19 = v7;
      v5 = a5;
      v8 = (const wchar_t **)((char *)a3 - v11);
      v6 = a4;
      a3 = v8;
    }
    *(_DWORD *)a2 = v19;
    return -1;
  }
  else
  {
    v15 = 0;
    for ( result = __crt_mbstring::__c16rtomb_utf8((__crt_mbstring *)v20, (char *)*v7, a4, a5, v16);
          result != -1;
          result = __crt_mbstring::__c16rtomb_utf8((__crt_mbstring *)v20, (char *)*v7, a4, a5, v17) )
    {
      if ( result != 0 && v20[result - 1] == 0 )
        return v15 + result - 1;
      v15 += result;
      ++v7;
    }
  }
  return result;
}

