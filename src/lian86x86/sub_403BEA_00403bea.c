// lian86.exe @ 0x00403bea  size=153  name=sub_403BEA
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_403BEA(wchar_t *String)
{
  int v1; // eax
  wchar_t *v2; // edx
  int v3; // ebp
  wchar_t *v5; // [esp-4h] [ebp-10h]
  int v6; // [esp-4h] [ebp-10h]
  LPVOID lpMem[3]; // [esp+0h] [ebp-Ch] BYREF

  lpMem[0] = nullptr;
  mutex_enter();
  str_init((int)lpMem, String);
  if ( *(int *)sub_40A52D(dword_418110, (wchar_t *)lpMem[0]) < 1 )
  {
    *(_DWORD *)sub_40A52D(dword_418110, (wchar_t *)lpMem[0]) = 1;
    sub_40AB74((int *)dwFlags);
    v5 = (wchar_t *)lpMem[0];
    v1 = str_append();
    v2 = v5;
    v6 = v1;
    str_append_w(v2);
    v3 = dword_4180FC;
    str_assign((LPVOID *)(dword_4180FC + 12), v6);
    *(_DWORD *)(v3 + 8) = dword_4180E4++;
  }
  return sub_40E5F0(lpMem[0]);
}

