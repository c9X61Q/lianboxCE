// gettime.exe @ 0x412c0c size=150

int __cdecl _setvbuf_internal(
        struct _iobuf *const a1,
        char *const a2,
        int a3,
        unsigned int a4,
        struct __crt_cached_ptd_host *a5)
{
  struct __crt_cached_ptd_host *v5; // eax
  struct __acrt_ptd **v7; // [esp-4h] [ebp-28h]
  _DWORD v8[5]; // [esp+0h] [ebp-24h] BYREF
  FILE *v9; // [esp+14h] [ebp-10h] BYREF
  FILE *v10; // [esp+18h] [ebp-Ch] BYREF
  struct _iobuf *v11; // [esp+1Ch] [ebp-8h] BYREF

  v11 = a1;
  if ( a1 == nullptr )
    goto LABEL_2;
  if ( a3 != 4 )
  {
    if ( a3 == 0 )
      goto LABEL_7;
    if ( a3 != 64 )
      goto LABEL_2;
  }
  if ( a3 == 64 )
  {
LABEL_7:
    if ( a4 - 2 <= 0x7FFFFFFD )
      goto LABEL_8;
LABEL_2:
    v5 = a5;
    v7 = (struct __acrt_ptd **)a5;
    *((_BYTE *)a5 + 28) = 1;
    *((_DWORD *)v5 + 6) = 22;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, v7);
    return -1;
  }
LABEL_8:
  v10 = a1;
  v8[0] = &a4;
  v8[1] = &v11;
  v8[2] = a5;
  v8[3] = &a3;
  v8[4] = &a2;
  v9 = a1;
  return __crt_seh_guarded_call<unsigned int>::operator()<_lambda_4ac01c32aa5b53846f05d0620572872e_,_lambda_5856287d7ecd2be6c9197bb4007c3f6e_ &,_lambda_e7a9868ed898c75c0f0637692d94351a_>(
           &v9,
           (int)v8,
           &v10);
}

