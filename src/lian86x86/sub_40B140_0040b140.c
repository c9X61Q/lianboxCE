// lian86.exe @ 0x0040b140  size=492  name=sub_40B140
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_DWORD *__cdecl sub_40B140(_DWORD *a1, LPCWSTR lpFileName, int a3, DWORD dwShareMode)
{
  _DWORD *v5; // esi
  DWORD v6; // eax
  HANDLE FileW; // edi
  DWORD v8; // eax
  DWORD v9; // eax
  _DWORD *v10; // ebp
  DWORD v12; // [esp+10h] [ebp-8h]
  LONG DistanceToMoveHigh; // [esp+14h] [ebp-4h] BYREF
  DWORD dwShareModea; // [esp+28h] [ebp+10h]

  v12 = dwShareMode & 0x1F;
  if ( (dwShareMode & 0x1F) == 0 )
    v12 = 2;
  v5 = (_DWORD *)sub_40DB18(dword_418784, a1);
  if ( v5 == nullptr )
    return nullptr;
  switch ( a3 )
  {
    case 1:
      v6 = (dwShareMode & 0x20000) != 0;
      if ( (dwShareMode & 0x40000) != 0 )
        v6 |= 7u;
      FileW = CreateFileW(lpFileName, 0x80000000, v6, nullptr, 3u, 0x80u, nullptr);
      break;
    case 2:
      v8 = (dwShareMode & 0x20000) != 0;
      if ( (dwShareMode & 0x40000) != 0 )
        v8 |= 7u;
      FileW = CreateFileW(lpFileName, 0xC0000000, v8, nullptr, 4u, 0x80u, nullptr);
      break;
    case 3:
      v9 = 0;
      dwShareModea = 0;
      if ( (dwShareMode & 0x20000) != 0 )
      {
        v9 = 1;
        dwShareModea = 1;
      }
      if ( (dwShareMode & 0x40000) != 0 )
      {
        v9 |= 7u;
        dwShareModea = v9;
      }
      FileW = CreateFileW(lpFileName, 0xC0000000, v9, nullptr, 2u, 0x80u, nullptr);
      if ( FileW != (HANDLE)-1 )
        goto LABEL_21;
      FileW = CreateFileW(lpFileName, 0x40000000u, dwShareModea, nullptr, 5u, 0, nullptr);
      break;
    default:
      FileW = (HANDLE)dwShareMode;
      break;
  }
  if ( FileW == (HANDLE)-1 )
  {
LABEL_32:
    if ( a1 != (_DWORD *)-1 )
      v5 = a1;
    sub_40DA8A(dword_418784, v5);
    return nullptr;
  }
LABEL_21:
  if ( FileW == nullptr )
    goto LABEL_32;
  if ( dwBytes == 0 || (dwShareMode & 0x80000) != 0 )
    v5[1] = 0;
  else
    v5[1] = HeapAlloc(hHeap, 0, dwBytes);
  *v5 = FileW;
  v5[2] = dwBytes;
  v5[6] = v12;
  v5[3] = 0;
  v5[5] = 1;
  v5[7] = a3 == 1;
  if ( a3 == 2 && (dwShareMode & 0x100000) != 0 )
  {
    DistanceToMoveHigh = 0;
    SetFilePointer(FileW, 0, &DistanceToMoveHigh, 2u);
  }
  v10 = v5;
  if ( a1 != (_DWORD *)-1 )
    return FileW;
  return v10;
}

