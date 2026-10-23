// gettime.exe @ 0x41b68e size=162

int __stdcall __crt_seh_guarded_call<int>::operator()<_lambda_9e9de3de5fa147e2223d7db92bc10aa6_,_lambda_38ce7e780aa69e748d6df282ebc68efe_ &,_lambda_8ca6da459f0f6780f1cff60fdc3d00e5_>(
        _DWORD *a1,
        int **a2,
        _DWORD *a3)
{
  int v3; // esi
  void *osfhandle; // eax
  DWORD LastError; // esi

  v3 = 0;
  __acrt_lowio_lock_fh(*a1);
  if ( (*(_BYTE *)(dword_438A48[**a2 >> 6] + 56 * (**a2 & 0x3F) + 40) & 1) == 0 )
    goto LABEL_4;
  osfhandle = (void *)_get_osfhandle(**a2);
  if ( !FlushFileBuffers(osfhandle) )
  {
    LastError = GetLastError();
    *__doserrno() = LastError;
LABEL_4:
    *_errno() = 9;
    v3 = -1;
  }
  __acrt_lowio_unlock_fh(*a3);
  return v3;
}

