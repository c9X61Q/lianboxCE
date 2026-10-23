// gettime.exe @ 0x41ffc7 size=341

// bad sp value at call has been detected, the output may be wrong!
int __usercall setmbcp_internal@<eax>(
        void *a1@<ebp>,
        UINT a2,
        bool a3,
        struct __acrt_ptd *const a4,
        struct __crt_multibyte_data **const a5)
{
  _DWORD *v6; // eax
  int v7; // edi
  void *v8; // eax
  _BYTE v9[544]; // [esp-238h] [ebp-244h] BYREF
  struct __acrt_ptd *const *v10; // [esp-14h] [ebp-20h] BYREF
  UINT SystemCP; // [esp-Ch] [ebp-18h] BYREF
  struct __crt_multibyte_data *v12; // [esp-8h] [ebp-14h]
  void *v13[4]; // [esp-4h] [ebp-10h] BYREF
  void *retaddr; // [esp+Ch] [ebp+0h]

  v13[1] = a1;
  v13[2] = retaddr;
  update_thread_multibyte_data_internal(a4, a5);
  SystemCP = getSystemCP(a2);
  if ( SystemCP == *(_DWORD *)(*((_DWORD *)a4 + 18) + 4) )
    return 0;
  v6 = _malloc_base(0x220u);
  v13[0] = v6;
  if ( v6 != nullptr )
  {
    v12 = (struct __crt_multibyte_data *)v6;
    qmemcpy(v9, *((const void **)a4 + 18), sizeof(v9));
    qmemcpy(v6, v9, 544);
    *v6 = 0;
    v7 = _setmbcp_nolock(SystemCP, v12);
    if ( v7 == -1 )
    {
      *_errno() = 22;
      _free_base(v13[0]);
      return -1;
    }
    else
    {
      if ( !a3 )
        sub_414E32();
      if ( _InterlockedDecrement(*((volatile signed __int32 **)a4 + 18)) == 0 && *((_UNKNOWN **)a4 + 18) != &unk_437560 )
        _free_base(*((void **)a4 + 18));
      v8 = v13[0];
      *(_DWORD *)v13[0] = 1;
      *((_DWORD *)a4 + 18) = v8;
      if ( (dword_437458 & *((_DWORD *)a4 + 212)) == 0 )
      {
        v10 = &a4;
        v13[0] = (void *)5;
        __crt_seh_guarded_call<void>::operator()<_lambda_4fdada1b837b2abbf20876fac97688ad_,_lambda_b57350f2640456a0859d250846f69caf_ &,_lambda_eed5e4f92b5b7d55fa22c48c484aaa54_>(
          (int *)v13,
          (int)&v10,
          (int *)&SystemCP);
        if ( a3 )
          off_437264 = *a5;
      }
      _free_base(nullptr);
      return v7;
    }
  }
  else
  {
    _free_base(nullptr);
    return -1;
  }
}

