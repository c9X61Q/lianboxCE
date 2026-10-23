// busybox.exe @ 0x442ea4 size=49

int __cdecl sub_442EA4(int FileHandle)
{
  if ( dword_4735D8 == FileHandle )
    dword_4735D8 = -1;
  if ( dword_47356C == FileHandle )
    dword_47356C = -1;
  return close(FileHandle);
}

