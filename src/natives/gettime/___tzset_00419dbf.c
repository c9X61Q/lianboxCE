// gettime.exe @ 0x419dbf size=93

void __tzset()
{
  if ( dword_438C6C == 0 )
  {
    __acrt_lock(6);
    if ( dword_438C6C == 0 )
    {
      tzset_nolock();
      _InterlockedIncrement(&dword_438C6C);
    }
    __acrt_unlock(6);
  }
}

