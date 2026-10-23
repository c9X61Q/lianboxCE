// busybox.exe @ 0x444ef4 size=466

int __cdecl sub_444EF4(int dwProcessId, _DWORD *a2, int a3, int *a4)
{
  HANDLE v4; // eax
  void *v5; // ebx
  int v6; // edi
  unsigned int v7; // edx
  unsigned int v8; // ebp
  unsigned __int64 v9; // rax
  int v10; // ebx
  unsigned __int64 v12; // [esp+14h] [ebp-3Ch]
  DWORD ExitCode; // [esp+1Ch] [ebp-34h] BYREF
  struct _FILETIME CreationTime; // [esp+20h] [ebp-30h] BYREF
  struct _FILETIME ExitTime; // [esp+28h] [ebp-28h] BYREF
  struct _FILETIME KernelTime; // [esp+30h] [ebp-20h] BYREF
  struct _FILETIME UserTime; // [esp+38h] [ebp-18h] BYREF

  if ( dwProcessId <= 0 )
  {
    v10 = 40;
    if ( dwProcessId != 0 )
    {
LABEL_10:
      *_errno() = v10;
      return -1;
    }
LABEL_9:
    v10 = 22;
    goto LABEL_10;
  }
  if ( a3 != 0 )
    goto LABEL_9;
  v4 = OpenProcess(0x100400u, false, dwProcessId);
  v5 = v4;
  if ( v4 == nullptr )
    goto LABEL_9;
  WaitForSingleObject(v4, 0xFFFFFFFF);
  GetExitCodeProcess(v5, &ExitCode);
  if ( a4 != nullptr )
  {
    memset(a4, 0, 0x10u);
    if ( GetProcessTimes(v5, &CreationTime, &ExitTime, &KernelTime, &UserTime) )
    {
      v6 = sub_4026E0(*(_QWORD *)&KernelTime, 0xAu, 0);
      v8 = v7;
      LODWORD(v9) = sub_4026E0(*(_QWORD *)&UserTime, 0xAu, 0);
      v12 = v9;
      *a4 = sub_4026E0(v9, 0xF4240u, 0);
      a4[1] = sub_4027F0(v12, 1000000);
      a4[2] = sub_4026E0(__PAIR64__(v8, v6), 0xF4240u, 0);
      a4[3] = sub_4027F0(__PAIR64__(v8, v6), 1000000);
    }
  }
  CloseHandle(v5);
  *a2 = ExitCode << 8;
  return dwProcessId;
}

