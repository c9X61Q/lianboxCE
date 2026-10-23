// lian86.exe @ 0x0040b500  size=250  name=sub_40B500
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40B500(int a1, char *lpBuffer, int a3)
{
  char *v3; // ecx
  char *v4; // edi
  __int16 v5; // ax
  __int16 v7; // ax
  void *v8; // esi
  DWORD NumberOfBytesWritten; // [esp+0h] [ebp-4h] BYREF

  NumberOfBytesWritten = 0;
  if ( lpBuffer == nullptr || *(_WORD *)lpBuffer == 0 )
    return 0;
  if ( a3 == 25 )
  {
    v3 = lpBuffer;
    v4 = lpBuffer + 2;
    if ( *(_DWORD *)(a1 + 4) != 0 )
    {
      do
      {
        v5 = *(_WORD *)v3;
        v3 += 2;
      }
      while ( v5 != 0 );
      return sub_40B6A0(a1, lpBuffer, 2 * ((v3 - v4) >> 1));
    }
    else
    {
      do
      {
        v7 = *(_WORD *)v3;
        v3 += 2;
      }
      while ( v7 != 0 );
      WriteFile(*(HANDLE *)a1, lpBuffer, 2 * ((v3 - v4) >> 1), &NumberOfBytesWritten, nullptr);
      return NumberOfBytesWritten;
    }
  }
  else
  {
    v8 = (void *)sub_40B7B0(a3 != 2 ? 0 : 0xFDE9, (LPCWCH)lpBuffer, (int)&lpBuffer);
    if ( v8 != nullptr )
    {
      if ( *(_DWORD *)(a1 + 4) != 0 )
        NumberOfBytesWritten = sub_40B6A0(a1, v8, (size_t)lpBuffer);
      else
        WriteFile(*(HANDLE *)a1, v8, (DWORD)lpBuffer, &NumberOfBytesWritten, nullptr);
      HeapFree(hHeap, 0, v8);
    }
    return NumberOfBytesWritten;
  }
}

