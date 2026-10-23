// busybox.exe @ 0x443508 size=152

int __cdecl sub_443508(char *lpFileName, int a2, int a3)
{
  const char *FileName; // esi
  int v4; // edi
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ebx
  DWORD FileAttributesA; // eax

  FileName = lpFileName;
  v4 = a2;
  v5 = sub_4336AC(lpFileName);
  v6 = v5;
  if ( v5 == 0 || (a2 & 0x800000) != 0 && v5 != -1 )
  {
    v4 = 2;
    FileName = "nul";
  }
  v7 = open(FileName, v4 & 0xFF7FFFFF, a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( (v4 & 3) != 0 && *_errno() == 13 )
    {
      FileAttributesA = GetFileAttributesA(FileName);
      if ( FileAttributesA != -1 && (FileAttributesA & 0x10) != 0 )
        *_errno() = 21;
    }
  }
  else
  {
    sub_46BC04(v6, v7);
  }
  return v8;
}

