// gettime.exe @ 0x41b730 size=125

int __cdecl _commit(int FileHandle)
{
  int v2; // [esp+4h] [ebp-10h] BYREF
  int *p_FileHandle; // [esp+8h] [ebp-Ch] BYREF
  int v4; // [esp+Ch] [ebp-8h] BYREF

  if ( FileHandle == -2 )
  {
    *_errno() = 9;
  }
  else
  {
    if ( FileHandle >= 0
      && FileHandle < (unsigned int)dword_438C48
      && (*(_BYTE *)(dword_438A48[FileHandle >> 6] + 56 * (FileHandle & 0x3F) + 40) & 1) != 0 )
    {
      v4 = FileHandle;
      p_FileHandle = &FileHandle;
      v2 = FileHandle;
      return __crt_seh_guarded_call<int>::operator()<_lambda_9e9de3de5fa147e2223d7db92bc10aa6_,_lambda_38ce7e780aa69e748d6df282ebc68efe_ &,_lambda_8ca6da459f0f6780f1cff60fdc3d00e5_>(
               &v2,
               &p_FileHandle,
               &v4);
    }
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return -1;
}

