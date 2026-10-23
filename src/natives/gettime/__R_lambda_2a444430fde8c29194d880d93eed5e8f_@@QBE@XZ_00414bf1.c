// gettime.exe @ 0x414bf1 size=106

void __thiscall _lambda_2a444430fde8c29194d880d93eed5e8f_::operator()(_DWORD **this)
{
  void *v2; // esi
  _DWORD v3[5]; // [esp+8h] [ebp-20h] BYREF
  int v4; // [esp+1Ch] [ebp-Ch] BYREF
  int v5; // [esp+20h] [ebp-8h] BYREF

  v2 = _calloc_base(1u, 0xB8u);
  **this = v2;
  _free_base(nullptr);
  if ( v2 != nullptr )
  {
    qmemcpy(v3, this, sizeof(v3));
    v5 = 4;
    v4 = 4;
    __crt_seh_guarded_call<void>::operator()<_lambda_4fdada1b837b2abbf20876fac97688ad_,_lambda_b57350f2640456a0859d250846f69caf_ &,_lambda_eed5e4f92b5b7d55fa22c48c484aaa54_>(
      &v4,
      (int)v3,
      &v5);
  }
}

