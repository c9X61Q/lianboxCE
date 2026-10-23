// gettime.exe @ 0x4147f1 size=145

void __cdecl common_exit(UINT uExitCode, enum _crt_exit_cleanup_mode a2, enum _crt_exit_return_mode a3)
{
  _DWORD v3[3]; // [esp+4h] [ebp-24h] BYREF
  int v4; // [esp+10h] [ebp-18h] BYREF
  int v5; // [esp+14h] [ebp-14h] BYREF
  char v6; // [esp+1Bh] [ebp-Dh] BYREF
  int v7; // [esp+24h] [ebp-4h]

  if ( a3 == _crt_exit_terminate_process && (unsigned __int8)__scrt_is_managed_app_0() != 0 )
    try_cor_exit_process(uExitCode);
  v6 = 0;
  v3[0] = &a2;
  v3[1] = &a3;
  v3[2] = &v6;
  v7 = 0;
  v5 = 2;
  v4 = 2;
  __crt_seh_guarded_call<void>::operator()<_lambda_4fdada1b837b2abbf20876fac97688ad_,_lambda_b57350f2640456a0859d250846f69caf_ &,_lambda_eed5e4f92b5b7d55fa22c48c484aaa54_>(
    &v4,
    (int)v3,
    &v5);
  if ( a3 == _crt_exit_terminate_process )
    exit_or_terminate_process(uExitCode);
}

