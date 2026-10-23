// lian86.exe @ 0x00401000  size=464  name=start
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __noreturn start()
{
  int v0; // eax
  int v1; // [esp-4h] [ebp-4h]

  memset(&hHeap, 0, 0xACu);
  hInstance = GetModuleHandleW(nullptr);
  hHeap = HeapCreate(0, 0x1000u, 0);
  sub_405000();
  dword_41808C = (int)&unk_41707C;
  sub_40E4D0();
  sub_40E23D();
  sub_40B120();
  sub_40A9A9();
  sub_40A441();
  sub_40A1C0();
  sub_409669();
  sub_408DEE();
  sub_4053B5();
  sub_40CDC3();
  sub_40B870();
  sub_405068((int)&dword_418074, asc_41702E);
  hFile = GetStdHandle(0xFFFFFFF5);
  sub_40A460(4, 21, 0, &dword_418110, 512);
  sub_40AA5A((LPVOID)dwFlags);
  sub_40A9C8(8, (DWORD)&dwFlags, (int)&unk_41706C, 7);
  sub_40AA5A((LPVOID)lpMem);
  sub_40A9C8(4, (DWORD)&lpMem, (int)&unk_417064, 8);
  sub_40E266(12, 100001, 7, &unk_417074, &dword_4180F0);
  sub_405068((int)&dword_4180C4, asc_41703A);
  sub_40AA5A((LPVOID)dword_418108);
  sub_40A9C8(4, (DWORD)&dword_418108, (int)&unk_417064, 8);
  SetConsoleCtrlHandler(HandlerRoutine, true);
  sub_409FB0((LPTOP_LEVEL_EXCEPTION_FILTER)TopLevelExceptionFilter);
  v0 = str_append();
  sub_402EED(v0);
  str_assign((LPVOID *)&lpWideCharStr, v1);
  unpack_initiate();
  if ( dword_4180B0 == 1 )
    sub_402FAD();
  runtime_init();
}

