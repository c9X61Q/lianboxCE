// busybox.exe @ 0x426ac8 size=1548

int __usercall sub_426AC8@<eax>(int a1@<eax>, const CHAR *a2@<edx>, int a3@<ecx>)
{
  HANDLE FirstFileA; // eax
  struct _WIN32_FIND_DATAA *v7; // edx
  void *v8; // eax
  const char *v9; // esi
  size_t v10; // eax
  int v11; // edx
  __int16 v12; // ax
  bool v13; // zf
  unsigned int v14; // esi
  int v15; // edx
  int v16; // eax
  __int16 v17; // ax
  DWORD nFileIndexHigh; // eax
  DWORD nNumberOfLinks; // edx
  HANDLE CurrentThread; // eax
  HANDLE CurrentProcess; // eax
  void *v22; // eax
  int v23; // esi
  _DWORD *v24; // edi
  DWORD CompressedFileSizeA; // esi
  unsigned __int64 v26; // rax
  LPCSTR lpFileName; // [esp+0h] [ebp-5B4h]
  LPCSTR lpFileNameb; // [esp+0h] [ebp-5B4h]
  LPCSTR lpFileNamea; // [esp+0h] [ebp-5B4h]
  LPCSTR lpFileNamec; // [esp+0h] [ebp-5B4h]
  LPWIN32_FIND_DATAA lpFindFileData; // [esp+4h] [ebp-5B0h]
  LPWIN32_FIND_DATAA lpFindFileDatab; // [esp+4h] [ebp-5B0h]
  LPWIN32_FIND_DATAA lpFindFileDataa; // [esp+4h] [ebp-5B0h]
  LPWIN32_FIND_DATAA lpFindFileDatac; // [esp+4h] [ebp-5B0h]
  int v36; // [esp+20h] [ebp-594h]
  HANDLE hFile; // [esp+24h] [ebp-590h]
  DWORD TokenInformationLength; // [esp+28h] [ebp-58Ch]
  HANDLE TokenHandle; // [esp+2Ch] [ebp-588h] BYREF
  DWORD ReturnLength; // [esp+30h] [ebp-584h] BYREF
  DWORD Buf2[3]; // [esp+34h] [ebp-580h] BYREF
  _DWORD v42[9]; // [esp+40h] [ebp-574h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+64h] [ebp-550h] BYREF
  struct _BY_HANDLE_FILE_INFORMATION FileInformation; // [esp+1A4h] [ebp-410h] BYREF
  unsigned __int8 v45; // [esp+1E0h] [ebp-3D4h]
  unsigned __int8 v46; // [esp+1E1h] [ebp-3D3h]
  unsigned __int8 v47; // [esp+1E2h] [ebp-3D2h]
  unsigned __int8 v48; // [esp+1E3h] [ebp-3D1h]
  _BYTE v49[948]; // [esp+200h] [ebp-3B4h]

  v36 = 22;
  while ( 1 )
  {
    if ( a2 == nullptr || (v36 = sub_433748(a3, v42)) != 0 )
    {
      *_errno() = v36;
      return -1;
    }
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)(a3 + 12) = 0;
    *(_DWORD *)(a3 + 24) = 4095;
    *(_DWORD *)(a3 + 28) = 4095;
    *(_DWORD *)(a3 + 32) = 0;
    *(_DWORD *)a3 = 0;
    if ( (v42[0] & 0x400) == 0
      || (FirstFileA = FindFirstFileA(a2, &FindFileData),
          lpFindFileData = v7,
          lpFileName = (LPCSTR)v7,
          FirstFileA == (HANDLE)-1)
      || (lpFileName = (LPCSTR)FindClose(FirstFileA), (FindFileData.dwFileAttributes & 0x400) == 0)
      || FindFileData.dwReserved0 != -1610612724 )
    {
      v11 = v42[0];
      v12 = 16893;
      if ( (v42[0] & 0x10) == 0 )
        v12 = -32476;
      if ( (v42[0] & 1) == 0 )
        LOBYTE(v12) = v12 | 0x90;
      *(_WORD *)(a3 + 16) = v12;
      *(_DWORD *)(a3 + 88) = v11;
      if ( (v12 & 0xF000) != 0x8000 )
        goto LABEL_33;
      if ( sub_437D34(a2) == 0 )
      {
        if ( sub_43C63C() != 0 || sub_447A88(1024) <= 3 )
          goto LABEL_33;
        if ( LOBYTE(FileInformation.dwFileAttributes) == 35 )
        {
          v13 = BYTE1(FileInformation.dwFileAttributes) == 33;
        }
        else
        {
          if ( LOWORD(FileInformation.dwFileAttributes) != 23117 )
            goto LABEL_33;
          if ( LOBYTE(FileInformation.ftLastWriteTime.dwHighDateTime)
             + (BYTE1(FileInformation.ftLastWriteTime.dwHighDateTime) << 8) <= 0x3Fu )
            goto LABEL_33;
          v14 = v45 + (v48 << 24) + (v47 << 16) + (v46 << 8);
          if ( v14 > 0x39B
            || memcmp((char *)&FileInformation + v14, "PE", 4u) != 0
            || (((*((unsigned __int8 *)&FileInformation.ftLastWriteTime.dwHighDateTime + v14 + 1) << 8)
               + *((unsigned __int8 *)&FileInformation.ftLastWriteTime.dwHighDateTime + v14)
               - 267)
              & 0xFFFFFEFF) != 0
            || (*((_BYTE *)&FileInformation.ftLastWriteTime.dwLowDateTime + v14 + 3) & 0x20) != 0 )
          {
            goto LABEL_33;
          }
          v15 = (unsigned __int8)v49[v14];
          if ( (unsigned int)(v15 - 1) <= 2 )
            goto LABEL_32;
          v13 = (_BYTE)v15 == 7;
        }
        if ( !v13 )
        {
LABEL_33:
          v16 = v42[7];
          *(_DWORD *)(a3 + 40) = v42[8];
          *(_DWORD *)(a3 + 44) = v16;
          *(_QWORD *)(a3 + 48) = sub_42F84C(lpFileName, lpFindFileData);
          *(_QWORD *)(a3 + 56) = sub_42F84C(lpFileNamec, lpFindFileDatac);
          goto LABEL_34;
        }
      }
LABEL_32:
      *(_WORD *)(a3 + 16) |= 0x49u;
      goto LABEL_33;
    }
    v8 = (void *)sub_471350(lpFileName, lpFindFileData);
    v9 = (const char *)sub_415D34(v8);
    if ( a1 == 0 )
      break;
    v36 = *_errno();
    a2 = v9;
  }
  *(_WORD *)(a3 + 16) = -24065;
  *(_DWORD *)(a3 + 88) = v42[0];
  v10 = 0;
  if ( v9 != nullptr )
    v10 = strlen(v9);
  *(_DWORD *)(a3 + 40) = v10;
  *(_DWORD *)(a3 + 44) = 0;
  *(_QWORD *)(a3 + 48) = sub_42F84C(lpFileName, lpFindFileData);
  *(_QWORD *)(a3 + 56) = sub_42F84C(lpFileNameb, lpFindFileDatab);
LABEL_34:
  *(_QWORD *)(a3 + 64) = sub_42F84C(lpFileNamea, lpFindFileDataa);
  v17 = *(_DWORD *)(a3 + 16) & 0xF000;
  *(_DWORD *)(a3 + 20) = (v17 == 0x4000) + 1;
  hFile = CreateFileA(a2, 0x20000u, 0, nullptr, 3u, v17 == -24576 ? 35651584 : 0x2000000, nullptr);
  if ( hFile == (HANDLE)-1 )
  {
    *(_DWORD *)(a3 + 24) = 0;
    *(_DWORD *)(a3 + 28) = 0;
    *(_WORD *)(a3 + 16) &= 0xFFF8u;
  }
  else
  {
    if ( GetFileInformationByHandle(hFile, &FileInformation) )
    {
      *(_DWORD *)a3 = FileInformation.dwVolumeSerialNumber;
      nFileIndexHigh = FileInformation.nFileIndexHigh;
      *(_DWORD *)(a3 + 8) = FileInformation.nFileIndexLow;
      *(_DWORD *)(a3 + 12) = nFileIndexHigh;
      nNumberOfLinks = 2;
      if ( (*(_DWORD *)(a3 + 16) & 0xF000) != 0x4000 )
        nNumberOfLinks = FileInformation.nNumberOfLinks;
      *(_DWORD *)(a3 + 20) = nNumberOfLinks;
    }
    qmemcpy(Buf2, unk_477566, sizeof(Buf2));
    if ( dword_47338C == 0 )
    {
      ReturnLength = 0;
      dword_47338C = 1;
      CurrentThread = GetCurrentThread();
      if ( OpenThreadToken(CurrentThread, 8u, true, &TokenHandle)
        || (CurrentProcess = GetCurrentProcess(), OpenProcessToken(CurrentProcess, 8u, &TokenHandle)) )
      {
        GetTokenInformation(TokenHandle, TokenUser, nullptr, 0, &ReturnLength);
        if ( ReturnLength == 0
          || (TokenInformationLength = ReturnLength,
              v22 = malloc(ReturnLength),
              (dword_4735BC = v22, v22 == nullptr)
           || !GetTokenInformation(TokenHandle, TokenUser, v22, TokenInformationLength, &ReturnLength)) )
        {
          free(dword_4735BC);
          dword_4735BC = nullptr;
        }
        CloseHandle(TokenHandle);
      }
    }
    v23 = 4095;
    if ( dword_4735BC != nullptr )
    {
      v23 = 0;
      if ( GetSecurityInfo(
             hFile,
             SE_FILE_OBJECT,
             1u,
             &TokenHandle,
             nullptr,
             nullptr,
             nullptr,
             (PSECURITY_DESCRIPTOR *)&ReturnLength) == 0 )
      {
        v23 = EqualSid(TokenHandle, *(PSID *)dword_4735BC);
        if ( v23 != 0 )
        {
          v23 = 4095;
        }
        else
        {
          v24 = TokenHandle;
          if ( memcmp(TokenHandle, Buf2, 0xCu) == 0 && (unsigned int)(v24[6] - 500) <= 0xE0A )
            v23 = v24[6];
        }
        LocalFree((HLOCAL)ReturnLength);
      }
    }
    *(_DWORD *)(a3 + 28) = v23;
    *(_DWORD *)(a3 + 24) = v23;
    CloseHandle(hFile);
  }
  CompressedFileSizeA = GetCompressedFileSizeA(a2, Buf2);
  if ( CompressedFileSizeA == -1 && GetLastError() != 0 || (*(_DWORD *)(a3 + 16) & 0xF000) == 0x4000 )
    v26 = *(_QWORD *)(a3 + 40);
  else
    v26 = __PAIR64__(Buf2[0], CompressedFileSizeA);
  *(_DWORD *)(a3 + 72) = 4096;
  *(_QWORD *)(a3 + 80) = 8 * ((__int64)(v26 + 4095) >> 12);
  return v36;
}

