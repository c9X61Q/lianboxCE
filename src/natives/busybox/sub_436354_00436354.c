// busybox.exe @ 0x436354 size=360

int *__cdecl sub_436354(int a1)
{
  char *v1; // eax
  HANDLE CurrentProcess; // eax
  FARPROC v4; // eax
  int v5; // [esp+18h] [ebp-110h] BYREF
  CHAR Buffer[4]; // [esp+1Ch] [ebp-10Ch] BYREF

  if ( a1 != 0 )
  {
    if ( a1 != 4095 )
      return nullptr;
    dword_4734D0 = (int)sub_4358EC();
    if ( dword_4734D0 == 0 )
      return nullptr;
    v5 = 260;
    v1 = (char *)dword_47318C;
    if ( dword_47318C == 0 )
    {
      dword_47318C = sub_4728CC();
      CurrentProcess = GetCurrentProcess();
      if ( OpenProcessToken(CurrentProcess, 8u, (PHANDLE)Buffer) )
      {
        v4 = sub_435244("userenv.dll", "GetUserProfileDirectoryA", dword_473550);
        if ( v4 != nullptr )
          ((void (__stdcall *)(_DWORD, int, int *))v4)(*(_DWORD *)Buffer, dword_47318C, &v5);
        CloseHandle(*(HANDLE *)Buffer);
        v1 = sub_418E48((_BYTE *)dword_47318C);
      }
      else
      {
        v1 = (char *)dword_47318C;
      }
    }
  }
  else
  {
    if ( Destination == nullptr )
    {
      Destination = (char *)sub_4728CC();
      GetSystemDirectoryA(Buffer, 0x104u);
      sub_459000(Buffer, Destination);
    }
    dword_4734D0 = (int)"root";
    v1 = Destination;
  }
  dword_4734DC = (int)v1;
  dword_4734D4 = (int)&unk_4774F6;
  dword_4734D8 = dword_4734D0;
  dword_4734E0 = 0;
  dword_4734E4 = a1;
  dword_4734E8 = a1;
  return &dword_4734D0;
}

