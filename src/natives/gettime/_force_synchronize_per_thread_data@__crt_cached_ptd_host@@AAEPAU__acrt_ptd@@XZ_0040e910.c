// gettime.exe @ 0x40e910 size=70

struct __acrt_ptd *__thiscall __crt_cached_ptd_host::force_synchronize_per_thread_data(__crt_cached_ptd_host *this)
{
  DWORD LastError; // eax
  bool v3; // zf
  int v4; // eax
  int v5; // eax
  int v6; // esi
  DWORD v8; // [esp-4h] [ebp-10h]
  DWORD dwErrCode; // [esp+8h] [ebp-4h] BYREF

  LastError = GetLastError();
  v3 = *((_BYTE *)this + 8) == 0;
  dwErrCode = LastError;
  if ( v3 )
  {
    v4 = 0;
    *((_BYTE *)this + 8) = 1;
    *((_DWORD *)this + 1) = 0;
  }
  else
  {
    v4 = *((_DWORD *)this + 1);
  }
  v5 = __acrt_getptd_noexit_explicit(&dwErrCode, v4);
  v8 = dwErrCode;
  v6 = v5;
  *(_DWORD *)this = v5;
  SetLastError(v8);
  return (struct __acrt_ptd *)v6;
}

