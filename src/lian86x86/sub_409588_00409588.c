// lian86.exe @ 0x00409588  size=180  name=sub_409588
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall sub_409588(LPARAM lParam)
{
  int v1; // esi
  int v2; // ebx
  int v3; // esi
  int v4; // ebx

  if ( lParam != 0 )
  {
    EnumWindows(sub_409507, lParam);
    v1 = dword_418144;
    if ( dword_418144 != 0 )
    {
      do
      {
        v2 = *(_DWORD *)v1;
        if ( *(_DWORD *)(v1 + 8) == GetCurrentThreadId() && *(_BYTE *)(v1 + 16) != 0 )
          SetWindowPos(*(HWND *)(v1 + 12), (HWND)0xFFFFFFFE, 0, 0, 0, 0, 3u);
        v1 = v2;
      }
      while ( v2 != 0 );
    }
  }
  else
  {
    v3 = dword_418144;
    if ( dword_418144 != 0 )
    {
      do
      {
        v4 = *(_DWORD *)v3;
        if ( *(_DWORD *)(v3 + 8) == GetCurrentThreadId() )
        {
          if ( *(_BYTE *)(v3 + 17) != 0 )
            EnableWindow(*(HWND *)(v3 + 12), true);
          if ( *(_BYTE *)(v3 + 16) != 0 )
            SetWindowPos(*(HWND *)(v3 + 12), HWND_MESSAGE|0x2, 0, 0, 0, 0, 3u);
          sub_40E1B2(&dword_418144, v3 + 8);
        }
        v3 = v4;
      }
      while ( v4 != 0 );
    }
  }
}

