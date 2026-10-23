// busybox.exe @ 0x404860 size=806

int __cdecl sub_404860(int a1, LARGE_INTEGER lDistanceToMove)
{
  void *osfhandle; // eax
  void *v3; // ebx
  __int64 v5; // rax
  WCHAR *v6; // esi
  WCHAR *v7; // eax
  WCHAR *FileHandle; // [esp+0h] [ebp-ACh]
  WCHAR *lpVolumeNameBuffer; // [esp+30h] [ebp-7Ch]
  LPWSTR lpVolumeNameBuffera; // [esp+30h] [ebp-7Ch]
  HANDLE hFindVolume; // [esp+34h] [ebp-78h]
  __int64 Offset; // [esp+38h] [ebp-74h]
  DWORD VolumeSerialNumber; // [esp+44h] [ebp-68h] BYREF
  ULARGE_INTEGER FreeBytesAvailableToCaller; // [esp+48h] [ebp-64h] BYREF
  LARGE_INTEGER FileSize; // [esp+50h] [ebp-5Ch] BYREF
  struct _BY_HANDLE_FILE_INFORMATION FileInformation; // [esp+58h] [ebp-54h] BYREF

  if ( a1 == -1 || lDistanceToMove.HighPart < 0 )
    goto LABEL_11;
  osfhandle = (void *)get_osfhandle(a1);
  v3 = osfhandle;
  if ( osfhandle == (void *)-1 || GetFileType(osfhandle) != 1 )
    goto LABEL_26;
  Offset = telli64(a1);
  if ( ((unsigned int)Offset & HIDWORD(Offset)) == 0xFFFFFFFF )
  {
LABEL_11:
    sub_40AFE0(22);
    return -1;
  }
  if ( !GetFileSizeEx(v3, &FileSize) )
    goto LABEL_26;
  if ( FileSize.QuadPart < (unsigned __int64)lDistanceToMove.QuadPart )
  {
    if ( !GetFileInformationByHandle(v3, &FileInformation) )
      goto LABEL_11;
    v6 = (WCHAR *)calloc(0x33u, 2u);
    v7 = (WCHAR *)calloc(0x106u, 2u);
    lpVolumeNameBuffer = v7;
    if ( v6 != nullptr && v7 != nullptr )
    {
      hFindVolume = FindFirstVolumeW(v6, 0x32u);
      do
      {
        GetVolumeInformationW(v6, lpVolumeNameBuffer, 0x105u, &VolumeSerialNumber, nullptr, nullptr, nullptr, 0);
        if ( FileInformation.dwVolumeSerialNumber == VolumeSerialNumber )
        {
          FindVolumeClose(hFindVolume);
          goto LABEL_22;
        }
      }
      while ( FindNextVolumeW(hFindVolume, v6, 0x32u) );
      FindVolumeClose(hFindVolume);
      FileHandle = v6;
      v6 = nullptr;
      free(FileHandle);
LABEL_22:
      free(lpVolumeNameBuffer);
      lpVolumeNameBuffera = (LPWSTR)GetDiskFreeSpaceExW(v6, &FreeBytesAvailableToCaller, nullptr, nullptr);
      free(v6);
      if ( lpVolumeNameBuffera == nullptr
        || FreeBytesAvailableToCaller.QuadPart < lDistanceToMove.QuadPart - FileSize.QuadPart )
      {
LABEL_24:
        sub_40AFE0(27);
        return -1;
      }
      goto LABEL_8;
    }
LABEL_26:
    sub_40AFE0(9);
    return -1;
  }
LABEL_8:
  *(LARGE_INTEGER *)&FileInformation.dwFileAttributes = lDistanceToMove;
  if ( SetFilePointer(v3, lDistanceToMove.LowPart, (PLONG)&FileInformation.ftCreationTime, 0) == -1
    && FileInformation.dwFileAttributes != -1 )
  {
    if ( GetLastError() != 131 )
      goto LABEL_11;
    goto LABEL_24;
  }
  if ( !SetEndOfFile(v3) )
    goto LABEL_11;
  v5 = lseeki64(a1, Offset, 0);
  if ( ((unsigned int)v5 & HIDWORD(v5)) == 0xFFFFFFFF )
    goto LABEL_11;
  return 0;
}

