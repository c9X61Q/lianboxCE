// busybox.exe @ 0x43ce2c size=102

int __cdecl sub_43CE2C(DWORD dwProcessId, int a2)
{
  HANDLE v2; // eax
  int v3; // esi
  void *v4; // ebx

  v2 = OpenProcess(1u, false, dwProcessId);
  v3 = -1;
  if ( v2 != nullptr )
  {
    v4 = v2;
    v3 = 0;
    if ( a2 == 9 )
      v3 = !TerminateProcess(v2, 0x89u);
    CloseHandle(v4);
  }
  return v3;
}

