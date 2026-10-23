// gettime.exe @ 0x41b5b3 size=160

int __cdecl _close_nolock_internal(int FileHandle, int a2)
{
  DWORD LastError; // esi
  intptr_t osfhandle; // esi
  void *v4; // eax

  if ( _get_osfhandle(FileHandle) == -1
    || (FileHandle == 1 && (*(_BYTE *)(dword_438A48[0] + 152) & 1) != 0
     || FileHandle == 2 && (*(_BYTE *)(dword_438A48[0] + 96) & 1) != 0)
    && (osfhandle = _get_osfhandle(2), _get_osfhandle(1) == osfhandle)
    || (v4 = (void *)_get_osfhandle(FileHandle), CloseHandle(v4)) )
  {
    LastError = 0;
  }
  else
  {
    LastError = GetLastError();
  }
  _free_osfhnd(FileHandle);
  *(_BYTE *)(dword_438A48[FileHandle >> 6] + 56 * (FileHandle & 0x3F) + 40) = 0;
  if ( LastError == 0 )
    return 0;
  __acrt_errno_map_os_error_ptd(LastError, a2);
  return -1;
}

