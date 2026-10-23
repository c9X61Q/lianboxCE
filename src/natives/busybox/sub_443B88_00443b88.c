// busybox.exe @ 0x443b88 size=233

int __cdecl sub_443B88(LPCSTR lpExistingFileName, LPCSTR lpNewFileName)
{
  int v2; // esi
  DWORD FileAttributesA; // eax
  DWORD v4; // ebp

  if ( rename(lpExistingFileName, lpNewFileName) != 0 )
  {
    v2 = -1;
    if ( *_errno() != 17 )
      return v2;
    if ( !MoveFileExA(lpExistingFileName, lpNewFileName, 1u) )
    {
      if ( GetLastError() != 5 )
        goto LABEL_13;
      FileAttributesA = GetFileAttributesA(lpNewFileName);
      v4 = FileAttributesA;
      if ( FileAttributesA == -1 )
        goto LABEL_13;
      if ( (FileAttributesA & 0x10) != 0 )
      {
        *_errno() = 21;
        return v2;
      }
      if ( (FileAttributesA & 1) == 0 || !SetFileAttributesA(lpNewFileName, FileAttributesA & 0xFFFFFFFE) )
      {
LABEL_13:
        *_errno() = 13;
        return -1;
      }
      if ( !MoveFileExA(lpExistingFileName, lpNewFileName, 1) )
      {
        SetFileAttributesA(lpNewFileName, v4);
        goto LABEL_13;
      }
    }
  }
  return 0;
}

