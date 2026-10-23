// busybox.exe @ 0x4580ec size=513

// positive sp value has been detected, the output may be wrong!
int __cdecl sub_4580EC(const CHAR *dwCreationDisposition, CHAR *dwFlagsAndAttributes, HANDLE hTemplateFile)
{
  int v3; // ecx
  void *v4; // esp
  HANDLE FileA; // eax
  void *v6; // ebx
  BOOL v7; // edi
  const wchar_t *v8; // ebx
  wchar_t *i; // eax
  size_t v10; // edi
  int *v11; // ebx
  char v13; // [esp-4024h] [ebp-4030h]
  int v14; // [esp-4004h] [ebp-4010h] BYREF
  _DWORD v15[4096]; // [esp-4000h] [ebp-400Ch] BYREF

  v4 = alloca(sub_4115D8(0x4024u, v3, v13));
  FileA = CreateFileA(dwCreationDisposition, 0, 0, nullptr, 3u, 0x2200000u, nullptr);
  if ( FileA == (HANDLE)-1 )
    goto LABEL_20;
  v6 = FileA;
  v7 = DeviceIoControl(FileA, 0x900A8u, nullptr, 0, v15, 0x4000u, (LPDWORD)&v14, nullptr);
  CloseHandle(v6);
  if ( !v7 || v15[0] != -1610612724 )
    goto LABEL_20;
  v8 = (const wchar_t *)&v15[5] + (LOWORD(v15[2]) >> 1);
  v8[HIWORD(v15[2]) >> 1] = 0;
  if ( *v8 == 92 )
  {
    if ( wcsncmp(v8, L"\\??\\", 4u) == 0 || wcsncmp(v8, asc_477502, 4u) == 0 )
    {
      v8 += 4;
    }
    else if ( wcsnicmp(v8, aD_11, 0xCu) == 0 )
    {
      v8 += 12;
    }
    if ( wcsnicmp(v8, aU_9, 4u) == 0 )
    {
      *((_WORD *)v8 + 2) = 92;
      v8 += 2;
    }
  }
  for ( i = (wchar_t *)v8; *i != 0; ++i )
  {
    if ( *i == 92 )
      *i = 47;
  }
  v10 = wcslen(v8);
  if ( v10 > (unsigned int)hTemplateFile )
    v10 = (size_t)hTemplateFile;
  if ( WideCharToMultiByte(0, 0, v8, v10, dwFlagsAndAttributes, (int)hTemplateFile, nullptr, nullptr) == 0 )
  {
LABEL_20:
    v11 = _errno();
    *v11 = sub_429CD0();
    return -1;
  }
  return v10;
}

