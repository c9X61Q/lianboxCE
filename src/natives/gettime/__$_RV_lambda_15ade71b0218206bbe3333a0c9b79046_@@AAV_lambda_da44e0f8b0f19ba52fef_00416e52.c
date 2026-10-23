// gettime.exe @ 0x416e52 size=82

void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_15ade71b0218206bbe3333a0c9b79046_,_lambda_da44e0f8b0f19ba52fefafb335991732_ &,_lambda_207f2d024fc103971653565357d6cd41_>(
        int *a1,
        int a2,
        int *a3)
{
  __acrt_lock(*a1);
  _InterlockedIncrement(*(volatile signed __int32 **)(**(_DWORD **)a2 + 72));
  __acrt_unlock(*a3);
}

