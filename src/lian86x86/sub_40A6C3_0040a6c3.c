// lian86.exe @ 0x0040a6c3  size=215  name=sub_40A6C3
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int *__stdcall sub_40A6C3(int a1, wchar_t *String, int a3)
{
  const wchar_t *v3; // ebx
  int *v4; // eax
  int *v5; // edi
  unsigned int v6; // eax
  int v7; // ebp
  size_t v8; // eax
  wchar_t *v9; // eax

  v3 = String;
  if ( a3 == 1 )
  {
    v4 = sub_40A638(a1, String);
    v5 = v4;
    if ( v4 != nullptr )
    {
      if ( *(_DWORD *)(a1 + 16) != 0 )
        sub_41242A(v4, *(_DWORD *)(a1 + 16));
      goto LABEL_12;
    }
  }
  if ( String == nullptr )
    v3 = (const wchar_t *)&unk_413024;
  if ( (*(_BYTE *)(a1 + 44) & 1) != 0 )
    v6 = sub_40A94A(v3);
  else
    v6 = sub_40A92F(v3);
  v7 = v6 % *(_DWORD *)(a1 + 36);
  v5 = (int *)sub_40DBFF(*(_DWORD *)(a1 + 56));
  if ( v5 != nullptr )
  {
    v8 = wcslen(v3);
    v9 = (wchar_t *)HeapAlloc(hHeap, 0, 2 * v8 + 2);
    v5[1] = (int)v9;
    wcscpy(v9, v3);
    *v5 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v7);
    *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v7) = v5;
    *(_DWORD *)(a1 + 8) = 0;
    ++*(_DWORD *)(a1 + 40);
    *(_DWORD *)a1 = v5;
    v5 += 2;
    *(_DWORD *)(a1 + 20) = v7;
LABEL_12:
    if ( v5 != nullptr )
    {
      memset(v5, 0, *(_DWORD *)(a1 + 28));
      if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
        sub_41252F(v5, *(_DWORD *)(a1 + 16));
    }
  }
  return v5;
}

