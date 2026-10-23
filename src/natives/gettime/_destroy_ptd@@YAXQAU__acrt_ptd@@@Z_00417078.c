// gettime.exe @ 0x417078 size=205

void __cdecl destroy_ptd(void **a1)
{
  void **v1; // eax
  int v2; // [esp+0h] [ebp-10h] BYREF
  void ***v3; // [esp+4h] [ebp-Ch] BYREF
  int v4; // [esp+8h] [ebp-8h] BYREF

  v1 = a1;
  if ( *a1 != &unk_42C510 )
  {
    _free_base(*a1);
    v1 = a1;
  }
  _free_base(v1[15]);
  _free_base(a1[12]);
  _free_base(a1[13]);
  _free_base(a1[14]);
  _free_base(a1[10]);
  _free_base(a1[11]);
  _free_base(a1[16]);
  _free_base(a1[17]);
  _free_base(a1[216]);
  v3 = &a1;
  v4 = 5;
  v2 = 5;
  __crt_seh_guarded_call<void>::operator()<_lambda_38edbb1296d33220d7e4dd0ed76b244a_,_lambda_5ce1d447e08cb34b2473517608e21441_ &,_lambda_fb385d3da700c9147fc39e65dd577a8c_>(
    &v2,
    (int)&v3,
    &v4);
  v3 = &a1;
  v2 = 4;
  v4 = 4;
  __crt_seh_guarded_call<void>::operator()<_lambda_6affb1475c98b40b75cdec977db92e3c_,_lambda_b8d4b9c228a6ecc3f80208dbb4b4a104_ &,_lambda_608742c3c92a14382c1684fc64f96c88_>(
    &v4,
    (struct __acrt_ptd *const **)&v3,
    &v2);
}

