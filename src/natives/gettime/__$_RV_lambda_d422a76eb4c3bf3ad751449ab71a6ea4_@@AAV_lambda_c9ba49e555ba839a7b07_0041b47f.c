// gettime.exe @ 0x41b47f size=145

int __stdcall __crt_seh_guarded_call<int>::operator()<_lambda_d422a76eb4c3bf3ad751449ab71a6ea4_,_lambda_c9ba49e555ba839a7b07aa3fbecb7617_ &,_lambda_9476263c8ee91a25d21c55370bdb50de_>(
        _DWORD *a1,
        int a2,
        _DWORD *a3)
{
  int v3; // esi
  int v4; // esi

  __acrt_lowio_lock_fh(*a1);
  v3 = *(_DWORD *)(a2 + 4);
  if ( (*(_BYTE *)(dword_438A48[**(int **)a2 >> 6] + 56 * (**(_DWORD **)a2 & 0x3F) + 40) & 1) != 0 )
  {
    v4 = _close_nolock_internal(**(_DWORD **)a2, *(_DWORD *)(a2 + 4));
  }
  else
  {
    *(_BYTE *)(v3 + 28) = 1;
    *(_DWORD *)(v3 + 24) = 9;
    v4 = -1;
  }
  __acrt_lowio_unlock_fh(*a3);
  return v4;
}

