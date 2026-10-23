// gettime.exe @ 0x414b09 size=110

void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_e5124f882df8998aaf41531e079ba474_,_lambda_3e16ef9562a7dcce91392c22ab16ea36_ &,_lambda_e25ca0880e6ef98be67edffd8c599615_>(
        int *a1,
        int a2,
        int *a3)
{
  int *i; // esi

  __acrt_lock(*a1);
  for ( i = (int *)&dword_438A30; i != &dword_438A34; ++i )
  {
    if ( (wchar_t **)*i != &off_4371A8 )
      *i = _updatetlocinfoEx_nolock(i, &off_4371A8);
  }
  __acrt_unlock(*a3);
}

