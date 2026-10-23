// gettime.exe @ 0x412b11 size=91

int __stdcall __crt_seh_guarded_call<unsigned int>::operator()<_lambda_4ac01c32aa5b53846f05d0620572872e_,_lambda_5856287d7ecd2be6c9197bb4007c3f6e_ &,_lambda_e7a9868ed898c75c0f0637692d94351a_>(
        FILE **a1,
        int a2,
        FILE **a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  _lock_file(*a1);
  v4 = unknown_libname_82(a2);
  _unlock_file(*a3);
  return v4;
}

