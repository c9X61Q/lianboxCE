// lian86.exe @ 0x00409507  size=129  name=sub_409507
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL __stdcall sub_409507(HWND hWnd, LPARAM a2)
{
  DWORD WindowThreadProcessId; // esi
  int v3; // esi

  WindowThreadProcessId = GetWindowThreadProcessId(hWnd, nullptr);
  if ( WindowThreadProcessId == GetCurrentThreadId() && IsWindowVisible(hWnd) )
  {
    v3 = sub_40E1F2((int)&dword_418144, 0x14u);
    *(_DWORD *)(v3 + 4) = hWnd;
    *(_DWORD *)v3 = GetCurrentThreadId();
    *(_WORD *)(v3 + 8) = 0;
    if ( (GetWindowLongW(hWnd, -20) & 8) != 0 )
      *(_BYTE *)(v3 + 8) = 1;
    if ( hWnd != GetForegroundWindow() && IsWindowEnabled(hWnd) )
    {
      *(_BYTE *)(v3 + 9) = 1;
      EnableWindow(hWnd, false);
    }
  }
  return true;
}

