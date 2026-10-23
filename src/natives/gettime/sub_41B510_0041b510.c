// gettime.exe @ 0x41b510 size=163

int __cdecl sub_41B510(int a1, __crt_cached_ptd_host *a2)
{
  __crt_cached_ptd_host *v2; // eax
  __crt_cached_ptd_host *v4; // eax
  struct __acrt_ptd **v5; // [esp-4h] [ebp-1Ch]
  _DWORD v6[2]; // [esp+4h] [ebp-14h] BYREF
  int v7; // [esp+Ch] [ebp-Ch] BYREF
  int v8; // [esp+10h] [ebp-8h] BYREF

  if ( a1 == -2 )
  {
    v2 = a2;
    *((_DWORD *)a2 + 8) = 0;
    *((_BYTE *)v2 + 36) = 1;
    *((_BYTE *)v2 + 28) = 1;
    *((_DWORD *)v2 + 6) = 9;
  }
  else
  {
    if ( a1 >= 0
      && a1 < (unsigned int)dword_438C48
      && (*(_BYTE *)(dword_438A48[a1 >> 6] + 56 * (a1 & 0x3F) + 40) & 1) != 0 )
    {
      v8 = a1;
      v6[0] = &a1;
      v6[1] = a2;
      v7 = a1;
      return __crt_seh_guarded_call<int>::operator()<_lambda_d422a76eb4c3bf3ad751449ab71a6ea4_,_lambda_c9ba49e555ba839a7b07aa3fbecb7617_ &,_lambda_9476263c8ee91a25d21c55370bdb50de_>(
               &v7,
               (int)v6,
               &v8);
    }
    v4 = a2;
    v5 = (struct __acrt_ptd **)a2;
    *((_BYTE *)a2 + 36) = 1;
    *((_DWORD *)v4 + 8) = 0;
    *((_BYTE *)v4 + 28) = 1;
    *((_DWORD *)v4 + 6) = 9;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, v5);
  }
  return -1;
}

