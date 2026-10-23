// lian86.exe @ 0x0040e0c3  size=129  name=sub_40E0C3
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall sub_40E0C3(volatile LONG *Destination, void *a2)
{
  int v2; // ebx
  HMODULE LibraryW; // eax
  HMODULE v4; // edi
  BOOL (__stdcall *InitOnceExecuteOnce)(PINIT_ONCE, PINIT_ONCE_FN, PVOID, LPVOID *); // eax
  LONG v6; // eax
  LPVOID v7; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0;
  LibraryW = LoadLibraryW((LPCWSTR)"K\x00e\x00r\x00n\x00e\x00l\x003\x002\x00.\x00d\x00l\x00l");
  v4 = LibraryW;
  if ( LibraryW == nullptr )
    goto LABEL_5;
  InitOnceExecuteOnce = (BOOL (__stdcall *)(PINIT_ONCE, PINIT_ONCE_FN, PVOID, LPVOID *))GetProcAddress(
                                                                                          LibraryW,
                                                                                          "InitOnceExecuteOnce");
  if ( InitOnceExecuteOnce != nullptr )
  {
    InitOnceExecuteOnce((PINIT_ONCE)Destination, (PINIT_ONCE_FN)sub_40E0A3, a2, &v7);
    v2 = 1;
  }
  FreeLibrary(v4);
  if ( v2 == 0 )
  {
LABEL_5:
    v6 = InterlockedCompareExchange(Destination, 1, 0);
    if ( v6 != 0 )
    {
      if ( v6 == 1 )
      {
        while ( *Destination != 2 )
          Sleep(0);
      }
    }
    else
    {
      ((void (*)(void))a2)();
      InterlockedExchange(Destination, 2);
    }
  }
}

