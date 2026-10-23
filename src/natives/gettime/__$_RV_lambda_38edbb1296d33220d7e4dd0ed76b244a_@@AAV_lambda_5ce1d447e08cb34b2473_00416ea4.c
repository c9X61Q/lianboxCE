// gettime.exe @ 0x416ea4 size=107

void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_38edbb1296d33220d7e4dd0ed76b244a_,_lambda_5ce1d447e08cb34b2473517608e21441_ &,_lambda_fb385d3da700c9147fc39e65dd577a8c_>(
        int *a1,
        int a2,
        int *a3)
{
  void *v3; // ecx

  __acrt_lock(*a1);
  v3 = *(void **)(**(_DWORD **)a2 + 72);
  if ( v3 != nullptr && _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 0 && v3 != &unk_437560 )
    _free_base(v3);
  __acrt_unlock(*a3);
}

