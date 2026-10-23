// lian86.exe @ 0x0040b6a0  size=272  name=sub_40B6A0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

DWORD __stdcall sub_40B6A0(int a1, _BYTE *Src, signed int Size)
{
  int v3; // eax
  signed int v4; // eax
  _BYTE *v5; // ecx
  signed int v7; // eax
  HANDLE v8; // [esp-10h] [ebp-20h]
  LONG v9; // [esp-Ch] [ebp-1Ch]
  DWORD NumberOfBytesWritten; // [esp+4h] [ebp-Ch] BYREF
  __int64 v11; // [esp+8h] [ebp-8h] BYREF

  NumberOfBytesWritten = 0;
  if ( *(_DWORD *)(a1 + 28) != 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 20) == 1 )
  {
    v9 = -*(_DWORD *)(a1 + 12);
    v8 = *(HANDLE *)a1;
    v11 = v9;
    SetFilePointer(v8, v9, (PLONG)&v11 + 1, 1u);
    v3 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 12) = v3;
  }
  v4 = *(_DWORD *)(a1 + 12);
  if ( v4 <= Size )
  {
    sub_40B0C0(a1);
    v7 = *(_DWORD *)(a1 + 8);
    if ( Size < v7 )
    {
      memcpy((void *)(v7 + *(_DWORD *)(a1 + 4) - *(_DWORD *)(a1 + 12)), Src, Size);
      goto LABEL_9;
    }
    WriteFile(*(HANDLE *)a1, Src, Size, &NumberOfBytesWritten, nullptr);
    return NumberOfBytesWritten;
  }
  else
  {
    v5 = (_BYTE *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)(a1 + 8) - v4);
    switch ( Size )
    {
      case 1:
        *v5 = *Src;
        --*(_DWORD *)(a1 + 12);
        return 1;
      case 2:
        *(_WORD *)v5 = *(_WORD *)Src;
        *(_DWORD *)(a1 + 12) -= 2;
        return 2;
      case 4:
        *(_DWORD *)v5 = *(_DWORD *)Src;
        *(_DWORD *)(a1 + 12) -= 4;
        return 4;
      default:
        memcpy(v5, Src, Size);
LABEL_9:
        *(_DWORD *)(a1 + 12) -= Size;
        return Size;
    }
  }
}

