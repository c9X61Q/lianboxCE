// busybox.exe @ 0x44305c size=462

int __cdecl sub_44305C(int FileHandle, int a2)
{
  int v2; // edi
  int v3; // ebx
  void *osfhandle; // esi
  __int64 v5; // rax
  DWORD dwFileAttributes; // edx
  __int16 v7; // ax
  DWORD nFileSizeHigh; // eax
  int v9; // edx
  int v10; // edx
  int v11; // edx
  __int64 v12; // rax
  DWORD nNumberOfLinks; // edx
  struct _BY_HANDLE_FILE_INFORMATION FileInformation; // [esp+8h] [ebp-48h] BYREF
  int *p_FileHandle; // [esp+40h] [ebp-10h]

  p_FileHandle = &FileHandle;
  v2 = FileHandle;
  v3 = a2;
  osfhandle = (void *)_get_osfhandle(FileHandle);
  if ( osfhandle != (void *)-1 )
  {
    if ( GetFileType(osfhandle) == 1 )
    {
      if ( GetFileInformationByHandle(osfhandle, &FileInformation) )
      {
        dwFileAttributes = FileInformation.dwFileAttributes;
        v7 = 16893;
        if ( (FileInformation.dwFileAttributes & 0x10) == 0 )
          v7 = -32476;
        if ( (FileInformation.dwFileAttributes & 1) == 0 )
          LOBYTE(v7) = v7 | 0x90;
        *(_WORD *)(v3 + 16) = v7;
        *(_DWORD *)(v3 + 88) = dwFileAttributes;
        nFileSizeHigh = FileInformation.nFileSizeHigh;
        *(_DWORD *)(v3 + 40) = FileInformation.nFileSizeLow;
        *(_DWORD *)(v3 + 44) = nFileSizeHigh;
        *(_DWORD *)(v3 + 48) = sub_42F84C(&FileInformation.ftLastAccessTime.dwLowDateTime);
        *(_DWORD *)(v3 + 52) = v9;
        *(_DWORD *)(v3 + 56) = sub_42F84C(&FileInformation.ftLastWriteTime.dwLowDateTime);
        *(_DWORD *)(v3 + 60) = v10;
        *(_DWORD *)(v3 + 64) = sub_42F84C(&FileInformation.ftCreationTime.dwLowDateTime);
        *(_DWORD *)(v3 + 68) = v11;
        v12 = (*(_QWORD *)(v3 + 40) + 4095LL) >> 12;
        *(_QWORD *)(v3 + 80) = 8 * v12;
        *(_DWORD *)v3 = FileInformation.dwVolumeSerialNumber;
        LODWORD(v12) = FileInformation.nFileIndexHigh;
        *(_DWORD *)(v3 + 8) = FileInformation.nFileIndexLow;
        *(_DWORD *)(v3 + 12) = v12;
        nNumberOfLinks = 2;
        if ( (*(_DWORD *)(v3 + 16) & 0xF000) != 0x4000 )
          nNumberOfLinks = FileInformation.nNumberOfLinks;
        *(_DWORD *)(v3 + 20) = nNumberOfLinks;
        goto LABEL_14;
      }
      *_errno() = 9;
    }
    else if ( fstati64(v2, &FileInformation) == 0 )
    {
      *(_WORD *)(v3 + 16) = 436;
      *(_DWORD *)(v3 + 88) = 128;
      v5 = *(_QWORD *)&FileInformation.ftLastWriteTime.dwHighDateTime;
      *(_QWORD *)(v3 + 40) = *(_QWORD *)&FileInformation.ftLastWriteTime.dwHighDateTime;
      *(_DWORD *)(v3 + 48) = FileInformation.nFileSizeHigh;
      *(_DWORD *)(v3 + 52) = 0;
      *(_DWORD *)(v3 + 56) = FileInformation.nFileSizeLow;
      *(_DWORD *)(v3 + 60) = 0;
      *(_DWORD *)(v3 + 64) = FileInformation.nNumberOfLinks;
      *(_DWORD *)(v3 + 68) = 0;
      *(_QWORD *)(v3 + 80) = 8 * ((v5 + 4095) >> 12);
      *(_DWORD *)v3 = 0;
      *(_DWORD *)(v3 + 8) = 0;
      *(_DWORD *)(v3 + 12) = 0;
      *(_DWORD *)(v3 + 20) = 1;
LABEL_14:
      *(_DWORD *)(v3 + 32) = 0;
      *(_DWORD *)(v3 + 24) = 4095;
      *(_DWORD *)(v3 + 28) = 4095;
      *(_DWORD *)(v3 + 72) = 4096;
      return 0;
    }
    return -1;
  }
  *_errno() = 9;
  return (int)osfhandle;
}

