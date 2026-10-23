// busybox.exe @ 0x450908 size=720

HANDLE *__usercall sub_450908@<eax>(HANDLE *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  HANDLE *v3; // ebx
  HANDLE Toolhelp32Snapshot; // eax
  BOOL v5; // eax
  HANDLE v6; // ebp
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rax
  HANDLE v13; // eax
  DWORD th32ProcessID; // esi
  HANDLE CurrentProcess; // eax
  DWORD ProcessId; // eax
  char *szExeFile; // edx
  unsigned __int64 v20; // [esp+18h] [ebp-16Ch]
  int v21; // [esp+20h] [ebp-164h]
  struct _FILETIME CreationTime; // [esp+24h] [ebp-160h] BYREF
  struct _FILETIME ExitTime; // [esp+2Ch] [ebp-158h] BYREF
  struct _FILETIME KernelTime; // [esp+34h] [ebp-150h] BYREF
  struct _FILETIME UserTime; // [esp+3Ch] [ebp-148h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [esp+44h] [ebp-140h] BYREF
  PROCESSENTRY32 pe; // [esp+4Ch] [ebp-138h] BYREF

  pe.dwSize = 296;
  if ( a1 != nullptr )
  {
    v3 = a1;
    v5 = Process32Next(*a1, &pe);
  }
  else
  {
    v3 = (HANDLE *)sub_4728CC(a3);
    Toolhelp32Snapshot = CreateToolhelp32Snapshot(2u, 0);
    *v3 = Toolhelp32Snapshot;
    if ( Toolhelp32Snapshot == (HANDLE)-1 )
    {
LABEL_7:
      free(v3);
      return nullptr;
    }
    v5 = Process32First(Toolhelp32Snapshot, &pe);
  }
  if ( !v5 )
  {
    CloseHandle(*v3);
    goto LABEL_7;
  }
  memset(v3 + 4, 0, 0x48u);
  if ( (a2 & 0x43000) != 0 )
  {
    v6 = OpenProcess(0x1000u, false, pe.th32ProcessID);
    if ( v6 != nullptr )
    {
      if ( GetProcessTimes(v6, &CreationTime, &ExitTime, &KernelTime, &UserTime) )
      {
        LODWORD(v20) = sub_411CF0();
        HIDWORD(v20) = v7;
        GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
        HIDWORD(v8) = CreationTime.dwHighDateTime;
        LODWORD(v8) = 0;
        v21 = sub_4023F0(CreationTime.dwLowDateTime + v8, 100000);
        HIDWORD(v9) = SystemTimeAsFileTime.dwHighDateTime;
        LODWORD(v9) = 0;
        v10 = sub_4023F0(SystemTimeAsFileTime.dwLowDateTime + v9, 100000);
        v3[8] = (HANDLE)(v21 - (v10 - sub_4026E0(v20, 0xAu, 0)));
        HIDWORD(v11) = KernelTime.dwHighDateTime;
        LODWORD(v11) = 0;
        v3[6] = (HANDLE)sub_4023F0(KernelTime.dwLowDateTime + v11, 100000);
        HIDWORD(v12) = UserTime.dwHighDateTime;
        LODWORD(v12) = 0;
        v3[7] = (HANDLE)sub_4023F0(UserTime.dwLowDateTime + v12, 100000);
      }
      CloseHandle(v6);
    }
  }
  if ( (a2 & 0x10) != 0 )
  {
    v13 = OpenProcess(0x1F0FFFu, false, pe.th32ProcessID);
    if ( v13 != nullptr )
    {
      v3[13] = (HANDLE)4095;
      v3[14] = (HANDLE)4095;
      CloseHandle(v13);
    }
  }
  th32ProcessID = pe.th32ProcessID;
  v3[9] = (HANDLE)pe.th32ProcessID;
  v3[10] = (HANDLE)pe.th32ParentProcessID;
  CurrentProcess = GetCurrentProcess();
  ProcessId = GetProcessId(CurrentProcess);
  szExeFile = dword_485AD0;
  if ( th32ProcessID != ProcessId )
  {
    szExeFile = (char *)sub_433218((DWORD)v3[9], pe.szExeFile, (int)&unk_485AC0);
    if ( szExeFile == nullptr )
      szExeFile = pe.szExeFile;
  }
  sub_45C5AC(16, szExeFile);
  return v3;
}

