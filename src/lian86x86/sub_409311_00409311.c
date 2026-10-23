// lian86.exe @ 0x00409311  size=68  name=sub_409311
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_409311(HWND hWnd, int a2, int a3, LPARAM lParam)
{
  if ( a2 == 1 && lParam != 0 )
  {
    SendMessageW(hWnd, 0x467u, 1u, lParam);
    Sleep(0xC8u);
    PostMessageW(hWnd, 0x467u, 1u, lParam);
  }
  return 0;
}

