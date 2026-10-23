// busybox.exe @ 0x44376c size=815

int __usercall sub_44376C@<eax>(
        struct _PROCESS_INFORMATION *a1@<eax>,
        CHAR *a2@<edx>,
        char *a3@<ecx>,
        int FileHandle,
        DWORD *a5)
{
  char v6; // dl
  int result; // eax
  int v8; // esi
  int v9; // ebp
  int v10; // eax
  CHAR *v11; // ebp
  HANDLE *v12; // ebp
  HANDLE *v13; // esi
  HANDLE v14; // eax
  HANDLE StdHandle; // eax
  int Flags; // [esp+28h] [ebp-7Ch]
  char v19; // [esp+34h] [ebp-70h] BYREF
  struct _STARTUPINFOA PipeAttributes; // [esp+50h] [ebp-54h] BYREF

  if ( a2 == nullptr || *a2 == 0 || a3 == nullptr )
    return -1;
  v6 = *a3;
  if ( *a3 == 119 )
  {
    Flags = 32769;
LABEL_11:
    v8 = 1;
    goto LABEL_12;
  }
  result = -1;
  if ( (unsigned __int8)*a3 > 0x77u )
    return result;
  if ( v6 == 98 )
  {
    Flags = 32770;
    goto LABEL_11;
  }
  if ( v6 != 114 )
    return result;
  Flags = 0x8000;
  v8 = 0;
LABEL_12:
  if ( a1 == nullptr )
    a1 = (struct _PROCESS_INFORMATION *)&v19;
  PipeAttributes.cb = 12;
  PipeAttributes.lpDesktop = (LPSTR)1;
  PipeAttributes.lpReserved = nullptr;
  if ( v6 == 98 )
  {
    v9 = ++dword_4731AC;
    v10 = getpid();
    v11 = (CHAR *)sub_4708BC("\\\\.\\pipe\\bb_pipe.%d.%d", v10, v9);
    a1[1].hThread = CreateNamedPipeA(
                      v11,
                      0x40000003u,
                      0,
                      1u,
                      0x1000u,
                      0x1000u,
                      0,
                      (LPSECURITY_ATTRIBUTES)&PipeAttributes);
    a1[1].hProcess = CreateFileA(v11, 0xC0000000, 0, (LPSECURITY_ATTRIBUTES)&PipeAttributes, 3u, 0x40000080u, nullptr);
    free(v11);
  }
  else if ( !CreatePipe(&a1[1].hProcess, &a1[1].hThread, (LPSECURITY_ATTRIBUTES)&PipeAttributes, 0x2000u) )
  {
LABEL_32:
    sub_41CB90((int)a1);
    return -1;
  }
  if ( a1[1].hProcess == (HANDLE)-1 || a1[1].hThread == (HANDLE)-1 )
    goto LABEL_32;
  v12 = &a1->hProcess + v8;
  SetHandleInformation(v12[4], 1u, 0);
  memset(&PipeAttributes.lpReserved, 0, 0x40u);
  PipeAttributes.cb = 68;
  v13 = &a1->hProcess + (v8 ^ 1);
  PipeAttributes.hStdInput = v13[4];
  PipeAttributes.hStdOutput = PipeAttributes.hStdInput;
  if ( *a3 == 114 )
  {
    v14 = FileHandle < 0 ? GetStdHandle(0xFFFFFFF6) : (HANDLE)_get_osfhandle(FileHandle);
    PipeAttributes.hStdInput = v14;
  }
  else if ( *a3 == 119 )
  {
    if ( FileHandle < 0 )
      StdHandle = GetStdHandle(0xFFFFFFF5);
    else
      StdHandle = (HANDLE)_get_osfhandle(FileHandle);
    PipeAttributes.hStdOutput = StdHandle;
  }
  PipeAttributes.hStdError = GetStdHandle(0xFFFFFFF4);
  PipeAttributes.wShowWindow = 0;
  PipeAttributes.dwFlags = 257;
  if ( !CreateProcessA(nullptr, a2, nullptr, nullptr, true, 0, nullptr, nullptr, &PipeAttributes, a1) )
    goto LABEL_32;
  CloseHandle(v13[4]);
  v13[4] = (HANDLE)-1;
  result = open_osfhandle((intptr_t)v12[4], Flags);
  if ( result == -1 )
    goto LABEL_32;
  a1[1].dwProcessId = result;
  if ( a5 != nullptr )
    *a5 = a1->dwProcessId;
  return result;
}

