// lian86.exe @ 0x0040e30d  size=167  name=sub_40E30D
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_DWORD *__stdcall sub_40E30D(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // ebx
  int v10; // ebx
  int *v11; // edi
  int v12; // ebp
  int v13; // ecx
  bool v14; // zf
  _DWORD *v15; // ecx
  int v17; // [esp+8h] [ebp-Ch]
  int v18; // [esp+Ch] [ebp-8h]
  int v19; // [esp+28h] [ebp+14h]

  v6 = a1;
  v7 = 0;
  v8 = 1;
  v17 = 0;
  v18 = 1;
  v9 = a5;
  if ( a1 <= 0 )
    goto LABEL_12;
  v10 = 1;
  v11 = a5 + 1;
  do
  {
    if ( *v11 <= 0 )
    {
      v7 = 1;
      v17 = 1;
    }
    v8 = v18 * *v11;
    v12 = v10;
    v19 = 1;
    v18 = v8;
    if ( v10 < v6 )
    {
      v13 = 1;
      do
        v13 *= a5[++v12];
      while ( v12 < v6 );
      v19 = v13;
      v7 = v17;
    }
    ++v10;
    *v11++ = v19;
    --a1;
  }
  while ( a1 != 0 );
  v14 = v7 == 0;
  v15 = nullptr;
  if ( v14 )
  {
    v9 = a5;
LABEL_12:
    v15 = sub_40E266(a2, v8, a3, a4, v9);
    *(v15 - 6) = v6;
  }
  return v15;
}

