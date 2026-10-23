// lian86.exe @ 0x0040ab16  size=94  name=sub_40AB16
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_DWORD *__stdcall sub_40AB16(int a1)
{
  int v1; // ebx
  _DWORD *v2; // edi
  _DWORD *v3; // ebp
  _DWORD *v4; // eax
  _DWORD *result; // eax

  v1 = *(_DWORD *)(a1 + 24);
  v2 = *(_DWORD **)a1;
  if ( v1 != 0 )
  {
    while ( 1 )
    {
      v3 = v2;
      if ( v2 == nullptr )
        break;
      v2 = (_DWORD *)*v2;
      sub_41242A(v3 + 2, v1);
      sub_40DDCB(*(_DWORD *)(a1 + 28), v3);
    }
  }
  else
  {
    while ( 1 )
    {
      v4 = v2;
      if ( v2 == nullptr )
        break;
      v2 = (_DWORD *)*v2;
      sub_40DDCB(*(_DWORD *)(a1 + 28), v4);
    }
  }
  result = *(_DWORD **)(a1 + 12);
  *(_DWORD *)(a1 + 8) = 0;
  *result = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 48) = 1;
  return result;
}

