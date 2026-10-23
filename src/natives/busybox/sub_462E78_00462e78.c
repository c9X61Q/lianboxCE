// busybox.exe @ 0x462e78 size=465

int __cdecl sub_462E78(char *a1, _DWORD *a2)
{
  char **v2; // eax
  int v3; // esi
  const CHAR *lpDirectoryName; // edi
  int *v5; // ebx
  unsigned int v6; // esi
  unsigned int v7; // edi
  int v8; // edx
  int v9; // edx
  int v10; // edx
  DWORD VolumeSerialNumber; // [esp+20h] [ebp-B0h] BYREF
  DWORD MaximumComponentLength; // [esp+24h] [ebp-ACh] BYREF
  DWORD FileSystemFlags; // [esp+28h] [ebp-A8h] BYREF
  ULARGE_INTEGER FreeBytesAvailableToCaller; // [esp+2Ch] [ebp-A4h] BYREF
  ULARGE_INTEGER TotalNumberOfBytes; // [esp+34h] [ebp-9Ch] BYREF
  ULARGE_INTEGER TotalNumberOfFreeBytes; // [esp+3Ch] [ebp-94h] BYREF
  _DWORD v18[6]; // [esp+44h] [ebp-8Ch]
  CHAR FileSystemNameBuffer[116]; // [esp+5Ch] [ebp-74h] BYREF

  qmemcpy(v18, unk_473044, sizeof(v18));
  v2 = sub_430878(a1);
  v3 = -1;
  if ( v2 != nullptr )
  {
    lpDirectoryName = v2[1];
    if ( GetDiskFreeSpaceExA(lpDirectoryName, &FreeBytesAvailableToCaller, &TotalNumberOfBytes, &TotalNumberOfFreeBytes)
      && GetVolumeInformationA(
           lpDirectoryName,
           nullptr,
           0,
           &VolumeSerialNumber,
           &MaximumComponentLength,
           &FileSystemFlags,
           FileSystemNameBuffer,
           0x64u) )
    {
      memset(a2, 0, 0x58u);
      if ( TotalNumberOfBytes.HighPart > 0xFFF )
      {
        if ( TotalNumberOfBytes.HighPart > 0x1FFF )
        {
          if ( TotalNumberOfBytes.HighPart > 0x3FFF )
          {
            if ( TotalNumberOfBytes.HighPart > 0x7FFF )
              a2[2] = 0x10000;
            else
              a2[2] = 0x8000;
          }
          else
          {
            a2[2] = 0x4000;
          }
        }
        else
        {
          a2[2] = 0x2000;
        }
      }
      else
      {
        a2[2] = 4096;
      }
      a2[3] = 0;
      *a2 = v18[sub_439918("NTFS", FileSystemNameBuffer) + 1];
      v6 = a2[2];
      v7 = a2[3];
      a2[4] = v6;
      a2[5] = v7;
      a2[6] = sub_4026E0(TotalNumberOfBytes.QuadPart, v6, v7);
      a2[7] = v8;
      a2[8] = sub_4026E0(TotalNumberOfFreeBytes.QuadPart, v6, v7);
      a2[9] = v9;
      a2[10] = sub_4026E0(FreeBytesAvailableToCaller.QuadPart, v6, v7);
      a2[11] = v10;
      a2[16] = VolumeSerialNumber;
      a2[17] = 0;
      a2[20] = MaximumComponentLength;
      a2[21] = 0;
      return 0;
    }
    else
    {
      v5 = _errno();
      *v5 = sub_429CD0();
    }
  }
  return v3;
}

