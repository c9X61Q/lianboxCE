// busybox.exe @ 0x459000 size=466

char *__cdecl sub_459000(char *Path, char *Destination)
{
  char *v2; // esi
  HANDLE FileA; // edi
  FARPROC v4; // eax
  CHAR *p_String1; // ebp
  int *v6; // ebx
  char *v7; // eax
  char *v8; // eax
  CHAR FileName[4]; // [esp+2Ch] [ebp-114h] BYREF
  char String1; // [esp+30h] [ebp-110h] BYREF
  char v12; // [esp+38h] [ebp-108h] BYREF

  v2 = Destination;
  if ( Destination == nullptr || Path == nullptr )
  {
    *_errno() = 22;
    return nullptr;
  }
  if ( _fullpath(FileName, Path, 0x104u) == nullptr )
    return nullptr;
  FileA = CreateFileA(FileName, 0, 0, nullptr, 3u, 0x2000000u, nullptr);
  if ( FileA == (HANDLE)-1 )
    goto LABEL_17;
  v4 = sub_435244("kernel32.dll", "GetFinalPathNameByHandleA", dword_473530);
  if ( v4 == nullptr )
  {
LABEL_8:
    p_String1 = FileName;
    goto LABEL_18;
  }
  if ( (unsigned int)(((int (__stdcall *)(HANDLE, CHAR *, int, _DWORD))v4)(FileA, FileName, 260, 0) - 1) > 0x102 )
  {
LABEL_17:
    v6 = _errno();
    *v6 = sub_429CD0();
    p_String1 = nullptr;
  }
  else
  {
    if ( FileName[0] != 92 )
      goto LABEL_8;
    p_String1 = &String1;
    if ( strncmp(FileName, "\\??\\", 4u) != 0 && strncmp(FileName, "\\\\?\\", 4u) != 0 )
    {
      p_String1 = FileName;
      if ( strnicmp(FileName, "\\DosDevices\\", 0xCu) == 0 )
        p_String1 = &v12;
    }
    if ( strnicmp(p_String1, "UNC\\", 4u) == 0 )
    {
      p_String1[2] = 92;
      p_String1 += 2;
    }
  }
LABEL_18:
  CloseHandle(FileA);
  if ( p_String1 == nullptr )
    return nullptr;
  v7 = strcpy(Destination, p_String1);
  sub_418E48(v7);
  v8 = sub_43D3D4(Destination, 47);
  if ( Destination < v8 && v8 != nullptr && *(v8 - 1) != 58 )
    *v8 = 0;
  return v2;
}

