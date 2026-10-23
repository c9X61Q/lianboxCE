// gettime.exe @ 0x41c811 size=427

int __cdecl common_ftell_translated_utf8_nolock(
        FILE *Stream,
        LARGE_INTEGER liDistanceToMove,
        __crt_cached_ptd_host *a3)
{
  int v3; // eax
  int v4; // ebx
  int v6; // edi
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  unsigned __int8 *v11; // edi
  unsigned __int8 *v12; // ecx
  __int64 v13; // kr08_8
  int v14; // [esp+8h] [ebp-1018h]
  DWORD NumberOfBytesRead; // [esp+Ch] [ebp-1014h] BYREF
  int v16; // [esp+10h] [ebp-1010h]
  __crt_cached_ptd_host *v17; // [esp+14h] [ebp-100Ch]
  DWORD v18; // [esp+18h] [ebp-1008h]
  _BYTE Buffer[4096]; // [esp+1Ch] [ebp-1004h] BYREF

  v17 = a3;
  v3 = _fileno(Stream);
  v4 = v3;
  if ( Stream->_base == nullptr )
    return liDistanceToMove.LowPart;
  v14 = (unsigned __int64)((__int64)&Stream->_ptr[-Stream->_cnt] / 2) >> 32;
  v18 = (int)&Stream->_ptr[-Stream->_cnt] / 2;
  v6 = 56 * (v3 & 0x3F);
  v7 = _lseeki64_internal(v3, *(LARGE_INTEGER *)(dword_438A48[v3 >> 6] + v6 + 32), 0, v17);
  v9 = dword_438A48[v4 >> 6];
  v16 = v7;
  if ( v7 != *(_DWORD *)(v9 + v6 + 32) )
    return -1;
  if ( v8 != *(_DWORD *)(v9 + v6 + 36) )
    return -1;
  if ( !ReadFile(*(HANDLE *)(v9 + v6 + 24), Buffer, 0x1000u, &NumberOfBytesRead, nullptr) )
    return -1;
  _lseeki64_internal(v4, liDistanceToMove, 0, v17);
  if ( v10 < 0 || v14 > 0 || v14 >= 0 && v18 > NumberOfBytesRead )
    return -1;
  v11 = &Buffer[NumberOfBytesRead];
  v12 = Buffer;
  v13 = 0;
  if ( v18 != 0 || v14 != 0 )
  {
    do
    {
      if ( v12 >= v11 )
        break;
      if ( *v12 == 13 )
      {
        if ( v12 < v11 - 1 && v12[1] == 10 )
          ++v12;
      }
      else
      {
        v12 += byte_437460[*v12];
      }
      ++v13;
      ++v12;
    }
    while ( v13 != __PAIR64__(v14, v18) );
  }
  return v16 + v12 - Buffer;
}

