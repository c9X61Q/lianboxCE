// lian86.exe @ 0x0040b440  size=182  name=sub_40B440
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_DWORD *__stdcall sub_40B440(_DWORD *a1, LPCWSTR lpFileName)
{
  _DWORD *v2; // edi
  _DWORD *v3; // esi
  _DWORD *FileW; // eax
  _DWORD *v5; // ebp
  SIZE_T v6; // eax

  v2 = nullptr;
  v3 = (_DWORD *)sub_40DB18(dword_418784, a1);
  if ( v3 == nullptr )
    return nullptr;
  FileW = CreateFileW(lpFileName, 0x80000000, 0, nullptr, 3u, 0x80u, nullptr);
  v5 = FileW;
  if ( FileW == (_DWORD *)-1 || FileW == nullptr )
    goto LABEL_10;
  if ( dwBytes != 0 )
    v3[1] = HeapAlloc(hHeap, 0, dwBytes);
  else
    v3[1] = 0;
  *v3 = v5;
  v6 = dwBytes;
  v3[3] = 0;
  v2 = v3;
  v3[2] = v6;
  v3[5] = 1;
  v3[6] = 2;
  v3[7] = 1;
  if ( a1 != (_DWORD *)-1 )
    v2 = v5;
  if ( v2 == nullptr )
  {
LABEL_10:
    if ( a1 != (_DWORD *)-1 )
      v3 = a1;
    sub_40DA8A(dword_418784, v3);
  }
  return v2;
}

