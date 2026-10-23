// gettime.exe @ 0x41ee61 size=39

int __acrt_get_sigabrt_handler()
{
  int v1; // [esp+0h] [ebp-Ch] BYREF
  int v2; // [esp+4h] [ebp-8h] BYREF
  char v3; // [esp+Bh] [ebp-1h] BYREF

  v2 = 3;
  v1 = 3;
  return __crt_seh_guarded_call<void (__cdecl *)(int)>::operator()<_lambda_cbab9ec6f41b0180b23cc171c22676b0_,_lambda_44731a7d0e6d81c3e6aa82d741081786_ &,_lambda_4b292cb8dd18144e164572427af410ab_>(
           &v1,
           (int)&v3,
           &v2);
}

