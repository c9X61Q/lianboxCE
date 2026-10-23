// busybox.exe @ 0x46f694 size=717

int __usercall sub_46F694@<eax>(void *hFile@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5)
{
  DWORD FileType; // eax
  HMODULE ModuleHandleA; // eax
  int v8; // ebx
  BOOL v9; // edx
  int v10; // edi
  int v11; // ecx
  void *v12; // esp
  DWORD v13; // edx
  DWORD *p_TotalBytesAvail; // edx
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // edx
  int v18; // edx
  DWORD TotalBytesAvail; // [esp+20h] [ebp-44h] BYREF
  DWORD NumberOfEvents; // [esp+24h] [ebp-40h] BYREF
  _BYTE v24[8]; // [esp+28h] [ebp-3Ch] BYREF
  DWORD Mode[13]; // [esp+30h] [ebp-34h] BYREF

  FileType = GetFileType(hFile);
  if ( FileType == 3 )
  {
    if ( dword_4734C4 == 0 )
    {
      ModuleHandleA = GetModuleHandleA("ntdll.dll");
      NtQueryInformationFile_0 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))GetProcAddress(
                                                                                              ModuleHandleA,
                                                                                              "NtQueryInformationFile");
      dword_4734C4 = 1;
    }
    v8 = PeekNamedPipe(hFile, nullptr, 0, nullptr, &TotalBytesAvail, nullptr);
    if ( v8 != 0 )
    {
      v8 = 0;
      if ( TotalBytesAvail == 0 )
        return v8;
    }
    else if ( GetLastError() != 109 )
    {
      memset(v24, 0, sizeof(v24));
      memset(Mode, 0, 0x28u);
      if ( NtQueryInformationFile_0 == nullptr
        || NtQueryInformationFile_0(hFile, v24, Mode, 40, 24) != 0
        || Mode[7] > 0x1FFF )
      {
        goto LABEL_41;
      }
      v9 = Mode[6] <= 0x1FFF && Mode[7] == Mode[6];
      goto LABEL_34;
    }
    v9 = false;
LABEL_32:
    v8 = ((int)*(unsigned __int8 *)(a3 + (a2 >> 3)) >> (a2 & 7)) & 1;
    if ( v8 != 0 )
      *(_BYTE *)(a3 + (a2 >> 3) + 8) |= 1 << (a2 & 7);
LABEL_34:
    if ( !v9 )
      return v8;
    goto LABEL_35;
  }
  if ( FileType <= 3 )
  {
    if ( FileType == 1 )
    {
LABEL_31:
      v9 = true;
      goto LABEL_32;
    }
    if ( FileType == 2 )
    {
      v10 = ((int)*(unsigned __int8 *)(a3 + (a2 >> 3)) >> (a2 & 7)) & 1;
      if ( v10 == 0 || WaitForSingleObject(hFile, 0) != 0 )
        goto LABEL_41;
      if ( !GetConsoleMode(hFile, Mode) )
        goto LABEL_31;
      TotalBytesAvail = 0;
      NumberOfEvents = 0;
      GetNumberOfConsoleInputEvents(hFile, &NumberOfEvents);
      if ( NumberOfEvents == 0 )
        goto LABEL_42;
      v12 = alloca(sub_4115D8(20 * NumberOfEvents + 12, v11, v11));
      if ( !PeekConsoleInputA(hFile, (PINPUT_RECORD)&TotalBytesAvail, v13, &TotalBytesAvail) || TotalBytesAvail == 0 )
        goto LABEL_42;
      p_TotalBytesAvail = &TotalBytesAvail;
      v8 = 0;
      while ( &TotalBytesAvail + 5 * TotalBytesAvail != p_TotalBytesAvail )
      {
        if ( *(_WORD *)p_TotalBytesAvail == 1 && p_TotalBytesAvail[1] != 0 )
          v8 = v10;
        p_TotalBytesAvail += 5;
      }
      if ( v8 != 0 )
        goto LABEL_31;
LABEL_35:
      v10 = 0;
LABEL_36:
      v15 = a2 >> 3;
      v16 = a2 & 7;
      v17 = *(unsigned __int8 *)(a4 + (a2 >> 3));
      if ( _bittest(&v17, v16) )
      {
        *(_BYTE *)(a4 + v15 + 8) |= 1 << v16;
        ++v8;
      }
      if ( v10 != 0 )
      {
        v18 = *(unsigned __int8 *)(a5 + v15);
        if ( _bittest(&v18, v16) )
        {
          *(_BYTE *)(a5 + v15 + 8) |= 1 << v16;
          ++v8;
        }
      }
      return v8;
    }
  }
  if ( WaitForSingleObject(hFile, 0) != 0 )
  {
LABEL_41:
    v10 = 0;
LABEL_42:
    v8 = 0;
    goto LABEL_36;
  }
  goto LABEL_31;
}

