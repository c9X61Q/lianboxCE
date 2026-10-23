// busybox.exe @ 0x42997c size=370

int __cdecl sub_42997C(LPCCH lpMultiByteStr, char *Destination)
{
  int v2; // eax
  int (__stdcall *v3)(WCHAR *, _DWORD, int *, WCHAR *); // ebx
  int (__stdcall *v4)(HANDLE, int *, WCHAR *); // eax
  int v5; // ebx
  int v7; // [esp+30h] [ebp-424h] BYREF
  WCHAR v8[260]; // [esp+34h] [ebp-420h] BYREF
  WCHAR WideCharStr[268]; // [esp+23Ch] [ebp-218h] BYREF

  v7 = 260;
  v2 = sub_435244("kernel32.dll", "FindFirstFileNameW", (int)&unk_473518);
  if ( v2 == 0 )
    return 0;
  v3 = (int (__stdcall *)(WCHAR *, _DWORD, int *, WCHAR *))v2;
  v4 = (int (__stdcall *)(HANDLE, int *, WCHAR *))sub_435244("kernel32.dll", "FindNextFileNameW", (int)&unk_473520);
  if ( v4 == nullptr )
    return 0;
  if ( lpMultiByteStr == nullptr )
  {
    v5 = v4(hFindFile, &v7, v8);
    if ( v5 == 0 )
    {
      FindClose(hFindFile);
      hFindFile = (HANDLE)-1;
      return v5;
    }
LABEL_8:
    WideCharToMultiByte(0, 0, v8, -1, (LPSTR)WideCharStr, 260, nullptr, nullptr);
    sub_459000((char *)WideCharStr, Destination);
    return 1;
  }
  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 260);
  hFindFile = (HANDLE)v3(WideCharStr, 0, &v7, v8);
  if ( hFindFile != (HANDLE)-1 )
    goto LABEL_8;
  return 0;
}

