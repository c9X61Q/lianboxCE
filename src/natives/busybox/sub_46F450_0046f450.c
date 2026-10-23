// busybox.exe @ 0x46f450 size=577

char __usercall sub_46F450@<al>(void *hFile@<eax>, int *a2@<edx>)
{
  DWORD FileType; // eax
  HMODULE ModuleHandleA; // eax
  int v6; // eax
  DWORD v7; // edi
  int v8; // ecx
  int v9; // eax
  void *v10; // esp
  DWORD v11; // edx
  int v12; // eax
  bool v13; // zf
  DWORD TotalBytesAvail; // [esp+1Ch] [ebp-40h] BYREF
  _DWORD v16[2]; // [esp+20h] [ebp-3Ch] BYREF
  DWORD Mode[13]; // [esp+28h] [ebp-34h] BYREF

  FileType = GetFileType(hFile);
  if ( FileType != 2 )
  {
    if ( FileType == 3 )
    {
      if ( dword_4734C0 == 0 )
      {
        ModuleHandleA = GetModuleHandleA("ntdll.dll");
        NtQueryInformationFile = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))GetProcAddress(
                                                                                              ModuleHandleA,
                                                                                              "NtQueryInformationFile");
        dword_4734C0 = 1;
      }
      if ( PeekNamedPipe(hFile, nullptr, 0, nullptr, &TotalBytesAvail, nullptr) )
      {
        if ( TotalBytesAvail != 0 )
          return *a2 & 0x41;
        goto LABEL_7;
      }
      if ( GetLastError() == 109 )
      {
LABEL_10:
        LOBYTE(v6) = 16;
        return v6;
      }
      memset(v16, 0, sizeof(v16));
      memset(Mode, 0, 0x28u);
      if ( NtQueryInformationFile != nullptr
        && NtQueryInformationFile(hFile, v16, Mode, 40, 24) == 0
        && Mode[7] <= 0x1FF
        && (Mode[7] != Mode[6] || Mode[6] > 0x1FF) )
      {
LABEL_7:
        LOBYTE(v6) = 0;
        return v6;
      }
      v6 = *a2;
LABEL_34:
      LOBYTE(v6) = v6 & 4;
      return v6;
    }
    v13 = WaitForSingleObject(hFile, 0) == 0;
    v6 = *a2;
    if ( !v13 )
      goto LABEL_34;
LABEL_33:
    LOBYTE(v6) = v6 & 0x7D;
    return v6;
  }
  v7 = WaitForSingleObject(hFile, 0);
  if ( !GetConsoleMode(hFile, Mode) )
  {
    if ( v7 != 0 )
      goto LABEL_7;
    v6 = *a2;
    goto LABEL_33;
  }
  TotalBytesAvail = 0;
  Mode[0] = 0;
  if ( !GetNumberOfConsoleInputEvents(hFile, Mode) )
  {
    v6 = *a2 & 0x304;
    *a2 = v6;
    return v6;
  }
  v9 = *a2 & 0x41;
  *a2 = v9;
  if ( Mode[0] == 0 )
    goto LABEL_10;
  if ( v9 == 0 )
    goto LABEL_7;
  v10 = alloca(sub_4115D8(20 * Mode[0] + 12, v8, v8));
  if ( !PeekConsoleInputA(hFile, (PINPUT_RECORD)v16, v11, &TotalBytesAvail) || TotalBytesAvail == 0 )
    goto LABEL_10;
  v12 = 0;
  while ( LOWORD(v16[5 * v12]) != 1 )
  {
    if ( TotalBytesAvail == ++v12 )
      goto LABEL_7;
  }
  return *a2;
}

