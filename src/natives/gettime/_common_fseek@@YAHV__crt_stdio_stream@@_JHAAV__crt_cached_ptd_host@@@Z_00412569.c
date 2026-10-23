// gettime.exe @ 0x412569 size=170

int __cdecl common_fseek(FILE *Stream, int a2, int a3, unsigned int a4, __crt_cached_ptd_host *a5)
{
  int v6; // [esp+10h] [ebp-1Ch]

  if ( Stream != nullptr && a4 <= 2 )
  {
    _lock_file(Stream);
    v6 = common_fseek_nolock(Stream, a2, a3, a4, a5);
    _unlock_file(Stream);
    return v6;
  }
  else
  {
    *((_DWORD *)a5 + 6) = 22;
    *((_BYTE *)a5 + 28) = 1;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a5);
    return -1;
  }
}

