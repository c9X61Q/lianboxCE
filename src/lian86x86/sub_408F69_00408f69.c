// lian86.exe @ 0x00408f69  size=905  name=sub_408F69
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL __stdcall sub_408F69(wchar_t *lpWindowName, wchar_t *String, wchar_t *a3, char a4, int a5)
{
  int v5; // ebp
  wchar_t *v6; // ebx
  wchar_t *v7; // edi
  int SystemMetrics; // eax
  HWND Window; // ebx
  WPARAM v10; // eax
  HACCEL v11; // esi
  size_t v12; // eax
  wchar_t *v13; // eax
  int v15; // [esp-1Ch] [ebp-8Ch]
  HWND v16; // [esp-10h] [ebp-80h]
  HINSTANCE v17; // [esp-8h] [ebp-78h]
  LPARAM v18; // [esp-4h] [ebp-74h]
  LONG dwNewLong; // [esp+10h] [ebp-60h] BYREF
  LPVOID lpMem; // [esp+14h] [ebp-5Ch]
  struct tagACCEL paccel; // [esp+18h] [ebp-58h] BYREF
  char v22; // [esp+1Eh] [ebp-52h]
  __int16 v23; // [esp+20h] [ebp-50h]
  __int16 v24; // [esp+22h] [ebp-4Eh]
  struct tagMSG Msg; // [esp+24h] [ebp-4Ch] BYREF
  WNDCLASSEXW v26; // [esp+40h] [ebp-30h] BYREF
  wchar_t *lpWindowNamea; // [esp+74h] [ebp+4h]

  dwNewLong = 0;
  v5 = 0;
  v6 = sub_408E58(lpWindowName);
  lpMem = v6;
  lpWindowNamea = sub_408E58(String);
  v7 = sub_408E58(a3);
  if ( wParam == 0 )
    wParam = (WPARAM)GetStockObject(17);
  v26.cbSize = 48;
  v26.style = 3;
  v26.lpfnWndProc = sub_408EB4;
  v26.cbClsExtra = 0;
  v26.cbWndExtra = 0;
  v26.hInstance = hInstance;
  v26.hIcon = LoadIconW(hInstance, (LPCWSTR)1);
  v26.hCursor = LoadCursorW(nullptr, (LPCWSTR)0x7F00);
  v26.lpszClassName = lpClassName;
  v26.hbrBackground = (HBRUSH)16;
  v26.lpszMenuName = nullptr;
  v26.hIconSm = nullptr;
  RegisterClassExW(&v26);
  dword_418128 = 0;
  dword_418138 = (HWND)sub_4094D1();
  sub_409588(1);
  if ( dword_418138 != nullptr && IsWindowEnabled(dword_418138) )
  {
    EnableWindow(dword_418138, false);
    dword_41813C = 1;
  }
  else
  {
    dword_41813C = 0;
  }
  v17 = hInstance;
  v16 = (HWND)sub_4094D1();
  v15 = GetSystemMetrics(1) / 2 - 65;
  SystemMetrics = GetSystemMetrics(0);
  Window = CreateWindowExW(
             0,
             lpClassName,
             v6,
             0x10C80000u,
             SystemMetrics / 2 - 150,
             v15,
             300,
             130,
             v16,
             nullptr,
             v17,
             nullptr);
  if ( Window != nullptr )
  {
    SetWindowLongW(Window, -21, (LONG)&dwNewLong);
    dword_418134 = (int)CreateWindowExW(
                          0,
                          L"STATIC",
                          lpWindowNamea,
                          0x5000000Bu,
                          10,
                          10,
                          280,
                          22,
                          Window,
                          nullptr,
                          hInstance,
                          nullptr);
    SendMessageW((HWND)dword_418134, 0x30u, wParam, 1);
    if ( (a4 & 1) != 0 )
      v5 = 32;
    hWnd = CreateWindowExW(
             0x200u,
             L"EDIT",
             nullptr,
             v5 | 0x50010080,
             10,
             32,
             275,
             21,
             Window,
             (HMENU)0xA,
             hInstance,
             nullptr);
    SendMessageW(hWnd, 0x30u, wParam, 1);
    SetFocus(hWnd);
    if ( v7 != nullptr )
    {
      SendMessageW(hWnd, 0xCu, 0, (LPARAM)v7);
      v18 = wcslen(v7);
      v10 = wcslen(v7);
      SendMessageW(hWnd, 0xB1u, v10, v18);
    }
    dword_41812C = (int)CreateWindowExW(
                          0,
                          L"BUTTON",
                          L"OK",
                          0x50010001u,
                          110,
                          67,
                          80,
                          25,
                          Window,
                          (HMENU)0x3E8,
                          hInstance,
                          nullptr);
    SendMessageW((HWND)dword_41812C, 0x30u, wParam, 1);
    paccel.key = 13;
    paccel.cmd = 1000;
    v23 = 27;
    v24 = 1001;
    paccel.fVirt = 1;
    v22 = 1;
    v11 = CreateAcceleratorTableW(&paccel, 2);
    SetForegroundWindow(Window);
    BringWindowToTop(Window);
    while ( dword_418128 == 0 && GetMessageW(&Msg, nullptr, 0, 0) )
    {
      if ( TranslateAcceleratorW(Window, v11, &Msg) == 0 )
      {
        TranslateMessage(&Msg);
        DispatchMessageW(&Msg);
      }
    }
    if ( v11 != nullptr )
      DestroyAcceleratorTable(v11);
    if ( dwNewLong == 0 )
      goto LABEL_22;
    v12 = wcslen((const wchar_t *)dwNewLong);
    v13 = (wchar_t *)sub_40E900(v12, a5);
    wcscpy(v13, (const wchar_t *)dwNewLong);
    HeapFree(hHeap, 0, (LPVOID)dwNewLong);
  }
  if ( dwNewLong == 0 )
LABEL_22:
    sub_40E9E0(a5);
  sub_408E9A(lpMem);
  sub_408E9A(lpWindowNamea);
  return sub_408E9A(v7);
}

