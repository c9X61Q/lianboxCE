// gettime.exe @ 0x411c30 size=96

int __stdcall __crt_seh_guarded_call<int>::operator()<_lambda_6d20deecaf4856105ebacbad442d1079_,_lambda_9a32fed5bf61b6b509b2d3f6003082a1_ &,_lambda_63ea2239ed67c638ddbae41947fdf875_>(
        FILE **a1,
        FILE ***a2,
        FILE **a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  _lock_file(*a1);
  v4 = _fflush_nolock(**a2);
  _unlock_file(*a3);
  return v4;
}

