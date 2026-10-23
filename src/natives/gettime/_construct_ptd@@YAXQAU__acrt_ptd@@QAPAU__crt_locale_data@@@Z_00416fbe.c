// gettime.exe @ 0x416fbe size=153

void __cdecl construct_ptd(struct __acrt_ptd *const a1, struct __crt_locale_data **const a2)
{
  int v2; // [esp+0h] [ebp-14h] BYREF
  int v3; // [esp+4h] [ebp-10h] BYREF
  struct __acrt_ptd *const *v4; // [esp+8h] [ebp-Ch] BYREF
  int v5; // [esp+Ch] [ebp-8h] BYREF

  *((_DWORD *)a1 + 6) = 1;
  *(_DWORD *)a1 = &unk_42C510;
  *((_DWORD *)a1 + 212) = 1;
  *((_DWORD *)a1 + 18) = &unk_437560;
  *((_WORD *)a1 + 54) = 67;
  *((_WORD *)a1 + 185) = 67;
  *((_DWORD *)a1 + 211) = 0;
  v3 = (int)&a1;
  v5 = 5;
  v2 = 5;
  __crt_seh_guarded_call<void>::operator()<_lambda_15ade71b0218206bbe3333a0c9b79046_,_lambda_da44e0f8b0f19ba52fefafb335991732_ &,_lambda_207f2d024fc103971653565357d6cd41_>(
    &v2,
    (int)&v3,
    &v5);
  v4 = &a1;
  v5 = (int)&a2;
  v2 = 4;
  v3 = 4;
  __crt_seh_guarded_call<void>::operator()<_lambda_a7e850c220f1c8d1e6efeecdedd162c6_,_lambda_46720907175c18b6c9d2717bc0d2d362_ &,_lambda_9048902d66e8d99359bc9897bbb930a8_>(
    &v3,
    (int)&v4,
    &v2);
}

