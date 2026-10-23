// busybox.exe @ 0x42f6fc size=145

int __usercall sub_42F6FC@<eax>(const CHAR *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // esi
  int FileHandle; // edi
  int v7; // ebx
  int v8; // eax
  int i; // edx

  if ( a1 != nullptr )
  {
    FileHandle = sub_443508(a1, 16641, 438);
    v3 = -1;
    if ( FileHandle >= 0 )
    {
      v7 = a3 - a2 + 1;
      v3 = sub_43269C(v7, a2);
      v8 = 0;
      for ( i = 0; v7 > i; ++i )
      {
        if ( *(_BYTE *)(a2 + i) == 10 )
          ++v8;
      }
      sub_404860(FileHandle, (LARGE_INTEGER)(v3 + v8));
      if ( v7 != v3 )
        v3 = 0;
      sub_442EA4(FileHandle);
    }
  }
  else
  {
    sub_463088("No current filename");
    return -2;
  }
  return v3;
}

