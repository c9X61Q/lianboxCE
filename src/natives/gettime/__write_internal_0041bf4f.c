// gettime.exe @ 0x41bf4f size=273

int __cdecl _write_internal(int FileHandle, int a2, int a3, __crt_cached_ptd_host *a4)
{
  BOOL v5; // eax
  int v6; // ebx
  int v7; // [esp+10h] [ebp-24h]

  if ( FileHandle == -2 )
  {
    *((_BYTE *)a4 + 36) = 1;
    *((_DWORD *)a4 + 8) = 0;
    *((_BYTE *)a4 + 28) = 1;
    *((_DWORD *)a4 + 6) = 9;
    return -1;
  }
  v5 = FileHandle >= 0 && FileHandle < (unsigned int)dword_438C48;
  if ( !v5 || (v7 = 56 * (FileHandle & 0x3F), (*(_BYTE *)(dword_438A48[FileHandle >> 6] + v7 + 40) & 1) == 0) )
  {
    *((_BYTE *)a4 + 36) = 1;
    *((_DWORD *)a4 + 8) = 0;
    *((_BYTE *)a4 + 28) = 1;
    *((_DWORD *)a4 + 6) = 9;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a4);
    return -1;
  }
  __acrt_lowio_lock_fh(FileHandle);
  v6 = -1;
  if ( (*(_BYTE *)(v7 + dword_438A48[FileHandle >> 6] + 40) & 1) != 0 )
  {
    v6 = _write_nolock(FileHandle, a2, a3, a4);
  }
  else
  {
    *((_BYTE *)a4 + 28) = 1;
    *((_DWORD *)a4 + 6) = 9;
    *((_BYTE *)a4 + 36) = 1;
    *((_DWORD *)a4 + 8) = 0;
  }
  __acrt_lowio_unlock_fh(FileHandle);
  return v6;
}

