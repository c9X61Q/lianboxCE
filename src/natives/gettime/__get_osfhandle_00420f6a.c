// gettime.exe @ 0x420f6a size=106

intptr_t __cdecl _get_osfhandle(int FileHandle)
{
  int v1; // ecx
  int v2; // eax

  if ( FileHandle == -2 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
  }
  else
  {
    if ( FileHandle >= 0 && FileHandle < (unsigned int)dword_438C48 )
    {
      v1 = 56 * (FileHandle & 0x3F);
      v2 = dword_438A48[(unsigned int)FileHandle >> 6];
      if ( (*(_BYTE *)(v2 + v1 + 40) & 1) != 0 )
        return *(_DWORD *)(v2 + v1 + 24);
    }
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return -1;
}

