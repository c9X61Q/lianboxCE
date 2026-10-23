// gettime.exe @ 0x41c416 size=143

int __cdecl common_ftell<__int64>(FILE *Stream, __crt_cached_ptd_host *a2)
{
  int v3; // [esp+10h] [ebp-20h]

  if ( Stream != nullptr )
  {
    _lock_file(Stream);
    v3 = common_ftell_nolock<__int64>(Stream, a2);
    _unlock_file(Stream);
    return v3;
  }
  else
  {
    *((_BYTE *)a2 + 28) = 1;
    *((_DWORD *)a2 + 6) = 22;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a2);
    return -1;
  }
}

