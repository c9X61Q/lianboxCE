// gettime.exe @ 0x41d182 size=281

int __cdecl _read(int FileHandle, void *DstBuf, unsigned int MaxCharCount)
{
  BOOL v4; // eax
  int nolock; // ebx
  int v6; // [esp+10h] [ebp-24h]

  if ( FileHandle == -2 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    return -1;
  }
  v4 = FileHandle >= 0 && FileHandle < (unsigned int)dword_438C48;
  if ( !v4 || (v6 = 56 * (FileHandle & 0x3F), (*(_BYTE *)(dword_438A48[FileHandle >> 6] + v6 + 40) & 1) == 0) )
  {
    *__doserrno() = 0;
    *_errno() = 9;
LABEL_10:
    _invalid_parameter_noinfo();
    return -1;
  }
  if ( MaxCharCount > 0x7FFFFFFF )
  {
    *__doserrno() = 0;
    *_errno() = 22;
    goto LABEL_10;
  }
  __acrt_lowio_lock_fh(FileHandle);
  nolock = -1;
  if ( (*(_BYTE *)(dword_438A48[FileHandle >> 6] + v6 + 40) & 1) != 0 )
  {
    nolock = _read_nolock(FileHandle, (LPWSTR)DstBuf, MaxCharCount);
  }
  else
  {
    *_errno() = 9;
    *__doserrno() = 0;
  }
  __acrt_lowio_unlock_fh(FileHandle);
  return nolock;
}

