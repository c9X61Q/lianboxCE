// gettime.exe @ 0x40e8e7 size=41

unsigned int __thiscall __crt_cached_ptd_host::check_synchronize_global_state_index(__crt_cached_ptd_host *this)
{
  DWORD LastError; // eax

  if ( *((_BYTE *)this + 8) != 0 )
    return *((_DWORD *)this + 1);
  LastError = GetLastError();
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 8) = 1;
  SetLastError(LastError);
  return 0;
}

