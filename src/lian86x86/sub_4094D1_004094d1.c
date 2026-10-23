// lian86.exe @ 0x004094d1  size=54  name=sub_4094D1
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

HWND sub_4094D1()
{
  HWND ForegroundWindow; // esi
  DWORD dwProcessId; // [esp+4h] [ebp-4h] BYREF

  ForegroundWindow = GetForegroundWindow();
  if ( ForegroundWindow != nullptr )
  {
    GetWindowThreadProcessId(ForegroundWindow, &dwProcessId);
    return GetCurrentProcessId() == dwProcessId ? ForegroundWindow : nullptr;
  }
  return ForegroundWindow;
}

