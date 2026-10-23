// gettime.exe @ 0x42525e size=86

int __cdecl _isatty(int FileHandle)
{
  if ( FileHandle == -2 )
  {
    *_errno() = 9;
  }
  else
  {
    if ( FileHandle >= 0 && FileHandle < (unsigned int)dword_438C48 )
      return *(_BYTE *)(dword_438A48[(unsigned int)FileHandle >> 6] + 56 * (FileHandle & 0x3F) + 40) & 0x40;
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return 0;
}

