// busybox.exe @ 0x4365a0 size=141

int sub_4365A0()
{
  HANDLE ProcessHandle; // eax
  int v1; // ebx
  HANDLE hObject; // [esp+14h] [ebp-10h] BYREF
  int TokenInformation; // [esp+18h] [ebp-Ch] BYREF
  DWORD ReturnLength[2]; // [esp+1Ch] [ebp-8h] BYREF

  ProcessHandle = GetCurrentProcess();
  v1 = 4095;
  if ( OpenProcessToken(ProcessHandle, 8u, &hObject) )
  {
    ReturnLength[0] = 4;
    if ( GetTokenInformation(hObject, TokenElevation, &TokenInformation, 4u, ReturnLength) )
      v1 = TokenInformation == 0 ? 0xFFF : 0;
    CloseHandle(hObject);
  }
  return v1;
}

