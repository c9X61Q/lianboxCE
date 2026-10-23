// busybox.exe @ 0x444e20 size=131

DWORD __cdecl sub_444E20(char *a1)
{
  int v1; // ebx
  void *hHandle; // eax
  DWORD ExitCode; // [esp+8h] [ebp-18h] BYREF
  char *v5[5]; // [esp+Ch] [ebp-14h] BYREF

  v5[0] = "sh";
  v5[1] = "-c";
  v5[2] = a1;
  v5[3] = nullptr;
  ExitCode = 0;
  v1 = 1;
  if ( a1 != nullptr )
  {
    hHandle = (void *)sub_444C0C(v5);
    v1 = (int)hHandle;
    if ( hHandle != (void *)-1 )
    {
      WaitForSingleObject(hHandle, 0xFFFFFFFF);
      GetExitCodeProcess((HANDLE)v1, &ExitCode);
      CloseHandle((HANDLE)v1);
      return ExitCode << 8;
    }
  }
  return v1;
}

