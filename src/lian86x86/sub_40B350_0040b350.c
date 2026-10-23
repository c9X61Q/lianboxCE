// lian86.exe @ 0x0040b350  size=207  name=sub_40B350
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_DWORD *__stdcall sub_40B350(_DWORD *a1, LPCWSTR lpFileName)
{
  _DWORD *v2; // edi
  _DWORD *v3; // esi
  HANDLE FileW; // ebx
  SIZE_T v5; // eax

  v2 = nullptr;
  v3 = (_DWORD *)sub_40DB18(dword_418784, a1);
  if ( v3 == nullptr )
    return nullptr;
  FileW = CreateFileW(lpFileName, 0xC0000000, 0, nullptr, 2u, 0x80u, nullptr);
  if ( FileW == (HANDLE)-1 && (FileW = CreateFileW(lpFileName, 0x40000000u, 0, nullptr, 5u, 0, nullptr)) == (HANDLE)-1
    || FileW == nullptr )
  {
    if ( a1 != (_DWORD *)-1 )
      v3 = a1;
    sub_40DA8A(dword_418784, v3);
  }
  else
  {
    if ( dwBytes != 0 )
      v3[1] = HeapAlloc(hHeap, 0, dwBytes);
    else
      v3[1] = 0;
    *v3 = FileW;
    v5 = dwBytes;
    v3[3] = 0;
    v3[7] = 0;
    v2 = v3;
    v3[2] = v5;
    v3[5] = 1;
    v3[6] = 2;
    if ( a1 != (_DWORD *)-1 )
      return FileW;
  }
  return v2;
}

