// lian86.exe @ 0x00409a1f  size=1325  name=launch_payload
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall launch_payload(wchar_t *String, wchar_t *Source, wchar_t *lpCurrentDirectory, int a4, int a5)
{
  DWORD v5; // ebp
  int v6; // edi
  void *v7; // eax
  const wchar_t *v8; // ebx
  size_t v9; // esi
  size_t v10; // eax
  wchar_t *v11; // eax
  bool v12; // zf
  wchar_t *v13; // esi
  const WCHAR *v14; // ecx
  const wchar_t *v15; // esi
  HANDLE hProcess; // eax
  HANDLE hReadPipe; // [esp+10h] [ebp-C0h] BYREF
  HANDLE hObject; // [esp+14h] [ebp-BCh] BYREF
  HANDLE v20; // [esp+18h] [ebp-B8h] BYREF
  HANDLE v21; // [esp+1Ch] [ebp-B4h] BYREF
  HANDLE hWritePipe; // [esp+20h] [ebp-B0h] BYREF
  BOOL bInheritHandles; // [esp+24h] [ebp-ACh]
  HANDLE v24; // [esp+28h] [ebp-A8h] BYREF
  wchar_t *Destination; // [esp+2Ch] [ebp-A4h]
  int v26; // [esp+30h] [ebp-A0h]
  struct _SECURITY_ATTRIBUTES PipeAttributes; // [esp+34h] [ebp-9Ch] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+40h] [ebp-90h] BYREF
  struct _STARTUPINFOW StartupInfo; // [esp+50h] [ebp-80h] BYREF
  SHELLEXECUTEINFOW pExecInfo; // [esp+94h] [ebp-3Ch] BYREF

  PipeAttributes.nLength = 12;
  v5 = 32;
  hReadPipe = nullptr;
  v6 = 0;
  hWritePipe = nullptr;
  v24 = nullptr;
  hObject = nullptr;
  v21 = nullptr;
  v20 = nullptr;
  bInheritHandles = false;
  PipeAttributes.lpSecurityDescriptor = nullptr;
  PipeAttributes.bInheritHandle = true;
  memset(&StartupInfo, 0, sizeof(StartupInfo));
  StartupInfo.dwFlags = 1;
  StartupInfo.cb = 68;
  if ( (a4 & 2) != 0 )
  {
    StartupInfo.wShowWindow = 0;
    v5 = 48;
  }
  else
  {
    StartupInfo.wShowWindow = 1;
  }
  if ( (a4 & 0x40) != 0 && a5 != 0 )
  {
    v7 = *(void **)(a5 + 12);
    if ( v7 != nullptr )
    {
      StartupInfo.dwFlags = 257;
      StartupInfo.hStdInput = v7;
      bInheritHandles = true;
LABEL_12:
      v5 &= ~0x10u;
      goto LABEL_13;
    }
  }
  if ( (a4 & 4) != 0 && (a4 & 0x10) != 0 && CreatePipe(&hReadPipe, &hWritePipe, &PipeAttributes, 0) )
  {
    StartupInfo.dwFlags |= 0x100u;
    StartupInfo.hStdInput = hReadPipe;
    sub_4099C7(&hWritePipe);
    bInheritHandles = true;
    goto LABEL_12;
  }
LABEL_13:
  v26 = a4 & 4;
  if ( (a4 & 4) != 0 )
  {
    if ( (a4 & 8) != 0 && CreatePipe(&v24, &hObject, &PipeAttributes, 0) )
    {
      StartupInfo.dwFlags |= 0x100u;
      StartupInfo.hStdOutput = hObject;
      sub_4099C7(&v24);
      v5 &= ~0x10u;
      bInheritHandles = true;
    }
    if ( (a4 & 0x20) != 0 && CreatePipe(&v21, &v20, &PipeAttributes, 0) )
    {
      StartupInfo.dwFlags |= 0x100u;
      StartupInfo.hStdError = v20;
      sub_4099C7(&v21);
      v5 &= ~0x10u;
      bInheritHandles = true;
    }
  }
  if ( (StartupInfo.dwFlags & 0x100) != 0 )
  {
    if ( StartupInfo.hStdInput == nullptr )
      StartupInfo.hStdInput = GetStdHandle(0xFFFFFFF6);
    if ( StartupInfo.hStdOutput == nullptr )
      StartupInfo.hStdOutput = GetStdHandle(0xFFFFFFF5);
    if ( StartupInfo.hStdError == nullptr )
      StartupInfo.hStdError = GetStdHandle(0xFFFFFFF4);
  }
  v8 = String;
  if ( String == nullptr )
    v8 = (const wchar_t *)&unk_413024;
  if ( Source == nullptr )
    Source = (wchar_t *)&unk_413024;
  v9 = wcslen(v8);
  v10 = wcslen(Source);
  v11 = (wchar_t *)HeapAlloc(hHeap, 0, 2 * (v10 + v9) + 8);
  v12 = *v8 == 34;
  v13 = v11;
  Destination = v11;
  if ( v12 )
  {
    wcscpy(v11, v8);
  }
  else
  {
    wcscpy(v11, L"\"");
    wcscat(v13, v8);
    wcscat(v13, L"\"");
  }
  if ( *Source != 0 )
  {
    wcscat(v13, asc_413028);
    wcscat(v13, Source);
  }
  v14 = lpCurrentDirectory;
  if ( lpCurrentDirectory != nullptr )
  {
    v14 = *lpCurrentDirectory != 0 ? lpCurrentDirectory : nullptr;
    lpCurrentDirectory = (wchar_t *)v14;
  }
  if ( CreateProcessW(
         nullptr,
         v13,
         nullptr,
         nullptr,
         bInheritHandles,
         v5,
         nullptr,
         v14,
         &StartupInfo,
         &ProcessInformation) )
  {
    if ( hObject != nullptr )
      CloseHandle(hObject);
    if ( hReadPipe != nullptr )
      CloseHandle(hReadPipe);
    if ( v20 != nullptr )
      CloseHandle(v20);
    CloseHandle(ProcessInformation.hThread);
    if ( (a4 & 1) != 0 )
      WaitForSingleObject(ProcessInformation.hProcess, 0xFFFFFFFF);
    if ( v26 != 0 )
    {
      EnterCriticalSection(&stru_418730);
      v6 = sub_40E1F2((int)&dword_418148, 0x20u);
      LeaveCriticalSection(&stru_418730);
      *(_DWORD *)v6 = ProcessInformation.hProcess;
      *(_DWORD *)(v6 + 4) = ProcessInformation.dwProcessId;
      *(_DWORD *)(v6 + 12) = v24;
      *(_DWORD *)(v6 + 8) = hWritePipe;
      *(_DWORD *)(v6 + 16) = v21;
      *(_DWORD *)(v6 + 20) = a4;
      goto LABEL_76;
    }
    CloseHandle(ProcessInformation.hProcess);
LABEL_75:
    v6 = 1;
    goto LABEL_76;
  }
  if ( hObject != nullptr )
    CloseHandle(hObject);
  if ( v24 != nullptr )
    CloseHandle(v24);
  if ( hWritePipe != nullptr )
    CloseHandle(hWritePipe);
  if ( hReadPipe != nullptr )
    CloseHandle(hReadPipe);
  if ( v20 != nullptr )
    CloseHandle(v20);
  if ( v21 != nullptr )
    CloseHandle(v21);
  if ( (a4 & 0x78) == 0 )
  {
    if ( lpCurrentDirectory == nullptr )
    {
      v15 = &v8[wcslen(v8) - 1];
      if ( v15 > v8 )
      {
        do
        {
          if ( *v15 == 92 )
            break;
          --v15;
        }
        while ( v15 > v8 );
        if ( v15 > v8 )
        {
          wcscpy(Destination, v8);
          lpCurrentDirectory = Destination;
          Destination[v15 - v8 + 1] = 0;
        }
      }
    }
    memset(&pExecInfo, 0, sizeof(pExecInfo));
    pExecInfo.nShow = StartupInfo.wShowWindow;
    pExecInfo.lpVerb = nullptr;
    pExecInfo.lpDirectory = lpCurrentDirectory;
    pExecInfo.lpParameters = Source;
    pExecInfo.cbSize = 60;
    pExecInfo.fMask = 1344;
    pExecInfo.lpFile = v8;
    if ( ShellExecuteExW(&pExecInfo) )
    {
      if ( (a4 & 1) != 0 )
        WaitForSingleObject(pExecInfo.hProcess, 0xFFFFFFFF);
      if ( v26 != 0 )
      {
        EnterCriticalSection(&stru_418730);
        v6 = sub_40E1F2((int)&dword_418148, 0x20u);
        LeaveCriticalSection(&stru_418730);
        hProcess = pExecInfo.hProcess;
        *(_DWORD *)(v6 + 4) = -1;
        *(_DWORD *)v6 = hProcess;
        *(_DWORD *)(v6 + 12) = 0;
        *(_DWORD *)(v6 + 8) = 0;
        *(_DWORD *)(v6 + 16) = 0;
        *(_DWORD *)(v6 + 20) = a4;
        goto LABEL_76;
      }
      CloseHandle(pExecInfo.hProcess);
      goto LABEL_75;
    }
  }
LABEL_76:
  HeapFree(hHeap, 0, Destination);
  return v6;
}

