// lian86.exe @ 0x0040a638  size=139  name=sub_40A638
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int *__stdcall sub_40A638(int a1, wchar_t *String2)
{
  const wchar_t *v2; // ebx
  int v3; // ebp
  int **i; // edi

  v2 = String2;
  if ( String2 == nullptr )
    v2 = (const wchar_t *)&unk_413024;
  if ( (*(_BYTE *)(a1 + 44) & 1) != 0 )
  {
    v3 = sub_40A94A(v2) % *(_DWORD *)(a1 + 36);
    for ( i = *(int ***)(*(_DWORD *)(a1 + 4) + 4 * v3); i != nullptr; i = (int **)*i )
    {
      if ( wcsicmp((const wchar_t *)i[1], v2) == 0 )
        goto LABEL_9;
      *(_DWORD *)(a1 + 8) = i;
    }
  }
  else
  {
    v3 = sub_40A92F(v2) % *(_DWORD *)(a1 + 36);
    for ( i = *(int ***)(*(_DWORD *)(a1 + 4) + 4 * v3); i != nullptr; i = (int **)*i )
    {
      if ( wcscmp((const wchar_t *)i[1], v2) == 0 )
      {
LABEL_9:
        *(_DWORD *)(a1 + 20) = v3;
        *(_DWORD *)a1 = i;
        return (int *)(i + 2);
      }
      *(_DWORD *)(a1 + 8) = i;
    }
  }
  return nullptr;
}

