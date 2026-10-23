// gettime.exe @ 0x41ed8f size=104

int __stdcall __crt_seh_guarded_call<void (__cdecl *)(int)>::operator()<_lambda_cbab9ec6f41b0180b23cc171c22676b0_,_lambda_44731a7d0e6d81c3e6aa82d741081786_ &,_lambda_4b292cb8dd18144e164572427af410ab_>(
        int *a1,
        int a2,
        int *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  __acrt_lock(*a1);
  v4 = __ROR4__(__security_cookie ^ dword_438E14, __security_cookie & 0x1F);
  __acrt_unlock(*a3);
  return v4;
}

