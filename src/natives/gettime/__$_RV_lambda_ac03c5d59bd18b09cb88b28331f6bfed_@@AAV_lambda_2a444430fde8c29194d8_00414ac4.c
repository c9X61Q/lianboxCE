// gettime.exe @ 0x414ac4 size=69

int __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_ac03c5d59bd18b09cb88b28331f6bfed_,_lambda_2a444430fde8c29194d880d93eed5e8f_ &,_lambda_02db5278e8aef8b5e4976579d73f5304_ &>(
        int a1,
        int a2,
        int **a3)
{
  int result; // eax

  _lambda_2a444430fde8c29194d880d93eed5e8f_::operator()(a2);
  result = **a3;
  *(_DWORD *)(result + 848) &= ~0x10u;
  return result;
}

