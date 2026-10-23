// gettime.exe @ 0x41bbdc size=125

bool __cdecl write_requires_double_translation_nolock(int FileHandle, struct __crt_cached_ptd_host *a2)
{
  int v2; // edi
  int v3; // ebx
  DWORD Mode; // [esp+Ch] [ebp-4h] BYREF

  if ( _isatty(FileHandle) == 0 )
    return false;
  v2 = FileHandle >> 6;
  v3 = 56 * (FileHandle & 0x3F);
  if ( *(char *)(dword_438A48[FileHandle >> 6] + v3 + 40) >= 0 )
    return false;
  if ( *((_BYTE *)a2 + 20) == 0 )
    __crt_cached_ptd_host::update_locale_slow(a2);
  return (*(_DWORD *)(*((_DWORD *)a2 + 3) + 168) != 0 || *(_BYTE *)(dword_438A48[v2] + v3 + 41) != 0)
      && GetConsoleMode(*(HANDLE *)(dword_438A48[v2] + v3 + 24), &Mode);
}

