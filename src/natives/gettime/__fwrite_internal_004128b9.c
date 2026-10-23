// gettime.exe @ 0x4128b9 size=119

int __cdecl _fwrite_internal(char a1, int a2, int a3, FILE *a4, __crt_cached_ptd_host *a5)
{
  __crt_cached_ptd_host *v5; // eax
  struct __acrt_ptd **v7; // [esp-4h] [ebp-24h]
  _DWORD v8[5]; // [esp+0h] [ebp-20h] BYREF
  FILE *v9; // [esp+14h] [ebp-Ch] BYREF
  FILE *v10; // [esp+18h] [ebp-8h] BYREF

  if ( a2 == 0 || a3 == 0 )
    return 0;
  if ( a4 == nullptr )
  {
    v5 = a5;
    v7 = (struct __acrt_ptd **)a5;
    *((_BYTE *)a5 + 28) = 1;
    *((_DWORD *)v5 + 6) = 22;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, v7);
    return 0;
  }
  v10 = a4;
  v8[0] = &a4;
  v8[1] = a5;
  v8[2] = &a1;
  v8[3] = &a2;
  v8[4] = &a3;
  v9 = a4;
  return __crt_seh_guarded_call<unsigned int>::operator()<_lambda_4ac01c32aa5b53846f05d0620572872e_,_lambda_5856287d7ecd2be6c9197bb4007c3f6e_ &,_lambda_e7a9868ed898c75c0f0637692d94351a_>(
           &v9,
           (int)v8,
           &v10);
}

