// busybox.exe @ 0x43deb8 size=98

int __cdecl sub_43DEB8(int a1, int a2)
{
  FARPROC v2; // eax
  int v3; // edx
  int v4; // eax
  int *v5; // ebx

  v2 = sub_435244("kernel32.dll", "CreateHardLinkA", dword_473500);
  v3 = -1;
  if ( v2 != nullptr )
  {
    v4 = ((int (__stdcall *)(int, int, _DWORD))v2)(a2, a1, 0);
    v3 = 0;
    if ( v4 == 0 )
    {
      v5 = _errno();
      *v5 = sub_429CD0();
      return -1;
    }
  }
  return v3;
}

