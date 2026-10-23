// lian86.exe @ 0x00408eb4  size=181  name=sub_408EB4
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

LRESULT __stdcall sub_408EB4(HWND hWnd, UINT a2, WPARAM a3, LPARAM a4)
{
  WCHAR **WindowLongW; // edi
  int v6; // esi
  WCHAR *v7; // eax
  HWND v8; // [esp-14h] [ebp-14h]

  if ( a2 == 2 )
  {
    UnregisterClassW(lpClassName, hInstance);
    dword_418128 = 1;
    return 0;
  }
  if ( a2 == 16 )
    goto LABEL_7;
  if ( a2 != 273 )
    return DefWindowProcW(hWnd, a2, a3, a4);
  if ( (unsigned __int16)a3 == 1000 )
  {
    WindowLongW = (WCHAR **)GetWindowLongW(hWnd, -21);
    v6 = GetWindowTextLengthW(::hWnd) + 1;
    v7 = (WCHAR *)HeapAlloc(hHeap, 0, 2 * v6);
    v8 = ::hWnd;
    *WindowLongW = v7;
    GetWindowTextW(v8, v7, v6);
    sub_4092F2();
    DestroyWindow(hWnd);
    return 0;
  }
  if ( (unsigned __int16)a3 == 1001 )
  {
LABEL_7:
    sub_4092F2();
    DestroyWindow(hWnd);
  }
  return 0;
}

