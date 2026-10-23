// busybox.exe @ 0x456b74 size=75

HANDLE __userpurge sub_456B74@<eax>(_BYTE *a1@<eax>, int a2@<edx>, DWORD a3@<ecx>, char *a4)
{
  HANDLE CurrentProcess; // eax
  DWORD ProcessId; // eax
  void *v8; // edx
  char *v9; // edx
  HANDLE Process; // [esp+0h] [ebp-10h]

  *a1 = 0;
  CurrentProcess = GetCurrentProcess();
  ProcessId = GetProcessId(CurrentProcess);
  Process = v8;
  v9 = byte_485A40;
  if ( ProcessId != a3 )
  {
    v9 = (char *)sub_433218(a3, nullptr, (int)byte_485A40);
    if ( v9 == nullptr )
      v9 = a4;
  }
  sub_45C5AC(a2, v9);
  return Process;
}

