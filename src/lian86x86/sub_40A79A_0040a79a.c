// lian86.exe @ 0x0040a79a  size=130  name=sub_40A79A
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40A79A(int a1)
{
  int v1; // ebx
  int *v2; // edi
  int v3; // eax
  int result; // eax
  int v5; // [esp-8h] [ebp-1Ch]
  int v6; // [esp+Ch] [ebp-8h] BYREF

  v1 = *(_DWORD *)(a1 + 16);
  sub_40A81C(a1);
  while ( 1 )
  {
    v3 = sub_40A8E8(a1);
    if ( v3 == 0 )
      break;
    v2 = (int *)(v3 - 8);
    if ( (*(_BYTE *)(a1 + 44) & 4) == 0 )
      HeapFree(hHeap, 0, (LPVOID)v2[1]);
    if ( v1 != 0 )
      sub_41242A(v2 + 2, v1);
    v5 = *(_DWORD *)(a1 + 56);
    v6 = *v2;
    *(_DWORD *)a1 = &v6;
    sub_40DDCB(v5, v2);
  }
  memset(*(void **)(a1 + 4), 0, 4 * *(_DWORD *)(a1 + 36));
  result = sub_40A81C(a1);
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}

